# Druid - Aerie Protector

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Aerie Protector
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Aerie%20Protector
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Nature Bond; Wild Empathy (Ex); Sky and Stone (Ex); Wind at Her Back (Su); Wild Shape; In the Wind (Ex)
- **Replaced / altered class features:** Weapon/Armor Proficiencies; Nature Bond; Wild Empathy; Woodland Stride; Resist Nature’s Lure; Wild Shape; Venom Immunity

## Implementation details

### Alters: the druid’s weapon and armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Aerie protectors are proficient with javelins and shortbows but not with scimitars or scythes.
- **Detailed mechanics:**
  - **Rules text to implement:** Aerie protectors are proficient with javelins and shortbows but not with scimitars or scythes. Aerie protectors are not proficient with medium armor.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: nature bond

- **Archetype feature:** Nature Bond
- **Description:** If the aerie protector chooses an animal companion as her nature bond, she must choose an animal with a fly speed.
- **Detailed mechanics:**
  - **Rules text to implement:** If the aerie protector chooses an animal companion as her nature bond, she must choose an animal with a fly speed. She can use spells or other effects to alter her companion’s fly speed, but it must be able to fly on its own before it becomes her companion. If the aerie protector chooses a domain as her nature bond, she must choose the Air, Eagle, Earth, Mountain, or Weather domain.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - flight/movement mode support.

### Alters: wild empathy

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** An aerie protector gains a +4 bonus on wild empathy checks on flying animals, but she takes a –4 penalty on checks on other animals.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An aerie protector gains a +4 bonus on wild empathy checks on flying animals, but she takes a –4 penalty on checks on other animals.
- **Implementation flags:**
  - flight/movement mode support.

### Replaces: woodland stride

- **Archetype feature:** Sky and Stone (Ex)
- **Description:** At 2nd level, an aerie protector gains a bonus equal to half her level on Knowledge (geography) and Survival checks involving mountainous terrain or high altitudes, and she cannot be tracked in such an environment.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an aerie protector gains a bonus equal to half her level on Knowledge (geography) and Survival checks involving mountainous terrain or high altitudes, and she cannot be tracked in such an environment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Wind at Her Back (Su)
- **Description:** At 4th level, an aerie protector gains a +4 bonus to CMD and on saving throws against the effects of high altitude and effects that rely on air pressure or strong wind to move her or impede her flight.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an aerie protector gains a +4 bonus to CMD and on saving throws against the effects of high altitude and effects that rely on air pressure or strong wind to move her or impede her flight. This bonus also applies on Reflex saves against effects that deal electricity damage.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape
- **Description:** An aerie protector gains this ability at 6th level, except her effective druid level is her druid level – 2.
- **Detailed mechanics:**
  - **Level hooks:** 6.
  - **Rules text to implement:** An aerie protector gains this ability at 6th level, except her effective druid level is her druid level – 2. If she takes on the form of a flying animal, she instead uses her druid level + 2.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Replaces: venom immunity

- **Archetype feature:** In the Wind (Ex)
- **Description:** At 9th level, the climb and fly speeds of forms the aerie protector assumes with her wild shape ability (if any) increase by 10 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, the climb and fly speeds of forms the aerie protector assumes with her wild shape ability (if any) increase by 10 feet. The maneuverability of her flying forms improves by one category.
- **Implementation flags:**
  - wild shape subsystem.
  - flight/movement mode support.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Nature Bond
- Wild Empathy (Ex)
- Sky and Stone (Ex)
- Wind at Her Back (Su)
- Wild Shape
- In the Wind (Ex)
