# Warrior - Armor Master

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Armor Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Armor%20Master
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Deflective Shield (Ex); Armored Defense (Ex); Fortification (Ex); Indestructible (Ex)
- **Replaced / altered class features:** bravery; weapon training 1 and 3, and armor mastery; weapon training 2 and 4; weapon mastery

## Implementation details

### Replaces: bravery

- **Archetype feature:** Deflective Shield (Ex)
- **Description:** At 2nd level, an armor master specializes in using his shield to deflect attacks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 20.
  - **Rules text to implement:** At 2nd level, an armor master specializes in using his shield to deflect attacks. He gains a +1 bonus to his touch AC, and this bonus increases for every four levels beyond 2nd (to a maximum of +6 at 20th level); however, this bonus cannot exceed the sum of the armor and enhancement bonus to AC provided by the shield that the armor master is currently carrying.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1 and 3, and armor mastery

- **Archetype feature:** Armored Defense (Ex)
- **Description:** At 5th level, an armor master gains DR 1/— when wearing light armor, DR 2/— when wearing medium armor, and DR 3/— when wearing heavy armor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 19.
  - **Rules text to implement:** At 5th level, an armor master gains DR 1/— when wearing light armor, DR 2/— when wearing medium armor, and DR 3/— when wearing heavy armor. At 19th level, this damage reduction increases to DR 4/— when wearing light armor, DR 8/— when wearing medium armor, and DR 12/— when wearing heavy armor. This damage reduction stacks with that provided by adamantine armor, but not with other forms of damage reduction. This damage reduction does not apply if the armor master is stunned, unconscious, or helpless.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2 and 4

- **Archetype feature:** Fortification (Ex)
- **Description:** At 9th level, an armor master can use his armor to shield critical areas from injury.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9, 13.
  - **Rules text to implement:** At 9th level, an armor master can use his armor to shield critical areas from injury. He treats any armor he wears as if it had the light fortification special ability. At 13th level, his armor gains the moderate fortification special ability. This fortification does not stack in any way with armor that has these special abilities. In these cases the armor master takes the better of the two fortifications.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon mastery

- **Archetype feature:** Indestructible (Ex)
- **Description:** At 20th level, an armor master gains complete immunity to critical hits and sneak attacks while he is wearing armor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, an armor master gains complete immunity to critical hits and sneak attacks while he is wearing armor. In addition, unless his armor has the fragile armor quality, it cannot be sundered while he is wearing it.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Deflective Shield (Ex)
- Armored Defense (Ex)
- Fortification (Ex)
- Indestructible (Ex)
