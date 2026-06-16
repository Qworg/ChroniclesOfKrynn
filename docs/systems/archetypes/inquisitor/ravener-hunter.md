# Inquisitor - Ravener Hunter

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Ravener Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Ravener%20Hunter
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Charged by Nature; Holy Magic; Demon Hunter; Solo Tactics (Ex)
- **Replaced / altered class features:** domain; the teamwork feat gained at 3rd level

## Replacement details

### Replaces: domain

- **Archetype feature:** Charged by Nature
- **Description:** Rather than having a deity patron, a ravener hunter is charged by the spirits of the Mwangi to eradicate evil wherever it appears.
- **Mechanics:**
  - Level hooks: 1, 8.
  - Mechanics summary: Rather than having a deity patron, a ravener hunter is charged by the spirits of the Mwangi to eradicate evil wherever it appears. At 1st level, a ravener hunter chooses an oracle mystery from the following list: ancestor UM , battle APG , flame APG , heavens APG , life APG , lunar ( Pathfinder Player Companion: Blood of the Moon 28 ), nature APG , solar ( Pathfinder Player Companion: Harrow Handbook 26 ), stone APG , time UM , volcano ( Pathfinder Adventure Path #95: Anvil of Fire 72 ), waves APG , win... She gains one revelation from her chosen mystery. She must meet the revelation’s prerequisites, using her inquisitor level as her effective oracle level to determine the revelation’s effects, and she never qualifies for the Extra Revelation APG feat. The ravener hunter gains a second revelation from her chosen mystery at 8th level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, cleric domain hook.
  - Needs implementation review: harrow deck/cards.

### Alters: the inquisitor’s spells

- **Archetype feature:** Holy Magic
- **Description:** A ravener hunter adds all spells of 6th-level and lower on the cleric spell list with the good descriptor to her inquisitor spell list as inquisitor spells of the same level.
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: A ravener hunter adds all spells of 6th-level and lower on the cleric spell list with the good descriptor to her inquisitor spell list as inquisitor spells of the same level. If a spell appears on both the cleric and inquisitor spell lists, the ravener hunter uses the lower of the two spell levels listed for the spell. She cannot cast 2 with the chaotic, evil, or lawful descriptors, even from spell trigger or spell completion items.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: the teamwork feat gained at 3rd level

- **Archetype feature:** Demon Hunter
- **Description:** At 3rd level, a ravener hunter gains Demon Hunter ( Pathfinder Campaign Setting: The Inner Sea World Guide 286 ) as a bonus feat, ignoring its prerequisites.
- **Mechanics:**
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a ravener hunter gains Demon Hunter ( Pathfinder Campaign Setting: The Inner Sea World Guide 286 ) as a bonus feat, ignoring its prerequisites. She also gains a +2 bonus on Knowledge (religion) checks to recognize the worshipers of any deity with the Demon APG subdomain, as well as a +2 morale bonus on attack rolls and caster level checks to overcome spell resistance of creatures that she recognizes as followers of such a deity.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, cleric domain hook.

## Parsed source feature headings

- Charged by Nature
- Holy Magic
- Demon Hunter
- Solo Tactics (Ex)

