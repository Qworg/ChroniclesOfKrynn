# Ranger - Planar Scout

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Planar Scout
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Planar%20Scout
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Planar Empathy (Ex); Planar Terrains (Ex); Planar Bond (Su); Planar Adaptation (Su)
- **Replaced / altered class features:** Class Skills; Wild Empathy; Favored Terrain; Hunter's Bond; Evasion; Improved Evasion

## Replacement details

### Alters: the ranger’s skills

- **Archetype feature:** Class Skills
- **Description:** A planar scout gains Knowledge (planes) as a class skill but does not gain Knowledge (dungeoneering) as a class skill.
- **Mechanics:**
  - Mechanics summary: A planar scout gains Knowledge (planes) as a class skill but does not gain Knowledge (dungeoneering) as a class skill.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: wild empathy

- **Archetype feature:** Planar Empathy (Ex)
- **Description:** A planar scout can use wild empathy only on animals with the extraplanar subtype.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A planar scout can use wild empathy only on animals with the extraplanar subtype. He can use this ability to influence outsiders with an Intelligence score of 1 or 2, but he takes a –4 penalty on the check.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Alters: favored terrain

- **Archetype feature:** Planar Terrains (Ex)
- **Description:** At 3rd level, a planar scout gains a planar terrain (see the sidebar on page 9).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a planar scout gains a planar terrain (see the sidebar on page 9). Planar terrains function in all ways like a ranger’s favored terrain; he must select a new plane each time he gains a favored terrain.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook.

### Replaces: hunter’s bond

- **Archetype feature:** Planar Bond (Su)
- **Description:** At 4th level, rather than forge a bond with an animal or his allies, a planar scout forms a bond with a specific plane.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 8, 10, 9, 14.
  - Mechanics summary: At 4th level, rather than forge a bond with an animal or his allies, a planar scout forms a bond with a specific plane. The planar scout becomes infused with the essence of his plane of choice, taking on physical characteristics of denizens native to his chosen plane as well as the abilities listed below. Aligned Plane : If the planar scout selects a plane with an alignment trait, he gains a +1 bonus on attack and damage rolls against outsiders and creatures with the extraplanar subtype whose alignments oppose this alignment trait. This bonus increases by 1 at 8th level and every 4 levels thereafter. Astral Plane : Each day, the planar scout can teleport up to 5 feet per ranger level as a move action. This must be used in 5-foot increments.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook, ki/monk hook, AC/natural armor bonus.

### Replaces: evasion and improved evasion

- **Archetype feature:** Planar Adaptation (Su)
- **Description:** At 9th level a planar scout gains planar adaptation when on his bonded plane.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9, 16.
  - Mechanics summary: At 9th level a planar scout gains planar adaptation when on his bonded plane. At 16th level he confers this protection to all allies within a 30-foot spread. Some classes, like the ranger, interact directly with terrain, and class abilities like favored terrain can become complicated in a plane-hopping campaign. With this latter solution, you should work with ranger players to help them anticipate the terrains featured in your upcoming campaign, with new categories like crystalline (for realms in the Plane of Earth or under Elysium, where immense crystal formations are common), living (for truly sentient realms like portions of the Abyss), or void (for empty reaches in the Astral Pl...
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored terrain hook, ki/monk hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Class Skills
- Hunter's Bond

## Parsed source feature headings

- Class Skills
- Planar Empathy (Ex)
- Planar Terrains (Ex)
- Planar Bond (Su)
- Planar Adaptation (Su)

