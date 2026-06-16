# Warrior - High Guardian

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** High Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20High%20Guardian
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Obligation (Ex); Right Hand (Ex); Defender’s Reflexes (Ex); Unassailable Allegiance (Ex); Royal Protector (Ex)
- **Replaced / altered class features:** the bonus feat gained at 1st level; the bonus feat gained at 2nd level; bravery; the bonus feat gained at 4th level

## Replacement details

### Alters: the fighter’s class skills

- **Archetype feature:** Class Skills
- **Description:** A high guardian adds Knowledge (local) and Knowledge (nobility) to his list of class skills, instead of Knowledge (dungeoneering) and Knowledge (engineering).
- **Mechanics:**
  - Mechanics summary: A high guardian adds Knowledge (local) and Knowledge (nobility) to his list of class skills, instead of Knowledge (dungeoneering) and Knowledge (engineering).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Right Hand (Ex)
- **Description:** At 1st level, a high guardian can take a 5-foot step as an immediate action, as long as he ends this movement adjacent to his obligation.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a high guardian can take a 5-foot step as an immediate action, as long as he ends this movement adjacent to his obligation. If he takes this step, he cannot take a 5-foot step during his next turn and his total movement is reduced by 5 feet during his next turn.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feat gained at 2nd level

- **Archetype feature:** Defender’s Reflexes (Ex)
- **Description:** At 2nd level, a high guardian gains Combat Reflexes as a bonus feat, and he can use his Strength modifier instead of his Dexterity modifier to determine the number of additional attacks of opportunity he can make per round.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a high guardian gains Combat Reflexes as a bonus feat, and he can use his Strength modifier instead of his Dexterity modifier to determine the number of additional attacks of opportunity he can make per round. If he already has Combat Reflexes, he instead gains Stand Still as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: bravery

- **Archetype feature:** Unassailable Allegiance (Ex)
- **Description:** At 2nd level, a high guardian gains a +1 bonus on Will saves against compulsion spells and effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a high guardian gains a +1 bonus on Will saves against compulsion spells and effects. This bonus increases by 1 for every 4 fighter levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook.

### Replaces: the bonus feat gained at 4th level

- **Archetype feature:** Royal Protector (Ex)
- **Description:** At 4th level, a high guardian gains Bodyguard APG and In Harm’s Way APG as bonus feats, though he can use them only to improve his obligation’s AC or intercept a successful attack against his obligation.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a high guardian gains Bodyguard APG and In Harm’s Way APG as bonus feats, though he can use them only to improve his obligation’s AC or intercept a successful attack against his obligation.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Class Skills
- Obligation (Ex)
- Right Hand (Ex)
- Defender’s Reflexes (Ex)
- Unassailable Allegiance (Ex)
- Royal Protector (Ex)

