# Rogue - Cat Burglar

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Cat Burglar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Cat%20Burglar
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Phantom Presence (Ex); Trap Saboteur (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: uncanny dodge

- **Archetype feature:** Phantom Presence (Ex)
- **Description:** At 4th level, a cat burglar masters stealthy movement and leaves no trace of her passing in dungeons and cities.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a cat burglar masters stealthy movement and leaves no trace of her passing in dungeons and cities. While in dungeon and urban environments, she leaves no trail and cannot be tracked, though she can choose to leave behind a trail if she so desires. Furthermore, she can always choose to take 10 when making a Stealth check.
- **Implementation flags:**
  - ki subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Trap Saboteur (Su)
- **Description:** At 8th level, a cat burglar becomes a master of avoiding and manipulating traps and locks.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a cat burglar becomes a master of avoiding and manipulating traps and locks. She can attempt to open a lock as a standard action and takes 1/2 the normal amount of time to disable traps (minimum 1 round). When she has bypassed a trap without disarming it, she can also choose to suppress its trigger for up to 1 minute. If she does, she can also choose to end this suppression prematurely as a free action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the cat burglar archetype: fast stealth, quick disable ; convincing fakes, dodge trap ; fast picks terrain mastery.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the cat burglar archetype: fast stealth, quick disable ; convincing fakes, dodge trap ; fast picks terrain mastery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the cat burglar archetype: another day, fast tumble hide in plain sight.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the cat burglar archetype: another day, fast tumble hide in plain sight.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Phantom Presence (Ex)
- Trap Saboteur (Su)
- Rogue Talents
- Advanced Talents
