# Rogue - Rotdrinker

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Rotdrinker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Rotdrinker
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Poison Resistance (Ex); Unnatural Ingestion (Ex)
- **Replaced / altered class features:** Evasion; Uncanny Dodge; Improved Uncanny Dodge

## Replacement details

### Replaces: evasion

- **Archetype feature:** Poison Resistance (Ex)
- **Description:** At 2nd level, a rotdrinker gains a +2 bonus on saving throws against all poisons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 8.
  - Mechanics summary: At 2nd level, a rotdrinker gains a +2 bonus on saving throws against all poisons. This bonus increases to +4 at 8th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: improved uncanny dodge and uncanny dodge

- **Archetype feature:** Unnatural Ingestion (Ex)
- **Description:** At 4th level, a rotdrinker gains immunity to all ingested poisons, including poisons that are converted to or considered ingested poisons (such as a poison converted to an ingested poison using the alchemist’s poison conversion discovery).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 8.
  - Mechanics summary: At 4th level, a rotdrinker gains immunity to all ingested poisons, including poisons that are converted to or considered ingested poisons (such as a poison converted to an ingested poison using the alchemist’s poison conversion discovery). Further, when the rotdrinker ingests an ingested poison, she gains a number of temporary hit points equal to half her rogue level. These temporary hit points stack with temporary hit points from other effects, and they last until they are lost or for a number of rounds equal to the rotdrinker’s rogue level, whichever comes first. Additionally, the rotdrinker gains benefits from the ingested poisons that she ingests depending on the poison’s details, as explained below. A rotdrinker can gain hit points and additional benefits from only one ingested poison at a time. At 8th level, the temporary hit points and additional benefits last for a number of minutes equal to the rotdrinker’s rogue level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, alchemist discovery hook.

## Parsed source feature headings

- Poison Resistance (Ex)
- Unnatural Ingestion (Ex)

