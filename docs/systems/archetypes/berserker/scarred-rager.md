# Berserker - Scarred Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Scarred Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Scarred%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Terrifying Visage (Ex); Tolerance (Ex); Scarification (Ex); Improved Tolerance (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Terrifying Visage (Ex)
- **Description:** A scarred rager adds 1/2 her barbarian level on Intimidate checks against humanoids who are not members of barbarian tribes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A scarred rager adds 1/2 her barbarian level on Intimidate checks against humanoids who are not members of barbarian tribes. When dealing with barbarians, the scarred rager may choose to add this bonus on Diplomacy checks instead. The DC of any fear effect created by the scarred rager also increases by 1.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: uncanny dodge

- **Archetype feature:** Tolerance (Ex)
- **Description:** At 2nd level, a scarred rager who fails a save against an effect that causes her to become nauseated, sickened, fatigued, or exhausted can make a second save to negate the effect on the start of her next turn.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a scarred rager who fails a save against an effect that causes her to become nauseated, sickened, fatigued, or exhausted can make a second save to negate the effect on the start of her next turn. Only one additional save is allowed. If the effect does not allow a saving throw, its duration is halved instead (minimum of 1 round).
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: trap sense

- **Archetype feature:** Scarification (Ex)
- **Description:** At 3rd level, a scarred rager can ignore 1 point of bleed damage per round.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 15.
  - **Rules text to implement:** At 3rd level, a scarred rager can ignore 1 point of bleed damage per round. This amount increases by 1 every three levels beyond 3rd. At 15th level, a scarred rager can ignore 1 bleed effect each round.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Improved Tolerance (Ex)
- **Description:** At 5th level, a scarred rager’s tolerance ability also applies to effects that would cause her to become dazed, frightened, shaken, or stunned.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a scarred rager’s tolerance ability also applies to effects that would cause her to become dazed, frightened, shaken, or stunned.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the scarred rager archetype: auspicious mark, body bludgeon, come and get me, increased damage reduction, inspire ferocity, internal fortitude, intimidating glare, reckless abandon, regenerative vigor, renewed life, renewed vigor, renewed vitality, roused anger, and terrifying howl.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the scarred rager archetype: auspicious mark, body bludgeon, come and get me, increased damage reduction, inspire ferocity, internal fortitude, intimidating glare, reckless abandon, regenerative vigor, renewed life, renewed vigor, renewed vitality, roused anger, and terrifying howl.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Terrifying Visage (Ex)
- Tolerance (Ex)
- Scarification (Ex)
- Improved Tolerance (Ex)
- Rage Powers
