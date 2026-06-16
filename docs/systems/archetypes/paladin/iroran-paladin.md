# Paladin - Iroran Paladin

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Iroran Paladin
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Iroran%20Paladin
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skills; Confident Defense (Ex); Unarmed Strike; Aura of Law (Su); Sense Perfection (Su); Personal Trial (Su); Aura of Excellence (Su); Ki Pool (Su); Divine Body (Su); Aura of Perfection (Su)
- **Replaced / altered class features:** his proficiency with medium armor, heavy armor, and shields; aura of good; detect evil; smite evil

## Replacement details

### Replaces: his proficiency with medium armor, heavy armor, and shields

- **Archetype feature:** Confident Defense (Ex)
- **Description:** At 1st level, when wearing light or no armor and not using a shield, an Iroran paladin adds 1 point of his Charisma bonus (if any) per class level to his Dexterity bonus to his Armor Class.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, when wearing light or no armor and not using a shield, an Iroran paladin adds 1 point of his Charisma bonus (if any) per class level to his Dexterity bonus to his Armor Class. If he is caught flat-footed or otherwise denied his Dexterity bonus, he also loses this bonus.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: aura of good

- **Archetype feature:** Aura of Law (Su)
- **Description:** The power of an Iroran paladin’s aura of law is equal to his class level.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: The power of an Iroran paladin’s aura of law is equal to his class level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: detect evil

- **Archetype feature:** Sense Perfection (Su)
- **Description:** At 1st level, at will, an Iroran paladin can detect life forces as if he were using a paladin’s detect evil class ability; however, instead of sensing evil creatures, he senses creatures that have a ki pool.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, at will, an Iroran paladin can detect life forces as if he were using a paladin’s detect evil class ability; however, instead of sensing evil creatures, he senses creatures that have a ki pool. Each such creature has an aura like a cleric of an aligned deity, and treats its current number of ki points as its Hit Dice for the purposes of this ability.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: smite evil

- **Archetype feature:** Personal Trial (Su)
- **Description:** Once per day, an Iroran paladin can as a swift action declare one target within line of sight as his personal trial.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 20.
  - Mechanics summary: Once per day, an Iroran paladin can as a swift action declare one target within line of sight as his personal trial. The Iroran paladin gains a +1 insight bonus on attack rolls and damage rolls against that creature, to his AC against attacks made by the target, and on saving throws against the target’s spells and special abilities. This bonus increases by 1 at 4th level and every 4 levels thereafter, to a maximum bonus of +6 at 20th level. The personal trial effect remains until the target of the trial is dead or the next time the paladin rests and regains daily uses of this ability. At 4th level and every three levels thereafter, the Iroran paladin can use personal trial one additional time per day.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, smite hook.

## Parsed source feature headings

- Skills
- Confident Defense (Ex)
- Unarmed Strike
- Aura of Law (Su)
- Sense Perfection (Su)
- Personal Trial (Su)
- Aura of Excellence (Su)
- Ki Pool (Su)
- Divine Body (Su)
- Aura of Perfection (Su)

