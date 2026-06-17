# Ranger - Urban Ranger

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Urban Ranger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Urban%20Ranger
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Favored Community (Ex); Trapfinding (Ex); Push Through (Ex); Blend In (Ex); Invisibility Trick (Sp)
- **Replaced / altered class features:** favored terrain; endurance; hide in plain sight

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Urban Ranger
- **Description:** At 1st level, an urban ranger adds Disable Device and Knowledge (local) to his list of class skills and removes Handle Animal and Knowledge (nature) from his list of class skills.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an urban ranger adds Disable Device and Knowledge (local) to his list of class skills and removes Handle Animal and Knowledge (nature) from his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: favored terrain

- **Archetype feature:** Favored Community (Ex)
- **Description:** At 3rd level, the urban ranger forms a bond with a community.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 8.
  - **Rules text to implement:** At 3rd level, the urban ranger forms a bond with a community. While inside the limits of this community, he gains a +2 bonus on initiative checks and Knowledge (local), Perception, Stealth, and Survival skill checks. An urban ranger traveling through his favored community leaves no trail and cannot be tracked (although he may leave a trail if he so desires). At 8th level, and every five levels thereafter, an urban ranger may select an additional favored community. In addition, at each such interval, the skill bonus and initiative bonus in any one favored community (including the one just selected, if so desired) increases by +2. For the purposes of this ability, a community is any settlement consisting of 100 or more individuals. The community may be larger than this minimum. Outlying farms, fields, and houses are not considered part of a community.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: endurance

- **Archetype feature:** Trapfinding (Ex)
- **Description:** At 3rd level, an urban ranger can find and disable traps, as the rogue class feature of the same name.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an urban ranger can find and disable traps, as the rogue class feature of the same name.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Push Through (Ex)
- **Description:** At 7th level, an urban ranger is never slowed by difficult terrain in his favored communities.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, an urban ranger is never slowed by difficult terrain in his favored communities. In addition, he can move through the space occupied by local citizens as if they were allies. This does not apply to creatures intent on harming the ranger. Areas that are enchanted or magically manipulated to impede motion, however, still affect him.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: camouflage

- **Archetype feature:** Blend In (Ex)
- **Description:** An urban ranger of 12th level or higher can use his Stealth bonus in place of a Disguise skill check in any of his favored communities.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** An urban ranger of 12th level or higher can use his Stealth bonus in place of a Disguise skill check in any of his favored communities. This disguise does not take an action to don. He must make a check whenever someone attempts to pick him out from the local citizens. If his check is successful, he blends into the crowd. While not invisible, enemies do not notice his presence and take no actions against him unless they are taking actions against the local citizens in general.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: hide in plain sight

- **Archetype feature:** Invisibility Trick (Sp)
- **Description:** At 17th level, the urban ranger can cast greater invisibility on himself as a wizard of his ranger level as a swift action.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, the urban ranger can cast greater invisibility on himself as a wizard of his ranger level as a swift action. He can use this spell-like ability a number of times per day equal to his Wisdom modifier (minimum 1).
- **Implementation flags:**
  - spell-like ability support.

## Parsed source feature headings

- Urban Ranger
- Favored Community (Ex)
- Trapfinding (Ex)
- Push Through (Ex)
- Blend In (Ex)
- Invisibility Trick (Sp)
