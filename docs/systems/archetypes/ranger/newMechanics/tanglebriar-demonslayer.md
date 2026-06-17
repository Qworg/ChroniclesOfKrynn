# Ranger - Tanglebriar Demonslayer

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Tanglebriar Demonslayer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Tanglebriar%20Demonslayer
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skills; Favored Enemy (Ex); Demonologist (Ex); Expanded Spell List; Fiendish Quarry (Su); Improved Fiendish Quarry (Su)
- **Replaced / altered class features:** endurance

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skills
- **Description:** Tanglebriar demonslayers gain Knowledge (planes) as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** Tanglebriar demonslayers gain Knowledge (planes) as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Favored Enemy (Ex)
- **Description:** At 1st level, a Tanglebriar demonslayer must choose favored enemy (evil outsider).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 5.
  - **Rules text to implement:** At 1st level, a Tanglebriar demonslayer must choose favored enemy (evil outsider). At 5th level and every time he advances his favored enemy bonus, the demonslayer must advance his bonus against evil outsiders. In addition to the normal benefits of favored enemy, a Tanglebriar demonslayer gains a bonus equal to 1/2 his favored enemy bonus on saving throws against spells, spell-like abilities, and supernatural abilities of evil outsiders. This ability is otherwise identical to and replaces the favored enemy ranger class ability.
- **Implementation flags:**
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Replaces: endurance

- **Archetype feature:** Demonologist (Ex)
- **Description:** At 3rd level, a Tanglebriar demonslayer gains insight into his Abyssal enemies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a Tanglebriar demonslayer gains insight into his Abyssal enemies. The demonslayer gains a bonus equal to 1/2 his class level on Knowledge (planes) checks that relate to demons, Perception checks to pierce a demon’s disguise, and Survival checks while tracking demons. This bonus stacks with any bonuses from favored enemy.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Expanded Spell List
- **Description:** A Tanglebriar demonslayer adds the following spells to his spell list: 1st— protection from evil ; 2nd— align weapon, magic circle against evil ; 4th— dimensional anchor, dismissal.
- **Detailed mechanics:**
  - **Rules text to implement:** A Tanglebriar demonslayer adds the following spells to his spell list: 1st— protection from evil ; 2nd— align weapon, magic circle against evil ; 4th— dimensional anchor, dismissal.
- **Implementation flags:**
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Fiendish Quarry (Su)
- **Description:** At 11th level, when a Tanglebriar demonslayer chooses an evil outsider as his quarry, he can the forgo the normal +2 attack bonus and instead treat his weapon as if it were good-aligned versus his quarry.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, when a Tanglebriar demonslayer chooses an evil outsider as his quarry, he can the forgo the normal +2 attack bonus and instead treat his weapon as if it were good-aligned versus his quarry. This ability is otherwise identical to quarry and replaces that ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Improved Fiendish Quarry (Su)
- **Description:** At 19th level, when a Tanglebriar demonslayer chooses an evil outsider as his quarry, he can forgo the normal +4 attack bonus and instead treat his weapon as if it had the holy weapon special ability while attacking his quarry.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, when a Tanglebriar demonslayer chooses an evil outsider as his quarry, he can forgo the normal +4 attack bonus and instead treat his weapon as if it had the holy weapon special ability while attacking his quarry. This ability is otherwise identical to improved quarry and replaces that ability.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Skills
- Favored Enemy (Ex)
- Demonologist (Ex)
- Expanded Spell List
- Fiendish Quarry (Su)
- Improved Fiendish Quarry (Su)
