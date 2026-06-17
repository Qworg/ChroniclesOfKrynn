# Paladin - Chosen One

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Chosen One
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Chosen%20One
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bondless; Divine Emissary (Ex); Religious Mentor (Ex); Delayed Grace (Su); Lay on Paws (Su); True Form (Ex); Emissary’s Smite (Su)
- **Replaced / altered class features:** Divine Bond; Class Skills; Divine Grace; Smite Evil; Lay on Hands; Channel Positive Energy

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bondless
- **Description:** A chosen one does not gain the divine bond class feature.
- **Detailed mechanics:**
  - **Rules text to implement:** A chosen one does not gain the divine bond class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Divine Emissary (Ex)
- **Description:** At 1st level, a chosen one gains an emissary familiar (see page 10), treating her paladin level as her wizard level for the purpose of this ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a chosen one gains an emissary familiar (see page 10), treating her paladin level as her wizard level for the purpose of this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Religious Mentor (Ex)
- **Description:** The familiar’s sworn duty is to help train the chosen one for her future glory.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** The familiar’s sworn duty is to help train the chosen one for her future glory. The familiar is treated as having a number of ranks in Knowledge (religion) equal to the chosen one’s paladin level. The chosen one doesn’t gain Knowledge (religion) as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: divine grace and smite evil

- **Archetype feature:** Delayed Grace (Su)
- **Description:** A chosen one begins her adventuring career without fully understanding her true potential.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 4, 7.
  - **Rules text to implement:** A chosen one begins her adventuring career without fully understanding her true potential. The chosen one uses the Barbarian, Rogue, Sorcerer column on Table 7–1 on page 169 of the Pathfinder RPG Core Rulebook to calculate her typical starting age. She receives the smite evil ability at 2nd level and the divine grace ability at 4th level. This does not affect the rate at which she gains additional uses per day of smite evil, so she still gains her second use at 4th level, her third at 7th level, and so on.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: lay on hands and channel positive energy

- **Archetype feature:** Lay on Paws (Su)
- **Description:** At 2nd level, a chosen one’s familiar is able to borrow some of her divine energy to heal itself and others.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 4.
  - **Rules text to implement:** At 2nd level, a chosen one’s familiar is able to borrow some of her divine energy to heal itself and others. The familiar can use the chosen one’s lay on hands ability, including all of her mercies, but each such use consumes two uses of the paladin’s lay on hands ability. Starting at 4th level, the familiar can also channel positive energy, but each such use consumes four uses of the paladin’s lay on hands ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** True Form (Ex)
- **Description:** At 7th level, a chosen one’s familiar reveals its true form, transforming into an outsider improved familiar that matches the chosen one’s patron’s alignment (typically an arbiter, a cassisian, a harbinger, or a silvanshee, but potentially any lawful neutral, lawful good, or neutral good outsider familiar depending on the patron).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a chosen one’s familiar reveals its true form, transforming into an outsider improved familiar that matches the chosen one’s patron’s alignment (typically an arbiter, a cassisian, a harbinger, or a silvanshee, but potentially any lawful neutral, lawful good, or neutral good outsider familiar depending on the patron). The familiar gains the change shape universal monster ability if it doesn’t already have it, which it can use at will to transform into its original form or back to its true form.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Emissary’s Smite (Su)
- **Description:** At 11th level, a chosen one’s familiar also benefits from the paladin’s smite evil ability whenever the chosen one uses smite evil.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a chosen one’s familiar also benefits from the paladin’s smite evil ability whenever the chosen one uses smite evil.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bondless
- Divine Emissary (Ex)
- Religious Mentor (Ex)
- Delayed Grace (Su)
- Lay on Paws (Su)
- True Form (Ex)
- Emissary’s Smite (Su)
