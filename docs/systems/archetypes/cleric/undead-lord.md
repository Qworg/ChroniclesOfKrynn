# Cleric - Undead Lord

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Undead Lord
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Undead%20Lord
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Death Magic; Corpse Companion (Su); Bonus Feats; Unlife Healer (Su)
- **Replaced / altered class features:** Domains

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Death Magic
- **Description:** An undead lord must select the Death domain (and the Undead subdomain, if available in the campaign).
- **Detailed mechanics:**
  - **Rules text to implement:** An undead lord must select the Death domain (and the Undead subdomain, if available in the campaign). She does not gain a second domain. In all other respects, this works like and replaces the standard cleric’s domain ability.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Corpse Companion (Su)
- **Description:** With a ritual requiring 8 hours, an undead lord can animate a single skeleton or zombie whose Hit Dice do not exceed her cleric level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** With a ritual requiring 8 hours, an undead lord can animate a single skeleton or zombie whose Hit Dice do not exceed her cleric level. This corpse companion automatically follows her commands and does not need to be controlled by her. She cannot have more than one corpse companion at a time. It does not count against the number of Hit Dice of undead controlled by other methods. She can use this ability to create a variant skeleton such as a bloody or burning skeleton, but its Hit Dice cannot exceed half her cleric level. She can dismiss her companion as a standard action, which destroys it.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** All undead lords gain Command Undead as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 10.
  - **Rules text to implement:** All undead lords gain Command Undead as a bonus feat. In addition, at 10th level, she may select one of the following as a bonus feat: Channel Smite, Extra Channel, Improved Channel, Quick Channel, Skeleton Summoner, Undead Master.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Unlife Healer (Su)
- **Description:** At 8th level, the undead lord’s spells, spell-like abilities, and supernatural abilities used to heal undead heal an extra 50% damage.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8, 16.
  - **Rules text to implement:** At 8th level, the undead lord’s spells, spell-like abilities, and supernatural abilities used to heal undead heal an extra 50% damage. At 16th level, these effects automatically heal the maximum possible damage for the effect + the extra 50%. This does not stack with abilities or feats such as Empower Spell or Maximize Spell.
- **Implementation flags:**
  - spell-like ability support.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Death Magic
- Corpse Companion (Su)
- Bonus Feats
- Unlife Healer (Su)
