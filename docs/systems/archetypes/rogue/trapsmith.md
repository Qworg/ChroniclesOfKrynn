# Rogue - Trapsmith

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Trapsmith
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Trapsmith
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Careful Disarm (Ex); Trap Master (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: uncanny dodge

- **Archetype feature:** Careful Disarm (Ex)
- **Description:** At 4th level, whenever a trapsmith attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by 10 or more.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, whenever a trapsmith attempts to disarm a trap using Disable Device, she does not spring the trap unless she fails by 10 or more. If she does set off a trap she was attempting to disarm, she adds double her trap sense bonus to avoid the trap.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Trap Master (Ex)
- **Description:** At 8th level, whenever a trapsmith disarms a trap using Disable Device, she can bypass it even if her check did not exceed the DC by 10 or more.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, whenever a trapsmith disarms a trap using Disable Device, she can bypass it even if her check did not exceed the DC by 10 or more. If it is a magic trap that allows specific creatures to pass it without danger, she can modify which creatures it allows to pass, adding her allies and restricting enemies if she desires.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the trapsmith archetype: befuddling strike, cunning trigger, quick disable*, and quick trapsmith.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the trapsmith archetype: befuddling strike, cunning trigger, quick disable*, and quick trapsmith.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the trapsmith archetype: another day, frugal trapsmith, and skill mastery*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the trapsmith archetype: another day, frugal trapsmith, and skill mastery*.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Careful Disarm (Ex)
- Trap Master (Ex)
- Rogue Talents
- Advanced Talents
