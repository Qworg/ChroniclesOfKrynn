# Sorcerer - Eldritch Scrapper

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Eldritch Scrapper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Eldritch%20Scrapper
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Martial Flexibility (Ex); Bloodline Weapons
- **Replaced / altered class features:** the sorcerer’s bloodline powers gained 1st, 9th, and 15th levels

## Replacement details

### Replaces: the sorcerer’s bloodline powers gained 1st, 9th
- **Archetype feature:** Martial Flexibility (Ex)
- **Description:** At 1st level, an eldritch scrapper gains the brawler’s martial flexibility class feature, using her sorcerer level as her brawler level for the purposes of uses per day.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 9, 15.
  - Mechanics summary: At 1st level, an eldritch scrapper gains the brawler’s martial flexibility class feature, using her sorcerer level as her brawler level for the purposes of uses per day. The scrapper treats Arcane Strike and Combat Casting as combat feats for the purpose of this ability. At 9th level, an eldritch scrapper can use this ability to gain the benefit of two combat feats at the same time. She can select one feat as a move action or two feats as a standard action. She can use one of these feats to meet a prerequisite of the second feat; doing so means she cannot replace the feat that is currently fulfilling another feat’s prerequisites without also replacing all feats that require it. Each individual feat selected counts toward her daily uses of this ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, sorcerer bloodline hook.

### Replaces: 15th levels

- **Archetype feature:** Martial Flexibility (Ex)
- **Description:** At 1st level, an eldritch scrapper gains the brawler’s martial flexibility class feature, using her sorcerer level as her brawler level for the purposes of uses per day.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 9, 15.
  - Mechanics summary: At 1st level, an eldritch scrapper gains the brawler’s martial flexibility class feature, using her sorcerer level as her brawler level for the purposes of uses per day. The scrapper treats Arcane Strike and Combat Casting as combat feats for the purpose of this ability. At 9th level, an eldritch scrapper can use this ability to gain the benefit of two combat feats at the same time. She can select one feat as a move action or two feats as a standard action. She can use one of these feats to meet a prerequisite of the second feat; doing so means she cannot replace the feat that is currently fulfilling another feat’s prerequisites without also replacing all feats that require it. Each individual feat selected counts toward her daily uses of this ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, sorcerer bloodline hook.

## Parsed source feature headings

- Martial Flexibility (Ex)
- Bloodline Weapons

