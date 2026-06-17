# Alchemist - Mindchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Mindchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Mindchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Cognatogen; Perfect Recall; Bonus Feats; Languages; Discoveries
- **Replaced / altered class features:** the mutagen class ability (a mindchemist cannot create mutagens unless he selects mutagen* as a discovery); poison use

## Implementation details

### Replaces: the mutagen class ability (a mindchemist cannot create mutagens unless he selects mutagen* as a discovery)

- **Archetype feature:** Cognatogen
- **Description:** At 1st level, a mindchemist learns how to create a cognatogen, as per the cognatogen discovery.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a mindchemist learns how to create a cognatogen, as per the cognatogen discovery.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: poison use

- **Archetype feature:** Perfect Recall
- **Description:** At 2nd level, a mindchemist has honed his memory.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a mindchemist has honed his memory. When making a Knowledge check, he may add his Intelligence bonus on the check a second time. Thus, a mindchemist with 5 ranks in Knowledge (history) and a +2 Intelligence bonus has a total skill bonus of +9 (5 + 2 + 2) using this ability. The mindchemist can also use this ability when making an Intelligence check to remember something.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** A mindchemist may select Skill Focus (Disable Device, Disguise, Heal, any Knowledge skill, Sense Motive, or Spellcraft) in place of a discovery.
- **Detailed mechanics:**
  - **Rules text to implement:** A mindchemist may select Skill Focus (Disable Device, Disguise, Heal, any Knowledge skill, Sense Motive, or Spellcraft) in place of a discovery.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Languages
- **Description:** A mindchemist may learn three languages in place of a discovery.
- **Detailed mechanics:**
  - **Rules text to implement:** A mindchemist may learn three languages in place of a discovery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the mindchemist archetype: grand cognatogen, greater cognatogen, infuse mutagen.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the mindchemist archetype: grand cognatogen, greater cognatogen, infuse mutagen.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Cognatogen
- Perfect Recall
- Bonus Feats
- Languages
- Discoveries
