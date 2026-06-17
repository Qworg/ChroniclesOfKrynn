# Warrior - Martial Master

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Martial Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Martial%20Master
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Martial Flexibility (Ex)
- **Replaced / altered class features:** weapon training and weapon mastery

## Implementation details

### Replaces: weapon training and weapon mastery

- **Archetype feature:** Martial Flexibility (Ex)
- **Description:** At 5th level, the martial master can use a move action to gain the benefit of a combat feat he doesn’t possess.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 9, 14, 17, 20.
  - **Rules text to implement:** At 5th level, the martial master can use a move action to gain the benefit of a combat feat he doesn’t possess. This effect lasts for 1 minute. The martial master must otherwise meet all the feat’s prerequisites. He can use this ability a number of times per day equal to 3 + 1/2 his fighter level. The martial master can use this ability again before the duration expires in order to replace the previous combat feat with another choice. If a combat feat has a daily use limitation (such as Stunning Fist), any uses of that combat feat while using this ability count toward that feat’s daily limit. At later levels, when he gains multiple feats through this ability, the martial master can use those feats to meet the prerequisites of other feats he gains with this ability. Doing so means he cannot replace a feat currently fulfilling another’s prerequisite without also replacing those feats that require it. Each individual feat selected counts toward his daily uses of this ability. At 9th level, a martial master can use this ability to gain the benefit of two combat feats at the same time. He can select one feat as a swift action or two feats as a move action. At 14th level, a martial master can use this ability to gain the benefit of three combat feats at the same time. He can select one feat as a free action, two feats as a swift action, or three feats as a move action. At 17th level, a martial master can use this ability to gain the benefit of one combat feat as an immediate action or three combat feats as a swift action. At 20th level, a martial master can use this ability to gain the benefit of any number of combat feats as a swift action.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Martial Flexibility (Ex)
