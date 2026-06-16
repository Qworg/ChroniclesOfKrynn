# Sorcerer - Umbral Scion

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Umbral Scion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Umbral%20Scion
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bloodline; Diminished Spellcasting; Shrouded Spells (Su); Encroaching Darkness (Su); Potent Shadows (Su); Crippling Darkness (Su)
- **Replaced / altered class features:** the shadowstrike bloodline power; the 7th-level bloodline feat; the 13th-level bloodline feat

## Replacement details

### Alters: the sorcerer’s spellcasting

- **Archetype feature:** Diminished Spellcasting
- **Description:** An umbral scion can cast one fewer spell per day of each level than normal.
- **Mechanics:**
  - Mechanics summary: An umbral scion can cast one fewer spell per day of each level than normal. If this reduces the number to 0, she can cast spells of that level only if her Charisma score grants her bonus spells of that level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the shadowstrike bloodline power

- **Archetype feature:** Encroaching Darkness (Su)
- **Description:** An umbral scion is capable of influencing light around her.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7, 8, 14.
  - Mechanics summary: An umbral scion is capable of influencing light around her. As a standard action, she can produce a 10-foot-radius veil centered on a creature or object within 30 feet. This veil decreases the light level by one step and remains for a number of rounds equal to the sorcerer’s Charisma modifier. At 7th level, the veil increases to a 30-foot radius. At 8th level, the veil decreases the light level by two steps. If the light level is decreased past darkness, the veil is treated as deeper darkness .
- **Implementation flags:**
  - Likely existing hooks: sorcerer bloodline hook.

### Replaces: the 7th-level bloodline feat

- **Archetype feature:** Potent Shadows (Su)
- **Description:** At 7th level, when an umbral scion casts a spell of the shadow subschool or a spell with the darkness or shadow UM descriptor within an area of dim light or darkness, she treats her caster level as 1 higher.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7, 19.
  - Mechanics summary: At 7th level, when an umbral scion casts a spell of the shadow subschool or a spell with the darkness or shadow UM descriptor within an area of dim light or darkness, she treats her caster level as 1 higher. Only the sorcerer herself needs to be in dim light or darkness. This bonus increases by 1 every 4 sorcerer levels beyond 7th she has to a maximum of +4 at 19th level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the 13th-level bloodline feat

- **Archetype feature:** Crippling Darkness (Su)
- **Description:** At 13th level, when an umbral scion targets a creature within an area of dim light or darkness with a spell of the shadow subschool or a spell with the darkness or shadow UM descriptor, the DC for the spell increases by 1.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13, 18.
  - Mechanics summary: At 13th level, when an umbral scion targets a creature within an area of dim light or darkness with a spell of the shadow subschool or a spell with the darkness or shadow UM descriptor, the DC for the spell increases by 1. This bonus increases by 1 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook, sorcerer bloodline hook.

## Parsed source feature headings

- Bloodline
- Diminished Spellcasting
- Shrouded Spells (Su)
- Encroaching Darkness (Su)
- Potent Shadows (Su)
- Crippling Darkness (Su)

