# Wizard - Elder Mythos Scholar

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Elder Mythos Scholar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Elder%20Mythos%20Scholar
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Arcane Bond; Eldritch Knowledge (Su); Eldritch Grimoire; Talisman of Revealing; Eldritch Infusion (Su)
- **Replaced / altered class features:** the school ability gained at 8th level

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Arcane Bond
- **Description:** The scholar must use a rune-covered bonded object instead of a familiar.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive bond formed at character creation
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard must choose a bonded object.
    - That object is inscribed with eldritch markings.
  - Scaling: None
  - Interactions: Talisman of Revealing's spontaneous casting requires this item to be worn or wielded.
  - Edge cases: Standard bonded-object rules still govern loss and replacement.
  - Implementation flags:
    - Likely existing hooks: object-only bond restriction.

### Alters: the 1st-level arcane school ability

- **Archetype feature:** Eldritch Knowledge (Su)
- **Description:** The scholar can redirect a failed mind-affecting save through intellect, but doing so delays recovery of part of the school-power pool.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Immediate action triggered by a failed Will save
  - Duration: Lockout lasts until the next sleep-triggered nightmare resolves
  - Uses: Costs 2 uses of the 1st-level arcane school ability per activation
  - Core function:
    - Reduce the daily uses of the 1st-level arcane school power by 2, to a minimum of 0.
    - When failing a Will save against confusion, fear, insanity, or madness, spend 2 uses to substitute Intelligence modifier for Wisdom modifier on that save.
    - The next time the wizard sleeps after using this ability, a nightmare automatically occurs.
    - The two spent uses cannot be recovered by any means until that nightmare has happened.
  - Scaling: None
  - Interactions: If the wizard has no usable 1st-level school power remaining, this ability cannot be activated.
  - Edge cases: The delayed recovery applies only to the two spent uses, not to the rest of the pool.
  - Implementation flags:
    - Likely existing hooks: school-power daily-use reduction, Will-save stat substitution, nightmare lockout on recovery.

### Alters: spellbook

- **Archetype feature:** Eldritch Grimoire
- **Description:** The spellbook becomes bulkier and more expensive, but it improves spellcasting against Mythos-related foes.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive during spell inscription and spellcasting
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Every spell added to the grimoire consumes 1d6 extra pages.
    - Copying a spell into the grimoire costs twice the normal amount.
    - Spells prepared from this grimoire gain +2 on caster-level checks against Elder Mythos-associated creatures.
    - Those spells also gain +1 to save DCs against the same creature category.
  - Scaling: None
  - Interactions: The bonuses apply only against the creature group referenced by Talisman of Revealing.
  - Edge cases: The page and cost increases still apply to cantrips.
  - Implementation flags:
    - Likely existing hooks: increased spellbook inscription cost, targeted caster-level and save-DC bonuses against creature category.

### Replaces: Scribe Scroll; bonus feats at 5th and 10th level

- **Archetype feature:** Talisman of Revealing
- **Description:** The bonded item unlocks a package of spontaneous anti-Mythos divinations and related lore bonuses.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1, 5, 10
  - Action/timing: Spontaneous spell substitution uses the spell's normal casting action and requires the bonded item to be worn or wielded
  - Duration: Per the substituted spell
  - Uses: Sacrifice a prepared spell of matching level or higher; no separate daily cap
  - Core function:
    - While wielding or wearing the bonded item, sacrifice a prepared 1st-level spell to spontaneously cast a modified detect aberration effect keyed to Elder Mythos creatures such as bholes, colours out of space, deep ones, denizens of Leng, elder things, flying polyps, gugs, hounds of Tindalos, Leng ghouls, Leng spiders, mi-go, and nightgaunts.
    - Gain a +2 bonus on Knowledge checks to identify those creatures.
    - Gain a +2 bonus on Spellcraft checks to identify their effects.
    - At 5th level, automatically add invisibility purge and see invisibility to the spellbook and cast either one spontaneously by sacrificing a prepared spell of the right level or higher while the bonded item is present.
    - At 10th level, automatically add banish seeming and true seeing to the spellbook as 5th-level wizard spells, and cast either one spontaneously by sacrificing a 5th-level or higher prepared spell while the bonded item is present.
  - Scaling: The spontaneous spell menu expands at 5th and 10th level.
  - Interactions: Every spontaneous cast through this feature requires the bonded item to be worn or wielded.
  - Edge cases: Banish seeming and true seeing enter the spellbook as 5th-level wizard spells for this archetype even if their normal list levels differ.
  - Implementation flags:
    - Likely existing hooks: spontaneous-casting substitution keyed to bonded item, automatic spellbook additions at set levels, creature-category Knowledge and Spellcraft bonuses.

### Replaces: the school ability gained at 8th level

- **Archetype feature:** Eldritch Infusion (Su)
- **Description:** During spell preparation the scholar can brew a risky personal draught that sharpens Mythos-focused perception while making other casting less reliable.
- **Mechanics:**
  - Type: Su
  - Level hooks: 8
  - Action/timing: Requires 1 extra hour during spell preparation to brew and drink the tincture
  - Duration: 10 minutes per wizard level
  - Uses: 1/day, only during spell preparation
  - Core function:
    - Spend an extra hour while preparing spells to brew and consume a personal tincture.
    - While active, gain a +4 alchemical bonus to Intelligence.
    - While active, take a -2 penalty to Wisdom and Constitution.
    - While active, add half wizard level on Perception checks against Elder Mythos creatures and subtract half wizard level on Perception checks against all other creatures.
    - While active, every spell has a 20% spell failure chance unless it affects only Elder Mythos creatures.
  - Scaling: Duration scales with wizard level.
  - Interactions: The Intelligence bonus can indirectly raise spell DCs and bonus spells; mixed-target spells still suffer the failure chance if any target is outside the Mythos list.
  - Edge cases: A spell aimed at both Mythos and non-Mythos creatures still carries the 20% failure chance.
  - Implementation flags:
    - Likely existing hooks: extended-prep activation, temporary ability bonuses and penalties, perception split modifier, arcane spell-failure chance conditioned on target type.

## Parsed source feature headings

- Arcane Bond
- Eldritch Knowledge (Su)
- Eldritch Grimoire
- Talisman of Revealing
- Eldritch Infusion (Su)
