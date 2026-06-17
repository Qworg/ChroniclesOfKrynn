# Wizard - Undead Master

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Undead Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Undead%20Master
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Necromantic Focus; Necropolitan (Ex); Corpse Bond (Su); Command Undead (Su); Reanimator (Su); Lich-Loved (Su)
- **Replaced / altered class features:** Scribe Scroll; the bonus feats gained at 5th, 10th, and 15th levels; the bonus feat gained at 20th level

## Replacement details

### Alters: arcane school and alignment

- **Archetype feature:** Necromantic Focus
- **Description:** The archetype demands evil alignment and protects necromancy from opposition-school status.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build restriction
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard must be evil.
    - If the wizard ceases to be evil, existing powers remain but future wizard advancement is blocked.
    - Necromancy cannot be chosen as an opposition school.
    - Most undead masters specialize in necromancy, though the archetype text frames that as common practice rather than an absolute requirement.
  - Scaling: None
  - Interactions: Alignment changes affect progression rather than stripping features already gained.
  - Edge cases: Forced alignment change locks further level advancement without automatically removing current abilities.
  - Implementation flags:
    - Likely existing hooks: evil-alignment requirement, necromancy opposition-school exclusion, class-level lock on alignment change.

### Alters: arcane bond

- **Archetype feature:** Corpse Bond (Su)
- **Description:** The wizard bonds either to a bone-made object or to a corpse companion instead of taking a familiar.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Passive bond formed at character creation
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Bond with an object made at least partly from bone, or choose a corpse companion using the undead lord cleric archetype rules.
    - A familiar cannot be selected.
  - Scaling: None
  - Interactions: Choosing the corpse companion routes the bond through undead-lord companion rules instead of familiar rules.
  - Edge cases: The object qualifies if any meaningful portion is bone; no minimum percentage is specified.
  - Implementation flags:
    - Likely existing hooks: bone-material bonded item requirement, corpse companion option using undead lord rules, familiar prohibition.

### Replaces: Scribe Scroll

- **Archetype feature:** Command Undead (Su)
- **Description:** The archetype gains command-undead capability early and can pay for it with school-power uses if channeling is unavailable.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Per Command Undead feat rules
  - Duration: Per Command Undead feat rules
  - Uses: Per Command Undead feat rules, or 3 uses of a 1st-level school power if the wizard lacks negative-energy channeling
  - Core function:
    - Gain Command Undead as a bonus feat, using wizard level in place of cleric level.
    - If the wizard cannot channel negative energy, spend 3 daily uses of a 1st-level arcane school power instead of a channel-energy use.
    - If the wizard is already a necromancer with power over undead, gain Improved Channel instead of Command Undead.
  - Scaling: None
  - Interactions: The alternative cost requires a school power with enough daily uses to spend.
  - Edge cases: Universalists or other builds without a suitable school-power pool may not be able to use the alternative cost path.
  - Implementation flags:
    - Likely existing hooks: Command Undead feat grant with cleric-level substitution, alternative resource cost using school-power uses, conditional Improved Channel grant.

### Replaces: bonus feats at 5th, 10th, and 15th level

- **Archetype feature:** Reanimator (Su)
- **Description:** The wizard gains a staged list of undead-themed spells and can cast them spontaneously by giving up prepared slots.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1, 3, 5, 7, 9, 11, 13, 15, 17
  - Action/timing: Spell additions are passive; spontaneous casting uses the chosen spell's normal casting time
  - Duration: Per each spell cast
  - Uses: Sacrifice a prepared spell of the same level or higher; no separate daily cap
  - Core function:
    - Automatically add repair undead at 1st level, lesser animate dead at 3rd, animate dead at 5th, undead anatomy I at 7th, create undead at 9th, undeath to death at 11th, create greater undead at 13th, undead anatomy IV at 15th, and cursed earth at 17th.
    - Cast any of those spells spontaneously by sacrificing a prepared spell of the same level or higher.
    - Lesser animate dead, animate dead, create undead, and create greater undead are each treated as one spell level lower for casting purposes.
    - That spell-level reduction does not change item-crafting requirements.
  - Scaling: Additional spells are added at each listed level.
  - Interactions: The reduced spell level affects slot cost for preparation and spontaneous substitution only.
  - Edge cases: Save DCs, dispel checks, and item prerequisites still use the spells' normal levels.
  - Implementation flags:
    - Likely existing hooks: automatic spellbook additions at milestone levels, spontaneous undead-spell substitution, effective spell-level reduction for four named spells.

### Replaces: the 20th-level wizard bonus feat

- **Archetype feature:** Lich-Loved (Su)
- **Description:** The wizard gains the benefit of the undead sorcerer bloodline's one of us capstone.
- **Mechanics:**
  - Type: Su
  - Level hooks: 20
  - Action/timing: Passive
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain the benefits of the undead sorcerer bloodline ability one of us.
    - Apply only that capstone package rather than the rest of the undead bloodline.
    - The effect is always on once the archetype reaches 20th level.
  - Scaling: None
  - Interactions: This grants only that capstone benefit, not the rest of the bloodline.
  - Edge cases: Exact immunities and resistances should be taken from the bloodline ability rather than inferred here.
  - Implementation flags:
    - Likely existing hooks: sorcerer bloodline capstone benefit attachment to wizard.

## Parsed source feature headings

- Necromantic Focus
- Necropolitan (Ex)
- Corpse Bond (Su)
- Command Undead (Su)
- Reanimator (Su)
- Lich-Loved (Su)
