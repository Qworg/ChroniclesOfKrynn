# Monk - Kata Master

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Kata Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Kata%20Master
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Panache; Menacing Swordplay (Ex); Ki Pool (Su); Targeted Strike (Ex); Dizzying Defense (Ex)
- **Replaced / altered class features:** stunning fist; still mind; wholeness of body; quivering palm

## Replacement details

### Replaces: stunning fist

- **Archetype feature:** Panache
- **Description:** At 1st level, a kata master gains the swashbuckler’s panache class ability.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a kata master gains the swashbuckler’s panache class ability. At the start of each day, a kata master gains a number of panache points equal to her Charisma bonus (minimum 1). Her panache goes up or down throughout the day, but usually cannot go higher than his Charisma bonus (minimum 1). A kata master gains the swashbuckler’s derring-do and dodging panache deeds. A kata master can use an unarmed strike or monk special weapon in place of a light or one-handed piercing melee weapon for granted swashbuckler class features and deeds.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.
  - Needs implementation review: panache resource, deed subsystem, swashbuckler class mechanics.

### Replaces: still mind

- **Archetype feature:** Menacing Swordplay (Ex)
- **Description:** At 3rd level, a kata master gains the swashbuckler’s menacing swordplay deed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a kata master gains the swashbuckler’s menacing swordplay deed.
- **Implementation flags:**
  - Needs implementation review: deed subsystem, swashbuckler class mechanics.

### Alters: ki pool

- **Archetype feature:** Ki Pool (Su)
- **Description:** At 4th level, a kata master can treat ki points as panache points for any swashbuckler deed gained through this archetype.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a kata master can treat ki points as panache points for any swashbuckler deed gained through this archetype.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.
  - Needs implementation review: panache resource, deed subsystem, swashbuckler class mechanics.

### Replaces: wholeness of body

- **Archetype feature:** Targeted Strike (Ex)
- **Description:** At 7th level, a kata master gains the swashbuckler’s targeted strike deed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a kata master gains the swashbuckler’s targeted strike deed.
- **Implementation flags:**
  - Needs implementation review: deed subsystem, swashbuckler class mechanics.

### Replaces: quivering palm

- **Archetype feature:** Dizzying Defense (Ex)
- **Description:** At 15th level, a kata master gains the dizzying defense swashbuckler deed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a kata master gains the dizzying defense swashbuckler deed.
- **Implementation flags:**
  - Needs implementation review: deed subsystem, swashbuckler class mechanics.

## Parsed source feature headings

- Panache
- Menacing Swordplay (Ex)
- Ki Pool (Su)
- Targeted Strike (Ex)
- Dizzying Defense (Ex)

