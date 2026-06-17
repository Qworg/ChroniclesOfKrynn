# Druid - Reincarnated Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Reincarnated Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Reincarnated%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Mysterious Stranger (Ex); Resist Death’s Touch (Ex); Many Lives (Ex); Wild Shape (Su); Cheat Death (Ex); Tongue of the Sun and Moon (Ex)
- **Replaced / altered class features:** woodland stride; resist nature’s lure; venom immunity; timeless body

## Implementation details

### Replaces: woodland stride

- **Archetype feature:** Mysterious Stranger (Ex)
- **Description:** At 2nd level, a reincarnated druids adds 1/2 her druid level to the DC of Sense Motive, Diplomacy, and Knowledge checks to learn about her.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a reincarnated druids adds 1/2 her druid level to the DC of Sense Motive, Diplomacy, and Knowledge checks to learn about her.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Death’s Touch (Ex)
- **Description:** At 4th level, a reincarnated druid gains a +4 bonus on saving throws against death effects, energy drain, and necromancy effects, and on stabilization checks when dying.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a reincarnated druid gains a +4 bonus on saving throws against death effects, energy drain, and necromancy effects, and on stabilization checks when dying.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Many Lives (Ex)
- **Description:** At 5th level, if a reincarnated druid is killed, she may automatically reincarnate (as the spell) 1 day later.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, if a reincarnated druid is killed, she may automatically reincarnate (as the spell) 1 day later. The reincarnated druid appears in a safe location within 1 mile of her previous body. At will for the next 7 days, she can sense the presence of her remains as if using locate object as a spell-like ability. If she is killed during these 7 days, she remains dead and does not reincarnate. The many lives ability does not function ifthe reincarnated druid is slain by a death effect. A reincarnated druid cannot be raised from the dead or resurrected, though she can be reincarnated.
- **Implementation flags:**
  - ki subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** A reincarnated druid gains this ability at 6th level, and it functions at her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** A reincarnated druid gains this ability at 6th level, and it functions at her druid level – 2.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: venom immunity

- **Archetype feature:** Cheat Death (Ex)
- **Description:** At 9th level, once per day, a reincarnated druid may reroll a save against a death effect, energy drain, or necromancy effect before the result of the roll is revealed, or reroll a failed stabilization check while dying.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, once per day, a reincarnated druid may reroll a save against a death effect, energy drain, or necromancy effect before the result of the roll is revealed, or reroll a failed stabilization check while dying. She must take the result of the second roll, even if it is worse than the original roll.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: timeless body

- **Archetype feature:** Tongue of the Sun and Moon (Ex)
- **Description:** At 15th level, a reincarnated druid can speak with any living creature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, a reincarnated druid can speak with any living creature.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Mysterious Stranger (Ex)
- Resist Death’s Touch (Ex)
- Many Lives (Ex)
- Wild Shape (Su)
- Cheat Death (Ex)
- Tongue of the Sun and Moon (Ex)
