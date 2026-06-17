# Wizard - Runesage

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Runesage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Runesage
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Runic Focus (Su)
- **Replaced / altered class features:** Arcane Bond; Arcane School

## Replacement details

### Alters: arcane bond; replaces arcane school

- **Archetype feature:** Runic Focus (Su)
- **Description:** The wizard replaces both school specialization and ordinary bonding with a rune-inscribed orbiting focus stone.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Activated during spell preparation by meditating on the focus; afterward it orbits automatically
  - Duration: Active until the next spell preparation session
  - Uses: Prepared once per spell-prep cycle; no separate daily cap
  - Core function:
    - Create a runic focus, a small stone engraved with a Thassilonian rune that functions like an ioun stone.
    - Meditate on that focus while preparing spells, after which it orbits the wizard's head.
    - The inscribed rune alters spellcasting in archetype-specific ways defined by the full source.
    - The wizard must be a universalist and gains no normal school specialization package.
  - Scaling: Further benefits depend on the full archetype source as the wizard advances.
  - Interactions: This feature replaces both arcane bond and arcane school simultaneously.
  - Edge cases: Losing the focus suspends its benefits until the wizard can recreate and reattune it during a later preparation period.
  - Implementation flags:
    - Likely existing hooks: orbiting ioun-stone-style item, universalist lock, meditation during spell prep, preparation-linked activation.

## Parsed source feature headings

- Runic Focus (Su)
