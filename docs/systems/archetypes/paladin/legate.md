# Paladin - Legate

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Legate
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Legate
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Celestial Armor (Sp)
- **Replaced / altered class features:** mercy

## Replacement details

### Replaces: mercy

- **Archetype feature:** Celestial Armor (Sp)
- **Description:** At 3rd level, a legate can conjure armor as a standard action.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 3, 6.
  - Mechanics summary: At 3rd level, a legate can conjure armor as a standard action. This ability acts as the spell instant armor (Pathfinder RPG Advanced Player’s Guide 229), using her paladin level as her caster level, except as follows. At 6th level and every 3 paladin levels thereafter, the armor gains an additional +1 enhancement bonus. These bonuses can be used to add any of the following armor special abilities: champion UE , fortification (heavy, light, or medium), invulnerability, or spell resistance (13, 15, 17, or 19). In addition, the legate can grant her armor the energy resistance special ability at the cost of a +3 bonus, the improved energy resistance special ability at the cost of a +5 bonus, or the righteous UE special ability at a cost of a +4 bonus. The armor must have least a +1 enhancement bonus before any special abilities can be added.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, paladin mercy hook.

## Parsed source feature headings

- Celestial Armor (Sp)

