# Sorcerer - Eldritch Scrapper

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Eldritch Scrapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Eldritch%20Scrapper
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Martial Flexibility (Ex); Bloodline Weapons
- **Replaced / altered class features:** the sorcerer’s bloodline powers gained 1st, 9th, and 15th levels

## Implementation details

### Replaces: the sorcerer’s bloodline powers gained 1st, 9th, and 15th levels

- **Archetype feature:** Martial Flexibility (Ex)
- **Description:** At 1st level, an eldritch scrapper gains the brawler’s martial flexibility class feature, using her sorcerer level as her brawler level for the purposes of uses per day.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 9, 15.
  - **Rules text to implement:** At 1st level, an eldritch scrapper gains the brawler’s martial flexibility class feature, using her sorcerer level as her brawler level for the purposes of uses per day. The scrapper treats Arcane Strike and Combat Casting as combat feats for the purpose of this ability. At 9th level, an eldritch scrapper can use this ability to gain the benefit of two combat feats at the same time. She can select one feat as a move action or two feats as a standard action. She can use one of these feats to meet a prerequisite of the second feat; doing so means she cannot replace the feat that is currently fulfilling another feat’s prerequisites without also replacing all feats that require it. Each individual feat selected counts toward her daily uses of this ability. At 15th level, an eldritch scrapper can use this ability to gain the benefit of three combat feats at the same time. She can select one feat as a swift action, two feats as a move action, or three feats as a standard action. She can use one of the feats to meet a prerequisite of the second and third feats, and use the second feat to meet a prerequisite of the third feat. Each individual feat selected counts toward her daily uses of this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bloodline Weapons
- **Description:** If an eldritch scrapper’s 1st-level bloodline power would normally grant her natural attacks (such as bite or claws), at 3rd level she can select that 1st-level bloodline power in place of her 3rd-level bloodline power.
- **Detailed mechanics:**
  - **Level hooks:** 1, 3.
  - **Rules text to implement:** If an eldritch scrapper’s 1st-level bloodline power would normally grant her natural attacks (such as bite or claws), at 3rd level she can select that 1st-level bloodline power in place of her 3rd-level bloodline power.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Martial Flexibility (Ex)
- Bloodline Weapons
