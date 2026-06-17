# Alchemist - Crypt Breaker

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Crypt Breaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Crypt%20Breaker
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Alkahest Bombs (Su); Crypt Breaker’s Draught (Su); Trapfinding; Discoveries; Enhanced Alkahest (Su)
- **Replaced / altered class features:** the mutagen class ability (a crypt breaker cannot create mutagens unless he selects the mutagen discovery); the Brew Potion bonus feat; persistent mutagen

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Alkahest Bombs (Su)
- **Description:** A crypt breaker’s bombs are specially designed to work best against constructs and corporeal undead-two foes commonly encountered in ancient tombs.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A crypt breaker’s bombs are specially designed to work best against constructs and corporeal undead-two foes commonly encountered in ancient tombs. Known as alkahest bombs, these bombs deal acid damage instead of fire damage. Alkahest is an alchemical fluid that eats away unliving flesh and animated constructs, but it doesn’t work as well against other targets. Against constructs and corporeal undead, alkahest bombs deal 1d8 points of damage, plus 1d8 points of damage for every odd-numbered level instead of 1d6. Against all other creatures, alkahest bombs deal 1d4 points of damage, plus 1d4 points of force damage for every odd-numbered level. This ability otherwise functions as and replaces the standard alchemist bomb class feature.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the mutagen class ability (a crypt breaker cannot create mutagens unless he selects the mutagen discovery)

- **Archetype feature:** Crypt Breaker’s Draught (Su)
- **Description:** Rather than develop mutagens that increase their natural armor and physical abilities at the expense of their minds, crypt breakers focus on the creation of special draughts that can enhance their senses.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** Rather than develop mutagens that increase their natural armor and physical abilities at the expense of their minds, crypt breakers focus on the creation of special draughts that can enhance their senses. When a crypt breaker drinks one of these draughts, he gains a +4 bonus on all Perception checks and gains one of the following special senses: darkvision 60 feet, low-light vision, or scent. While under the effects of a crypt breaker’s draught, the alchemist also gains light blindness.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the Brew Potion bonus feat

- **Archetype feature:** Trapfinding
- **Description:** A crypt breaker adds 1/2 his level on Perception checks made to locate traps and to Disable Device checks (minimum +1).
- **Detailed mechanics:**
  - **Rules text to implement:** A crypt breaker adds 1/2 his level on Perception checks made to locate traps and to Disable Device checks (minimum +1). A crypt breaker can use Disable Device to disarm magic traps. When determining the ability of a crypt breaker to deal with locks or traps, treat his alchemist levels as rogue levels.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** A crypt breaker may take the following rogue talents as discoveries: quick disable, trap sense, and trap spotter.
- **Detailed mechanics:**
  - **Rules text to implement:** A crypt breaker may take the following rogue talents as discoveries: quick disable, trap sense, and trap spotter. Treat the crypt breaker’s alchemist level as his rogue level for these talents.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: persistent mutagen

- **Archetype feature:** Enhanced Alkahest (Su)
- **Description:** At 14th level, a crypt breaker’s alkahest grows more potent.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a crypt breaker’s alkahest grows more potent. Against constructs and corporeal undead, the crypt breaker’s alkahest bombs deal +1 points of damage per die, and the bomb threatens a critical hit on a 19-20. This does not stack with other effects that improve critical hit threat ranges.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Alkahest Bombs (Su)
- Crypt Breaker’s Draught (Su)
- Trapfinding
- Discoveries
- Enhanced Alkahest (Su)
