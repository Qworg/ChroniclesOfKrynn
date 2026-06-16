# Warrior - Venomblade

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Venomblade
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Venomblade
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Venom Projection (Ex); Sneak Attack (Ex); Viper Strike (Ex)
- **Replaced / altered class features:** 1st, 6th, 12th-level Bonus Feat; Bravery

## Replacement details

### Replaces: bravery

- **Archetype feature:** Venom Projection (Ex)
- **Description:** The venomblade must take the Spit Venom nagaji racial feat as his 1st-level fighter bonus feat if he does not already have that ability.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 2, 4, 8, 12.
  - Mechanics summary: The venomblade must take the Spit Venom nagaji racial feat as his 1st-level fighter bonus feat if he does not already have that ability. At 2nd level, he does not provoke an attack of opportunity for using the ability granted by the Spit Venom feat. At 4th level, he can use the ability granted by the Spit Venom feat as a standard action; at 8th level, he can use it as a move action; and at 12th level, he can use it as a swift action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: alters the bonus feat gained at 1st level

- **Archetype feature:** Venom Projection (Ex)
- **Description:** The venomblade must take the Spit Venom nagaji racial feat as his 1st-level fighter bonus feat if he does not already have that ability.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 2, 4, 8, 12.
  - Mechanics summary: The venomblade must take the Spit Venom nagaji racial feat as his 1st-level fighter bonus feat if he does not already have that ability. At 2nd level, he does not provoke an attack of opportunity for using the ability granted by the Spit Venom feat. At 4th level, he can use the ability granted by the Spit Venom feat as a standard action; at 8th level, he can use it as a move action; and at 12th level, he can use it as a swift action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feat gained at 6th level

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** At 6th level, a venomblade deals 1d6 additional points of damage to targets within 30 feet that he flanks or that are denied their Dexterity bonus to AC against him.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a venomblade deals 1d6 additional points of damage to targets within 30 feet that he flanks or that are denied their Dexterity bonus to AC against him. This damage increases by 1d6 every 4 levels beyond 6th.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, sneak attack hook.

### Replaces: the bonus feat gained at 12th level

- **Archetype feature:** Viper Strike (Ex)
- **Description:** At 12th level, upon making a successful attack with a slashing or piercing weapon, the venomblade can spend a use of the ability granted by the Spit Venom feat as a swift action to spray his toxin into the wound.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, upon making a successful attack with a slashing or piercing weapon, the venomblade can spend a use of the ability granted by the Spit Venom feat as a swift action to spray his toxin into the wound. This imposes a –4 penalty on the victim’s saving throw against the poison and causes the target to take 1d6 additional points of damage from all successful attacks for 1 round.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty, ki/monk hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 1st, 6th, 12th-level Bonus Feat

## Parsed source feature headings

- Venom Projection (Ex)
- Sneak Attack (Ex)
- Viper Strike (Ex)

