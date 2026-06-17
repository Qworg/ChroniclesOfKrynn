# Druid - Nature Fang

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Nature Fang
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Nature%20Fang
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Studied Target (Ex); Slayer Talent; Sneak Attack (Ex); Swift Studied Target; Slayer Talents; Advanced Talents
- **Replaced / altered class features:** nature sense, wild empathy, and woodland stride; wild shape; resist nature’s lure; venom immunity

## Implementation details

### Replaces: nature sense, wild empathy, and woodland stride

- **Archetype feature:** Studied Target (Ex)
- **Description:** At 1st level, a nature fang gains the slayer’s studied target class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 5.
  - **Rules text to implement:** At 1st level, a nature fang gains the slayer’s studied target class feature. At 5th level and every 5 levels thereafter, the nature fang’s bonus against her studied target increases by 1. Unlike a slayer, a nature fang does not gain the ability to maintain more than one studied target at the same time.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: wild shape

- **Archetype feature:** Slayer Talent
- **Description:** At 4th level and every 2 levels thereafter, a nature fang selects a slayer talent.
- **Detailed mechanics:**
  - **Level hooks:** 4, 12.
  - **Rules text to implement:** At 4th level and every 2 levels thereafter, a nature fang selects a slayer talent. Starting at 12th level, she can select an advanced slayer talent in place of a slayer talent. She uses her druid level as her slayer level to determine what talents she can select.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: resist nature’s lure

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** At 4th level, a nature fang gains sneak attack +1d6.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a nature fang gains sneak attack +1d6. This functions as the rogue sneak attack ability. If the nature fang gets a sneak attack bonus from another source, the bonuses on damage stack.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: venom immunity

- **Archetype feature:** Swift Studied Target
- **Description:** At 9th level, a nature fang can study an opponent as a move or swift action.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a nature fang can study an opponent as a move or swift action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Slayer Talents
- **Description:** The following slayer talents complement the nature fang archetype: foil scrutiny, poison use, ranger combat style.
- **Detailed mechanics:**
  - **Rules text to implement:** The following slayer talents complement the nature fang archetype: foil scrutiny, poison use, ranger combat style. Additionally, the following rogue talents, which are also available to slayers, complement the archetype: bleeding attack, camouflage APG, fast stealth, finesse rogue, lasting poison APG, rogue crawl, slow reactions, surprise attack, swift poison APG, terrain mastery UC.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced talents complement the nature fang archetype: assassinate, slayer camouflage, woodland stride.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced talents complement the nature fang archetype: assassinate, slayer camouflage, woodland stride. The rogue advanced talent master of disguise APG also fits the archetype.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Studied Target (Ex)
- Slayer Talent
- Sneak Attack (Ex)
- Swift Studied Target
- Slayer Talents
- Advanced Talents
