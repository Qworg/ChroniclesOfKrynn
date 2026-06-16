# Bard - Provocateur

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Provocateur
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Provocateur
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Provocateur (Ex); Calumny (Ex); Damning Performance (Su)
- **Replaced / altered class features:** the versatile performance gained at 2nd level; suggestion and mass suggestion

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Provocateur (Ex)
- **Description:** A provocateur adds 1/2 his bard level on skill checks to reduce a target’s influence ( Ultimate Intrigue 102 ) and on skill checks to reduce a target’s attitude toward another creature or organization.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A provocateur adds 1/2 his bard level on skill checks to reduce a target’s influence ( Ultimate Intrigue 102 ) and on skill checks to reduce a target’s attitude toward another creature or organization.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the versatile performance gained at 2nd level

- **Archetype feature:** Calumny (Ex)
- **Description:** At 2nd level, a provocateur can use his Perform (comedy, oratory, or sing) modifier in place of his Bluff and Diplomacy modifier on checks to spread a rumor and in place of his Intimidate modifier on checks to demoralize foes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a provocateur can use his Perform (comedy, oratory, or sing) modifier in place of his Bluff and Diplomacy modifier on checks to spread a rumor and in place of his Intimidate modifier on checks to demoralize foes.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: suggestion and mass suggestion

- **Archetype feature:** Damning Performance (Su)
- **Description:** At 4th level, a provocateur can cause all observers fascinated by her fascinate performance to become less friendly to a target creature or group of her choice for 10 minutes per bard level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 18.
  - Mechanics summary: At 4th level, a provocateur can cause all observers fascinated by her fascinate performance to become less friendly to a target creature or group of her choice for 10 minutes per bard level. Affected observers’ attitudes toward the target, the target’s influence ( Ultimate Intrigue 102 ) with affected observers, and affected observers’ trust level as contacts ( Ultimate Campaign 148 ) for the target are all reduced by one step. If the provocateur engages in a verbal duel ( Ultimate Intrigue 176 ) against the target with an audience affected by damning performance, she automatically gains two edges. At 18th level, the duration increases to 1 day per bard level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Provocateur (Ex)
- Calumny (Ex)
- Damning Performance (Su)

