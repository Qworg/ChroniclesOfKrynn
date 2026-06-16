# Warrior - Molthuni Defender

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Molthuni Defender
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Molthuni%20Defender
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Armored Defense (Ex)
- **Replaced / altered class features:** armor training 1 through 4, but counts as armor training for the purposes of qualifying for feats and prestige classes

## Replacement details

### Replaces: armor training 1 through 4, but counts as armor training for the purposes of qualifying for feats

- **Archetype feature:** Armored Defense (Ex)
- **Description:** At 3rd level, a Molthuni defender gains a bonus to his CMD against bull rush, dirty trick APG , drag APG , grapple, overrun, reposition APG , and trip combat maneuver checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a Molthuni defender gains a bonus to his CMD against bull rush, dirty trick APG , drag APG , grapple, overrun, reposition APG , and trip combat maneuver checks. This bonus also applies to the DC of foes’ Acrobatics checks to move through squares he threatens. This bonus is +1 when the Molthuni defender is wearing medium armor, and +3 when he is wearing heavy armor. At 7th, 11th, and 15th levels, these bonuses increase by 1. When he is wearing medium or heavy armor, the Molthuni defender adds half his armor training bonus on combat maneuver checks for the selected maneuver. He can choose an additional combat maneuver at 7th, 11th, and 15th levels.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation.

### Replaces: prestige classes

- **Archetype feature:** Armored Defense (Ex)
- **Description:** At 3rd level, a Molthuni defender gains a bonus to his CMD against bull rush, dirty trick APG , drag APG , grapple, overrun, reposition APG , and trip combat maneuver checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a Molthuni defender gains a bonus to his CMD against bull rush, dirty trick APG , drag APG , grapple, overrun, reposition APG , and trip combat maneuver checks. This bonus also applies to the DC of foes’ Acrobatics checks to move through squares he threatens. This bonus is +1 when the Molthuni defender is wearing medium armor, and +3 when he is wearing heavy armor. At 7th, 11th, and 15th levels, these bonuses increase by 1. When he is wearing medium or heavy armor, the Molthuni defender adds half his armor training bonus on combat maneuver checks for the selected maneuver. He can choose an additional combat maneuver at 7th, 11th, and 15th levels.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation.

## Parsed source feature headings

- Armored Defense (Ex)

