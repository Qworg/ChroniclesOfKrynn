# Alchemist - Ragechemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Ragechemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Ragechemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Rage Mutagen; Sturdy Rage; Lumbering Rage; Discoveries
- **Replaced / altered class features:** poison use; swift poisoning; poison immunity

## Implementation details

### Replaces: poison use

- **Archetype feature:** Rage Mutagen
- **Description:** At 2nd level, whenever a ragechemist creates a mutagen that improves his Strength, that mutagen's bonus to Strength increases by +2 and penalizes the alchemist's Intelligence score.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, whenever a ragechemist creates a mutagen that improves his Strength, that mutagen's bonus to Strength increases by +2 and penalizes the alchemist's Intelligence score. Furthermore, while under the effects of this mutagen, whenever the alchemist takes damage, his rage grows, with detrimental effects. At the end of each turn that he takes hit point damage, the ragechemist must succeed at a Will saving throw (DC 15, or DC 20 if any of the damage came from a critical hit that turn) or take a –2 penalty on Will saving throws and to Intelligence. These penalties end 1 hour after the mutagen ends and stack with themselves. If the penalty lowers the ragechemist’s Intelligence score to 0, the ragechemist is comatose until 1 hour after the mutagen expires.
- **Implementation flags:**
  - rage/rage power subsystem.
  - poison subsystem.

### Replaces: swift poisoning

- **Archetype feature:** Sturdy Rage
- **Description:** At 6th level, whenever a ragechemist uses his rage mutagen, he also gains a +4 bonus to natural armor, but the penalty on Will saving throws and to Intelligence for taking damage increases to –4.
- **Detailed mechanics:**
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, whenever a ragechemist uses his rage mutagen, he also gains a +4 bonus to natural armor, but the penalty on Will saving throws and to Intelligence for taking damage increases to –4.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - poison subsystem.

### Replaces: poison immunity

- **Archetype feature:** Lumbering Rage
- **Description:** At 10th level, whenever a ragechemist uses his rage mutagen ability, he may have the mutagen also give him a +2 morale bonus to Constitution, but when he takes a penalty on Will saving throws and to Intelligence, he also takes a –1 penalty to Dexterity.
- **Detailed mechanics:**
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, whenever a ragechemist uses his rage mutagen ability, he may have the mutagen also give him a +2 morale bonus to Constitution, but when he takes a penalty on Will saving throws and to Intelligence, he also takes a –1 penalty to Dexterity.
- **Implementation flags:**
  - rage/rage power subsystem.
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the ragechemist: feral mutagen, grand mutagen, greater mutagen, infuse mutagen, tentacle, and vestigial arm.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the ragechemist: feral mutagen, grand mutagen, greater mutagen, infuse mutagen, tentacle, and vestigial arm.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Rage Mutagen
- Sturdy Rage
- Lumbering Rage
- Discoveries
