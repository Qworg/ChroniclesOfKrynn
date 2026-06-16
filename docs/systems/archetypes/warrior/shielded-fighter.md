# Warrior - Shielded Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Shielded Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Shielded%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Active Defense (Ex); Shield Fighter (Ex); Shield Buffet (Ex); Shield Guard (Ex); Shield Mastery (Ex); Shield Ward (Ex)
- **Replaced / altered class features:** armor training 1, 2, 3, and 4; weapon training 1; weapon training 2 and 3; weapon training 4; armor mastery; weapon mastery

## Replacement details

### Replaces: armor training 1, 2, 3
- **Archetype feature:** Active Defense (Ex)
- **Description:** At 3rd level, a shielded fighter gains a +1 dodge bonus to AC when wielding a shield and fighting defensively, using Combat Expertise, or using total defense.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a shielded fighter gains a +1 dodge bonus to AC when wielding a shield and fighting defensively, using Combat Expertise, or using total defense. This bonus increases by +1 for every four levels beyond 3rd. As a swift action, he may share this bonus with one adjacent ally, or half of the bonus (minimum +0) with all adjacent allies, until the beginning of his next turn.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: 4

- **Archetype feature:** Active Defense (Ex)
- **Description:** At 3rd level, a shielded fighter gains a +1 dodge bonus to AC when wielding a shield and fighting defensively, using Combat Expertise, or using total defense.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a shielded fighter gains a +1 dodge bonus to AC when wielding a shield and fighting defensively, using Combat Expertise, or using total defense. This bonus increases by +1 for every four levels beyond 3rd. As a swift action, he may share this bonus with one adjacent ally, or half of the bonus (minimum +0) with all adjacent allies, until the beginning of his next turn.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 1

- **Archetype feature:** Shield Fighter (Ex)
- **Description:** At 5th level, a shielded fighter gains a +1 bonus on attack and damage rolls when making a shield bash.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a shielded fighter gains a +1 bonus on attack and damage rolls when making a shield bash. These bonuses increase by +1 every four levels beyond 5th. With a full attack action, a shielded fighter may alternate between using his weapon or his shield for each attack. This action does not grant additional attacks or incur penalties as two-weapon fighting does.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: weapon training 2

- **Archetype feature:** Shield Buffet (Ex)
- **Description:** At 9th level, as a move action, a shielded fighter may make a combat maneuver check to use his shield to impede an adjacent enemy.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9, 13.
  - Mechanics summary: At 9th level, as a move action, a shielded fighter may make a combat maneuver check to use his shield to impede an adjacent enemy. If successful, the target suffers a –2 penalty on its attack rolls against the shielded fighter and a –2 penalty to AC on attacks made by the shielded fighter until the beginning of his next turn. At 13th level, a shielded fighter may use this ability as a swift action.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: 3

- **Archetype feature:** Shield Buffet (Ex)
- **Description:** At 9th level, as a move action, a shielded fighter may make a combat maneuver check to use his shield to impede an adjacent enemy.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9, 13.
  - Mechanics summary: At 9th level, as a move action, a shielded fighter may make a combat maneuver check to use his shield to impede an adjacent enemy. If successful, the target suffers a –2 penalty on its attack rolls against the shielded fighter and a –2 penalty to AC on attacks made by the shielded fighter until the beginning of his next turn. At 13th level, a shielded fighter may use this ability as a swift action.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: weapon training 4

- **Archetype feature:** Shield Guard (Ex)
- **Description:** At 17th level, as a swift action, a shielded fighter may designate one square adjacent to him.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, as a swift action, a shielded fighter may designate one square adjacent to him. He may designate two squares if using a heavy shield or three squares if using a tower shield, but these squares must be contiguous. Enemies in these squares cannot flank the shielded fighter and do not count for flanking with other creatures. This effect lasts until he moves from his position or uses another swift action to change the affected squares.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: armor mastery

- **Archetype feature:** Shield Mastery (Ex)
- **Description:** At 19th level, a shielded fighter gains DR 5/— when wielding a shield.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a shielded fighter gains DR 5/— when wielding a shield.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: weapon mastery

- **Archetype feature:** Shield Ward (Ex)
- **Description:** At 20th level, a shielded fighter gains evasion (as a rogue) while wielding a shield, and adds his shield bonus to his AC (not including enhancement bonuses) on Reflex saves and to his touch AC.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a shielded fighter gains evasion (as a rogue) while wielding a shield, and adds his shield bonus to his AC (not including enhancement bonuses) on Reflex saves and to his touch AC. In addition, his shield cannot be disarmed or sundered.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

## Parsed source feature headings

- Active Defense (Ex)
- Shield Fighter (Ex)
- Shield Buffet (Ex)
- Shield Guard (Ex)
- Shield Mastery (Ex)
- Shield Ward (Ex)

