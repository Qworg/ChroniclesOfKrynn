# Berserker - Numerian Liberator

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Numerian Liberator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Numerian%20Liberator
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skill; Hard Hitter (Ex); Disruptor; Hide from Constructs (Su); Rage Powers
- **Replaced / altered class features:** the uncanny dodge; improved uncanny dodge; indomitable will

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skill
- **Description:** A Numerian liberator gains Stealth as a class skill and removes Climb from her list of barbarian class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A Numerian liberator gains Stealth as a class skill and removes Climb from her list of barbarian class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the uncanny dodge

- **Archetype feature:** Hard Hitter (Ex)
- **Description:** At 2nd level, a Numerian liberator can make devastating attacks against objects and foes with breakable components.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a Numerian liberator can make devastating attacks against objects and foes with breakable components. Damage dealt by the barbarian’s attacks ignores an amount of an object’s or creature’s hardness (if any) equal to 1/2 her class level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Disruptor
- **Description:** At 5th level, for any foes in a Numerian liberator’s threatened area, the DC to cast spells defensively increases by 1.
- **Detailed mechanics:**
  - **Level hooks:** 5, 20.
  - **Rules text to implement:** At 5th level, for any foes in a Numerian liberator’s threatened area, the DC to cast spells defensively increases by 1. The DC increases by 1 again for every 5 levels thereafter (to a maximum increase of 4 at 20th level). If the barbarian gains the disruptive rage power, the two abilities stack.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: indomitable will

- **Archetype feature:** Hide from Constructs (Su)
- **Description:** At 14th level, a Numerian liberator can control her movement, breathing, body temperature, and other physiological signs to confuse the artificial visions of constructs.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a Numerian liberator can control her movement, breathing, body temperature, and other physiological signs to confuse the artificial visions of constructs. At will, the barbarian can make herself undetectable to constructs as if she were affected by a hide from undead spell that instead hides the subject from constructs. Intelligent constructs receive a Will save (DC 10 + 1/2 the barbarian’s level + the barbarian’s Constitution modifier) to see through this effect. The barbarian must expend 1 round of rage for each round she uses this ability.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the Numerian liberator archetype: deadly accuracy, energy absorption (fire), energy resistance (fire), greater energy resistance (fire), gearbreaker, guarded stance, lethal accuracy, lowlight vision, night vision, rolling dodge, reflexive dodge, surprise accuracy.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the Numerian liberator archetype: deadly accuracy, energy absorption (fire), energy resistance (fire), greater energy resistance (fire), gearbreaker, guarded stance, lethal accuracy, lowlight vision, night vision, rolling dodge, reflexive dodge, surprise accuracy.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skill
- Hard Hitter (Ex)
- Disruptor
- Hide from Constructs (Su)
- Rage Powers
