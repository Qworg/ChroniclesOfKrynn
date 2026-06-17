# Bard - Shadow Puppeteer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Shadow Puppeteer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Shadow%20Puppeteer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance
- **Replaced / altered class features:** all levels of inspire courage and inspire competence

## Implementation details

### Replaces: all levels of inspire courage and inspire competence

- **Archetype feature:** Bardic Performance
- **Description:** A shadow puppeteer gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 1, 4.
  - **Rules text to implement:** A shadow puppeteer gains the following types of bardic performance. The character must be able to perform shadow puppetry in order to activate any of these abilities. Shadow puppetry uses Perform (act), and requires a light source. Shadow Servant (Sp) : At 1st level, the puppeteer can create a shadow servant to perform simple tasks. The shadow servant is identical to an unseen servant (caster level equal to the shadow puppeteer’s bard level), except it appears as a formless shadow. Shadow servant relies on visual components. Shadow Puppets (Sp) : At 1st level, a shadow puppeteer can use bardic performance to create one quasi-real shadowy creature resembling a monster from the summon monster I list. These shadowy creatures otherwise work like shadow conjuration, and targets interacting with them get a Will saving throw (DC 10 + 1/2 your bard level + your Charisma bonus) to treat them as only 20% real. At 4th level and every three levels thereafter, this ability acts like the next higher version of summon monster ( summon monster II at 4th level and so on).
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - summoning subsystem.

## Parsed source feature headings

- Bardic Performance
