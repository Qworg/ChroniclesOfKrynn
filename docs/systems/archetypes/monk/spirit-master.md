# Monk - Spirit Master

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Spirit Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Spirit%20Master
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Resilient Soul (Ex); Spirit Combat (Su); Diamond Spirit (Ex); Spirit Burst (Su); Purifying Palm (Su); Spirit Flow (Su); Spirit Mastery (Su)
- **Replaced / altered class features:** still mind; maneuver training; purity of body; wholeness of body; quivering palm; empty body; perfect self

## Replacement details

### Replaces: still mind

- **Archetype feature:** Resilient Soul (Ex)
- **Description:** At 3rd level, a spirit master gains a +2 bonus on saving throws against necromancy spells and effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a spirit master gains a +2 bonus on saving throws against necromancy spells and effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: maneuver training

- **Archetype feature:** Spirit Combat (Su)
- **Description:** At 3rd level, a spirit master can charge his unarmed strike so it affects incorporeal creatures.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a spirit master can charge his unarmed strike so it affects incorporeal creatures. The spirit master’s unarmed strike deals half damage to incorporeal creatures, or full damage if it’s a magic weapon (such as via an amulet of mighty fists ). This benefit lasts for a number of rounds equal to the spirit master’s class level. A spirit master can use this ability a number of times per day equal to 3 + his Wisdom modifier.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: purity of body

- **Archetype feature:** Diamond Spirit (Ex)
- **Description:** At 5th level, a spirit master becomes fortified against the effects of energy drain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a spirit master becomes fortified against the effects of energy drain. When the spirit master gains a negative level, he does not take any penalties, his total hit points remain unchanged, and he is not considered lower level for the purpose of level-dependent variables. Once per day when attempting a Fortitude save to remove a temporary negative level, the spirit master may choose to automatically succeed. The spirit master still dies if his number of negative levels equals or exceeds his number of Hit Dice.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook.

### Replaces: wholeness of body

- **Archetype feature:** Spirit Burst (Su)
- **Description:** At 7th level, whenever a spirit master destroys an undead creature with a melee attack, he may as a free action expend 2 points from his ki pool to release an 15-foot-radius burst of positive energy centered on the destroyed creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, whenever a spirit master destroys an undead creature with a melee attack, he may as a free action expend 2 points from his ki pool to release an 15-foot-radius burst of positive energy centered on the destroyed creature. Undead creatures in the affected area each take a number of points of damage equal the number of Hit Dice of the destroyed creature.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: quivering palm

- **Archetype feature:** Purifying Palm (Su)
- **Description:** At 15th level, the spirit master gains the ability to alter the balance of positive and negative energy within an opponent’s body.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, the spirit master gains the ability to alter the balance of positive and negative energy within an opponent’s body. The spirit master can make a purifying palm attack once per day, and must announce his intention before making a melee attack roll. If his attack deals damage, the target must attempt a Will save (DC = 10 + 1/2 the spirit master’s class level + the spirit master’s Wisdom modifier). On a failed save, the target cannot channel energy, nor can it be healed by positive or negative energy. This effect lasts for 1 round per class level. If the target is an undead creature, it must succeed at its Will save or be instantly destroyed.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, ki/monk hook.

### Replaces: empty body

- **Archetype feature:** Spirit Flow (Su)
- **Description:** At 19th level, a spirit master can dramatically alter the flow of his own ki.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a spirit master can dramatically alter the flow of his own ki. As an immediate action, the spirit master can expend 3 ki points to alter his ki for a number of rounds equal to his class level.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: perfect self

- **Archetype feature:** Spirit Mastery (Su)
- **Description:** At 20th level, a spirit master gains DR 10/evil and becomes immune to ability drain and ability damage.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a spirit master gains DR 10/evil and becomes immune to ability drain and ability damage. Additionally, once per week, the spirit master may bring a dead creature back to life. This ability functions as true resurrection , except the spirit master may not resurrect a creature that has been dead for longer than 1 day per class level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Resilient Soul (Ex)
- Spirit Combat (Su)
- Diamond Spirit (Ex)
- Spirit Burst (Su)
- Purifying Palm (Su)
- Spirit Flow (Su)
- Spirit Mastery (Su)

