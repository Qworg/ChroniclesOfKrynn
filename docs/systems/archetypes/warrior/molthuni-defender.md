# Warrior - Molthuni Defender

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Molthuni Defender
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Molthuni%20Defender
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Armored Defense (Ex)
- **Replaced / altered class features:** armor training 1 through 4, but counts as armor training for the purposes of qualifying for feats and prestige classes

## Implementation details

### Replaces: armor training 1 through 4, but counts as armor training for the purposes of qualifying for feats and prestige classes

- **Archetype feature:** Armored Defense (Ex)
- **Description:** At 3rd level, a Molthuni defender gains a bonus to his CMD against bull rush, dirty trick APG, drag APG, grapple, overrun, reposition APG, and trip combat maneuver checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a Molthuni defender gains a bonus to his CMD against bull rush, dirty trick APG, drag APG, grapple, overrun, reposition APG, and trip combat maneuver checks. This bonus also applies to the DC of foes’ Acrobatics checks to move through squares he threatens. This bonus is +1 when the Molthuni defender is wearing medium armor, and +3 when he is wearing heavy armor. At 7th, 11th, and 15th levels, these bonuses increase by 1. In addition to this, the Molthuni defender is able to choose one of the following combat maneuvers: bull rush, dirty trick APG, drag APG, grapple, overrun, reposition APG, or trip. When he is wearing medium or heavy armor, the Molthuni defender adds half his armor training bonus on combat maneuver checks for the selected maneuver. He can choose an additional combat maneuver at 7th, 11th, and 15th levels. It does not count as advanced armor training (see page 14).
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Armored Defense (Ex)
