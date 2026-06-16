# Warrior - Martial Master

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Martial Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Martial%20Master
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Martial Flexibility (Ex)
- **Replaced / altered class features:** weapon training and weapon mastery

## Replacement details

### Replaces: weapon training and weapon mastery

- **Archetype feature:** Martial Flexibility (Ex)
- **Description:** At 5th level, the martial master can use a move action to gain the benefit of a combat feat he doesn’t possess.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 9, 14, 17, 20.
  - Mechanics summary: At 5th level, the martial master can use a move action to gain the benefit of a combat feat he doesn’t possess. This effect lasts for 1 minute. The martial master must otherwise meet all the feat’s prerequisites. He can use this ability a number of times per day equal to 3 + 1/2 his fighter level. The martial master can use this ability again before the duration expires in order to replace the previous combat feat with another choice. If a combat feat has a daily use limitation (such as Stunning Fist), any uses of that combat feat while using this ability count toward that feat’s daily limit.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

## Parsed source feature headings

- Martial Flexibility (Ex)

