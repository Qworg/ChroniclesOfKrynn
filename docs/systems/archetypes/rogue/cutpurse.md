# Rogue - Cutpurse

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Cutpurse
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Cutpurse
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Measure the Mark (Ex); Stab and Grab (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Measure the Mark (Ex)
- **Description:** When a cutpurse makes a Sleight of Hand check to take something from a creature, the target makes its Perception check before the rogue makes her Sleight of Hand check, and the rogue knows the Perception check result.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: When a cutpurse makes a Sleight of Hand check to take something from a creature, the target makes its Perception check before the rogue makes her Sleight of Hand check, and the rogue knows the Perception check result. She can decide whether or not to make the check based on the results of the target’s Perception check. If the rogue elects not to make the check, she can make a Bluff check, opposed by the target’s Sense Motive, to prevent the target from noticing the attempt.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Stab and Grab (Ex)
- **Description:** At 3rd level, as a full-round action, a cutpurse can make an attack and also make a Sleight of Hand check to steal something from the target of the attack.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, as a full-round action, a cutpurse can make an attack and also make a Sleight of Hand check to steal something from the target of the attack. If the attack deals sneak attack damage, the rogue can use Sleight of Hand to take an item from the creature during combat; otherwise this ability can only be used in a surprise round before the target has acted. If the attack is successful, the target takes a –5 penalty on the Perception check to notice the theft.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, sneak attack hook.

## Parsed source feature headings

- Measure the Mark (Ex)
- Stab and Grab (Ex)
- Rogue Talents
- Advanced Talents

