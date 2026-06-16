# Druid - Drovier

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Drovier
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Drovier
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Nature's Bond (Ex); Communal Aspect (Su)
- **Replaced / altered class features:** Nature's Bond; Wild Shape

## Replacement details

### Alters: nature’s bond

- **Archetype feature:** Nature's Bond (Ex)
- **Description:** A drovier must take the Animal domain with this ability, or the Eagle or Wolf animal domains from pages 34 and 36 respectively of Pathfinder RPG Ultimate Magic .
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A drovier must take the Animal domain with this ability, or the Eagle or Wolf animal domains from pages 34 and 36 respectively of Pathfinder RPG Ultimate Magic .
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Replaces: wild shape

- **Archetype feature:** Communal Aspect (Su)
- **Description:** At 4th level, a drovier can imbue her allies (including herself) with an aspect of a wild animal.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 20, 6, 8, 10, 12, 14.
  - Mechanics summary: At 4th level, a drovier can imbue her allies (including herself) with an aspect of a wild animal. As a standard action, she chooses an animal totem and grants the abilities of that totem to every ally within 30 feet. This otherwise functions like the spell animal aspect UC . She can use this ability for 10 minutes per druid level each day. This duration does not need to be consecutive, but it must be used in 10-minute increments. If she uses the ability to grant a new aspect, any previous aspect immediately ends.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, wild shape hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Nature's Bond

## Parsed source feature headings

- Nature's Bond (Ex)
- Communal Aspect (Su)

