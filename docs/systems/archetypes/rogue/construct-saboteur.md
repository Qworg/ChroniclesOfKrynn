# Rogue - Construct Saboteur

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Construct Saboteur
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Construct%20Saboteur
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Arcane Strike (Ex); Arcane Sabotage (Su); Dismantling Strikes (Ex)
- **Replaced / altered class features:** Class Skills; Trapfinding; 2nd-level Rogue Talent; Trap Sense

## Replacement details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A construct saboteur has Knowledge (arcana) and Knowledge (engineering) but does not have Knowledge (dungeoneering) and Knowledge (local) as class skills.
- **Mechanics:**
  - Mechanics summary: A construct saboteur has Knowledge (arcana) and Knowledge (engineering) but does not have Knowledge (dungeoneering) and Knowledge (local) as class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: trapfinding

- **Archetype feature:** Arcane Strike (Ex)
- **Description:** A construct saboteur gains Arcane Strike as a bonus feat, even if she does not meet the prerequisites.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A construct saboteur gains Arcane Strike as a bonus feat, even if she does not meet the prerequisites. She uses her construct saboteur class level in place of her caster level for the purposes of the feat’s effects.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Arcane Sabotage (Su)
- **Description:** At 2nd level, a construct saboteur can user her arcane prowess to hinder constructs.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a construct saboteur can user her arcane prowess to hinder constructs. Whenever she uses Arcane Strike to attack a construct, she can activate one of the following sabotage abilities that she has gained. She gains one sabotage ability at 2nd level and can thereafter select any sabotage ability in place of a rogue talent. The DC for any sabotage ability that requires a saving throw is 10 + half the construct saboteur’s level + the construct saboteur’s Intelligence modifier. The construct is blinded for 1 round. A construct saboteur can forgo dealing sneak attack damage to extend the duration of the blindness by 1 round for every 2d6 points of sneak attack damage forgone in this way.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook, sneak attack hook.

### Replaces: trap sense

- **Archetype feature:** Dismantling Strikes (Ex)
- **Description:** At 3rd level, a construct saboteur ignores the first 2 points of DR or hardness when attacking constructs.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a construct saboteur ignores the first 2 points of DR or hardness when attacking constructs. This value increases by 2 every 3 levels after 3rd, to a total of 12 points of DR or hardness ignored at level 18.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 2nd-level Rogue Talent

## Parsed source feature headings

- Class Skills
- Arcane Strike (Ex)
- Arcane Sabotage (Su)
- Dismantling Strikes (Ex)

