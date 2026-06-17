# Rogue - Cutpurse

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Cutpurse
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Cutpurse
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Measure the Mark (Ex); Stab and Grab (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Measure the Mark (Ex)
- **Description:** When a cutpurse makes a Sleight of Hand check to take something from a creature, the target makes its Perception check before the rogue makes her Sleight of Hand check, and the rogue knows the Perception check result.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** When a cutpurse makes a Sleight of Hand check to take something from a creature, the target makes its Perception check before the rogue makes her Sleight of Hand check, and the rogue knows the Perception check result. She can decide whether or not to make the check based on the results of the target’s Perception check. If the rogue elects not to make the check, she can make a Bluff check, opposed by the target’s Sense Motive, to prevent the target from noticing the attempt.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Stab and Grab (Ex)
- **Description:** At 3rd level, as a full-round action, a cutpurse can make an attack and also make a Sleight of Hand check to steal something from the target of the attack.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, as a full-round action, a cutpurse can make an attack and also make a Sleight of Hand check to steal something from the target of the attack. If the attack deals sneak attack damage, the rogue can use Sleight of Hand to take an item from the creature during combat; otherwise this ability can only be used in a surprise round before the target has acted. If the attack is successful, the target takes a –5 penalty on the Perception check to notice the theft.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the cutpurse archetype: combat swipe, fast fingers, fast getaway, hard to fool, minor magic*, slow reactions*, and surprise attack*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the cutpurse archetype: combat swipe, fast fingers, fast getaway, hard to fool, minor magic*, slow reactions*, and surprise attack*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the cutpurse archetype: crippling strike*, fast tumble, and skill mastery*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the cutpurse archetype: crippling strike*, fast tumble, and skill mastery*.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Measure the Mark (Ex)
- Stab and Grab (Ex)
- Rogue Talents
- Advanced Talents
