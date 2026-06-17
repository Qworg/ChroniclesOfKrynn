# Warrior - Trench Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Trench Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Trench%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Note from Nethys; Trench Warfare (Ex)
- **Replaced / altered class features:** armor training 1, 2, 3, and 4

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Note from Nethys
- **Description:** This archetype was introduced in a section on Modern Firearms, where guns were treated as the 'guns everywhere' mechanic.
- **Detailed mechanics:**
  - **Rules text to implement:** This archetype was introduced in a section on Modern Firearms, where guns were treated as the 'guns everywhere' mechanic. GMs may wish to read the appropriate section in Pathfinder #71 to see if this is suitable for their game. Advances in technology have made archaic armors obsolete by the twentieth century, and modern soldiers concentrate training on firearms and swift feet.
- **Implementation flags:**
  - firearm subsystem.
  - feat grant/prerequisite handling.

### Replaces: armor training 1, 2, 3, and 4

- **Archetype feature:** Trench Warfare (Ex)
- **Description:** Starting at 3rd level, a trench fighter can select one specific type of firearm (such as a machine gun, revolver, or rifle).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** Starting at 3rd level, a trench fighter can select one specific type of firearm (such as a machine gun, revolver, or rifle). He gains a bonus equal to his Dexterity modifier on damage rolls when firing that type of firearm. Every 4 levels thereafter (7th, 11th, and 15th), the trench fighter picks up another type of firearm, gaining these bonuses for those types as well. Furthermore, when behind partial, normal, or improved cover, a trench fighter gains an additional +2 AC bonus from the cover.
- **Implementation flags:**
  - firearm subsystem.

## Parsed source feature headings

- Note from Nethys
- Trench Warfare (Ex)
