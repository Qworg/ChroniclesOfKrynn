# Paladin - Shining Knight

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Shining Knight
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Shining%20Knight
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skilled Rider (Ex and Su); Divine Bond (Su); Knight’s Charge (Su)
- **Replaced / altered class features:** divine health; aura of justice

## Implementation details

### Replaces: divine health

- **Archetype feature:** Skilled Rider (Ex and Su)
- **Description:** At 3rd level, a shining knight does not take any penalty to her Ride skill due to her armor check penalty.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a shining knight does not take any penalty to her Ride skill due to her armor check penalty. In addition, any mount she is riding gains the benefit of her divine grace class feature, adding her Charisma bonus (if any) to its saving throws.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Divine Bond (Su)
- **Description:** Upon reaching 5th level, a shining knight must form a bond with a mount.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** Upon reaching 5th level, a shining knight must form a bond with a mount. This ability otherwise functions as the paladin ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of justice

- **Archetype feature:** Knight’s Charge (Su)
- **Description:** At 11th level, whenever a mounted shining knight charges a foe, her movement does not provoke attacks of opportunity, for either her or her mount.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, whenever a mounted shining knight charges a foe, her movement does not provoke attacks of opportunity, for either her or her mount. In addition, if her target is also the target of her smite evil ability and the charge attack hits, the target must make a Will save or be panicked for a number of rounds equal to 1/2 the shining knight’s level. The DC of this save is equal to 10 + 1/2 the shining knight’s level + the shining knight’s Charisma modifier.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Skilled Rider (Ex and Su)
- Divine Bond (Su)
- Knight’s Charge (Su)
