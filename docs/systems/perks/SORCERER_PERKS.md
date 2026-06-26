# Sorcerer Perk Tree — Proposal

**Status:** Design proposal (not yet implemented). UNCOMPILED / UNTESTED.
**Revision:** v2 — all perks are now **passive** (no toggles, SLAs, or activated
abilities), magnitudes are small **flat integers**, and the tier ladder follows the
Monk "Path of the Iron Fist" model (see §4.1). Activated/toggle abilities are
explicitly deferred to a future phase.
**Author:** drafted via a fleet of research agents from DDO's Sorcerer enhancement
data (Air / Earth / Fire / Water Savant, Eldritch Knight, Wild Mage trees on
ddowiki.com, retrieved via the Internet Archive).
**Target codebase:** ChroniclesOfKrynn (LuminariMUD / CircleMUD-derived C MUD).

---

## 1. Problem statement

The Sorcerer class has **no perk tree at all**. Confirmed in `src/perks.c`:

* `perk sorcerer` prints **"No perks available for Sorcerer."** because
  `get_class_perks(CLASS_SORCERER)` returns `0` (no perk has
  `associated_class == CLASS_SORCERER`).
* There is **no `define_sorcerer_perks()`** function, no `PERK_SORCERER_*` IDs,
  and no Sorcerer design doc anywhere in the repo.
* Yet `class_to_perk_class()` maps `CLASS_SORCERER -> CLASS_SORCERER`, so leveling
  Sorcerer **awards perk points into an empty pool** — the points are real but
  **unspendable**. (`CLASS_DRAGON_DISCIPLE -> CLASS_SORCERER` is also affected; its
  perk points currently route to the same empty pool.)

This proposal fills that gap with a full Sorcerer perk tree modeled on DDO's
Sorcerer enhancement lines, translated to mechanics our engine already supports.

## 2. What already exists in our favor

* **Reserved ID block:** `structs.h` documents **Sorcerer perks at 800–899** (100
  IDs), currently **completely empty**. These IDs are within `perk_list[NUM_PERKS]`
  (`NUM_PERKS = 1848`), so a Sorcerer tree can be added **without resizing the
  array**.
* **Effect-type vocabulary** already covers what we need
  (`src/structs.h:3108–3127`): `PERK_EFFECT_HP`, `_SPELL_POINTS`, `_ABILITY_SCORE`,
  `_SAVE`, `_AC`, `_WEAPON_DAMAGE`, `_WEAPON_TOHIT`, `_SPELL_DC`, `_SPELL_DAMAGE`,
  `_SPELL_DURATION`, `_CASTER_LEVEL`, `_DAMAGE_REDUCTION`, `_SPELL_RESISTANCE`,
  `_CRITICAL_MULT`, `_CRITICAL_CHANCE`, and `_SPECIAL` (code-backed). In practice
  **~87% of existing perks (668 / 770) use `PERK_EFFECT_SPECIAL`**, even ones that
  add flat spell damage, so leaning on `SPECIAL` here is idiomatic.
* **Registration pattern** is uniform: each class has a `define_<class>_perks()`
  defined in `perks.c`, declared in `perks.h`, and called from `init_perks()`.

## 3. Design goals

1. **Make Sorcerer perk points spendable.** Resolve the reported bug.
2. **Stay on-theme.** Sorcerers are Charisma-based spontaneous arcane casters. The
   tree leans into elemental spell mastery, a hybrid melee branch, and a
   chaos/generalist branch for variety.
3. **Passive-only v1.** Every perk in this proposal is a **passive** bonus — no
   toggles, no spell-like abilities, no activated nukes. The codebase contains only
   3 toggleable perks total, so activated abilities are out of house style and are
   deferred. (DDO's elemental forms, SLAs and active curses are reinterpreted as
   always-on passive bonuses below.)
4. **Flat integer magnitudes.** Match the existing convention of small flat values
   (`+1 spell damage per rank`, `+1 DC`, `+5 spell points per rank`) rather than
   percentages.
5. **Ladder like the Monk tree.** Tier 1 cost 1 / Tier 2 cost 2 / Tier 3 cost 3,
   chained with `prerequisite_perk` + `prerequisite_rank` exactly as §4.1 describes.
6. **Reuse existing effect types** wherever possible; fall back to
   `PERK_EFFECT_SPECIAL` (code-backed) for procs and resistance-bypass.

## 4. Proposed structure — six sub-trees / categories

| Category constant (proposed) | Theme | Suggested ID | Perk ID range |
|---|---|---:|---|
| `PERK_CATEGORY_FIRE_SAVANT`      | Fire mastery (offense)        | 55 | 800–819 |
| `PERK_CATEGORY_WATER_SAVANT`     | Cold/Acid mastery             | 56 | 820–839 |
| `PERK_CATEGORY_AIR_SAVANT`       | Electric/Sonic mastery        | 57 | 840–859 |
| `PERK_CATEGORY_EARTH_SAVANT`     | Acid/Force mastery            | 58 | 860–879 |
| `PERK_CATEGORY_ELDRITCH_KNIGHT`  | Arcane melee / gish           | 59 | 880–889 |
| `PERK_CATEGORY_WILD_MAGE`        | Chaos surge / generalist      | 60 | 890–899 |

(55 is the next free category id after Artificer's 52–54.)

> **Scope note.** Every other class ships exactly **3** perk categories; this
> proposal lists **6**. A reasonable v1 ships only 3 (e.g. a single merged
> "Elemental Savant," Eldritch Knight, and Wild Mage) and defers the rest. The full
> six are documented here so the design is complete. **See §8.**

> **Design note — element opposition.** In DDO the four Savants are mutually
> exclusive (picking Fire blocks Water, Air blocks Earth) and each grants a bonus
> to its element and a penalty to its opposite. Our perk system has no built-in
> "lockout," so the recommendation is to **drop the penalties** and simply let the
> opening perk of each Savant grant a flat elemental bonus. **See §8.**

### 4.1 How the Monk tree ladders up (our laddering model)

The Monk **"Path of the Iron Fist"** tree (`PERK_CATEGORY_IRON_BODY`,
`define_monk_perks()` in `src/perks.c`) is the clearest example of the intended
3-tier ladder, and the Sorcerer trees below copy its shape exactly:

* **Tier 1 (cost 1, `prerequisite_perk = -1`):** foundational, heavily-**ranked**
  perks you pour early points into.
  *e.g.* `Improved Unarmed Strike I` — +1 unarmed damage per rank, **`max_rank` 5**;
  `Lightning Reflexes I` — +1 Reflex per rank, `max_rank` 3.
* **Tier 2 (cost 2, prerequisite = a Tier-1 perk at a specific rank):** the
  `prerequisite_rank` does the gating.
  * **Straight upgrades require the Tier-1 perk MAXED** — `Improved Unarmed Strike
    II` needs `Improved Unarmed Strike I` at **rank 5**.
  * **Side/branch perks require only partial investment** — `Tiger Claw` and
    `Stunning Fist Enhancement` need `Improved Unarmed Strike I` at only **rank 3**.
  * This "**rank-5 to continue the main line, rank-3 to branch**" rule is what lets
    a player choose depth vs breadth.
* **Tier 3 (cost 3, occasionally 4 for a super-capstone like `Fists of Fury`;
  prerequisite = a Tier-2 perk):** the payoff nodes. `Improved Unarmed Strike III`
  chains off `Improved Unarmed Strike II` (rank 3). **Per-rank value grows even as
  `max_rank` shrinks** — Tier 1 is +1 damage × 5 ranks, Tier 3 is +2 damage × 2
  ranks.

Two fields do all the laddering work: **`cost` rises 1 → 2 → 3 by tier**, and
**`prerequisite_perk` + `prerequisite_rank` chain each tier to the one below it**
(T2 → T1, T3 → T2). `effect_modifier` carries semantic payload (which save, proc
chance, duration). The Sorcerer tables below use the same `prereq @ rank` gating:
**maxed prerequisite to advance the main line, partial prerequisite to branch.**

---

## 5. The perk tables (all passive)

Legend: **Cost** = perk points; **Rank** = `max_rank`; **Prereq** = prerequisite
perk **@ required rank** (`—` = none, a Tier-1 entry node). `special_description` is
the player-facing text. Suggested `effect_type` guides implementation; `SPECIAL`
means a small code hook (the dominant pattern). All effects are **always-on
passives**.

The four Savants share one template (element substituted). Each opener is the
ranked Tier-1 "main line" perk (like `Improved Unarmed Strike I`); the resistance
and attunement perks are alternate Tier-1 entry nodes; Tier 2 advances off the
maxed opener (rank 5) or branches off attunement (rank 3); Tier 3 pays off the
Tier-2 nodes.

### 5.1 Fire Savant — `PERK_CATEGORY_FIRE_SAVANT` (IDs 800–819)

*DDO source — Fire Savant line (Savant/Affinity/Greater Affinity/Immolation/
Elemental Persistence/Apotheosis, plus Scorching Ray, One with the Inferno, Spell
Critical: Fire, Combustion, Pierce Fire Resistance). Actives reinterpreted as
passives.*

| Perk | Cost | Rank | Prereq @ rank | special_description | effect_type |
|---|---:|---:|---|---|---|
| Fire Savant (opener) | 1 | 5 | — | +1 fire spell damage per rank; while trained, +1 caster level with fire spells. | SPECIAL |
| One with the Inferno | 1 | 3 | — | +5/+10/+15 fire resistance. | DAMAGE_REDUCTION |
| Combustion | 1 | 3 | — | +2 fire spell damage per rank (was an on-cast stacking buff, now flat passive). | SPECIAL |
| Pierce Fire Resistance | 2 | 3 | Fire Savant @5 | Your fire spells ignore 5/10/15 points of target fire resistance. | SPECIAL |
| Greater Fire Affinity | 2 | 1 | Fire Savant @5 | +1 maximum caster level for fire spells. | CASTER_LEVEL |
| Spell Critical: Fire | 2 | 4 | Combustion @3 | +1% fire spell critical chance per rank. | CRITICAL_CHANCE |
| Evocation Focus | 2 | 1 | Spell Critical: Fire @2 | +1 to the save DC of your evocation spells. | SPELL_DC |
| Empowered Fire | 3 | 2 | Pierce Fire Resistance @3 | +3 fire spell damage per rank. | SPECIAL |
| Awaken Weakness: Fire | 3 | 1 | Spell Critical: Fire @4 | Your fire spells passively reduce a struck target's fire resistance for a short time. | SPECIAL |
| Fire Attunement (capstone) | 3 | 1 | Empowered Fire @2 | Always-on attunement: +1 CHA, +2 fire spell damage, +5 fire resistance. | SPECIAL |

### 5.2 Water Savant — `PERK_CATEGORY_WATER_SAVANT` (IDs 820–839)

*DDO source — Water Savant enhancements (full tree captured): Water Savant /
Affinity / Greater Affinity / Hypothermia / Elemental Persistence / Apotheosis;
Niac's Cold Ray, One with the Waves, Spell Critical: Cold I–IV, Hoarfrost, Pierce
Cold Resistance, Absolute Zero, Frost Lance, Awaken Weakness: Cold, Icy Prison.
SLAs and the elemental form reinterpreted as passives.*

| Perk | Cost | Rank | Prereq @ rank | special_description | effect_type |
|---|---:|---:|---|---|---|
| Water Savant (opener) | 1 | 5 | — | +1 cold spell damage per rank; while trained, +1 caster level with cold spells. | SPECIAL |
| One with the Waves | 1 | 3 | — | +5/+10/+15 cold resistance. | DAMAGE_REDUCTION |
| Hoarfrost | 1 | 3 | — | +2 cold spell damage per rank (was an on-cast stacking buff, now flat passive). | SPECIAL |
| Pierce Cold Resistance | 2 | 3 | Water Savant @5 | Your cold spells ignore 5/10/15 points of target cold resistance. | SPECIAL |
| Greater Water Affinity | 2 | 1 | Water Savant @5 | +1 maximum caster level for cold spells. | CASTER_LEVEL |
| Spell Critical: Cold | 2 | 4 | Hoarfrost @3 | +1% cold spell critical chance per rank. | CRITICAL_CHANCE |
| Hypothermia | 2 | 1 | Spell Critical: Cold @2 | Your cold spells passively impose −1 to the target's saving throws briefly (stacks; works vs cold-immune). | SPECIAL |
| Empowered Frost | 3 | 2 | Pierce Cold Resistance @3 | +3 cold spell damage per rank. | SPECIAL |
| Awaken Weakness: Cold | 3 | 1 | Spell Critical: Cold @4 | Your cold spells passively reduce a struck target's cold resistance for a short time. | SPECIAL |
| Water Attunement (capstone) | 3 | 1 | Empowered Frost @2 | Always-on attunement: +1 CHA, +2 cold spell damage, +5 cold resistance. | SPECIAL |

### 5.3 Air Savant — `PERK_CATEGORY_AIR_SAVANT` (IDs 840–859)

*DDO source — Air Savant enhancements: Savant/Affinity/Greater Affinity/
Conduction/Light on Your Feet/Apotheosis; Shocking Grasp, One with the Storm,
Spell Critical: Electric I–IV, Electrocution, Pierce Electric Resistance,
Alternating Current, Lightning Bolt, Awaken Weakness: Electric, Evocation Focus.
SLAs/forms reinterpreted as passives.*

| Perk | Cost | Rank | Prereq @ rank | special_description | effect_type |
|---|---:|---:|---|---|---|
| Air Savant (opener) | 1 | 5 | — | +1 electric/sonic spell damage per rank; while trained, +1 caster level with electric spells. | SPECIAL |
| One with the Storm | 1 | 3 | — | +5/+10/+15 electric resistance. | DAMAGE_REDUCTION |
| Electrocution | 1 | 3 | — | +2 electric spell damage per rank (was an on-cast stacking buff, now flat passive). | SPECIAL |
| Pierce Electric Resistance | 2 | 3 | Air Savant @5 | Your electric spells ignore 5/10/15 points of target electric resistance. | SPECIAL |
| Greater Air Affinity | 2 | 1 | Air Savant @5 | +1 maximum caster level for electric spells. | CASTER_LEVEL |
| Spell Critical: Electric | 2 | 4 | Electrocution @3 | +1% electric spell critical chance per rank. | CRITICAL_CHANCE |
| Conduction | 2 | 1 | Spell Critical: Electric @2 | Your electric spells passively make the target take +1% damage per stack briefly (stacks). | SPECIAL |
| Empowered Storm | 3 | 2 | Pierce Electric Resistance @3 | +3 electric spell damage per rank. | SPECIAL |
| Light on Your Feet | 3 | 1 | Spell Critical: Electric @4 | Passive immunity to most knockdown/trip effects; +1 Reflex save. | SAVE |
| Air Attunement (capstone) | 3 | 1 | Empowered Storm @2 | Always-on attunement: +1 CHA, +2 electric spell damage, +5 electric resistance. | SPECIAL |

### 5.4 Earth Savant — `PERK_CATEGORY_EARTH_SAVANT` (IDs 860–879)

*DDO source — Earth Savant enhancements: Savant/Affinity/Greater Affinity/
Crumbling/One With Stone/Apotheosis; Acid Spray, Stability, One with the Soil,
Spell Critical: Acid I–IV, Erosion, Pierce Acid Resistance, Devouring Earth, Acid
Arrow, Earthen Armor, Acid Blast, Awaken Weakness: Acid, Earthgrab, Conjuration
Focus. SLAs/active control reinterpreted as passives.*

| Perk | Cost | Rank | Prereq @ rank | special_description | effect_type |
|---|---:|---:|---|---|---|
| Earth Savant (opener) | 1 | 5 | — | +1 acid spell damage per rank; while trained, +1 caster level with acid spells. | SPECIAL |
| One with the Soil | 1 | 3 | — | +5/+10/+15 acid resistance. | DAMAGE_REDUCTION |
| Erosion | 1 | 3 | — | +2 acid spell damage per rank (was an on-cast stacking buff, now flat passive). | SPECIAL |
| Pierce Acid Resistance | 2 | 3 | Earth Savant @5 | Your acid spells ignore 5/10/15 points of target acid resistance. | SPECIAL |
| Earthen Armor | 2 | 2 | Earth Savant @5 | +3/+6 natural armor (AC). | AC |
| Spell Critical: Acid | 2 | 4 | Erosion @3 | +1% acid spell critical chance per rank. | CRITICAL_CHANCE |
| Conjuration Focus | 2 | 1 | Spell Critical: Acid @2 | +1 to the save DC of your conjuration spells. | SPELL_DC |
| Empowered Acid | 3 | 2 | Pierce Acid Resistance @3 | +3 acid spell damage per rank. | SPECIAL |
| Awaken Weakness: Acid | 3 | 1 | Spell Critical: Acid @4 | Your acid spells passively reduce a struck target's acid resistance for a short time. | SPECIAL |
| Earth Attunement (capstone) | 3 | 1 | Empowered Acid @2 | Always-on attunement: +1 CHA, +2 acid spell damage, +5 acid resistance. | SPECIAL |

### 5.5 Eldritch Knight — `PERK_CATEGORY_ELDRITCH_KNIGHT` (IDs 880–889)

*DDO source — Eldritch Knight (arcane melee): Eldritch Strike, Spellsword toggles,
Eldritch Blade, Improved Mage Armor, Toughness, Battlemage, Martial Training, Wand
& Scroll Mastery, Arcane Barrier, Critical Accuracy, Critical Damage, Tenser's
Transformation, Eldritch Tempest. Toggles/actives reinterpreted as passives.*

| Perk | Cost | Rank | Prereq @ rank | special_description | effect_type |
|---|---:|---:|---|---|---|
| Arcane Strike Training | 1 | 3 | — | +1 force splash damage per rank on your melee hits (was the active Eldritch Strike, now a passive on-hit splash). | SPECIAL |
| Battlemage Training | 1 | 3 | — | +1 Concentration and +1 Spellcraft per rank. | SKILL |
| Arcane Toughness | 1 | 5 | — | +5 max HP per rank. | HP |
| Spellsword | 2 | 3 | Arcane Strike Training @3 | Your melee attacks deal +1 elemental damage per rank (element chosen when taken; was a toggle, now always on). | SPECIAL |
| Martial Caster | 2 | 1 | Arcane Strike Training @3 | Gain martial weapon use and +1 to-hit with melee weapons. | WEAPON_TOHIT |
| Arcane Armor | 2 | 3 | Battlemage Training @3 | +1 AC per rank, ignoring the usual arcane spell-failure penalty from light armor. | AC |
| Critical Accuracy | 3 | 3 | Martial Caster @1 | +1 to confirm melee critical hits per rank. | CRITICAL_CHANCE |
| Critical Damage | 3 | 3 | Critical Accuracy @3 | +1 melee critical damage step per rank. | CRITICAL_MULT |
| Arcane Barrier (capstone) | 3 | 3 | Arcane Armor @3 | Passive: while below 50% HP you gain +3/+6/+9 damage reduction (was an activated barrier). | DAMAGE_REDUCTION |

### 5.6 Wild Mage — `PERK_CATEGORY_WILD_MAGE` (IDs 890–899)

*DDO source — Wild Mage archetype (Update 68): the Wild Magic passive (chance of a
beneficial Wild Surge on cast), Dismiss Charm, chaos spells, faster casting, plus
the shared universal/metamagic enhancements. Adapted as the generalist /
all-element branch. Dismiss Charm (active) reinterpreted as a passive ward.*

| Perk | Cost | Rank | Prereq @ rank | special_description | effect_type |
|---|---:|---:|---|---|---|
| Wild Magic | 1 | 3 | — | +5% per rank chance that any spell you cast triggers a beneficial Wild Surge. | SPECIAL |
| Arcane Reservoir | 1 | 5 | — | +5 maximum spell points (mana) per rank. | SPELL_POINTS |
| Universal Mastery | 1 | 5 | — | +1 damage per rank to ALL of your damage spells (any element). | SPECIAL |
| Efficient Metamagic | 2 | 3 | Arcane Reservoir @5 | Reduce the mana cost of one chosen metamagic (Empower/Maximize/Quicken/Extend) by 1/2/3. | SPECIAL |
| Surge of Luck | 2 | 3 | Wild Magic @3 | +1 per rank to the potency of your Wild Surges (stronger mana-return / spell-power procs). | SPECIAL |
| Chaos Ward | 2 | 2 | Wild Magic @3 | +2 per rank to saving throws against charm, command, and domination (was the active Dismiss Charm). | SAVE |
| Wild Spell Critical | 3 | 3 | Surge of Luck @3 | +1% critical chance per rank with ALL damage spells. | CRITICAL_CHANCE |
| Chaosweave | 3 | 3 | Universal Mastery @5 | +2 universal spell damage per rank (was the Chaos Bolt SLA, now a passive bonus). | SPECIAL |
| Tide of Chaos (capstone) | 3 | 1 | Wild Spell Critical @3 | Always-on: +5 universal spell power and +5% Wild Surge chance. | SPECIAL |

---

## 6. Totals & point economy

* ~59 perks across 6 categories (well within the 800–899 / 100-ID budget).
* All perks are passive; no new activation/cooldown plumbing is required for v1.
* Per the award logic in `perks.c`, a Sorcerer earns **2 points per stage across 3
  stages = 6 points** by mid-levels (matches the user's report: "Sorcerer (Level 1):
  6 perk points"). With Tier-1 perks costing 1, a new Sorcerer can immediately spend
  into an opener and rank it up — which is the intended fix.

## 7. Implementation checklist (for the follow-up coding PR)

1. **`src/structs.h`**
   * Add category constants `PERK_CATEGORY_FIRE_SAVANT 55` … `PERK_CATEGORY_WILD_MAGE 60`.
   * Add `#define PERK_SORCERER_* <id>` constants in the reserved 800–899 block,
     grouped by sub-tree as in §4.
2. **`src/perks.h`** — declare `void define_sorcerer_perks(void);`.
3. **`src/perks.c`**
   * Implement `define_sorcerer_perks(void)` using the same direct-assignment style
     as `define_monk_perks()` / `define_wizard_perks()` (sets
     `associated_class = CLASS_SORCERER`). Mirror the Monk laddering: Tier 1 `cost`
     1 with `prerequisite_perk = -1`; Tier 2 `cost` 2 with `prerequisite_perk` =
     a Tier-1 perk and `prerequisite_rank` = 5 to advance the main line or 3 to
     branch; Tier 3 `cost` 3 chaining off Tier-2 perks.
   * Call `define_sorcerer_perks();` from `init_perks()` (near the other caster
     classes).
   * For perks marked `SPECIAL` (flat spell-damage adds, resistance-bypass,
     short-duration on-hit resistance reductions, Wild Surge chance), add the read
     hooks where spell damage / casting is resolved. Many can instead reuse the
     concrete effect types (`_CRITICAL_CHANCE`, `_CASTER_LEVEL`, `_SPELL_DC`,
     `_SPELL_POINTS`, `_AC`, `_HP`, `_SAVE`, `_DAMAGE_REDUCTION`) with no new code.
4. **Magnitudes are flat integers** (`+1 spell damage per rank`, `+1 DC`, `+5 SP
   per rank`) — do **not** introduce percentage-based effect values; that matches
   the existing trees (e.g. Wizard "Spell Power" is +1/rank, Monk "Improved Unarmed
   Strike" is +1/rank).
5. **No toggles or activated abilities in v1.** Everything here is passive. Active
   elemental forms, true SLAs, and active curses are a deferred phase.
6. **Dragon Disciple** — decide whether `CLASS_DRAGON_DISCIPLE` should keep routing
   to the Sorcerer pool (it becomes spendable automatically) or get its own mapping.
7. **Build & test** — the environment used to draft this has **no C toolchain**, so
   this must be compiled and tested on a proper build host. Any resulting PR must be
   flagged **UNCOMPILED / UNTESTED**.

## 8. Open questions for the team

1. **v1 scope:** ship all six sub-trees, or start with **3 categories** (to match
   every other class) — e.g. a merged "Elemental Savant," Eldritch Knight, and Wild
   Mage — and add the rest later?
2. **Element opposition / lockout:** keep DDO's "pick one element, penalize the
   opposite" trade-off (would need a `SPECIAL` hook), or drop penalties and allow
   free mixing? (Recommendation: drop penalties for a first pass.)
3. **Dragon Disciple:** share the Sorcerer tree, or carve out a separate mapping?
4. **Deferred actives:** which (if any) of the reinterpreted passives do we
   eventually want back as true activated abilities (elemental forms, SLA nukes,
   active curses)?

---

### Appendix: source URLs (via Internet Archive)

* Air Savant — `web.archive.org/.../ddowiki.com/page/Air_Savant`
* Earth Savant — `web.archive.org/.../ddowiki.com/page/Earth_Savant_enhancements`
* Fire Savant — `web.archive.org/.../ddowiki.com/page/Fire_Savant`
* Water Savant — `web.archive.org/.../ddowiki.com/page/Water_Savant`
* Eldritch Knight — `web.archive.org/.../ddowiki.com/page/Eldritch_Knight`
* Wild Mage — `web.archive.org/.../ddowiki.com/page/Wild_Mage`
