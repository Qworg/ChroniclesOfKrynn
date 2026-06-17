# Warrior - Mutation Warrior

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Mutation Warrior
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Mutation%20Warrior
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Mutagen (Su); Mutagen Discovery (Su)
- **Replaced / altered class features:** armor training 1; armor training 2, 3, 4, and armor mastery

## Implementation details

### Replaces: armor training 1

- **Archetype feature:** Mutagen (Su)
- **Description:** At 3rd level, a mutation warrior discovers how to create a mutagen that he can imbibe in order to heighten his physical prowess at the cost of his personality.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a mutation warrior discovers how to create a mutagen that he can imbibe in order to heighten his physical prowess at the cost of his personality. This ability functions as the alchemist’s mutagen ability ( Advanced Player’s Guide 28), using his fighter level as his alchemist level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 2, 3, 4, and armor mastery

- **Archetype feature:** Mutagen Discovery (Su)
- **Description:** At 7th level and every 4 levels thereafter, the mutation warrior can choose one of the following alchemist discoveries ( Advanced Player’s Guide 28) to augment his abilities: feral mutagen, grand mutagen, greater mutagen, infuse mutagen, nauseating flesh UC, preserve organs UM, rag doll mutagen ARG, spontaneous healing UM, tentacle UM, vestigial arm UM, wings UM.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level and every 4 levels thereafter, the mutation warrior can choose one of the following alchemist discoveries ( Advanced Player’s Guide 28) to augment his abilities: feral mutagen, grand mutagen, greater mutagen, infuse mutagen, nauseating flesh UC, preserve organs UM, rag doll mutagen ARG, spontaneous healing UM, tentacle UM, vestigial arm UM, wings UM. The mutagen warrior uses his fighter level as his effective alchemist level for the purpose of these discoveries.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Mutagen (Su)
- Mutagen Discovery (Su)
