# Warrior - Weapon Bearer Squire

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Weapon Bearer Squire
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Weapon%20Bearer%20Squire
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon Rack (Ex); Swift Sharpening (Ex); Combat Repairs (Ex)
- **Replaced / altered class features:** the 1st-level fighter bonus combat feat; the 2nd-level fighter bonus combat feat; armor training 1

## Replacement details

### Replaces: the 1st-level fighter bonus combat feat

- **Archetype feature:** Weapon Rack (Ex)
- **Description:** At 1st level, once per round, a knight can retrieve an item carried by his weapon bearer squire as a move action that does not provoke attacks of opportunity.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, once per round, a knight can retrieve an item carried by his weapon bearer squire as a move action that does not provoke attacks of opportunity. In addition, a weapon bearer squire can pick up items dropped by her knight as an immediate action without provoking attacks of opportunity. The knight and the weapon bearer squire must be adjacent to each other and must both be able to move and communicate to use these abilities.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the 2nd-level fighter bonus combat feat

- **Archetype feature:** Swift Sharpening (Ex)
- **Description:** At 2nd level, a weapon bearer squire can quickly hone her lord’s weapons to make them more effective in combat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a weapon bearer squire can quickly hone her lord’s weapons to make them more effective in combat. As a fullround action, a weapon bearer squire can use a whetstone to sharpen a weapon she is holding, granting whoever wields the weapon a +1 circumstance bonus on his next attack roll with that weapon. In addition, she can apply a weapon blanch (see Ultimate Equipment ) to a weapon she is holding as a standard action, instead of a full-round action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: armor training 1

- **Archetype feature:** Combat Repairs (Ex)
- **Description:** At 3rd level, a weapon bearer squire can ensure her liege never goes unarmed, even if his weapon has all but shattered.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a weapon bearer squire can ensure her liege never goes unarmed, even if his weapon has all but shattered. As a full-round action, a weapon bearer squire can make rapid repairs to a weapon she is holding and is proficient with by succeeding at a DC 20 Craft (weapons) check. The item does not regain any hit points, but loses the broken condition for a number of rounds equal to the weapon bearer squire’s class level.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

## Parsed source feature headings

- Weapon Rack (Ex)
- Swift Sharpening (Ex)
- Combat Repairs (Ex)

