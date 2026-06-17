# Paladin - Temple Champion

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Temple Champion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Temple%20Champion
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Spells; Domain Granted Power; Blessing (Su)
- **Replaced / altered class features:** divine bond and aura of justice

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Spells
- **Description:** A temple champion does not gain access to paladin spells, and does not have a paladin caster level or spell list.
- **Detailed mechanics:**
  - **Rules text to implement:** A temple champion does not gain access to paladin spells, and does not have a paladin caster level or spell list. This is not considered a spellcasting class.
- **Implementation flags:**
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Domain Granted Power
- **Description:** At 4th level, a temple champion selects one domain granted by her deity (or a domain suitable for her ethos or goals, subject to GM approval).
- **Detailed mechanics:**
  - **Level hooks:** 4, 1.
  - **Rules text to implement:** At 4th level, a temple champion selects one domain granted by her deity (or a domain suitable for her ethos or goals, subject to GM approval). The temple champion gains the 1st-level granted power of that domain and uses her paladin level as her cleric level for determining the effects of that granted power. Any Wisdom-based aspects of that granted power instead use the temple champion’s Charisma. The temple champion does not gain access to that domain’s spell list.
- **Implementation flags:**
  - domain system.
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Replaces: divine bond and aura of justice

- **Archetype feature:** Blessing (Su)
- **Description:** At 5th level, a temple champion gains the minor blessing (as the warpriest class feature) of the domain she selected at 4th level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 4, 11.
  - **Rules text to implement:** At 5th level, a temple champion gains the minor blessing (as the warpriest class feature) of the domain she selected at 4th level. She uses her paladin level as her warpriest level for determining the effects of that blessing. Any Wisdom-based aspects of that blessing instead use the temple champion’s Charisma. At 11th level, she gains the major blessing of her chosen domain.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Spells
- Domain Granted Power
- Blessing (Su)
