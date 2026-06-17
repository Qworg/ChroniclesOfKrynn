# Rogue - Relic Raider

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Relic Raider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Relic%20Raider
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Curse Sense (Ex); Disable Curse (Su); Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: uncanny dodge

- **Archetype feature:** Curse Sense (Ex)
- **Description:** At 4th level, a relic raider adds 1/2 her rogue level on Perception checks to notice haunts and on Spellcraft checks to identify cursed items (using detect magic or similar effects).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 6, 18.
  - **Rules text to implement:** At 4th level, a relic raider adds 1/2 her rogue level on Perception checks to notice haunts and on Spellcraft checks to identify cursed items (using detect magic or similar effects). In addition, the relic raider gains a +1 bonus on saving throws against curses and haunts and a +1 dodge bonus to AC against attacks by haunts. These bonuses increase by 1 at 6th level and every 3 rogue levels thereafter (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - haunt subsystem.
  - curse subsystem.
  - crafting subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Disable Curse (Su)
- **Description:** At 8th level, a relic raider can attempt to disable a curse as she would a magical trap.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8, 12.
  - **Rules text to implement:** At 8th level, a relic raider can attempt to disable a curse as she would a magical trap. This ability acts as remove curse, except instead of a caster level check, the relic raider attempts a Disable Device check (DC = 15 + the DC of the curse). Disabling a curse takes 2d4 rounds, and the relic raider cannot take 10 or 20 on this check. A relic raider can use this ability once per day at 8th level. At 12th level and every 4 rogue levels thereafter, a relic raider can use disable curse one additional time per day.
- **Implementation flags:**
  - curse subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** A relic raider can select the following advanced talents.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 15, 20.
  - **Rules text to implement:** A relic raider can select the following advanced talents. Talents marked with an asterisk add effects to a rogue’s sneak attack. Only one of these talents can be applied to an individual attack, and the decision must be made before making the attack roll. Cursed Strike * (Su): Once per day, when the relic raider would normally deal sneak attack damage, she can instead forgo all bonus damage to attempt to curse her target (as per the spell bestow curse ). The save is DC equal to 10 + 1/2 the relic raider’s rogue level + her Intelligence modifier. A relic raider must have the major magic rogue talent before choosing cursed strike. The relic raider can use this ability an additional time per day at 15th level and 20th level. Etheric Strike * (Su): With a successful sneak attack against haunts or undead, the relic raider can deal her sneak attack damage as positive energy damage rather than physical damage. The additional damage affects undead that are normally immune to sneak attacks because of their lack of a discernible anatomy (such as ghosts). A relic raider can make an etheric strike a number of times per day equal to 3 + her Charisma modifier.
- **Implementation flags:**
  - ki subsystem.
  - haunt subsystem.
  - curse subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Curse Sense (Ex)
- Disable Curse (Su)
- Advanced Talents
