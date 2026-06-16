# Warrior - Varisian Free-Style Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Varisian Free-Style Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Varisian%20Free-Style%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Martial Flexibility (Ex); Free Fighting Style (Ex)
- **Replaced / altered class features:** the bonus feats gained at 1st level, 6th level, 10th level, and 12th level, as well as weapon training and weapon mastery; armor training

## Replacement details

### Alters: the fighter’s class skills

- **Archetype feature:** Class Skills
- **Description:** A Varisian free-style fighter receives Escape Artist and Knowledge (local) as class skills, but does not receive Knowledge (dungeoneering) or Ride as class skills.
- **Mechanics:**
  - Mechanics summary: A Varisian free-style fighter receives Escape Artist and Knowledge (local) as class skills, but does not receive Knowledge (dungeoneering) or Ride as class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the bonus feats gained at 1st level, 6th level, 10th level
- **Archetype feature:** Martial Flexibility (Ex)
- **Description:** A Varisian free-style fighter gains martial flexibility ACG as per the brawler class feature, treating his fighter level as his brawler level for the purposes of this ability.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 6, 10, 12.
  - Mechanics summary: A Varisian free-style fighter gains martial flexibility ACG as per the brawler class feature, treating his fighter level as his brawler level for the purposes of this ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: 12th level, as well as weapon training and weapon mastery

- **Archetype feature:** Martial Flexibility (Ex)
- **Description:** A Varisian free-style fighter gains martial flexibility ACG as per the brawler class feature, treating his fighter level as his brawler level for the purposes of this ability.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 6, 10, 12.
  - Mechanics summary: A Varisian free-style fighter gains martial flexibility ACG as per the brawler class feature, treating his fighter level as his brawler level for the purposes of this ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: armor training

- **Archetype feature:** Free Fighting Style (Ex)
- **Description:** At 3rd level, a Varisian freestyle fighter can freely mix two of the styles he knows into a more flexible style.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 11, 15.
  - Mechanics summary: At 3rd level, a Varisian freestyle fighter can freely mix two of the styles he knows into a more flexible style. A Varisian free-style fighter can have an additional style feat stance active simultaneously with his first style feat stance. He can enter all of his allowed stances as a move action or one stance as a swift action. At 11th level, a Varisian free-style fighter can have the stances of up to two additional style feats active at the same time. At 15th level, a Varisian free-style fighter can have the stances of up to three additional style feats active at the same time.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

## Parsed source feature headings

- Class Skills
- Martial Flexibility (Ex)
- Free Fighting Style (Ex)

