# Rogue - Sly Saboteur

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sly Saboteur
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sly%20Saboteur
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Scamper (Ex); Catastrophic Failure (Ex); Disable Magic Device (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** Class Skills; Trap Sense; Uncanny Dodge; Improved Uncanny Dodge;

## Implementation details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A sly saboteur adds Survival to her list of class skills instead of Knowledge (dungeoneering).
- **Detailed mechanics:**
  - **Rules text to implement:** A sly saboteur adds Survival to her list of class skills instead of Knowledge (dungeoneering).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trap sense

- **Archetype feature:** Scamper (Ex)
- **Description:** At 3rd level, a sly saboteur can move through 5 feet of difficult terrain each round as if it were normal terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 6, 18.
  - **Rules text to implement:** At 3rd level, a sly saboteur can move through 5 feet of difficult terrain each round as if it were normal terrain. At 6th level and every 3 levels thereafter, this distance increases by 5 feet (to a maximum of 30 feet at 18th level). This ability allows the sly saboteur to take a 5-foot step into difficult terrain. This ability applies only when she is wearing light armor or no armor and carrying no more than a light load, and it stacks with the Acrobatic Steps and Nimble Moves feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: uncanny dodge

- **Archetype feature:** Catastrophic Failure (Ex)
- **Description:** At 4th level, when a sly saboteur uses Disable Device to rig a device to fail, she can increase the DC of the check by 5.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, when a sly saboteur uses Disable Device to rig a device to fail, she can increase the DC of the check by 5. If she does so and succeeds at the check, when the device fails, users take damage equal to the sly saboteur’s sneak attack, or they take half that amount with a successful Reflex save (DC = 10 + half the sly saboteur’s level + her Dexterity modifier). The type of damage depends on the nature of the device but is typically bludgeoning, fire, piercing, or slashing.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Disable Magic Device (Su)
- **Description:** At 8th level, a sly saboteur can use Disable Device to rig a magic item to fail as if it were an extremely complex device.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a sly saboteur can use Disable Device to rig a magic item to fail as if it were an extremely complex device. If the item’s effect is instantaneous, the effect is countered the next time the item is activated, but the activation still consumes a charge or use. If the item’s effect is continuous or has a duration, the effect fails after 1d4 rounds or minutes of use (sly saboteur’s choice). This ends the duration or suppresses a continuous effect for 1d4 rounds (as the spell dispel magic ). This ability cannot be used on artifacts. If this ability is combined with the catastrophic failure ability, the resulting damage is untyped magic and is not reduced by damage reduction or energy resistance.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the sly saboteur archetype: cunning trigger, fast stealth, getaway artist, quick disable, quick trapsmith, rogue crawl, trap spotter, wall scramble.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the sly saboteur archetype: cunning trigger, fast stealth, getaway artist, quick disable, quick trapsmith, rogue crawl, trap spotter, wall scramble.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the sly saboteur archetype: frugal trapsmith, hide in plain sight, knock-out blow, rumormonger, skill mastery, stealthy sniper.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the sly saboteur archetype: frugal trapsmith, hide in plain sight, knock-out blow, rumormonger, skill mastery, stealthy sniper.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Class Skills
- Scamper (Ex)
- Catastrophic Failure (Ex)
- Disable Magic Device (Su)
- Rogue Talents
- Advanced Talents
