# Cleric - Asmodean Advocate

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Asmodean Advocate
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Asmodean%20Advocate
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Pact-Bound (Ex); Serpent (Su); Devil in the Details (Ex); Shoulder Devil (Su)
- **Replaced / altered class features:** Domains

## Implementation details

### Alters: domains

- **Archetype feature:** Pact-Bound (Ex)
- **Description:** An Asmodean advocate must choose Asmodeus as her deity and select the Trickery domain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An Asmodean advocate must choose Asmodeus as her deity and select the Trickery domain. She does not gain a second domain. If she ever changes her deity, she loses this archetype and becomes a normal ex-cleric.
- **Implementation flags:**
  - domain system.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Serpent (Su)
- **Description:** At 1st level, an Asmodean advocate gains a familiar as the arcane bond class feature, using her cleric level as her wizard level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an Asmodean advocate gains a familiar as the arcane bond class feature, using her cleric level as her wizard level. She must choose a viper familiar. The viper speaks one language of the Asmodean advocate’s choice as a supernatural ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Devil in the Details (Ex)
- **Description:** At 1st level, an Asmodean advocate learns to choose her words so carefully that even when she says something designed to deceive listeners, the words are phrased to be technically true.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an Asmodean advocate learns to choose her words so carefully that even when she says something designed to deceive listeners, the words are phrased to be technically true. She can use her Profession (barrister) skill for Bluff and Diplomacy checks. This benefit also extends to her familiar. The Asmodean advocate gains an insight bonus equal to 1/2 her cleric level (minimum +1) on Linguistics checks related to forgeries and on all Profession (barrister) checks.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Shoulder Devil (Su)
- **Description:** At 8th level, an Asmodean advocate can choose an imp familiar as though she had the Improved Familiar feat.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, an Asmodean advocate can choose an imp familiar as though she had the Improved Familiar feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Pact-Bound (Ex)
- Serpent (Su)
- Devil in the Details (Ex)
- Shoulder Devil (Su)
