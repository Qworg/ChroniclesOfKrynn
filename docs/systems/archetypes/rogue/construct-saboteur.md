# Rogue - Construct Saboteur

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Construct Saboteur
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Construct%20Saboteur
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Arcane Strike (Ex); Arcane Sabotage (Su); Dismantling Strikes (Ex)
- **Replaced / altered class features:** Class Skills; Trapfinding; 2nd-level Rogue Talent; Trap Sense

## Implementation details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A construct saboteur has Knowledge (arcana) and Knowledge (engineering) but does not have Knowledge (dungeoneering) and Knowledge (local) as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A construct saboteur has Knowledge (arcana) and Knowledge (engineering) but does not have Knowledge (dungeoneering) and Knowledge (local) as class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trapfinding

- **Archetype feature:** Arcane Strike (Ex)
- **Description:** A construct saboteur gains Arcane Strike as a bonus feat, even if she does not meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A construct saboteur gains Arcane Strike as a bonus feat, even if she does not meet the prerequisites. She uses her construct saboteur class level in place of her caster level for the purposes of the feat’s effects.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Arcane Sabotage (Su)
- **Description:** At 2nd level, a construct saboteur can user her arcane prowess to hinder constructs.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a construct saboteur can user her arcane prowess to hinder constructs. Whenever she uses Arcane Strike to attack a construct, she can activate one of the following sabotage abilities that she has gained. She gains one sabotage ability at 2nd level and can thereafter select any sabotage ability in place of a rogue talent. The DC for any sabotage ability that requires a saving throw is 10 + half the construct saboteur’s level + the construct saboteur’s Intelligence modifier. Diminish Senses : A jolt of energy overwhelms the construct’s senses. The construct is blinded for 1 round. A construct saboteur can forgo dealing sneak attack damage to extend the duration of the blindness by 1 round for every 2d6 points of sneak attack damage forgone in this way. A construct can negate this effect with a successful Will save. Magic Vulnerability : A field of energy enshrouds the construct, disabling its immunity to magic for 1 round. The construct instead gains spell resistance equal to 15 + its CR. A construct saboteur can forgo dealing sneak attack damage to reduce this spell resistance. The construct’s spell resistance is reduced by 1 for every 1d6 points of sneak attack damage forgone in this way. A construct can negate this effect with a successful Will save. Overwhelming Jolt : A sudden burst of power moves over the surface of the construct, giving it the staggered condition for 1 round. A construct can negate this effect with a successful Will save. Slowing Pulse : A surge of slowing energy ripples through the construct, reducing its speed by 5 feet for a number of rounds equal to the construct saboteur’s Intelligence modifier. A construct saboteur can forgo dealing sneak attack damage to reduce the construct’s speed by an additional 5 feet for every 1d6 points of sneak attack damage forgone in this way. This ability cannot lower a construct’s movement speed below 5 feet. A construct can reduce the duration of this effect to 1 round with a successful Reflex save.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Dismantling Strikes (Ex)
- **Description:** At 3rd level, a construct saboteur ignores the first 2 points of DR or hardness when attacking constructs.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a construct saboteur ignores the first 2 points of DR or hardness when attacking constructs. This value increases by 2 every 3 levels after 3rd, to a total of 12 points of DR or hardness ignored at level 18.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Class Skills
- Arcane Strike (Ex)
- Arcane Sabotage (Su)
- Dismantling Strikes (Ex)
