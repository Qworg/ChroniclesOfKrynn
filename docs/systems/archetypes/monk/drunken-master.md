# Monk - Drunken Master

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Drunken Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Drunken%20Master
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Drunken Ki (Su); Drunken Strength (Su); Drunken Courage (Su); Drunken Resilience (Ex); Firewater Breath (Su)
- **Replaced / altered class features:** still mind; purity of body; diamond body; diamond soul; empty body

## Replacement details

### Replaces: still mind

- **Archetype feature:** Drunken Ki (Su)
- **Description:** At 3rd level, a drunken master can drink a tankard of ale or strong alcohol and gain one temporary ki point.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 4.
  - Mechanics summary: At 3rd level, a drunken master can drink a tankard of ale or strong alcohol and gain one temporary ki point. The act of drinking is a standard action that does not provoke attacks of opportunity. The monk can have a maximum number of drunken ki points equal to 1 plus one additional point for every two levels thereafter (5th, 7th, and so on). The monk can gain this temporary ki even before he gains a ki pool at 4th level. These drunken ki points last for 1 hour or until spent, whichever is shorter. As long as he has at least 1 drunken ki point, the monk can spend 1 ki point as a swift action to move 5 feet without provoking attacks of opportunity.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: purity of body

- **Archetype feature:** Drunken Strength (Su)
- **Description:** At 5th level, a drunken master can spend 1 point of ki as a swift action to inflict 1d6 extra points of damage on a single successful melee attack.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 10, 15, 20.
  - Mechanics summary: At 5th level, a drunken master can spend 1 point of ki as a swift action to inflict 1d6 extra points of damage on a single successful melee attack. The monk can choose to apply the damage after the attack roll is made. At 10th level, the monk may spend 2 drunken ki points to increase the extra damage to 2d6. At 15th level, the monk may spend 3 drunken ki points to increase the extra damage to 3d6. At 20th level, the monk may spend 4 drunken ki points to increase the extra damage to 4d6. The monk must have at least 1 drunken ki point to use this ability.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: diamond body

- **Archetype feature:** Drunken Courage (Su)
- **Description:** At 11th level, a drunken master is immune to fear as long as he has at least 1 point of drunken ki.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a drunken master is immune to fear as long as he has at least 1 point of drunken ki.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, ki/monk hook.

### Replaces: diamond soul

- **Archetype feature:** Drunken Resilience (Ex)
- **Description:** At 13th level, a drunken master gains DR 1/— as long as he has at least 1 point of drunken ki.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13, 16, 19.
  - Mechanics summary: At 13th level, a drunken master gains DR 1/— as long as he has at least 1 point of drunken ki. At 16th level, the DR increases to 2/—. At 19th level, it increases to 3/—.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: empty body

- **Archetype feature:** Firewater Breath (Su)
- **Description:** At 19th level, a drunken master can take a drink and expel a gout of alcohol-fueled fire in a 30-foot cone.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a drunken master can take a drink and expel a gout of alcohol-fueled fire in a 30-foot cone. Creatures within the cone take 20d6 points of fire damage. A successful Reflex saving throw (DC 10 + 1/2 the monk’s level + the monk’s Wis modifier) halves the damage. Using this ability is a standard action that consumes 4 ki points from the monk’s ki pool. The monk must have at least 1 drunken ki point to use this ability.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, ki/monk hook.

## Parsed source feature headings

- Drunken Ki (Su)
- Drunken Strength (Su)
- Drunken Courage (Su)
- Drunken Resilience (Ex)
- Firewater Breath (Su)

