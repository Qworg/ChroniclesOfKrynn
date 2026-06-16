# Warrior - Aquanaut

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Aquanaut
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Aquanaut
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Armor Proficiency; Piercing Focus; Tidal Celerity; Aquadynamic Paragon; Underwater Training
- **Replaced / altered class features:** bravery; armor training and armor mastery; weapon training

## Replacement details

### Alters: the fighter’s armor proficiency

- **Archetype feature:** Armor Proficiency
- **Description:** An aquanaut is proficient with light and medium armor, but not with shields.
- **Mechanics:**
  - Mechanics summary: An aquanaut is proficient with light and medium armor, but not with shields.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: bonus feats and weapon mastery

- **Archetype feature:** Piercing Focus
- **Description:** If an aquanaut takes a fighter bonus feat that normally requires selecting a single weapon (except weapon proficiency feats), he can instead apply the feat to all melee piercing weapons with which he is already proficient and that meet all other prerequisites for that feat.
- **Mechanics:**
  - Mechanics summary: If an aquanaut takes a fighter bonus feat that normally requires selecting a single weapon (except weapon proficiency feats), he can instead apply the feat to all melee piercing weapons with which he is already proficient and that meet all other prerequisites for that feat. This ability counts as having the feat for each such individual weapon for the purpose of meeting prerequisites. This ability also applies to the weapon mastery class feature.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: bravery

- **Archetype feature:** Tidal Celerity
- **Description:** At 2nd level, an aquanaut gains a +1 bonus on Reflex saves and saving throws against effects that would immobilize or paralyze him.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an aquanaut gains a +1 bonus on Reflex saves and saving throws against effects that would immobilize or paralyze him. This bonus increases by 1 for every 4 levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: armor training

- **Archetype feature:** Aquadynamic Paragon
- **Description:** At 3rd level, an aquanaut gains a swim speed equal to his unmodified base land speed (if he has a racial swim speed, he instead increases it by 10 feet) and can choose to have a neutral buoyancy once per turn as a free action.
- **Mechanics:**
  - Level hooks: 3, 7, 11, 15, 19.
  - Mechanics summary: At 3rd level, an aquanaut gains a swim speed equal to his unmodified base land speed (if he has a racial swim speed, he instead increases it by 10 feet) and can choose to have a neutral buoyancy once per turn as a free action. At 7th level, he can choose any of the five states of buoyancy once per turn as a free action, and can take his buoyancy movement as part of that free action instead of at the end of his turn without becoming off-balance and without requiring a Swim check; additionally, he can choose to double or halve how far a current moves him. At 11th level, whenever he takes a move, double move, withdraw, or run action underwater, he can leave a current behind him in the squares along his path; this current has a speed of 10 feet in the direction of his movement (if his movement was circuitous, so is the current) and lasts until the beginning of his next turn. At 15th level, as a full round action, an aquanaut can spin ferociously underwater, creating a whirlpool around himself with a spinning force that drags all creatures within 120 feet of him 30 feet closer to him. Creatures closer than 30 feet spend the 30 feet of movement circling around the aquanaut in a single direction of his choice. The whirlpool isn’t fast enough to deal damage, but the aquanaut is unaffected by his own whirlpool, allowing him to make attacks of opportunity against creatures moving in it.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor mastery

- **Archetype feature:** Aquadynamic Paragon
- **Description:** At 3rd level, an aquanaut gains a swim speed equal to his unmodified base land speed (if he has a racial swim speed, he instead increases it by 10 feet) and can choose to have a neutral buoyancy once per turn as a free action.
- **Mechanics:**
  - Level hooks: 3, 7, 11, 15, 19.
  - Mechanics summary: At 3rd level, an aquanaut gains a swim speed equal to his unmodified base land speed (if he has a racial swim speed, he instead increases it by 10 feet) and can choose to have a neutral buoyancy once per turn as a free action. At 7th level, he can choose any of the five states of buoyancy once per turn as a free action, and can take his buoyancy movement as part of that free action instead of at the end of his turn without becoming off-balance and without requiring a Swim check; additionally, he can choose to double or halve how far a current moves him. At 11th level, whenever he takes a move, double move, withdraw, or run action underwater, he can leave a current behind him in the squares along his path; this current has a speed of 10 feet in the direction of his movement (if his movement was circuitous, so is the current) and lasts until the beginning of his next turn. At 15th level, as a full round action, an aquanaut can spin ferociously underwater, creating a whirlpool around himself with a spinning force that drags all creatures within 120 feet of him 30 feet closer to him. Creatures closer than 30 feet spend the 30 feet of movement circling around the aquanaut in a single direction of his choice. The whirlpool isn’t fast enough to deal damage, but the aquanaut is unaffected by his own whirlpool, allowing him to make attacks of opportunity against creatures moving in it.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: weapon training

- **Archetype feature:** Underwater Training
- **Description:** At 5th level, an aquanaut chooses bludgeoning, slashing, or piercing melee weapons.
- **Mechanics:**
  - Level hooks: 5, 17.
  - Mechanics summary: At 5th level, an aquanaut chooses bludgeoning, slashing, or piercing melee weapons. If he chooses piercing melee weapons, he gains a +1 bonus on attack and damage rolls with those weapons when attacking underwater. If he chooses bludgeoning or slashing melee weapons, he can ignore the usual underwater penalties for attacking with those weapons (see page 44). At 9th and 13th levels, he can choose another type of melee weapon, applying this ability’s initial benefit to his new choice and gaining an additional +1 bonus on attack and damage rolls to his previously chosen weapon types. At 17th level, he gains an additional +1 bonus on attack and damage rolls with all three types.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Armor Proficiency
- Piercing Focus
- Tidal Celerity
- Aquadynamic Paragon
- Underwater Training

