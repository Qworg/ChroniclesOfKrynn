# Sorcerer - Umbral Scion

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Umbral Scion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Umbral%20Scion
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bloodline; Diminished Spellcasting; Shrouded Spells (Su); Encroaching Darkness (Su); Potent Shadows (Su); Crippling Darkness (Su)
- **Replaced / altered class features:** the shadowstrike bloodline power; the 7th-level bloodline feat; the 13th-level bloodline feat

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bloodline
- **Description:** An umbral scion must have the shadow APG bloodline.
- **Detailed mechanics:**
  - **Rules text to implement:** An umbral scion must have the shadow APG bloodline.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the sorcerer’s spellcasting

- **Archetype feature:** Diminished Spellcasting
- **Description:** An umbral scion can cast one fewer spell per day of each level than normal.
- **Detailed mechanics:**
  - **Rules text to implement:** An umbral scion can cast one fewer spell per day of each level than normal. If this reduces the number to 0, she can cast spells of that level only if her Charisma score grants her bonus spells of that level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Shrouded Spells (Su)
- **Description:** An umbral scion is enveloped by wisps of shadow whenever she casts a spell.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** An umbral scion is enveloped by wisps of shadow whenever she casts a spell. The DC to identify spells cast by an umbral scion increases by 2. If the spell is being cast within an area of dim light or darkness, the DC increases by 5 instead.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the shadowstrike bloodline power

- **Archetype feature:** Encroaching Darkness (Su)
- **Description:** An umbral scion is capable of influencing light around her.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7, 8, 14.
  - **Rules text to implement:** An umbral scion is capable of influencing light around her. As a standard action, she can produce a 10-foot-radius veil centered on a creature or object within 30 feet. This veil decreases the light level by one step and remains for a number of rounds equal to the sorcerer’s Charisma modifier. At 7th level, the veil increases to a 30-foot radius. At 8th level, the veil decreases the light level by two steps. If the light level is decreased past darkness, the veil is treated as deeper darkness. At 14th level, the veil increases to 60 feet and grants any creature within it cover (even against senses normally able to penetrate total darkness, such as the see in darkness ability). An umbral scion can use this ability a number of times per day equal to 3 + her Charisma modifier.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the 7th-level bloodline feat

- **Archetype feature:** Potent Shadows (Su)
- **Description:** At 7th level, when an umbral scion casts a spell of the shadow subschool or a spell with the darkness or shadow UM descriptor within an area of dim light or darkness, she treats her caster level as 1 higher.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7, 19.
  - **Rules text to implement:** At 7th level, when an umbral scion casts a spell of the shadow subschool or a spell with the darkness or shadow UM descriptor within an area of dim light or darkness, she treats her caster level as 1 higher. Only the sorcerer herself needs to be in dim light or darkness. This bonus increases by 1 every 4 sorcerer levels beyond 7th she has to a maximum of +4 at 19th level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the 13th-level bloodline feat

- **Archetype feature:** Crippling Darkness (Su)
- **Description:** At 13th level, when an umbral scion targets a creature within an area of dim light or darkness with a spell of the shadow subschool or a spell with the darkness or shadow UM descriptor, the DC for the spell increases by 1.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13, 18.
  - **Rules text to implement:** At 13th level, when an umbral scion targets a creature within an area of dim light or darkness with a spell of the shadow subschool or a spell with the darkness or shadow UM descriptor, the DC for the spell increases by 1. This bonus increases by 1 at 18th level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bloodline
- Diminished Spellcasting
- Shrouded Spells (Su)
- Encroaching Darkness (Su)
- Potent Shadows (Su)
- Crippling Darkness (Su)
