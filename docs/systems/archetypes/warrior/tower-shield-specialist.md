# Warrior - Tower Shield Specialist

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Tower Shield Specialist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Tower%20Shield%20Specialist
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Burst Barrier (Ex); Tower Shield Training (Ex); Tower Shield Specialist (Ex); Tower Shield Defense (Ex); Immediate Repositioning (Ex); Tower Shield Evasion (Ex)
- **Replaced / altered class features:** bravery; weapon training 1; weapon training 2; weapon training 3; both weapon training 4 and weapon mastery

## Implementation details

### Replaces: bravery

- **Archetype feature:** Burst Barrier (Ex)
- **Description:** At 2nd level, a tower shield specialist can use his shield to screen himself from burst spells and effects, gaining a +1 bonus on Reflex saves against them while employing a tower shield.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 18.
  - **Rules text to implement:** At 2nd level, a tower shield specialist can use his shield to screen himself from burst spells and effects, gaining a +1 bonus on Reflex saves against them while employing a tower shield. This bonus increases by +1 for every four levels after 2nd (to a maximum of +5 at 18th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Tower Shield Training (Ex)
- **Description:** At 3rd level, a tower shield specialist gains armor training as normal, but while he employs a tower shield, the armor penalty is reduced by 3 and the maximum Dexterity bonus allowed by his armor increases by 2.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a tower shield specialist gains armor training as normal, but while he employs a tower shield, the armor penalty is reduced by 3 and the maximum Dexterity bonus allowed by his armor increases by 2. The benefit increases every four levels thereafter as per standard armor training; if the tower shield specialist is not employing a tower shield, the benefits to armor training revert to the normal bonuses.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 1

- **Archetype feature:** Tower Shield Specialist (Ex)
- **Description:** At 5th level, when a tower shield specialist employs a tower shield in combat, he does not take the –2 penalty on attack rolls because of the shield’s encumbrance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, when a tower shield specialist employs a tower shield in combat, he does not take the –2 penalty on attack rolls because of the shield’s encumbrance.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2

- **Archetype feature:** Tower Shield Defense (Ex)
- **Description:** At 9th level, while using a tower shield, a tower shield specialist gains his shield bonus against touch attacks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, while using a tower shield, a tower shield specialist gains his shield bonus against touch attacks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3

- **Archetype feature:** Immediate Repositioning (Ex)
- **Description:** At 13th level, as an immediate action, a tower shield specialist can reposition his tower shield to another facing, but he cannot use this ability to interrupt an attack.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, as an immediate action, a tower shield specialist can reposition his tower shield to another facing, but he cannot use this ability to interrupt an attack.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: both weapon training 4 and weapon mastery

- **Archetype feature:** Tower Shield Evasion (Ex)
- **Description:** At 16th level, while using a tower shield, the tower shield specialist gains evasion, as the rogue class ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 16, 20.
  - **Rules text to implement:** At 16th level, while using a tower shield, the tower shield specialist gains evasion, as the rogue class ability. At 20th level, the shield specialist gains improved evasion, as the rogue advanced talent, while using a tower shield.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Burst Barrier (Ex)
- Tower Shield Training (Ex)
- Tower Shield Specialist (Ex)
- Tower Shield Defense (Ex)
- Immediate Repositioning (Ex)
- Tower Shield Evasion (Ex)
