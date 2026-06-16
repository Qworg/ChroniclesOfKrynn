# Alchemist - Ectoplasm Master

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Ectoplasm Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Ectoplasm%20Master
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Ectoplasmic Extracts (Su); Ectoplasm Master Discoveries (Su)
- **Replaced / altered class features:** Brew Potion

## Replacement details

### Alters: extracts and replaces Brew Potion

- **Archetype feature:** Ectoplasmic Extracts (Su)
- **Description:** Instead of using alchemical reagents in order to create alchemical items (including his bombs, extracts, and mutagens), an ectoplasm master uses reagents such as corpse dust, crystallized ectoplasm, and similar reagents as alchemical catalysts.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: Instead of using alchemical reagents in order to create alchemical items (including his bombs, extracts, and mutagens), an ectoplasm master uses reagents such as corpse dust, crystallized ectoplasm, and similar reagents as alchemical catalysts. Just as with standard alchemists, the costs of these materials are insignificant and are comparable to the costs of the valueless material components of most spells. He adds all sorcerer/wizard spells of 6th level or lower from the necromancy school to his alchemist formula list (but must still learn each of these spells normally). If a spell appears on both the alchemist formula list and the sorcerer/wizard spell list, the ectoplasm master uses the lower of the two spell levels listed for the spell.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, alchemist bomb hook, mutagen hook.

## Parsed source feature headings

- Ectoplasmic Extracts (Su)
- Ectoplasm Master Discoveries (Su)

