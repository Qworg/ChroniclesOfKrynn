# Rogue - Kitsune Trickster

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Kitsune Trickster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Kitsune%20Trickster
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Kitsune’s Guile (Ex); Kitsune’s Charm (Sp); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Kitsune’s Guile (Ex)
- **Description:** At 1st level, a trickster relies on her intellect as much as her personality.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a trickster relies on her intellect as much as her personality. She adds her Intelligence modifier on Bluff, Diplomacy, Disguise, and Sense Motive checks.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Kitsune’s Charm (Sp)
- **Description:** At 3rd level, a kitsune trickster can use charm person once per day as a spell-like ability (caster level equal to her rogue level – 2).
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 3, 6.
  - Mechanics summary: At 3rd level, a kitsune trickster can use charm person once per day as a spell-like ability (caster level equal to her rogue level – 2). At 6th level, and every three levels thereafter, the kitsune trickster gains an additional daily use of this ability.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Kitsune’s Guile (Ex)
- Kitsune’s Charm (Sp)
- Rogue Talents
- Advanced Talents

