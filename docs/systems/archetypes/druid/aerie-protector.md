# Druid - Aerie Protector

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Aerie Protector
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Aerie%20Protector
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Nature Bond; Wild Empathy (Ex); Sky and Stone (Ex); Wind at Her Back (Su); Wild Shape; In the Wind (Ex)
- **Replaced / altered class features:** Weapon/Armor Proficiencies; Nature Bond; Wild Empathy; Woodland Stride; Resist Nature’s Lure; Wild Shape; Venom Immunity

## Replacement details

### Alters: the druid’s weapon

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Aerie protectors are proficient with javelins and shortbows but not with scimitars or scythes.
- **Mechanics:**
  - Mechanics summary: Aerie protectors are proficient with javelins and shortbows but not with scimitars or scythes. Aerie protectors are not proficient with medium armor.
- **Implementation flags:**
  - Feature-key mapping needed for non-feat class-table changes such as skills/proficiencies.

### Alters: armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Aerie protectors are proficient with javelins and shortbows but not with scimitars or scythes.
- **Mechanics:**
  - Mechanics summary: Aerie protectors are proficient with javelins and shortbows but not with scimitars or scythes. Aerie protectors are not proficient with medium armor.
- **Implementation flags:**
  - Feature-key mapping needed for non-feat class-table changes such as skills/proficiencies.

### Alters: nature bond

- **Archetype feature:** Nature Bond
- **Description:** If the aerie protector chooses an animal companion as her nature bond, she must choose an animal with a fly speed.
- **Mechanics:**
  - Mechanics summary: If the aerie protector chooses an animal companion as her nature bond, she must choose an animal with a fly speed. She can use spells or other effects to alter her companion’s fly speed, but it must be able to fly on its own before it becomes her companion. If the aerie protector chooses a domain as her nature bond, she must choose the Air, Eagle, Earth, Mountain, or Weather domain.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook, animal companion hook.

### Alters: wild empathy

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** An aerie protector gains a +4 bonus on wild empathy checks on flying animals, but she takes a –4 penalty on checks on other animals.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An aerie protector gains a +4 bonus on wild empathy checks on flying animals, but she takes a –4 penalty on checks on other animals.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

### Replaces: woodland stride

- **Archetype feature:** Sky and Stone (Ex)
- **Description:** At 2nd level, an aerie protector gains a bonus equal to half her level on Knowledge (geography) and Survival checks involving mountainous terrain or high altitudes, and she cannot be tracked in such an environment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an aerie protector gains a bonus equal to half her level on Knowledge (geography) and Survival checks involving mountainous terrain or high altitudes, and she cannot be tracked in such an environment.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: resist nature’s lure

- **Archetype feature:** Wind at Her Back (Su)
- **Description:** At 4th level, an aerie protector gains a +4 bonus to CMD and on saving throws against the effects of high altitude and effects that rely on air pressure or strong wind to move her or impede her flight.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an aerie protector gains a +4 bonus to CMD and on saving throws against the effects of high altitude and effects that rely on air pressure or strong wind to move her or impede her flight. This bonus also applies on Reflex saves against effects that deal electricity damage.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: venom immunity

- **Archetype feature:** In the Wind (Ex)
- **Description:** At 9th level, the climb and fly speeds of forms the aerie protector assumes with her wild shape ability (if any) increase by 10 feet.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, the climb and fly speeds of forms the aerie protector assumes with her wild shape ability (if any) increase by 10 feet. The maneuverability of her flying forms improves by one category.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Weapon/Armor Proficiencies
- Wild Shape

## Parsed source feature headings

- Weapon and Armor Proficiency
- Nature Bond
- Wild Empathy (Ex)
- Sky and Stone (Ex)
- Wind at Her Back (Su)
- Wild Shape
- In the Wind (Ex)

