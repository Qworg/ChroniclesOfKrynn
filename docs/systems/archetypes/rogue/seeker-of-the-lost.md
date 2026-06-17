# Rogue - Seeker of the Lost

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Seeker of the Lost
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Seeker%20of%20the%20Lost
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Arcana Breaker (Su); Underwater Striker (Ex); Wary Disarm (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** the 2nd-level rogue talent; uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: the 2nd-level rogue talent

- **Archetype feature:** Arcana Breaker (Su)
- **Description:** Typically, only magical traps survive for long periods underwater, so a seeker of the lost specializes in noticing and disarming such traps.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 18, 2.
  - **Rules text to implement:** Typically, only magical traps survive for long periods underwater, so a seeker of the lost specializes in noticing and disarming such traps. At 3rd level, a seeker of the lost gains a +1 competence bonus on Perception checks to notice magical traps and on Disable Device checks to disarm magical traps. This bonus increases by an additional +1 every 3 levels beyond 3rd (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge

- **Archetype feature:** Underwater Striker (Ex)
- **Description:** At 4th level, a seeker of the lost gains the ability to strike precisely underwater.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a seeker of the lost gains the ability to strike precisely underwater. When a seeker of the lost makes a sneak attack with a melee weapon, the damage is not halved for being made underwater, as is usually the case for attacks that deal slashing or bludgeoning damage or, if the rogue is offbalance, attacks that deal piercing damage (see Pathfinder Campaign Setting: Aquatic Adventures for more information about being off-balance). In addition, when a seeker of the lost makes a sneak attack with a melee weapon against a construct, she ignores any hardness the construct has.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Wary Disarm (Ex)
- **Description:** At 8th level, whenever a seeker of the lost attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by an amount equal to her rogue level or more.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, whenever a seeker of the lost attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by an amount equal to her rogue level or more. If she does set off a trap she was attempting to disarm, she doubles her trap sense bonus to avoid the trap.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the seeker of the lost archetype: canny observer APG, strong stroke UC, terrain mastery UC (water), and trap spotter.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the seeker of the lost archetype: canny observer APG, strong stroke UC, terrain mastery UC (water), and trap spotter.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the seeker of the lost archetype: defensive roll, dispelling attack, and hide in plain sight UC (water).
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the seeker of the lost archetype: defensive roll, dispelling attack, and hide in plain sight UC (water).
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Arcana Breaker (Su)
- Underwater Striker (Ex)
- Wary Disarm (Ex)
- Rogue Talents
- Advanced Talents
