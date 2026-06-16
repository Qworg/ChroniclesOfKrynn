# Wizard - Runesage

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Runesage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Runesage
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Runic Focus (Su)
- **Replaced / altered class features:** Arcane Bond; Arcane School

## Replacement details

### Alters: arcane bond and replaces arcane school

- **Archetype feature:** Runic Focus (Su)
- **Description:** A runesage can use her knowledge of runes to create a runic focus, a small, semiprecious stone engraved with Thassilonian runes that she manipulates to alter her spellcasting abilities.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A runesage can use her knowledge of runes to create a runic focus, a small, semiprecious stone engraved with Thassilonian runes that she manipulates to alter her spellcasting abilities. In function, a runic focus behaves like an ioun stone. To activate a runic focus, the runesage must meditate on it as she prepares her spells. Following spell preparation, she tosses the gemstone into the air, after which it orbits around her head. A runic focus remains in orbit until the next time the runesage prepares her spells. A runesage does not have the option to specialize in an arcane school—all runesages must be universalists.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Runic Focus (Su)

