# Warrior - Swarm Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Swarm Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Swarm%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Athletic Prowess (Ex); Mobility (Ex); Safety in Numbers (Ex); Bonus Teamwork Feats (Ex); Bonus Feats (Ex); Share Space (Ex); Strike the Underbelly (Ex); Always Underfoot (Ex); Soft Underbelly (Ex)
- **Replaced / altered class features:** bravery; the bonus combat feats the fighter normally receives at those levels; weapon training 1; weapon training 2; weapon training 3 and 4; weapon mastery

## Replacement details

### Replaces: the bonus feat a fighter gains at first level, and can’t be replaced at a later level

- **Archetype feature:** Mobility (Ex)
- **Description:** The swarm fighter gains Mobility as a bonus feat, even if she does not meet the prerequisites.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: The swarm fighter gains Mobility as a bonus feat, even if she does not meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: bravery

- **Archetype feature:** Safety in Numbers (Ex)
- **Description:** A swarm fighter benefits greatly from the proximity of her allies.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A swarm fighter benefits greatly from the proximity of her allies. She gains a morale bonus on saves against fear effects equal to the number of allies within 20 feet of her. This bonus can’t exceed half her level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: the bonus combat feats the fighter normally receives at those levels

- **Archetype feature:** Bonus Teamwork Feats (Ex)
- **Description:** At 2nd level and every 4 levels thereafter, the swarm fighter gains a bonus Teamwork Feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level and every 4 levels thereafter, the swarm fighter gains a bonus Teamwork Feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: weapon training 1

- **Archetype feature:** Share Space (Ex)
- **Description:** At 5th level, the swarm fighter can move into the space of another creature at least one size category larger than she is.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, the swarm fighter can move into the space of another creature at least one size category larger than she is. She may end her movement in, and make attacks from, that space. She must succeed at the Acrobatics check for moving through an occupied square to move into a space occupied by an enemy. While sharing the space of another creature, she gains a +2 shield bonus to AC and a +1 circumstance bonus on Reflex saves.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: weapon training 2

- **Archetype feature:** Strike the Underbelly (Ex)
- **Description:** At 9th level, creatures with which the swarm fighter shares a space are denied their Dexterity bonus to Armor Class against the swam fighter’s attacks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, creatures with which the swarm fighter shares a space are denied their Dexterity bonus to Armor Class against the swam fighter’s attacks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 3

- **Archetype feature:** Always Underfoot (Ex)
- **Description:** At 13th level, the swarm fighter gains Step Up as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13, 17.
  - Mechanics summary: At 13th level, the swarm fighter gains Step Up as a bonus feat. A creature sharing a square with the swarm fighter is considered adjacent for the purposes of this feat. At 17th level, the swarm fighter gains Following Step as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: 4

- **Archetype feature:** Always Underfoot (Ex)
- **Description:** At 13th level, the swarm fighter gains Step Up as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13, 17.
  - Mechanics summary: At 13th level, the swarm fighter gains Step Up as a bonus feat. A creature sharing a square with the swarm fighter is considered adjacent for the purposes of this feat. At 17th level, the swarm fighter gains Following Step as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: weapon mastery

- **Archetype feature:** Soft Underbelly (Ex)
- **Description:** At 20th level, any attacks made against creatures with which the swarm fighter shares a space automatically confirm all critical threats.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, any attacks made against creatures with which the swarm fighter shares a space automatically confirm all critical threats.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Athletic Prowess (Ex)
- Mobility (Ex)
- Safety in Numbers (Ex)
- Bonus Teamwork Feats (Ex)
- Bonus Feats (Ex)
- Share Space (Ex)
- Strike the Underbelly (Ex)
- Always Underfoot (Ex)
- Soft Underbelly (Ex)

