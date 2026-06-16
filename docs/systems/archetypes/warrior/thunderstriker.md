# Warrior - Thunderstriker

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Thunderstriker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Thunderstriker
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Strapped Shield (Ex); Hardbuckler (Ex); Knockback Smash (Ex); Hammer and Anvil (Ex); Buckler Defense (Ex); Balanced Bashing (Ex); Improved Buckler Defense (Ex)
- **Replaced / altered class features:** armor training 1; armor training 2; armor training 3; weapon training 3; armor training 4; weapon training 4; armor mastery

## Replacement details

### Replaces: armor training 1

- **Archetype feature:** Strapped Shield (Ex)
- **Description:** At 3rd level, a thunderstriker takes no penalty on attack rolls when using a weapon in two hands while wearing a buckler.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a thunderstriker takes no penalty on attack rolls when using a weapon in two hands while wearing a buckler.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: armor training 2

- **Archetype feature:** Hardbuckler (Ex)
- **Description:** At 7th level, a thunderstriker may make shield bash attacks with a buckler as if it were a light shield.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a thunderstriker may make shield bash attacks with a buckler as if it were a light shield.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor training 3

- **Archetype feature:** Knockback Smash (Ex)
- **Description:** At 11th level, when a thunderstriker uses his buckler to attack, he gains a bonus equal to the enhancement bonus of the buckler on both attack and damage rolls.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, when a thunderstriker uses his buckler to attack, he gains a bonus equal to the enhancement bonus of the buckler on both attack and damage rolls.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 3

- **Archetype feature:** Hammer and Anvil (Ex)
- **Description:** At 13th level, a thunderstriker suffers only half the normal penalties for two-weapon fighting when using a buckler as his off-hand weapon.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a thunderstriker suffers only half the normal penalties for two-weapon fighting when using a buckler as his off-hand weapon.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor training 4

- **Archetype feature:** Buckler Defense (Ex)
- **Description:** At 15th level, a thunderstriker retains partial use of his buckler even when using a weapon in both hands or in each hand (rather than losing his shield bonus until the beginning of his next turn).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a thunderstriker retains partial use of his buckler even when using a weapon in both hands or in each hand (rather than losing his shield bonus until the beginning of his next turn). He gains a +1 shield bonus to AC and may apply the benefits of any feats he knows that require the use of a shield, but does not benefit from any magical properties his shield may possess.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: weapon training 4

- **Archetype feature:** Balanced Bashing (Ex)
- **Description:** At 17th level, a thunderstriker no longer suffers two-weapon fighting penalties when using a buckler as his off-hand weapon.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a thunderstriker no longer suffers two-weapon fighting penalties when using a buckler as his off-hand weapon.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor mastery

- **Archetype feature:** Improved Buckler Defense (Ex)
- **Description:** At 19th level, a thunderstriker does not forfeit his shield bonus to AC from a buckler when fighting two-handed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a thunderstriker does not forfeit his shield bonus to AC from a buckler when fighting two-handed.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Strapped Shield (Ex)
- Hardbuckler (Ex)
- Knockback Smash (Ex)
- Hammer and Anvil (Ex)
- Buckler Defense (Ex)
- Balanced Bashing (Ex)
- Improved Buckler Defense (Ex)

