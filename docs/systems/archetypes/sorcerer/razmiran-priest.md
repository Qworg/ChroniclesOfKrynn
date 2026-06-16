# Sorcerer - Razmiran Priest

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Razmiran Priest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Razmiran%20Priest
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** False Piety (Ex); Lay Healer (Su); Razmiran Channel (Su)
- **Replaced / altered class features:** the priest’s Eschew Materials bonus feat; the bloodline spells gained at 3rd level and 5th level respectively; the bloodline power gained at 9th level

## Replacement details

### Replaces: the priest’s Eschew Materials bonus feat

- **Archetype feature:** False Piety (Ex)
- **Description:** At 1st level, a Razmiran priest gains Knowledge (religion) and Perform as class skills, but loses Appraise and Fly as class skills.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a Razmiran priest gains Knowledge (religion) and Perform as class skills, but loses Appraise and Fly as class skills. He adds half his sorcerer level to Use Magic Device checks to activate spell trigger and spell completion items that use divine spells. He gains False Focus as a bonus feat (see page 10). In addition to replacing Appraise and Fly as class skills,
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Replaces: the bloodline spells gained at 3rd level

- **Archetype feature:** Lay Healer (Su)
- **Description:** At 3rd level, the Razmiran priest adds aid to his list of spells known as a 2nd-level spell.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 2, 5.
  - Mechanics summary: At 3rd level, the Razmiran priest adds aid to his list of spells known as a 2nd-level spell. At 5th level, he adds remove disease to his list of spells known as a 3rd-level spell.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: 5th level respectively

- **Archetype feature:** Lay Healer (Su)
- **Description:** At 3rd level, the Razmiran priest adds aid to his list of spells known as a 2nd-level spell.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 2, 5.
  - Mechanics summary: At 3rd level, the Razmiran priest adds aid to his list of spells known as a 2nd-level spell. At 5th level, he adds remove disease to his list of spells known as a 3rd-level spell.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the bloodline power gained at 9th level

- **Archetype feature:** Razmiran Channel (Su)
- **Description:** At 9th level, the Razmiran priest can use his own magic to power spell completion and spell trigger items that use divine spells.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9, 1.
  - Mechanics summary: At 9th level, the Razmiran priest can use his own magic to power spell completion and spell trigger items that use divine spells. He expends a sorcerer spell slot that is at least 1 level higher than the level of the spell he’s trying to activate, then makes a Use Magic Device check. If he succeeds, the item’s spell occurs and the item or charge is not expended. Whether he succeeds or fail, his spell slot is expended.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, sorcerer bloodline hook.

## Parsed source feature headings

- False Piety (Ex)
- Lay Healer (Su)
- Razmiran Channel (Su)

