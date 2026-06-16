# Alchemist - Vaultbreaker

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Vaultbreaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Vaultbreaker
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Breaking and Entering (Ex); Rogue Talents; Safecracking (Ex); Enhanced Safecracking (Ex)
- **Replaced / altered class features:** the Brew Potion bonus feat; Throw Anything , the vaultbreaker’s bombs do not add his Intelligence bonus to damage rolls

## Replacement details

### Replaces: the Brew Potion bonus feat

- **Archetype feature:** Breaking and Entering (Ex)
- **Description:** A vaultbreaker gains Stealth as a class skill and can disarm magical traps as if he were a rogue with the trapfinding ability .
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A vaultbreaker gains Stealth as a class skill and can disarm magical traps as if he were a rogue with the trapfinding ability .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Alters: discoveries

- **Archetype feature:** Rogue Talents
- **Description:** A vaultbreaker can choose any of the following rogue talents in place of a discovery: expert leaper, fast stealth, ledge walker, nimble climber, or wall scramble.
- **Mechanics:**
  - Mechanics summary: A vaultbreaker can choose any of the following rogue talents in place of a discovery: expert leaper, fast stealth, ledge walker, nimble climber, or wall scramble.
- **Implementation flags:**
  - Likely existing hooks: alchemist discovery hook.

### Replaces: Throw Anything , the vaultbreaker’s bombs do not add his Intelligence bonus to damage rolls

- **Archetype feature:** Safecracking (Ex)
- **Description:** At 1st level, a vaultbreaker’s bombs can help him disable locks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a vaultbreaker’s bombs can help him disable locks. He gains penetrating charge as a bonus discovery.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, alchemist bomb hook, alchemist discovery hook, ki/monk hook.

### Alters: bombs and replaces the Throw Anything bonus feat

- **Archetype feature:** Safecracking (Ex)
- **Description:** At 1st level, a vaultbreaker’s bombs can help him disable locks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a vaultbreaker’s bombs can help him disable locks. He gains penetrating charge as a bonus discovery.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, alchemist bomb hook, alchemist discovery hook, ki/monk hook.

### Alters: bombs and replaces the poison use class ability

- **Archetype feature:** Enhanced Safecracking (Ex)
- **Description:** At 3rd level, a vaultbreaker gains incendiary charge as a bonus discovery, and his incendiary charges ignore 10 points of an object’s hardness instead of 5.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a vaultbreaker gains incendiary charge as a bonus discovery, and his incendiary charges ignore 10 points of an object’s hardness instead of 5.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, alchemist bomb hook, alchemist discovery hook, ki/monk hook.

## Parsed source feature headings

- Breaking and Entering (Ex)
- Rogue Talents
- Safecracking (Ex)
- Enhanced Safecracking (Ex)

