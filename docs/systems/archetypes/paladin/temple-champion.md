# Paladin - Temple Champion

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Temple Champion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Temple%20Champion
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spells; Domain Granted Power; Blessing (Su)
- **Replaced / altered class features:** divine bond and aura of justice

## Replacement details

### Replaces: divine bond

- **Archetype feature:** Blessing (Su)
- **Description:** At 5th level, a temple champion gains the minor blessing (as the warpriest class feature) of the domain she selected at 4th level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 4, 11.
  - Mechanics summary: At 5th level, a temple champion gains the minor blessing (as the warpriest class feature) of the domain she selected at 4th level. She uses her paladin level as her warpriest level for determining the effects of that blessing. At 11th level, she gains the major blessing of her chosen domain.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, cleric domain hook.

### Replaces: aura of justice

- **Archetype feature:** Blessing (Su)
- **Description:** At 5th level, a temple champion gains the minor blessing (as the warpriest class feature) of the domain she selected at 4th level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 4, 11.
  - Mechanics summary: At 5th level, a temple champion gains the minor blessing (as the warpriest class feature) of the domain she selected at 4th level. She uses her paladin level as her warpriest level for determining the effects of that blessing. At 11th level, she gains the major blessing of her chosen domain.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, cleric domain hook.

## Parsed source feature headings

- Spells
- Domain Granted Power
- Blessing (Su)

