# Paladin - Hunting Paladin

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Hunting Paladin
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Hunting%20Paladin
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Weapon and Armor Proficiency; Hunt Evil (Su); Detect Evil (Su); Smite Evil (Su); Spells; Tireless Aura (Su)
- **Replaced / altered class features:** Class Skills; Armor Proficiencies; Smite Evil; Detect Evil; Spells; Aura of Resolve

## Replacement details

### Alters: the paladin’s class skills

- **Archetype feature:** Class Skills
- **Description:** A hunting paladin adds Knowledge (nature), Perception, Stealth, and Survival as class skills.
- **Mechanics:**
  - Mechanics summary: A hunting paladin adds Knowledge (nature), Perception, Stealth, and Survival as class skills. She does not gain Diplomacy, Heal, Knowledge (nobility), or Spellcraft as class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, ki/monk hook.

### Alters: the paladin’s armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A hunting paladin is not proficient with heavy armor.
- **Mechanics:**
  - Mechanics summary: A hunting paladin is not proficient with heavy armor.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the use of smite evil gained at 1st level

- **Archetype feature:** Hunt Evil (Su)
- **Description:** Once per day, a hunting paladin can designate a single evil creature within her sight or one that she has determined to be evil by declaring it the target of her hunt and following its tracks; this allows her to add her Charisma modifier as a bonus on Survival checks to follow that creature’s tracks and on Perception and Stealth checks opposed by the target of her hunt.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: Once per day, a hunting paladin can designate a single evil creature within her sight or one that she has determined to be evil by declaring it the target of her hunt and following its tracks; this allows her to add her Charisma modifier as a bonus on Survival checks to follow that creature’s tracks and on Perception and Stealth checks opposed by the target of her hunt. She can sense her target’s presence and location, which lets her pinpoint her target’s location when within 10 feet; if the target has concealment, she can roll twice and use the better result on rolls to determine whether she misses due to the concealment. She gains uncanny dodge as per the barbarian class feature against her target. This ability ends after 24 hours (unless she spends the next day’s use of this ability to continue hunting the same target), after the hunting paladin or the target is killed or when she designates a new target for her hunt.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, smite hook, ki/monk hook.

### Alters: detect evil

- **Archetype feature:** Detect Evil (Su)
- **Description:** A hunting paladin cannot use this ability as a move action.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A hunting paladin cannot use this ability as a move action. However, when a hunting paladin has successfully followed a creature’s tracks for at least 1 minute, she can discern whether the tracked creature’s alignment was evil, as if she had cast detect evil in its presence and concentrated for 3 rounds.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: smite evil

- **Archetype feature:** Smite Evil (Su)
- **Description:** A hunting paladin gains this ability at 4th level, and it functions at her paladin level – 3.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: A hunting paladin gains this ability at 4th level, and it functions at her paladin level – 3. She can expend a daily use of smite evil to gain an additional daily use of hunt evil. She can use smite evil and hunt evil against the same target.
- **Implementation flags:**
  - Likely existing hooks: smite hook.

### Alters: spells

- **Archetype feature:** Spells
- **Description:** For each level of spell she can cast, a hunting paladin can prepare and cast one spell per day from the ranger spell list rather than the paladin spell list.
- **Mechanics:**
  - Mechanics summary: For each level of spell she can cast, a hunting paladin can prepare and cast one spell per day from the ranger spell list rather than the paladin spell list.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: aura of resolve

- **Archetype feature:** Tireless Aura (Su)
- **Description:** At 8th level, a hunting paladin becomes immune to fatigue and sleep effects, and allies within 10 feet gain a +4 bonus on saving throws to avoid becoming fatigued or falling asleep.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a hunting paladin becomes immune to fatigue and sleep effects, and allies within 10 feet gain a +4 bonus on saving throws to avoid becoming fatigued or falling asleep.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Class Skills
- Weapon and Armor Proficiency
- Hunt Evil (Su)
- Detect Evil (Su)
- Smite Evil (Su)
- Spells
- Tireless Aura (Su)

