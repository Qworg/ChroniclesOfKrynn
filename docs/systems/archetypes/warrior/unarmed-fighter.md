# Warrior - Unarmed Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Unarmed Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Unarmed%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Unarmed Style; Harsh Training (Ex); Tough Guy (Ex); Weapon Training (Ex); Clever Wrestler (Ex); Trick Throw (Ex); Takedown (Ex); Eye Gouge (Ex); Sucker Punch (Ex); Sheer Toughness (Ex); Weapon Mastery (Ex)
- **Replaced / altered class features:** the bonus feat at 1st level; bravery; armor training 1; weapon training 1, 2, 3, and 4; armor training 2; the 8th-level bonus feat; the 12th-level bonus feat; weapon training 3; armor training 4; armor mastery

## Replacement details

### Replaces: the bonus feat at 1st level

- **Archetype feature:** Unarmed Style
- **Description:** At 1st level, a unarmed fighter gains the Improved Unarmed Strike feat and any single style feat (see Chapter 3) as a bonus feat.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a unarmed fighter gains the Improved Unarmed Strike feat and any single style feat (see Chapter 3) as a bonus feat. The unarmed fighter need not meet all the prerequisites of the style feat he chooses, but style feats that grant additional uses of the Elemental Fist feat cannot be taken until the unarmed fighter has that feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: bravery

- **Archetype feature:** Harsh Training (Ex)
- **Description:** At 2nd level, an unarmed fighter gains a +1 bonus on saving throws against effects that cause the exhausted, fatigued, or staggered conditions or temporary penalties to ability scores.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 18.
  - Mechanics summary: At 2nd level, an unarmed fighter gains a +1 bonus on saving throws against effects that cause the exhausted, fatigued, or staggered conditions or temporary penalties to ability scores. This bonus increases by +1 for every four levels after 2nd (to a maximum of +5 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 1

- **Archetype feature:** Tough Guy (Ex)
- **Description:** At 3rd level, an unarmed fighter gains DR/— equal to half his fighter level against nonlethal damage or damage taken while he is grappled.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, an unarmed fighter gains DR/— equal to half his fighter level against nonlethal damage or damage taken while he is grappled.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: weapon training 1, 2, 3
- **Archetype feature:** Weapon Training (Ex)
- **Description:** At 5th level, an unarmed fighter gains a +1 bonus on attack and damage rolls with weapons in the monk and natural weapon groups, improving by +1 for every four levels beyond 5th (to a maximum of +4 at 17th level).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 17.
  - Mechanics summary: At 5th level, an unarmed fighter gains a +1 bonus on attack and damage rolls with weapons in the monk and natural weapon groups, improving by +1 for every four levels beyond 5th (to a maximum of +4 at 17th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: 4

- **Archetype feature:** Weapon Training (Ex)
- **Description:** At 5th level, an unarmed fighter gains a +1 bonus on attack and damage rolls with weapons in the monk and natural weapon groups, improving by +1 for every four levels beyond 5th (to a maximum of +4 at 17th level).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 17.
  - Mechanics summary: At 5th level, an unarmed fighter gains a +1 bonus on attack and damage rolls with weapons in the monk and natural weapon groups, improving by +1 for every four levels beyond 5th (to a maximum of +4 at 17th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 2

- **Archetype feature:** Clever Wrestler (Ex)
- **Description:** At 7th level, an unarmed fighter takes no penalties to Dexterity or on attack rolls while grappled, and retains his Dexterity bonus to AC while pinning an opponent.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, an unarmed fighter takes no penalties to Dexterity or on attack rolls while grappled, and retains his Dexterity bonus to AC while pinning an opponent. The unarmed fighter can make attacks of opportunity even when grappled and even against creatures attempting to grapple him if the opponent has the Improved Grapple feat or the grab ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the 8th-level bonus feat

- **Archetype feature:** Trick Throw (Ex)
- **Description:** At 8th level, when an unarmed fighter successfully trips an opponent with an unarmed attack, he can attempt a dirty trick combat maneuver against that creature (before the opponent becomes prone) as an immediate action that does not provoke attacks of opportunity.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, when an unarmed fighter successfully trips an opponent with an unarmed attack, he can attempt a dirty trick combat maneuver against that creature (before the opponent becomes prone) as an immediate action that does not provoke attacks of opportunity.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the 12th-level bonus feat

- **Archetype feature:** Takedown (Ex)
- **Description:** At 12th level, if an unarmed fighter succeeds on a drag maneuver, he can attempt a trip maneuver against the same target as a swift action that does not provoke attacks of opportunity.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12, 15.
  - Mechanics summary: At 12th level, if an unarmed fighter succeeds on a drag maneuver, he can attempt a trip maneuver against the same target as a swift action that does not provoke attacks of opportunity. At 15th level, he may do so after a successful grapple check.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: weapon training 3

- **Archetype feature:** Eye Gouge (Ex)
- **Description:** At 13th level, if an unarmed fighter confirms a critical hit with his unarmed strike or begins his turn grappled, he may attempt a dirty trick maneuver to blind his target as a swift action that does not provoke attacks of opportunity.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, if an unarmed fighter confirms a critical hit with his unarmed strike or begins his turn grappled, he may attempt a dirty trick maneuver to blind his target as a swift action that does not provoke attacks of opportunity. A target more than one size category larger is unaffected.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor training 4

- **Archetype feature:** Sucker Punch (Ex)
- **Description:** At 17th level, when an unarmed fighter strikes a creature that is denied its Dexterity bonus to AC, or that he has successfully pinned with a grapple check, he can attempt a dirty trick or trip combat maneuver against that target as a swift action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, when an unarmed fighter strikes a creature that is denied its Dexterity bonus to AC, or that he has successfully pinned with a grapple check, he can attempt a dirty trick or trip combat maneuver against that target as a swift action.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor mastery

- **Archetype feature:** Sheer Toughness (Ex)
- **Description:** At 19th level, an unarmed fighter becomes immune to nonlethal damage and the exhausted, fatigued, and staggered conditions.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, an unarmed fighter becomes immune to nonlethal damage and the exhausted, fatigued, and staggered conditions.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Unarmed Style
- Harsh Training (Ex)
- Tough Guy (Ex)
- Weapon Training (Ex)
- Clever Wrestler (Ex)
- Trick Throw (Ex)
- Takedown (Ex)
- Eye Gouge (Ex)
- Sucker Punch (Ex)
- Sheer Toughness (Ex)
- Weapon Mastery (Ex)

