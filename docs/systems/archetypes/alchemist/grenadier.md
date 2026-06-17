# Alchemist - Grenadier

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Grenadier
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Grenadier
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Martial Weapon Proficiency; Alchemical Weapon (Su); Precise Bombs (Ex); Directed Blast (Su); Staggering Blast (Su)
- **Replaced / altered class features:** Brew Potion; poison resistance; poison use; swift poisoning; poison immunity

## Implementation details

### Replaces: Brew Potion

- **Archetype feature:** Martial Weapon Proficiency
- **Description:** At 1st level, a grenadier picks one martial weapon to become proficient in the use of.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a grenadier picks one martial weapon to become proficient in the use of.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: poison resistance

- **Archetype feature:** Alchemical Weapon (Su)
- **Description:** At 2nd level, a grenadier can infuse a weapon or piece of ammunition with a single harmful alchemical liquid or powder, such as alchemist’s fire or sneezing powder, as a move action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 6, 15.
  - **Rules text to implement:** At 2nd level, a grenadier can infuse a weapon or piece of ammunition with a single harmful alchemical liquid or powder, such as alchemist’s fire or sneezing powder, as a move action. This action consumes the alchemical item, but transfers its effect to the weapon in question. The alchemical item takes full effect on the next creature struck by the weapon, but does not splash, spread, or otherwise affect additional targets. Any extra damage added is treated like bonus dice of damage, and is not doubled on a critical hit. The alchemical treatment causes no harm to the weapon treated, and wears off 1 minute after application if no blow is struck. At 6th level, a grenadier can use her alchemical weapon ability as a swift action. At 15th level, this ability becomes a free action.
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison use

- **Archetype feature:** Precise Bombs (Ex)
- **Description:** At 2nd level, a grenadier gains the precise bombs alchemist discovery as a bonus discovery.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a grenadier gains the precise bombs alchemist discovery as a bonus discovery.
- **Implementation flags:**
  - poison subsystem.

### Replaces: swift poisoning

- **Archetype feature:** Directed Blast (Su)
- **Description:** At 6th level, a grenadier can detonate a bomb so that it splashes in a 20-foot cone rather than affecting a radius.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a grenadier can detonate a bomb so that it splashes in a 20-foot cone rather than affecting a radius. The cone starts at the alchemist and extends away from her in the direction she chooses. The alchemist designates one creature in the squares affected by the cone to be the target of the bomb and makes her attack roll against that creature; all other squares in the cone take splash damage. If the alchemist has the explosive bomb discovery and throws an explosive directed blast, the cone of splash damage is 30 feet long instead of 20 feet.
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison immunity

- **Archetype feature:** Staggering Blast (Su)
- **Description:** At 10th level, a grenadier’s bombs become particularly overwhelming when they explode.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, a grenadier’s bombs become particularly overwhelming when they explode. Whenever a grenadier scores a successful critical hit with a bomb, the creature directly struck by that bomb is staggered for 1d4+1 rounds. A successful Fortitude save (DC equals the bomb’s Reflex save DC to avoid splash damage) reduces the duration to 1 round. The effects of this ability stack with a frost bomb’s staggering effect, but not with the effects of the Staggering Critical feat. Additional hits from a staggering blast add to the effect’s overall duration.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Martial Weapon Proficiency
- Alchemical Weapon (Su)
- Precise Bombs (Ex)
- Directed Blast (Su)
- Staggering Blast (Su)
