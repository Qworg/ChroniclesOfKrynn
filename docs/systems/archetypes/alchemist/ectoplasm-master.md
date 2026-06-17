# Alchemist - Ectoplasm Master

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Ectoplasm Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Ectoplasm%20Master
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Ectoplasmic Extracts (Su); Ectoplasm Master Discoveries (Su)
- **Replaced / altered class features:** Brew Potion

## Implementation details

### Alters: extracts and replaces Brew Potion

- **Archetype feature:** Ectoplasmic Extracts (Su)
- **Description:** Instead of using alchemical reagents in order to create alchemical items (including his bombs, extracts, and mutagens), an ectoplasm master uses reagents such as corpse dust, crystallized ectoplasm, and similar reagents as alchemical catalysts.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** Instead of using alchemical reagents in order to create alchemical items (including his bombs, extracts, and mutagens), an ectoplasm master uses reagents such as corpse dust, crystallized ectoplasm, and similar reagents as alchemical catalysts. Just as with standard alchemists, the costs of these materials are insignificant and are comparable to the costs of the valueless material components of most spells. As a result of his eccentric techniques and use of odd alchemical components, an ectoplasm master has an expanded formula list. He adds all sorcerer/wizard spells of 6th level or lower from the necromancy school to his alchemist formula list (but must still learn each of these spells normally). If a spell appears on both the alchemist formula list and the sorcerer/wizard spell list, the ectoplasm master uses the lower of the two spell levels listed for the spell.
- **Implementation flags:**
  - archetype spell-list override.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ectoplasm Master Discoveries (Su)
- **Description:** An ectoplasm master is able to select the following alchemist discoveries, in addition to general discoveries.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** An ectoplasm master is able to select the following alchemist discoveries, in addition to general discoveries. Ectoplasmic Mutagen : Whenever the ectoplasm master imbibes a mutagen, his living flesh transmutes into ectoplasm, causing him to take on a semiliquid form. He no longer gains a natural armor bonus from his mutagen, but instead becomes immune to critical hits and precision damage (such as sneak attacks) while under the mutagen’s effects. An ectoplasm master must be at least 6th level to learn this discovery. Ectoplasmic Servant : An ectoplasm master who selects this discovery adds all summon monster spells of 6th level or lower to his alchemist formula list as ectoplasmic extracts. Whenever he summons a creature using an ectoplasmic extract, the creature must appear in a square adjacent to his own, and it gains the ectoplasmic creature template. Creatures summoned using ectoplasmic extracts cannot have templates other than the ectoplasmic creature template. Siphon Bomb : The ectoplasm master’s bombs can be modified to neutralize and crystallize the ectoplasmic energy of haunts and incorporeal undead. A siphon bomb deals full damage to incorporeal creatures as if it were a force effect, but deals only nonlethal damage to corporeal creatures. A siphon bomb also damages haunts, provided the siphon bomb explodes within a haunt’s area of effect. This discovery modifies the alchemist’s bombs and doesn’t stack with other discoveries that modify bombs.
- **Implementation flags:**
  - haunt subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Ectoplasmic Extracts (Su)
- Ectoplasm Master Discoveries (Su)
