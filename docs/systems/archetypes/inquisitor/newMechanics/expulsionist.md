# Inquisitor - Expulsionist

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Expulsionist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Expulsionist
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Expel Spirit (Su); Expulsionist Lore (Ex); Spirit Sleuth (Ex)
- **Replaced / altered class features:** domain; monster lore; discern lies

## Implementation details

### Replaces: domain

- **Archetype feature:** Expel Spirit (Su)
- **Description:** At 1st level, an expulsionist receives Alignment Channel and Turn Undead as bonus feats.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 8.
  - **Rules text to implement:** At 1st level, an expulsionist receives Alignment Channel and Turn Undead as bonus feats. She can channel energy a number of times per day equal to 3 + her Charisma modifier as per a cleric with an effective level equal to her inquisitor level, but only to harm or turn evil outsiders or undead (treating all evil outsiders as undead creatures for the purpose of determining whether they can be affected by Turn Undead). She can take other feats that add to this ability, such as Extra Channel or Improved Channel, but not other feats that fundamentally alter this ability, such as Elemental Channel, and she cannot select Alignment Channel multiple times. The DC to save against this ability is equal to 10 + 1/2 the expulsionist’s inquisitor level + her Charisma modifier. At 8th level, an expulsionist can expend one use of her channel energy ability to attempt to force a possessing creature from its host body. The expulsionist must make a melee touch attack against the possessed creature; if successful, the expulsionist deals damage to the possessing creature as if it were targeted by the expulsionist’s channel energy ability (regardless of the possessing creature’s creature type), and the possession effect ceases as the possessing creature is ejected from the host body. A successful Will save (DC = the expulsionist’s channel energy DC) halves the damage taken and negates the expulsion.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Replaces: monster lore

- **Archetype feature:** Expulsionist Lore (Ex)
- **Description:** At 1st level, an expulsionist gains a bonus equal to 1/2 her inquisitor level (minimum +1) on skill checks to notice haunts and incorporeal creatures; on Knowledge (religion) checks to identify the abilities and weaknesses of haunts and incorporeal creatures; and on Sense Motive checks to determine whether a creature is possessed, under the effects of an enchantment or curse, or otherwise magically controlled.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an expulsionist gains a bonus equal to 1/2 her inquisitor level (minimum +1) on skill checks to notice haunts and incorporeal creatures; on Knowledge (religion) checks to identify the abilities and weaknesses of haunts and incorporeal creatures; and on Sense Motive checks to determine whether a creature is possessed, under the effects of an enchantment or curse, or otherwise magically controlled.
- **Implementation flags:**
  - ki subsystem.
  - haunt subsystem.
  - curse subsystem.
  - skill/class-skill modification.

### Replaces: discern lies

- **Archetype feature:** Spirit Sleuth (Ex)
- **Description:** At 5th level, upon interacting with a rejuvenating undead (such as a ghost) or haunt for the first time (such as by attacking the ghost or channeling energy to damage the haunt), an expulsionist can attempt a Sense Motive check as a free action to determine the specific course of action required to permanently neutralize the spirit of haunt (DC = 20 + the target’s CR).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, upon interacting with a rejuvenating undead (such as a ghost) or haunt for the first time (such as by attacking the ghost or channeling energy to damage the haunt), an expulsionist can attempt a Sense Motive check as a free action to determine the specific course of action required to permanently neutralize the spirit of haunt (DC = 20 + the target’s CR).
- **Implementation flags:**
  - ki subsystem.
  - haunt subsystem.

## Parsed source feature headings

- Expel Spirit (Su)
- Expulsionist Lore (Ex)
- Spirit Sleuth (Ex)
