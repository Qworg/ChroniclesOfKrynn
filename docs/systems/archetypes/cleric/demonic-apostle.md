# Cleric - Demonic Apostle

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Demonic Apostle
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Demonic%20Apostle
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Demonic Magic; Demonic Familiar; Demonic Channel (Su)
- **Replaced / altered class features:** channel energy

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Demonic Magic
- **Description:** A demonic apostle must choose to channel negative energy, and must select either the Chaos or Evil domain or the Demon subdomain as her sole domain.
- **Detailed mechanics:**
  - **Rules text to implement:** A demonic apostle must choose to channel negative energy, and must select either the Chaos or Evil domain or the Demon subdomain as her sole domain.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Demonic Familiar
- **Description:** At 1st level, a demonic apostle gains a familiar as a wizard equal to her cleric level, or if she already has a familiar, her cleric levels stack to determine the familiar’s abilities.
- **Detailed mechanics:**
  - **Level hooks:** 1, 3, 7.
  - **Rules text to implement:** At 1st level, a demonic apostle gains a familiar as a wizard equal to her cleric level, or if she already has a familiar, her cleric levels stack to determine the familiar’s abilities. At 3rd level, her familiar gains the fiendish template. At 7th level, the demonic apostle exchanges her familiar for a quasit without the need to take the Improved Familiar feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: channel energy

- **Archetype feature:** Demonic Channel (Su)
- **Description:** At 1st level, a demonic apostle can channel demonic energy to damage creatures of lawful and good alignment, or, at higher levels, bolster the abilities of chaotic evil allies.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 5, 9.
  - **Rules text to implement:** At 1st level, a demonic apostle can channel demonic energy to damage creatures of lawful and good alignment, or, at higher levels, bolster the abilities of chaotic evil allies. Channeling this energy causes a 30-foot-radius burst centered on the cleric. Creatures within the burst that are lawful or good take 1d6 points of damage, plus 1d6 points of damage for every two levels the cleric possesses beyond 1st (2d6 at 3rd, 3d6 at 5th, and so on). Creatures that take damage from the channeled demonic energy receive a Fortitude save to halve the damage. The DC of this save is equal to 10 + 1/2 the demonic apostle’s level + the demonic apostle’s Charisma modifier. Lawful good creatures take a –2 penalty on this saving throw. At 5th level, chaotic evil allies within the burst are affected as if targeted by a rage spell with a duration of 1 round. At 9th level, lawful or good enemies are also sickened for 1d6 rounds if they fail their saving throw against the demonic channel. Channeling demonic energy is a standard action that does not provoke attacks of opportunity.
- **Implementation flags:**
  - rage/rage power subsystem.

## Parsed source feature headings

- Demonic Magic
- Demonic Familiar
- Demonic Channel (Su)
