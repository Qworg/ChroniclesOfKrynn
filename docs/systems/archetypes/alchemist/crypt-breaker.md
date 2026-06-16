# Alchemist - Crypt Breaker

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Crypt Breaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Crypt%20Breaker
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Alkahest Bombs (Su); Crypt Breaker’s Draught (Su); Trapfinding; Discoveries; Enhanced Alkahest (Su)
- **Replaced / altered class features:** the mutagen class ability (a crypt breaker cannot create mutagens unless he selects the mutagen discovery); the Brew Potion bonus feat; persistent mutagen

## Replacement details

### Replaces: the mutagen class ability (a crypt breaker cannot create mutagens unless he selects the mutagen discovery)

- **Archetype feature:** Crypt Breaker’s Draught (Su)
- **Description:** Rather than develop mutagens that increase their natural armor and physical abilities at the expense of their minds, crypt breakers focus on the creation of special draughts that can enhance their senses.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: Rather than develop mutagens that increase their natural armor and physical abilities at the expense of their minds, crypt breakers focus on the creation of special draughts that can enhance their senses. When a crypt breaker drinks one of these draughts, he gains a +4 bonus on all Perception checks and gains one of the following special senses: darkvision 60 feet, low-light vision, or scent. While under the effects of a crypt breaker’s draught, the alchemist also gains light blindness.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, mutagen hook, alchemist discovery hook, AC/natural armor bonus.

### Replaces: the Brew Potion bonus feat

- **Archetype feature:** Trapfinding
- **Description:** A crypt breaker adds 1/2 his level on Perception checks made to locate traps and to Disable Device checks (minimum +1).
- **Mechanics:**
  - Mechanics summary: A crypt breaker adds 1/2 his level on Perception checks made to locate traps and to Disable Device checks (minimum +1). A crypt breaker can use Disable Device to disarm magic traps. When determining the ability of a crypt breaker to deal with locks or traps, treat his alchemist levels as rogue levels.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: persistent mutagen

- **Archetype feature:** Enhanced Alkahest (Su)
- **Description:** At 14th level, a crypt breaker’s alkahest grows more potent.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a crypt breaker’s alkahest grows more potent. Against constructs and corporeal undead, the crypt breaker’s alkahest bombs deal +1 points of damage per die, and the bomb threatens a critical hit on a 19-20.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, mutagen hook.

## Parsed source feature headings

- Alkahest Bombs (Su)
- Crypt Breaker’s Draught (Su)
- Trapfinding
- Discoveries
- Enhanced Alkahest (Su)

