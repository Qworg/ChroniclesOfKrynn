# Warrior - Skirmisher

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Skirmisher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Skirmisher
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Errata; Armor Proficiency; Wilderness Training (Ex); Conditioning (Ex); Reconnaissance Training (Ex); Mobility Training (Ex); Mobile Mastery (Ex)
- **Replaced / altered class features:** Armor Proficiencies; Class Skills; Skill Ranks; 2nd-level Bonus Feat; Bravery; Armor Training; Armor Mastery

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Errata
- **Description:** Link Not all battles are fought between armies; sometimes, a settlement or nation faces a threat too dire to fight in the open.
- **Detailed mechanics:**
  - **Rules text to implement:** Link Not all battles are fought between armies; sometimes, a settlement or nation faces a threat too dire to fight in the open. In order to repel a much larger enemy force, some soldiers must abandon equipment and tactics designed for open-field warfare and instead rely on ambushes, hit-andrun tactics, and sabotage to whittle down their enemies’ strength and morale. Skirmishers use harsh weather and unforgiving terrain to their advantage, attacking isolated groups of enemies that cannot flee or fight back effectively. Many tribal warriors also employ small-unit tactics because it is part of their warrior culture, because they cannot field a large army, or simply because they refuse to fight on the enemy’s terms.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: the fighter’s armor proficiency

- **Archetype feature:** Armor Proficiency
- **Description:** A skirmisher is proficient with light armor and shields but not with medium armor, heavy armor, or tower shields.
- **Detailed mechanics:**
  - **Rules text to implement:** A skirmisher is proficient with light armor and shields but not with medium armor, heavy armor, or tower shields.
- **Implementation flags:**
  - ki subsystem.

### Alters: the fighter’s class skills and skill ranks per level

- **Archetype feature:** Wilderness Training (Ex)
- **Description:** A skirmisher relies on his skills and the element of surprise rather than the heaviest shields and armor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A skirmisher relies on his skills and the element of surprise rather than the heaviest shields and armor. He gains Acrobatics and Stealth as class skills. In addition, the skirmisher gains a number of skill ranks at each level equal to 4 + his Intelligence modifier, instead of 2 + his Intelligence modifier.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: the bonus feat the fighter normally receives at 2nd level

- **Archetype feature:** Conditioning (Ex)
- **Description:** At 2nd level, a skirmisher becomes more resistant to mental and physical threats that are commonly employed by his enemies or often encountered in the terrain in which he operates.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a skirmisher becomes more resistant to mental and physical threats that are commonly employed by his enemies or often encountered in the terrain in which he operates. The skirmisher must choose one of the specializations below, gaining a +1 bonus on saving throws of the appropriate type. This bonus increases by 1 for every 4 levels beyond 2nd. Alpine Training (Ex) : A skirmisher operating in mountainous terrain becomes resistant to cold climates and the rigors of long treks at high altitudes. He gains a bonus on Fortitude saving throws against altitude sickness, exposure to cold weather, and other effects that cause fatigue or exhaustion. Counter-Interrogation Training (Ex) : A skirmisher undertaking infiltration missions learns to resist interrogation and persuasion. The skirmisher gains a bonus on Will saving throws against charms and divinations. Jungle Training (Ex) : Through repeated exposure, a skirmisher operating in jungles and wetlands builds up a tolerance against pathogens and toxins. He gains a bonus on Fortitude saving throws against disease and poison. Light Infantry Training (Ex) : A skirmisher fighting in a light infantry unit learns to avoid fire from enemy artillery, siege weapons, and spellcasters. He gains a bonus on Reflex saving throws against attacks that deal half damage on a successful save (such as the fireball spell) but not against traps, natural hazards, or environmental effects.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - feat grant/prerequisite handling.

### Replaces: bravery

- **Archetype feature:** Reconnaissance Training (Ex)
- **Description:** A skirmisher operating in heavily trapped or naturally hazardous areas learns to expertly avoid them.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** A skirmisher operating in heavily trapped or naturally hazardous areas learns to expertly avoid them. At 2nd level, he gains a +1 bonus on Reflex saving throws to avoid traps, natural hazards, and environmental effects. This bonus increases by 1 for every 4 levels beyond 2nd.
- **Implementation flags:**
  - ki subsystem.

### Replaces: armor training

- **Archetype feature:** Mobility Training (Ex)
- **Description:** At 3rd level, a skirmisher learns to be more maneuverable while wearing light or no armor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 15, 7.
  - **Rules text to implement:** At 3rd level, a skirmisher learns to be more maneuverable while wearing light or no armor. He gains a +1 dodge bonus to AC while wearing light or no armor and while carrying no more than a light load. Anything that causes the skirmisher to lose his Dexterity bonus to AC also causes the skirmisher to lose this dodge bonus. This bonus increases by 1 for every 4 levels beyond 3rd (to a maximum of +4 at 15th level). In addition, a skirmisher gains an enhancement bonus of +5 feet to his base speed. At 7th level, the bonus increases to +10 feet. This benefit applies only when he is wearing no armor or light armor, and when he is carrying no more than a light load.
- **Implementation flags:**
  - ki subsystem.

### Replaces: armor mastery

- **Archetype feature:** Mobile Mastery (Ex)
- **Description:** At 19th level, a skirmisher learns to position his body and conceal his body proportions with clothes so well that it is difficult to hit him.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, a skirmisher learns to position his body and conceal his body proportions with clothes so well that it is difficult to hit him. He gains a 20% miss chance on attacks against him. Mobile mastery functions even when the skirmisher is flat-footed, but not when he is immobilized or helpless, when he wears medium or heavy armor, or when he carries a medium or heavy load.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Errata
- Armor Proficiency
- Wilderness Training (Ex)
- Conditioning (Ex)
- Reconnaissance Training (Ex)
- Mobility Training (Ex)
- Mobile Mastery (Ex)
