# Monk - Kata Master

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Kata Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Kata%20Master
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Panache; Menacing Swordplay (Ex); Ki Pool (Su); Targeted Strike (Ex); Dizzying Defense (Ex)
- **Replaced / altered class features:** stunning fist; still mind; wholeness of body; quivering palm

## Implementation details

### Replaces: stunning fist

- **Archetype feature:** Panache
- **Description:** At 1st level, a kata master gains the swashbuckler’s panache class ability.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a kata master gains the swashbuckler’s panache class ability. At the start of each day, a kata master gains a number of panache points equal to her Charisma bonus (minimum 1). Her panache goes up or down throughout the day, but usually cannot go higher than his Charisma bonus (minimum 1). A kata master gains the swashbuckler’s derring-do and dodging panache deeds. A kata master can use an unarmed strike or monk special weapon in place of a light or one-handed piercing melee weapon for granted swashbuckler class features and deeds.
- **Implementation flags:**
  - panache subsystem.
  - feat grant/prerequisite handling.

### Replaces: still mind

- **Archetype feature:** Menacing Swordplay (Ex)
- **Description:** At 3rd level, a kata master gains the swashbuckler’s menacing swordplay deed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a kata master gains the swashbuckler’s menacing swordplay deed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: ki pool

- **Archetype feature:** Ki Pool (Su)
- **Description:** At 4th level, a kata master can treat ki points as panache points for any swashbuckler deed gained through this archetype.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a kata master can treat ki points as panache points for any swashbuckler deed gained through this archetype.
- **Implementation flags:**
  - ki subsystem.
  - panache subsystem.

### Replaces: wholeness of body

- **Archetype feature:** Targeted Strike (Ex)
- **Description:** At 7th level, a kata master gains the swashbuckler’s targeted strike deed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a kata master gains the swashbuckler’s targeted strike deed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: quivering palm

- **Archetype feature:** Dizzying Defense (Ex)
- **Description:** At 15th level, a kata master gains the dizzying defense swashbuckler deed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a kata master gains the dizzying defense swashbuckler deed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Panache
- Menacing Swordplay (Ex)
- Ki Pool (Su)
- Targeted Strike (Ex)
- Dizzying Defense (Ex)
