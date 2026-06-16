# Druid - Nature Fang

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Nature Fang
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Nature%20Fang
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Studied Target (Ex); Slayer Talent; Sneak Attack (Ex); Swift Studied Target; Slayer Talents; Advanced Talents
- **Replaced / altered class features:** nature sense, wild empathy, and woodland stride; wild shape; resist nature’s lure; venom immunity

## Replacement details

### Replaces: nature sense, wild empathy, and woodland stride

- **Archetype feature:** Studied Target (Ex)
- **Description:** At 1st level, a nature fang gains the slayer’s studied target class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 5.
  - Mechanics summary: At 1st level, a nature fang gains the slayer’s studied target class feature. At 5th level and every 5 levels thereafter, the nature fang’s bonus against her studied target increases by 1. Unlike a slayer, a nature fang does not gain the ability to maintain more than one studied target at the same time.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: wild shape

- **Archetype feature:** Slayer Talent
- **Description:** At 4th level and every 2 levels thereafter, a nature fang selects a slayer talent.
- **Mechanics:**
  - Level hooks: 4, 12.
  - Mechanics summary: At 4th level and every 2 levels thereafter, a nature fang selects a slayer talent. Starting at 12th level, she can select an advanced slayer talent in place of a slayer talent. She uses her druid level as her slayer level to determine what talents she can select.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** At 4th level, a nature fang gains sneak attack +1d6.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a nature fang gains sneak attack +1d6. This functions as the rogue sneak attack ability. If the nature fang gets a sneak attack bonus from another source, the bonuses on damage stack.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, sneak attack hook.

### Replaces: venom immunity

- **Archetype feature:** Swift Studied Target
- **Description:** At 9th level, a nature fang can study an opponent as a move or swift action.
- **Mechanics:**
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a nature fang can study an opponent as a move or swift action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Studied Target (Ex)
- Slayer Talent
- Sneak Attack (Ex)
- Swift Studied Target
- Slayer Talents
- Advanced Talents

