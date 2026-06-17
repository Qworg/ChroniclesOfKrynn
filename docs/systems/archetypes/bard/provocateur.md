# Bard - Provocateur

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Provocateur
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Provocateur
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Provocateur (Ex); Calumny (Ex); Damning Performance (Su)
- **Replaced / altered class features:** the versatile performance gained at 2nd level; suggestion and mass suggestion

## Implementation details

### Replaces: bardic knowledge

- **Archetype feature:** Provocateur (Ex)
- **Description:** A provocateur adds 1/2 his bard level on skill checks to reduce a target’s influence ( Ultimate Intrigue 102 ) and on skill checks to reduce a target’s attitude toward another creature or organization.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A provocateur adds 1/2 his bard level on skill checks to reduce a target’s influence ( Ultimate Intrigue 102 ) and on skill checks to reduce a target’s attitude toward another creature or organization.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: the versatile performance gained at 2nd level

- **Archetype feature:** Calumny (Ex)
- **Description:** At 2nd level, a provocateur can use his Perform (comedy, oratory, or sing) modifier in place of his Bluff and Diplomacy modifier on checks to spread a rumor and in place of his Intimidate modifier on checks to demoralize foes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a provocateur can use his Perform (comedy, oratory, or sing) modifier in place of his Bluff and Diplomacy modifier on checks to spread a rumor and in place of his Intimidate modifier on checks to demoralize foes.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: suggestion and mass suggestion

- **Archetype feature:** Damning Performance (Su)
- **Description:** At 4th level, a provocateur can cause all observers fascinated by her fascinate performance to become less friendly to a target creature or group of her choice for 10 minutes per bard level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 18.
  - **Rules text to implement:** At 4th level, a provocateur can cause all observers fascinated by her fascinate performance to become less friendly to a target creature or group of her choice for 10 minutes per bard level. Affected observers’ attitudes toward the target, the target’s influence ( Ultimate Intrigue 102 ) with affected observers, and affected observers’ trust level as contacts ( Ultimate Campaign 148 ) for the target are all reduced by one step. If she reveals information during the performance that would reduce those creatures’ attitudes anyway, those attitudes worsen by an additional step for the duration. If the provocateur engages in a verbal duel ( Ultimate Intrigue 176 ) against the target with an audience affected by damning performance, she automatically gains two edges. At 18th level, the duration increases to 1 day per bard level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Provocateur (Ex)
- Calumny (Ex)
- Damning Performance (Su)
