# Paladin - Sacred Servant

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Sacred Servant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Sacred%20Servant
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Smite Evil (Su); Spells; Divine Bond (Su); Call Celestial Ally (Sp)
- **Replaced / altered class features:** aura of resolve

## Replacement details

### Replaces: smite evil

- **Archetype feature:** Smite Evil (Su)
- **Description:** This functions as the paladin ability, but the sacred servant can smite evil one additional time per day at 7th level, and every six levels thereafter (instead of 4th level and every three levels thereafter).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7, 4.
  - Mechanics summary: This functions as the paladin ability, but the sacred servant can smite evil one additional time per day at 7th level, and every six levels thereafter (instead of 4th level and every three levels thereafter).
- **Implementation flags:**
  - Likely existing hooks: smite hook.

### Replaces: aura of resolve

- **Archetype feature:** Call Celestial Ally (Sp)
- **Description:** At 8th level, a sacred servant can call upon her deity for aid, in the form of a powerful servant.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 8, 12, 16.
  - Mechanics summary: At 8th level, a sacred servant can call upon her deity for aid, in the form of a powerful servant. This allows the sacred servant to cast lesser planar ally once per week as a spell-like ability without having to pay the material component cost or the servant (for reasonable tasks). At 12th level, this improves to planar ally and at 16th level, this improves to greater planar ally . The sacred servant’s caster level for this effect is equal to her paladin level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Smite Evil (Su)
- Spells
- Divine Bond (Su)
- Call Celestial Ally (Sp)

