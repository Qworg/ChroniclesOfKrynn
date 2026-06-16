# Rogue - Skulking Slayer

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Skulking Slayer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Skulking%20Slayer
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Class Skills; Skill Ranks per Level; Pass for Human (Ex); Underhanded Maneuvers (Ex); Bonus Feats; Bold Strike (Ex); Shifty (Ex); Unexpected Charge (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense +1 and +4; trap sense +2; trap sense +3

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Underhanded Maneuvers (Ex)
- **Description:** At 1st level, when she could normally make a sneak attack, a slayer may instead make a dirty trick or steal combat maneuver with a bonus on her roll.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, when she could normally make a sneak attack, a slayer may instead make a dirty trick or steal combat maneuver with a bonus on her roll. This bonus is equal to her number of sneak attack dice for a dirty trick combat maneuver, or 1-1/2 × her number of sneak attack dice for a steal combat maneuver.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, sneak attack hook.

### Replaces: trap sense +1 and +4

- **Archetype feature:** Bold Strike (Ex)
- **Description:** At 3rd level, when a skulking slayer charges and makes a sneak attack with a two-handed weapon, she rolls d8s instead of d6s for her sneak attack damage.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, when a skulking slayer charges and makes a sneak attack with a two-handed weapon, she rolls d8s instead of d6s for her sneak attack damage.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook, ki/monk hook.

### Replaces: trap sense +2

- **Archetype feature:** Shifty (Ex)
- **Description:** At 6th level, a skulking slayer gains a bonus on Bluff checks to feint equal to half her level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a skulking slayer gains a bonus on Bluff checks to feint equal to half her level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: trap sense +3

- **Archetype feature:** Unexpected Charge (Ex)
- **Description:** At 9th level, a skulking slayer can make a Bluff check to feint as a swift action before a charge.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a skulking slayer can make a Bluff check to feint as a swift action before a charge.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Class Skills
- Skill Ranks per Level
- Pass for Human (Ex)
- Underhanded Maneuvers (Ex)
- Bonus Feats
- Bold Strike (Ex)
- Shifty (Ex)
- Unexpected Charge (Ex)
- Rogue Talents
- Advanced Talents

