# Inquisitor - Ravener Hunter

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Ravener Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Ravener%20Hunter
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Charged by Nature; Holy Magic; Demon Hunter; Solo Tactics (Ex)
- **Replaced / altered class features:** domain; the teamwork feat gained at 3rd level

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Alignment
- **Description:** Any nonevil.
- **Detailed mechanics:**
  - **Rules text to implement:** Any nonevil.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: domain

- **Archetype feature:** Charged by Nature
- **Description:** Rather than having a deity patron, a ravener hunter is charged by the spirits of the Mwangi to eradicate evil wherever it appears.
- **Detailed mechanics:**
  - **Level hooks:** 1, 8.
  - **Rules text to implement:** Rather than having a deity patron, a ravener hunter is charged by the spirits of the Mwangi to eradicate evil wherever it appears. At 1st level, a ravener hunter chooses an oracle mystery from the following list: ancestor UM, battle APG, flame APG, heavens APG, life APG, lunar ( Pathfinder Player Companion: Blood of the Moon 28 ), nature APG, solar ( Pathfinder Player Companion: Harrow Handbook 26 ), stone APG, time UM, volcano ( Pathfinder Adventure Path #95: Anvil of Fire 72 ), waves APG, wind APG, or wood UM. She gains one revelation from her chosen mystery. She must meet the revelation’s prerequisites, using her inquisitor level as her effective oracle level to determine the revelation’s effects, and she never qualifies for the Extra Revelation APG feat. The ravener hunter gains a second revelation from her chosen mystery at 8th level.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: the inquisitor’s spells

- **Archetype feature:** Holy Magic
- **Description:** A ravener hunter adds all spells of 6th-level and lower on the cleric spell list with the good descriptor to her inquisitor spell list as inquisitor spells of the same level.
- **Detailed mechanics:**
  - **Level hooks:** 6.
  - **Rules text to implement:** A ravener hunter adds all spells of 6th-level and lower on the cleric spell list with the good descriptor to her inquisitor spell list as inquisitor spells of the same level. If a spell appears on both the cleric and inquisitor spell lists, the ravener hunter uses the lower of the two spell levels listed for the spell. She cannot cast 2 with the chaotic, evil, or lawful descriptors, even from spell trigger or spell completion items.
- **Implementation flags:**
  - archetype spell-list override.

### Replaces: the teamwork feat gained at 3rd level

- **Archetype feature:** Demon Hunter
- **Description:** At 3rd level, a ravener hunter gains Demon Hunter ( Pathfinder Campaign Setting: The Inner Sea World Guide 286 ) as a bonus feat, ignoring its prerequisites.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a ravener hunter gains Demon Hunter ( Pathfinder Campaign Setting: The Inner Sea World Guide 286 ) as a bonus feat, ignoring its prerequisites. She also gains a +2 bonus on Knowledge (religion) checks to recognize the worshipers of any deity with the Demon APG subdomain, as well as a +2 morale bonus on attack rolls and caster level checks to overcome spell resistance of creatures that she recognizes as followers of such a deity.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Solo Tactics (Ex)
- **Description:** A ravener hunter gains this ability at 6th level instead of 3rd level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6, 3.
  - **Rules text to implement:** A ravener hunter gains this ability at 6th level instead of 3rd level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Alignment
- Charged by Nature
- Holy Magic
- Demon Hunter
- Solo Tactics (Ex)
