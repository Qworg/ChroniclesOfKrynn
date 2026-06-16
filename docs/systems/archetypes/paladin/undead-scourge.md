# Paladin - Undead Scourge

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Undead Scourge
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Undead%20Scourge
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Smite Evil (Su); Aura of Life (Su); Undead Annihilation (Su)
- **Replaced / altered class features:** aura of resolve; aura of justice

## Replacement details

### Replaces: aura of resolve

- **Archetype feature:** Aura of Life (Su)
- **Description:** At 8th level, an undead scourge emits a 10-foot aura of life around her that weakens undead creatures.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, an undead scourge emits a 10-foot aura of life around her that weakens undead creatures. Undead in this aura take a –4 penalty on Will saves made to resist positive energy. In addition, undead in this aura do not regain hit points from channeled negative energy.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, saving throw hook.

### Replaces: aura of justice

- **Archetype feature:** Undead Annihilation (Su)
- **Description:** At 11th level, an undead scourge can expend one use of her smite evil ability as a standard action and make a single melee attack against an undead creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, an undead scourge can expend one use of her smite evil ability as a standard action and make a single melee attack against an undead creature. If this attack hits, the undead creature must make a Will save or be destroyed. The save DC is equal to 10 + 1/2 the undead scourge’s level + the undead scourge’s Charisma modifier. If the attack misses, the smite evil is wasted without effect.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, smite hook.

## Parsed source feature headings

- Smite Evil (Su)
- Aura of Life (Su)
- Undead Annihilation (Su)

