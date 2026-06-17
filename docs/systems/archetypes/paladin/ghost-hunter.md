# Paladin - Ghost Hunter

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Ghost Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Ghost%20Hunter
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Ghostly Smite (Su); Exorcise Possession (Su); Speak to the Restless (Sp)
- **Replaced / altered class features:** the 6th-level mercy; the 9th-level mercy

## Implementation details

### Alters: smite evil

- **Archetype feature:** Ghostly Smite (Su)
- **Description:** A ghost hunter’s smite evil ability does not automatically bypass DR (other than DR/good).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A ghost hunter’s smite evil ability does not automatically bypass DR (other than DR/good). However, she treats her weapon as a ghost touch weapon against the target of her smite. She does not deal extra damage on the first attack against evil outsiders and evil dragons, but she deals 3 points of damage per paladin level she possesses to undead creatures on the first attack (instead of 2 points).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the 6th-level mercy

- **Archetype feature:** Exorcise Possession (Su)
- **Description:** At 6th level, a ghost hunter can try to end any possession spells or effects, or effects that directly exercise mental control over a creature.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a ghost hunter can try to end any possession spells or effects, or effects that directly exercise mental control over a creature. She must touch the affected creature (this requires a melee touch attack if the target is neither willing nor helpless) and expend a use of her lay on hands ability. The target can immediately attempt a Will save against the original save DC of the controlling effect. If the save is successful, the effect immediately ends, as if the target had succeeded at its original saving throw.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the 9th-level mercy

- **Archetype feature:** Speak to the Restless (Sp)
- **Description:** At 9th level, a ghost hunter can commune with the spirits of the restless dead once per day.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a ghost hunter can commune with the spirits of the restless dead once per day. By holding a seance for 10 minutes, she can ask questions of a destroyed undead or a neutralized or destroyed haunt. To use this ability on a corporeal undead, the ghost hunter must have the creature’s head in her possession. For a haunt or incorporeal undead, this seance must be held in the haunt’s location or where the incorporeal undead was destroyed. Treat this ability as speak with haunt ACG or as speak with dead (but affecting only undead rather than only corpses), using the ghost hunter’s class level as the caster level.
- **Implementation flags:**
  - haunt subsystem.

## Parsed source feature headings

- Ghostly Smite (Su)
- Exorcise Possession (Su)
- Speak to the Restless (Sp)
