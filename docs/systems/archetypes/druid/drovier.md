# Druid - Drovier

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Drovier
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Drovier
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature's Bond (Ex); Communal Aspect (Su)
- **Replaced / altered class features:** Nature's Bond; Wild Shape

## Implementation details

### Alters: nature’s bond

- **Archetype feature:** Nature's Bond (Ex)
- **Description:** A drovier must take the Animal domain with this ability, or the Eagle or Wolf animal domains from pages 34 and 36 respectively of Pathfinder RPG Ultimate Magic.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A drovier must take the Animal domain with this ability, or the Eagle or Wolf animal domains from pages 34 and 36 respectively of Pathfinder RPG Ultimate Magic.
- **Implementation flags:**
  - domain system.

### Replaces: wild shape

- **Archetype feature:** Communal Aspect (Su)
- **Description:** At 4th level, a drovier can imbue her allies (including herself) with an aspect of a wild animal.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 20, 6, 8, 10, 12, 14.
  - **Rules text to implement:** At 4th level, a drovier can imbue her allies (including herself) with an aspect of a wild animal. As a standard action, she chooses an animal totem and grants the abilities of that totem to every ally within 30 feet. This otherwise functions like the spell animal aspect UC. She can use this ability for 10 minutes per druid level each day. This duration does not need to be consecutive, but it must be used in 10-minute increments. If she uses the ability to grant a new aspect, any previous aspect immediately ends. At 20th level, the drovier can use this ability at will. At 6th level, the drovier’s communal aspect ability grants the benefits of the spell greater animal aspect UC. The drovier can still choose only one aspect to grant her allies. At 8th level, the drovier can choose to grant her allies the benefits of the spell aspect of the falcon APG instead of an animal aspect. At 10th level, the drovier can choose to grant her allies the benefits of the spell aspect of the bear APG instead of an animal aspect. At 12th level, the drovier can choose to grant her allies the benefits of the spell aspect of the stag APG instead of an animal aspect. At 14th level, the drovier can choose to grant her allies the benefits of the spell aspect of the wolf APG rather than an animal aspect.
- **Implementation flags:**
  - wild shape subsystem.

## Parsed source feature headings

- Nature's Bond (Ex)
- Communal Aspect (Su)
