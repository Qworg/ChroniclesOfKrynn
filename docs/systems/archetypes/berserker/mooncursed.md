# Berserker - Mooncursed

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Mooncursed
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Mooncursed
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Race; Shifting Rage (Su); Hybrid Rage (Su); Greater Shifting Rage (Su); Mighty Shifting Rage (Su)
- **Replaced / altered class features:** improved uncanny dodge; greater rage; mighty rage

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Race
- **Description:** A mooncursed must either be a humanoid or monstrous humanoid.
- **Detailed mechanics:**
  - **Rules text to implement:** A mooncursed must either be a humanoid or monstrous humanoid.
- **Implementation flags:**
  - curse subsystem.
  - feat grant/prerequisite handling.

### Alters: rage

- **Archetype feature:** Shifting Rage (Su)
- **Description:** A mooncursed can call upon an animal totem or inner curse, transforming her into a savage beast.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** A mooncursed can call upon an animal totem or inner curse, transforming her into a savage beast. Starting at 1st level, she chooses bear, boar, crocodile, shark, tiger, or wolf. Once chosen, this animal can’t be changed. When using rounds of her shifting rage, instead of the usual bonuses and penalties from rage, the mooncursed transforms into a Medium version of this animal’s form as if under the influence of beast shape I, treating her class level as her caster level whenever relevant. Other aspects of rage aside from the bonuses and penalties, such as the skill restrictions on skills and effects that require concentration, still apply during a shifting rage.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.
  - curse subsystem.
  - skill/class-skill modification.

### Replaces: improved uncanny dodge

- **Archetype feature:** Hybrid Rage (Su)
- **Description:** Beginning at 5th level, a mooncursed can choose to assume a hybrid of her base type and alternate form instead of her usual alternate form during her shifting rage.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** Beginning at 5th level, a mooncursed can choose to assume a hybrid of her base type and alternate form instead of her usual alternate form during her shifting rage. If she does, the animal’s forelimbs (or pectoral fins for the shark) remain hands able to manipulate objects and wield weapons as well as human hands do, she can walk on two legs (the shark’s tail fins remain legs), and she can talk.
- **Implementation flags:**
  - rage/rage power subsystem.
  - curse subsystem.

### Replaces: greater rage

- **Archetype feature:** Greater Shifting Rage (Su)
- **Description:** At 11th level, a mooncursed can assume larger alternate and hybrid forms.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a mooncursed can assume larger alternate and hybrid forms. This functions like beast shape II, and it allows the mooncursed to take on a Medium or Large version of her animal’s form.
- **Implementation flags:**
  - rage/rage power subsystem.
  - curse subsystem.

### Replaces: mighty rage

- **Archetype feature:** Mighty Shifting Rage (Su)
- **Description:** At 20th level, a mooncursed can assume even larger alternate and hybrid forms.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a mooncursed can assume even larger alternate and hybrid forms. This functions like beast shape III, and it allows the mooncursed to take on a Medium, Large, or Huge version of her animal’s form.
- **Implementation flags:**
  - rage/rage power subsystem.
  - curse subsystem.

## Parsed source feature headings

- Race
- Shifting Rage (Su)
- Hybrid Rage (Su)
- Greater Shifting Rage (Su)
- Mighty Shifting Rage (Su)
