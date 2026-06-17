# Rogue - Counterfeit Mage

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Counterfeit Mage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Counterfeit%20Mage
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Magical Expertise (Ex); Signature Wand (Ex); Wand Adept (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; the rogue talent gained at 4th level

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Magical Expertise (Ex)
- **Description:** At 1st level, a counterfeit mage adds 1/2 his level to Disable Device checks to disarm magical traps, Perception checks to find magical traps, and Use Magic Device checks to activate scrolls and wands.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a counterfeit mage adds 1/2 his level to Disable Device checks to disarm magical traps, Perception checks to find magical traps, and Use Magic Device checks to activate scrolls and wands. A counterfeit mage can use Disable Device to disarm magic traps.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talent gained at 4th level

- **Archetype feature:** Signature Wand (Ex)
- **Description:** At 4th level, a counterfeit mage can spend 1 hour practicing with a wand to designate it as his signature wand.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a counterfeit mage can spend 1 hour practicing with a wand to designate it as his signature wand. He can draw that wand as a free action, and can activate it without having to succeed at a Use Magic Device check. He can change his signature wand once per day.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wand Adept (Ex)
- **Description:** At 6th level, a counterfeit mage can use his Dexterity modifier in place of his Charisma modifier when attempting Use Magic Device checks to activate wands.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a counterfeit mage can use his Dexterity modifier in place of his Charisma modifier when attempting Use Magic Device checks to activate wands.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the counterfeit mage archetype: deft palm UC, esoteric scholar UC, honeyed words APG, major magic, minor magic, and trap spotter.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the counterfeit mage archetype: deft palm UC, esoteric scholar UC, honeyed words APG, major magic, minor magic, and trap spotter.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the counterfeit mage archetype: dispelling attack, familiar UC, and slippery mind.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the counterfeit mage archetype: dispelling attack, familiar UC, and slippery mind.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Magical Expertise (Ex)
- Signature Wand (Ex)
- Wand Adept (Ex)
- Rogue Talents
- Advanced Talents
