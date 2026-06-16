# Cleric - Demonic Apostle

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Demonic Apostle
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Demonic%20Apostle
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Demonic Magic; Demonic Familiar; Demonic Channel (Su)
- **Replaced / altered class features:** channel energy

## Replacement details

### Replaces: channel energy

- **Archetype feature:** Demonic Channel (Su)
- **Description:** At 1st level, a demonic apostle can channel demonic energy to damage creatures of lawful and good alignment, or, at higher levels, bolster the abilities of chaotic evil allies.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 5, 9.
  - Mechanics summary: At 1st level, a demonic apostle can channel demonic energy to damage creatures of lawful and good alignment, or, at higher levels, bolster the abilities of chaotic evil allies. Channeling this energy causes a 30-foot-radius burst centered on the cleric. Creatures within the burst that are lawful or good take 1d6 points of damage, plus 1d6 points of damage for every two levels the cleric possesses beyond 1st (2d6 at 3rd, 3d6 at 5th, and so on). Creatures that take damage from the channeled demonic energy receive a Fortitude save to halve the damage. The DC of this save is equal to 10 + 1/2 the demonic apostle’s level + the demonic apostle’s Charisma modifier. Lawful good creatures take a –2 penalty on this saving throw.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, saving throw hook, save DC calculation, spellcasting/spell-list hook, rage/rage-power hook.

## Parsed source feature headings

- Demonic Magic
- Demonic Familiar
- Demonic Channel (Su)

