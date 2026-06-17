# Rogue - Burglar

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Burglar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Burglar
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Careful Disarm (Ex); Distraction (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: uncanny dodge

- **Archetype feature:** Careful Disarm (Ex)
- **Description:** At 4th level, whenever a burglar attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by 10 or more.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, whenever a burglar attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by 10 or more. If she does set off a trap she was attempting to disarm, she adds double her trap sense bonus to avoid the trap.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Distraction (Ex)
- **Description:** At 8th level, whenever a burglar is detected while using Stealth, she can immediately attempt a Bluff skill check opposed by the Sense Motive skill of the creature that spotted her.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, whenever a burglar is detected while using Stealth, she can immediately attempt a Bluff skill check opposed by the Sense Motive skill of the creature that spotted her. If this check succeeds, the target assumes that the noise was something innocent and disregards the detection. This only functions if the creature cannot see the rogue. This ability can only be used once during a given Stealth attempt. If the same creature detects the rogue’s presence again, the ability has no effect.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the burglar archetype: fast picks, fast stealth*, nimble climber, quick disable*, and trap spotter*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the burglar archetype: fast picks, fast stealth*, nimble climber, quick disable*, and trap spotter*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the burglar archetype: knock-out blow, skill mastery*, and thoughtful reexamining.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the burglar archetype: knock-out blow, skill mastery*, and thoughtful reexamining.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Careful Disarm (Ex)
- Distraction (Ex)
- Rogue Talents
- Advanced Talents
