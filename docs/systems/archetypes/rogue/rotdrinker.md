# Rogue - Rotdrinker

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Rotdrinker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Rotdrinker
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Poison Resistance (Ex); Unnatural Ingestion (Ex)
- **Replaced / altered class features:** Evasion; Uncanny Dodge; Improved Uncanny Dodge

## Implementation details

### Replaces: evasion

- **Archetype feature:** Poison Resistance (Ex)
- **Description:** At 2nd level, a rotdrinker gains a +2 bonus on saving throws against all poisons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 8.
  - **Rules text to implement:** At 2nd level, a rotdrinker gains a +2 bonus on saving throws against all poisons. This bonus increases to +4 at 8th level.
- **Implementation flags:**
  - poison subsystem.

### Replaces: improved uncanny dodge and uncanny dodge

- **Archetype feature:** Unnatural Ingestion (Ex)
- **Description:** At 4th level, a rotdrinker gains immunity to all ingested poisons, including poisons that are converted to or considered ingested poisons (such as a poison converted to an ingested poison using the alchemist’s poison conversion discovery).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level, a rotdrinker gains immunity to all ingested poisons, including poisons that are converted to or considered ingested poisons (such as a poison converted to an ingested poison using the alchemist’s poison conversion discovery). Further, when the rotdrinker ingests an ingested poison, she gains a number of temporary hit points equal to half her rogue level. These temporary hit points stack with temporary hit points from other effects, and they last until they are lost or for a number of rounds equal to the rotdrinker’s rogue level, whichever comes first. Additionally, the rotdrinker gains benefits from the ingested poisons that she ingests depending on the poison’s details, as explained below. A rotdrinker can gain hit points and additional benefits from only one ingested poison at a time. If she ingests another poison while she has temporary hit points and additional benefits from another poison, the previous temporary hit points and benefits are lost. At 8th level, the temporary hit points and additional benefits last for a number of minutes equal to the rotdrinker’s rogue level. Ingested poisons provide an alchemical bonus equal to the number of consecutive saving throws required to cure the poison (for example, lich dust provides a +2 bonus). An ingested poison that affects Strength, Dexterity, or Constitution grants this bonus on the rotdrinker’s damage rolls and Fortitude saving throws. An ingested poison that affects Intelligence, Wisdom, or Charisma instead grants this bonus on the rotdrinker’s attack rolls and Will saving throws. An ingested poison that does not affect any ability scores (such as oil of taggit) grants this bonus to the rotdrinker’s AC. If an ingested poison falls into more than one of these categories, the rotdrinker chooses which benefit she receives at the time of ingestion.
- **Implementation flags:**
  - poison subsystem.

## Parsed source feature headings

- Poison Resistance (Ex)
- Unnatural Ingestion (Ex)
