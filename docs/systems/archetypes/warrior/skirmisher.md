# Warrior - Skirmisher

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Skirmisher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Skirmisher
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Errata; Armor Proficiency; Wilderness Training (Ex); Conditioning (Ex); Reconnaissance Training (Ex); Mobility Training (Ex); Mobile Mastery (Ex)
- **Replaced / altered class features:** Armor Proficiencies; Class Skills; Skill Ranks; 2nd-level Bonus Feat; Bravery; Armor Training; Armor Mastery

## Replacement details

### Replaces: the fighter’s armor proficiency

- **Archetype feature:** Armor Proficiency
- **Description:** A skirmisher is proficient with light armor and shields but not with medium armor, heavy armor, or tower shields.
- **Mechanics:**
  - Mechanics summary: A skirmisher is proficient with light armor and shields but not with medium armor, heavy armor, or tower shields.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Alters: the fighter’s class skills and skill ranks per level

- **Archetype feature:** Wilderness Training (Ex)
- **Description:** A skirmisher relies on his skills and the element of surprise rather than the heaviest shields and armor.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A skirmisher relies on his skills and the element of surprise rather than the heaviest shields and armor. He gains Acrobatics and Stealth as class skills. In addition, the skirmisher gains a number of skill ranks at each level equal to 4 + his Intelligence modifier, instead of 2 + his Intelligence modifier.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the bonus feat the fighter normally receives at 2nd level

- **Archetype feature:** Conditioning (Ex)
- **Description:** At 2nd level, a skirmisher becomes more resistant to mental and physical threats that are commonly employed by his enemies or often encountered in the terrain in which he operates.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a skirmisher becomes more resistant to mental and physical threats that are commonly employed by his enemies or often encountered in the terrain in which he operates. The skirmisher must choose one of the specializations below, gaining a +1 bonus on saving throws of the appropriate type. This bonus increases by 1 for every 4 levels beyond 2nd. He gains a bonus on Fortitude saving throws against altitude sickness, exposure to cold weather, and other effects that cause fatigue or exhaustion. The skirmisher gains a bonus on Will saving throws against charms and divinations. Jungle Training (Ex) : Through repeated exposure, a skirmisher operating in jungles and wetlands builds up a tolerance against pathogens and toxins.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook, ki/monk hook.
  - Needs implementation review: siege engines.

### Replaces: bravery

- **Archetype feature:** Reconnaissance Training (Ex)
- **Description:** A skirmisher operating in heavily trapped or naturally hazardous areas learns to expertly avoid them.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: A skirmisher operating in heavily trapped or naturally hazardous areas learns to expertly avoid them. At 2nd level, he gains a +1 bonus on Reflex saving throws to avoid traps, natural hazards, and environmental effects. This bonus increases by 1 for every 4 levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: armor training

- **Archetype feature:** Mobility Training (Ex)
- **Description:** At 3rd level, a skirmisher learns to be more maneuverable while wearing light or no armor.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 15, 7.
  - Mechanics summary: At 3rd level, a skirmisher learns to be more maneuverable while wearing light or no armor. He gains a +1 dodge bonus to AC while wearing light or no armor and while carrying no more than a light load. Anything that causes the skirmisher to lose his Dexterity bonus to AC also causes the skirmisher to lose this dodge bonus. This bonus increases by 1 for every 4 levels beyond 3rd (to a maximum of +4 at 15th level). In addition, a skirmisher gains an enhancement bonus of +5 feet to his base speed. At 7th level, the bonus increases to +10 feet.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: armor mastery

- **Archetype feature:** Mobile Mastery (Ex)
- **Description:** At 19th level, a skirmisher learns to position his body and conceal his body proportions with clothes so well that it is difficult to hit him.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a skirmisher learns to position his body and conceal his body proportions with clothes so well that it is difficult to hit him. He gains a 20% miss chance on attacks against him.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Armor Proficiencies
- 2nd-level Bonus Feat

## Parsed source feature headings

- Errata
- Armor Proficiency
- Wilderness Training (Ex)
- Conditioning (Ex)
- Reconnaissance Training (Ex)
- Mobility Training (Ex)
- Mobile Mastery (Ex)

