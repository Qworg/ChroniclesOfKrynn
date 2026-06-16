# Wizard - Wind Listener

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Wind Listener
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Wind%20Listener
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Arcane School; Spontaneous Divination (Su); Abjuration Sense (Ex); Wispy Form (Ex); Listening to the Wind (Sp)
- **Replaced / altered class features:** arcane bond; the bonus feat gained at 5th level; the bonus feat gained at 10th level; the bonus feat gained at 15th level

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Spontaneous Divination (Su)
- **Description:** At 1st level, a wind listener can reshape stored spell energy into divination spells he did not prepare ahead of time.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a wind listener can reshape stored spell energy into divination spells he did not prepare ahead of time. The wind listener can "lose" any prepared spell that is not a cantrip in order to cast a divination spell of the same spell level or lower. The new spell must be one the wind listener knows and is capable of casting. Spells cast with this ability increase their casting time to a full-round action (if the spell’s normal casting time is longer than a full-round action, it remains unchanged).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: the bonus feat gained at 5th level

- **Archetype feature:** Abjuration Sense (Ex)
- **Description:** At 5th level, a wind listener develops a sixth sense for spotting spells designed to guard against his investigations.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a wind listener develops a sixth sense for spotting spells designed to guard against his investigations. He gains a bonus on Perception checks equal to 1/2 his level to notice spells of the abjuration school and on Spellcraft checks to identify abjuration effects, spells, and magic items.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the bonus feat gained at 10th level

- **Archetype feature:** Wispy Form (Ex)
- **Description:** At 10th level, the wind listener gains the ability to become airy and translucent as a standard action, gaining DR 10/magic and the effects of greater invisibility for a number of rounds per day equal to his level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, the wind listener gains the ability to become airy and translucent as a standard action, gaining DR 10/magic and the effects of greater invisibility for a number of rounds per day equal to his level. These rounds need not be consecutive.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feat gained at 15th level

- **Archetype feature:** Listening to the Wind (Sp)
- **Description:** At 15th level, the wind listener can call upon spirits of the air to uncover lost lore about a legendary person, place, or thing.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, the wind listener can call upon spirits of the air to uncover lost lore about a legendary person, place, or thing. Invoking the spirits takes 10 minutes, during which time the wind listener must be free of distractions and able to concentrate. This functions as the spell legend lore (caster level equal to the wind listener’s level), except that the wind listener is free to engage in other activities while spirits investigate on his behalf. The time required for the air spirits to return with this information is equal to what the casting time of the spell legend lore would have been if the wind listener had cast it. The wind listener can use this ability once per week, and only if he does not currently have air spirits searching for information. If the air spirits are currently searching for information, the wind listener can end their task early as a standard action, dismissing the magical effect and not returning any information.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Arcane School
- Spontaneous Divination (Su)
- Abjuration Sense (Ex)
- Wispy Form (Ex)
- Listening to the Wind (Sp)

