# Inquisitor - Vampire Hunter

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Vampire Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Vampire%20Hunter
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Judgment; Silversmith; Bane (Su); Sun Strike (Su)
- **Replaced / altered class features:** detect alignment

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Judgment
- **Description:** The following vampire hunter judgments work differently than those of a standard inquisitor.
- **Detailed mechanics:**
  - **Level hooks:** 10, 6.
  - **Rules text to implement:** The following vampire hunter judgments work differently than those of a standard inquisitor. Purity : At 10th level, the judgment bonus is doubled against diseases and energy drain saving throws, but not curses or poisons. Smiting : At 6th level, the vampire hunter’s weapons count as silver instead of an alignment type.
- **Implementation flags:**
  - judgment subsystem.
  - poison subsystem.
  - curse subsystem.
  - feat grant/prerequisite handling.

### Replaces: detect alignment

- **Archetype feature:** Silversmith
- **Description:** At 2nd level, a vampire hunter learns the secrets of crafting silver into dangerous weapons.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a vampire hunter learns the secrets of crafting silver into dangerous weapons. She adds a bonus equal to her class level on any Craft or Spellcraft check made to create a silver item that bypasses DR/silver, such as alchemical silver, silversheen, or silver weapon blanch (see the Advanced Player’s Guide ).
- **Implementation flags:**
  - crafting subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bane (Su)
- **Description:** A vampire hunter can only imbue her weapons with the undead-bane ability, but it persists even when she isn’t holding the weapon.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A vampire hunter can only imbue her weapons with the undead-bane ability, but it persists even when she isn’t holding the weapon.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Sun Strike (Su)
- **Description:** At 5th level, a vampire hunter can infuse a single weapon she wields with the purifying light of the sun as a swift action for a number of rounds per day equal to her inquisitor level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a vampire hunter can infuse a single weapon she wields with the purifying light of the sun as a swift action for a number of rounds per day equal to her inquisitor level. These rounds do not need to be consecutive. While a weapon is infused with the sun, it deals +1d6 points of damage to any creature that is susceptible or vulnerable to sunlight, including many types of undead (particularly spectres, vampires, and wraiths). This additional damage also applies to oozes and fungus-based monsters. A weapon infused with sun strike sheds illumination as if it were a sunrod.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Judgment
- Silversmith
- Bane (Su)
- Sun Strike (Su)
