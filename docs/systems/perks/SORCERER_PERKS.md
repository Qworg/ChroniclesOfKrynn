# Sorcerer Perk Tree — Proposal

**Status:** Design proposal (not yet implemented). UNCOMPILED / UNTESTED.
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
  `_CRITICAL_MULT`, `_CRITICAL_CHANCE`, and `_SPECIAL` (code-backed).
* **Registration pattern** is uniform: each class has a `define_<class>_perks()`
  defined in `perks.c`, declared in `perks.h`, and called from `init_perks()`.
  We follow the same `INIT_<CLASS>_PERK(...)` macro pattern used by
  `define_druid_perks()` / `define_paladin_perks()`.

## 3. Design goals

1. **Make Sorcerer perk points spendable.** Resolve the reported bug.
2. **Stay on-theme.** Sorcerers are Charisma-based spontaneous arcane casters. The
   tree leans into elemental spell mastery, with a hybrid melee branch and a
   chaos/generalist branch for variety.
3. **Reuse existing effect types** wherever possible; only fall back to
   `PERK_EFFECT_SPECIAL` (code-backed) for procs/toggles/SLAs.
4. **Mirror the established tier shape:** Tier 1 cost 1, Tier 2 cost 2, Tier 3
   cost 3, with prerequisite chains, exactly like the Paladin/Druid trees.
5. **Don't over-fit DDO.** DDO action points, spell-point math, and SLAs are
   translated into engine-plausible bonuses (spell damage %, crit chance, save
   DCs, resistance, SR bypass, HP/AC, mana return, toggles).

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

> **Design note — element opposition.** In DDO the four Savants are mutually
> exclusive (picking Fire blocks Water, Air blocks Earth) and each grants a bonus
> to its element and a penalty to its opposite. Our perk system has no built-in
> "lockout," so the recommendation is to **drop the penalties** and simply let the
> opening perk of each Savant grant a flat elemental bonus. If we want to preserve
> the trade-off flavor, the opener can apply a small penalty to the opposed element
> via `PERK_EFFECT_SPECIAL`. **Open question for the team — see §8.**

---

## 5. The perk tables

Legend: **Cost** = perk points; **Rank** = max ranks; **Prereq** = prerequisite
perk (and rank). `special_description` is the player-facing text. Suggested
`effect_type` is given to guide implementation; `SPECIAL` means it needs a code
hook.

### 5.1 Fire Savant — `PERK_CATEGORY_FIRE_SAVANT` (IDs 800–819)

*DDO source — Fire Savant line (core abilities + tiered enhancements). Mirrors the
Water Savant structure with Fire substituted for Cold.*

| Perk | Cost | Rank | Prereq | special_description | effect_type |
|---|---:|---:|---|---|---|
| Fire Savant (opener) | 1 | 1 | — | +10% fire spell damage; +1 caster level with fire spells. | SPELL_DAMAGE / CASTER_LEVEL |
| One with the Inferno | 1 | 3 | Fire Savant | +5/+10/+15 fire resistance. | DAMAGE_REDUCTION (fire) |
| Combustion | 1 | 3 | Fire Savant | Casting a fire spell grants +5 fire spell damage for a short time (stacks 1/3/5). | SPECIAL |
| Scorching Ray (SLA) | 1 | 3 | Fire Savant | Grants a low-cost fire bolt spell-like ability (cooldown shortens per rank). | SPECIAL |
| Spell Critical: Fire | 2 | 4 | Combustion r2 | +2% per rank fire spell critical chance. | CRITICAL_CHANCE |
| Pierce Fire Resistance | 2 | 3 | Fire Savant | Fire spells ignore 5/10/15 points of target fire resistance. | SPECIAL |
| Conflagration | 2 | 3 | Combustion r3 | 10/20/30% chance on a fire cast to restore 3 mana. | SPELL_POINTS / SPECIAL |
| Evocation Focus | 2 | 1 | Spell Critical: Fire r2 | +1 to the save DC of your evocation spells. | SPELL_DC |
| Fireball (SLA) | 3 | 3 | Scorching Ray r2 | Grants a fire-burst spell-like ability scaling with caster level. | SPECIAL |
| Awaken Weakness: Fire | 3 | 1 | Pierce Fire Resistance r2 | Curse a target so it takes +15% fire damage for a short time. | SPECIAL |
| Elemental Form: Fire | 3 | 1 | Fireball r1, Awaken Weakness: Fire | Toggle: +2 CHA, +20 fire spell damage, +2% fire crit, +10 fire resistance while active; costs extra mana to sustain. | SPECIAL (toggleable) |

### 5.2 Water Savant — `PERK_CATEGORY_WATER_SAVANT` (IDs 820–839)

*DDO source — Water Savant enhancements (full tree captured): Water Savant /
Affinity / Greater Affinity / Hypothermia / Elemental Persistence / Elemental
Apotheosis: Water; Niac's Cold Ray, One with the Waves, Spell Critical: Cold I–IV,
Hoarfrost, Pierce Cold Resistance, Absolute Zero, Frost Lance, Awaken Elemental
Weakness: Cold, Icy Prison.*

| Perk | Cost | Rank | Prereq | special_description | effect_type |
|---|---:|---:|---|---|---|
| Water Savant (opener) | 1 | 1 | — | +10% cold spell damage; +1 caster level with cold spells. | SPELL_DAMAGE / CASTER_LEVEL |
| One with the Waves | 1 | 3 | Water Savant | +5/+10/+15 cold resistance. | DAMAGE_REDUCTION (cold) |
| Hoarfrost | 1 | 3 | Water Savant | Casting a cold spell grants +5 cold spell damage briefly (stacks 1/3/5). | SPECIAL |
| Niac's Cold Ray (SLA) | 1 | 3 | Water Savant | Grants a low-cost cold ray spell-like ability (cooldown shortens per rank). | SPECIAL |
| Spell Critical: Cold | 2 | 4 | Hoarfrost r2 | +2% per rank cold spell critical chance. | CRITICAL_CHANCE |
| Pierce Cold Resistance | 2 | 3 | Water Savant | Cold spells ignore 5/10/15 points of target cold resistance. | SPECIAL |
| Absolute Zero | 2 | 3 | Hoarfrost r3 | 10/20/30% chance on a cold cast to gain 3 temporary mana. | SPELL_POINTS / SPECIAL |
| Hypothermia | 2 | 1 | Spell Critical: Cold r2 | Your cold spells apply Lethargy: target suffers −1 to saves (stacks); works even vs cold-immune. | SPECIAL |
| Frost Lance (SLA) | 3 | 3 | Niac's Cold Ray r2 | Grants a frost-lance spell-like ability scaling with caster level. | SPECIAL |
| Awaken Weakness: Cold | 3 | 1 | Pierce Cold Resistance r2 | Curse a target so it takes +15% cold damage for a short time. | SPECIAL |
| Icy Prison | 3 | 1 | Frost Lance r1, Awaken Weakness: Cold | High-cost nuke: heavy cold damage (Fort save halves) + chance to freeze the target in place (Reflex negates). | SPECIAL |

### 5.3 Air Savant — `PERK_CATEGORY_AIR_SAVANT` (IDs 840–859)

*DDO source — Air Savant enhancements: Air Savant / Affinity / Greater Affinity /
Conduction / Light on Your Feet / Elemental Apotheosis: Air; Shocking Grasp,
One with the Storm, Spell Critical: Electric I–IV, Electrocution, Pierce Electric
Resistance, Alternating Current, Lightning Bolt, Awaken Elemental Weakness:
Electric, Evocation Focus.*

| Perk | Cost | Rank | Prereq | special_description | effect_type |
|---|---:|---:|---|---|---|
| Air Savant (opener) | 1 | 1 | — | +10% electric/sonic spell damage; +1 caster level with electric spells. | SPELL_DAMAGE / CASTER_LEVEL |
| One with the Storm | 1 | 3 | Air Savant | +5/+10/+15 electric resistance. | DAMAGE_REDUCTION (electric) |
| Electrocution | 1 | 3 | Air Savant | Casting an electric spell grants +5 electric spell damage briefly (stacks 1/3/5). | SPECIAL |
| Shocking Grasp (SLA) | 1 | 3 | Air Savant | Grants a low-cost shock touch spell-like ability (cooldown shortens per rank). | SPECIAL |
| Spell Critical: Electric | 2 | 4 | Electrocution r2 | +2% per rank electric spell critical chance. | CRITICAL_CHANCE |
| Pierce Electric Resistance | 2 | 3 | Air Savant | Electric spells ignore 5/10/15 points of target electric resistance. | SPECIAL |
| Alternating Current | 2 | 3 | Electrocution r3 | 10/20/30% chance on an electric cast to gain 3 temporary mana. | SPELL_POINTS / SPECIAL |
| Conduction | 2 | 1 | Spell Critical: Electric r2 | Your electric spells apply Vulnerable: target takes +1% damage per stack (stacks). | SPECIAL |
| Lightning Bolt (SLA) | 3 | 3 | Shocking Grasp r2 | Grants a lightning-bolt spell-like ability scaling with caster level. | SPECIAL |
| Awaken Weakness: Electric | 3 | 1 | Pierce Electric Resistance r2 | Curse a target so it takes +15% electric damage for a short time. | SPECIAL |
| Light on Your Feet | 3 | 1 | Conduction, Alternating Current r2 | Immunity to most knockdown/trip effects; +1 reflex save. | SAVE / SPECIAL |

### 5.4 Earth Savant — `PERK_CATEGORY_EARTH_SAVANT` (IDs 860–879)

*DDO source — Earth Savant enhancements: Earth Savant / Affinity / Greater
Affinity / Crumbling / One With Stone / Elemental Apotheosis: Earth; Acid Spray,
Stability, One with the Soil, Spell Critical: Acid I–IV, Erosion, Pierce Acid
Resistance, Devouring Earth, Acid Arrow, Earthen Armor, Acid Blast, Awaken
Elemental Weakness: Acid, Earthgrab, Conjuration Focus.*

| Perk | Cost | Rank | Prereq | special_description | effect_type |
|---|---:|---:|---|---|---|
| Earth Savant (opener) | 1 | 1 | — | +10% acid spell damage; +1 caster level with acid spells. | SPELL_DAMAGE / CASTER_LEVEL |
| One with the Soil | 1 | 3 | Earth Savant | +5/+10/+15 acid resistance. | DAMAGE_REDUCTION (acid) |
| Erosion | 1 | 3 | Earth Savant | Casting an acid spell grants +5 acid spell damage briefly (stacks 1/3/5). | SPECIAL |
| Acid Spray (SLA) | 1 | 3 | Earth Savant | Grants a low-cost acid cone spell-like ability (cooldown shortens per rank). | SPECIAL |
| Spell Critical: Acid | 2 | 4 | Erosion r2 | +2% per rank acid spell critical chance. | CRITICAL_CHANCE |
| Pierce Acid Resistance | 2 | 3 | Earth Savant | Acid spells ignore 5/10/15 points of target acid resistance. | SPECIAL |
| Devouring Earth | 2 | 3 | Erosion r3 | 10/20/30% chance on an acid cast to gain 3 temporary mana. | SPELL_POINTS / SPECIAL |
| Earthen Armor | 2 | 2 | Spell Critical: Acid r2 | +3/+6 natural armor (AC). | AC |
| Acid Blast (SLA) | 3 | 3 | Acid Spray r2 | Grants an acid-burst spell-like ability scaling with caster level. | SPECIAL |
| Awaken Weakness: Acid | 3 | 1 | Pierce Acid Resistance r2 | Curse a target so it takes +15% acid damage for a short time. | SPECIAL |
| Earthgrab | 3 | 1 | Earthen Armor r2 | Your earth magic can root a target in place (Reflex save negates) and deal bludgeoning damage over time. | SPECIAL |

### 5.5 Eldritch Knight — `PERK_CATEGORY_ELDRITCH_KNIGHT` (IDs 880–889)

*DDO source — Eldritch Knight (arcane melee): Eldritch Strike, Spellsword toggles,
Eldritch Blade, Improved Mage Armor, Toughness, Battlemage, Improved Shield,
Martial Training, Wand & Scroll Mastery, Arcane Barrier, Elemental Resistance,
Critical Accuracy, Critical Damage, Tenser's Transformation, Eldritch Tempest.*

| Perk | Cost | Rank | Prereq | special_description | effect_type |
|---|---:|---:|---|---|---|
| Eldritch Strike | 1 | 1 | — | A melee strike that deals bonus weapon damage plus a small arcane (force) splash. | SPECIAL |
| Battlemage Training | 1 | 3 | — | +1/+2/+3 Concentration & Spellcraft; you keep casting more reliably in melee. | SKILL |
| Arcane Toughness | 1 | 3 | Eldritch Strike | +5/+10/+15 max HP. | HP |
| Spellsword | 2 | 1 | Eldritch Strike | Imbue your weapon with an element of choice; melee hits add elemental damage. | SPECIAL (toggleable) |
| Martial Caster | 2 | 1 | Eldritch Strike | Gain martial weapon use and +1 to-hit with melee weapons. | WEAPON_TOHIT / SPECIAL |
| Arcane Armor | 2 | 3 | Battlemage Training r1 | While armored, gain +1/+2/+3 AC without the usual arcane spell-failure penalty. | AC / SPECIAL |
| Critical Accuracy | 3 | 3 | Martial Caster | +1/+2/+3 to confirm melee critical hits. | CRITICAL_CHANCE |
| Critical Damage | 3 | 3 | Critical Accuracy r1 | +1/+2/+3 melee critical damage multiplier step. | CRITICAL_MULT |
| Arcane Barrier | 3 | 3 | Arcane Armor r1 | When you drop below 50% HP, gain damage reduction for a few rounds (cooldown). | DAMAGE_REDUCTION / SPECIAL |
| Eldritch Tempest | 3 | 1 | Arcane Barrier r1, Critical Damage r1 | Active: a spinning melee AoE that also detonates for force damage. | SPECIAL |

### 5.6 Wild Mage — `PERK_CATEGORY_WILD_MAGE` (IDs 890–899)

*DDO source — Wild Mage archetype (Update 68): the **Wild Magic** passive (chance
of a Wild Surge on cast), **Dismiss Charm**, chaos spells (Chaos Bolt/Sphere/
Hammer, Greater Color Spray, Wildstrike, Prismatic Strike), faster casting, and
the shared universal/metamagic enhancements. Adapted here as the generalist /
all-element / chaos branch.*

| Perk | Cost | Rank | Prereq | special_description | effect_type |
|---|---:|---:|---|---|---|
| Wild Magic | 1 | 3 | — | +5% per rank chance that any spell cast triggers a beneficial Wild Surge. | SPECIAL |
| Arcane Reservoir | 1 | 3 | — | +3/+6/+10 maximum spell points (mana). | SPELL_POINTS |
| Universal Mastery | 1 | 3 | Wild Magic r1 | +3% per rank to the damage of ALL your damage spells (any element). | SPELL_DAMAGE |
| Dismiss Charm | 2 | 1 | Wild Magic r1 | Active: strip a charm/dominate/command effect from an enemy you control. | SPECIAL |
| Efficient Metamagic | 2 | 3 | Arcane Reservoir r1 | Reduce the mana cost of one chosen metamagic (Empower/Maximize/Quicken/Extend). | SPECIAL |
| Surge of Luck | 2 | 3 | Universal Mastery r1 | Wild Surges are stronger: better mana-return and spell-power procs. | SPECIAL |
| Wild Spell Critical | 3 | 3 | Surge of Luck r1 | +2% per rank critical chance with ALL damage spells. | CRITICAL_CHANCE |
| Chaos Bolt (SLA) | 3 | 3 | Universal Mastery r2 | Grants a random-element bolt spell-like ability scaling with caster level. | SPECIAL |
| Tide of Chaos | 3 | 1 | Wild Spell Critical r1, Chaos Bolt r1 | Capstone: dramatically raises Wild Surge chance and grants a flat universal spell-power bonus. | SPECIAL |

---

## 6. Totals & point economy

* ~62 perks across 6 categories (well within the 800–899 / 100-ID budget).
* Per the award logic in `perks.c`, a Sorcerer earns **2 points per stage across 3
  stages = 6 points** by mid-levels (matches the user's report: "Sorcerer (Level 1):
  6 perk points"). With Tier-1 perks costing 1, a new Sorcerer can immediately spend
  into an opener + a couple of rank-1 nodes, which is the intended fix.

## 7. Implementation checklist (for the follow-up coding PR)

1. **`src/structs.h`**
   * Add category constants `PERK_CATEGORY_FIRE_SAVANT 55` … `PERK_CATEGORY_WILD_MAGE 60`.
   * Add `#define PERK_SORCERER_* <id>` constants in the reserved 800–899 block
     (group by sub-tree as in §4). Add a `NUM_PERK_CATEGORIES`-style bump if one exists.
2. **`src/perks.h`** — declare `void define_sorcerer_perks(void);`.
3. **`src/perks.c`**
   * Implement `define_sorcerer_perks(void)` using an `INIT_SORCERER_PERK(...)`
     macro modeled on `define_druid_perks()` (sets `associated_class = CLASS_SORCERER`).
   * Call `define_sorcerer_perks();` from `init_perks()` (around the other caster
     classes).
   * For perks marked `SPECIAL` (procs, SLAs, toggles, resistance-bypass, curses),
     add the code hooks where spell damage / casting is resolved. Many can reuse
     existing perk-effect plumbing (`PERK_EFFECT_SPELL_DAMAGE`,
     `_CRITICAL_CHANCE`, `_CASTER_LEVEL`, `_SPELL_DC`, `_SPELL_POINTS`,
     `_AC`, `_HP`, `_DAMAGE_REDUCTION`) without new code.
4. **Dragon Disciple** — decide whether `CLASS_DRAGON_DISCIPLE` should keep routing
   to the Sorcerer pool (it now becomes spendable automatically) or get its own
   mapping. No code change needed if we accept it sharing the Sorcerer tree.
5. **Docs** — promote this file to `docs/systems/perks/SORCERER_PERKS.md` to match
   the other class perk docs, once the design is agreed.
6. **Build & test** — the environment here has **no C toolchain**, so this must be
   compiled and tested on a proper build host. Any resulting PR must be flagged
   **UNCOMPILED / UNTESTED**.

## 8. Open questions for the team

1. **Element opposition / lockout:** keep DDO's "pick one element, penalize the
   opposite" trade-off (via `SPECIAL`), or drop penalties and allow free mixing?
   (Recommendation: drop penalties for a first pass — simpler and friendlier.)
2. **Scope of v1:** ship all six sub-trees, or start with the four Savants + Wild
   Mage and defer Eldritch Knight (which needs the most new combat-code hooks)?
3. **SLAs:** do we want true spell-like abilities (cooldown actives) in v1, or
   replace them with passive bonuses to begin with to minimize new code?
4. **Dragon Disciple:** share the Sorcerer tree, or carve out a separate mapping?

---

### Appendix: source URLs (via Internet Archive)

* Air Savant — `web.archive.org/.../ddowiki.com/page/Air_Savant`
* Earth Savant — `web.archive.org/.../ddowiki.com/page/Earth_Savant_enhancements`
* Fire Savant — `web.archive.org/.../ddowiki.com/page/Fire_Savant`
* Water Savant — `web.archive.org/.../ddowiki.com/page/Water_Savant`
* Eldritch Knight — `web.archive.org/.../ddowiki.com/page/Eldritch_Knight`
* Wild Mage — `web.archive.org/.../ddowiki.com/page/Wild_Mage`
