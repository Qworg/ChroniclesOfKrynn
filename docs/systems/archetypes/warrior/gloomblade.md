# Warrior - Gloomblade

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Gloomblade
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Gloomblade
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Student of Darkness (Ex); Shadow Weapon (Su); Shadow Weapon Training (Ex)
- **Replaced / altered class features:** Class Skills; Armor Proficiencies; Armor Training; Weapon Training

## Implementation details

### Alters: the fighter’s class skills

- **Archetype feature:** Student of Darkness (Ex)
- **Description:** A gloomblade gains Acrobatics, Knowledge (planes), Perception, and Stealth as class skills, but does not gain Climb, Handle Animal, Ride, or Swim as class skills.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A gloomblade gains Acrobatics, Knowledge (planes), Perception, and Stealth as class skills, but does not gain Climb, Handle Animal, Ride, or Swim as class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: the fighter’s armor training and proficiency with heavy armor and shields (he retains proficiency in light and medium armor)

- **Archetype feature:** Shadow Weapon (Su)
- **Description:** A gloomblade can create a shadowy weapon in a free hand as a move action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 18, 7, 11, 15.
  - **Rules text to implement:** A gloomblade can create a shadowy weapon in a free hand as a move action. This can take the form of any melee weapon with which he is proficient. A gloomblade can have only one shadow weapon in existence at a time; creating a new shadow weapon causes an existing shadow weapon to vanish. At 3rd level, the shadow weapon acts as a magic weapon with a +1 enhancement bonus; this bonus increases by 1 for every 4 levels a gloomblade has beyond 2nd, to a maximum enhancement bonus of +5 at 18th level. At 7th level, a gloomblade can create (and maintain) two shadow weapons at a time as a move action; if he does, each weapon has an enhancement bonus 1 lower than normal. If a gloomblade creates only one weapon, it gains a weapon special ability of his choice (chosen upon creation); the ability must be valid for the shadow weapon’s weapon type and must be chosen from defending, flaming, frost, keen, ghost touch, merciful, shock, thundering, or vicious. (Additional special abilities might qualify, at the GM’s discretion.) At 11th level, a gloomblade’s shadow weapons each gain their full enhancement bonus if he creates two weapons. If a gloomblade creates only one shadow weapon, it gains additional weapon special abilities; the total effective bonus of these abilities cannot exceed +3. The gloomblade can now choose from the of anarchic, axiomatic, flaming burst, icy burst, holy, shocking burst, unholy, and wounding weapon special abilities as well as those from the list above. At 15th level, a gloomblade’s shadow weapons each gain magic weapon special abilities with a total effective bonus of +2 per weapon. If a gloomblade creates only one shadow weapon, its magic weapon special abilities cannot exceed a total effective bonus of +5. The gloomblade adds brilliant energy, dancing, and speed to the options he can choose as weapon special abilities for his shadow weapon.
- **Implementation flags:**
  - ki subsystem.

### Alters: weapon training

- **Archetype feature:** Shadow Weapon Training (Ex)
- **Description:** At 5th level, a gloomblade gains weapon training, except that he does not select a weapon group; instead, the bonus applies to the shadow weapons he creates.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 9, 17.
  - **Rules text to implement:** At 5th level, a gloomblade gains weapon training, except that he does not select a weapon group; instead, the bonus applies to the shadow weapons he creates. A gloomblade does not select additional weapon groups as he gains levels. At 9th level, whenever a gloomblade creates one or more shadow weapons, he can apply any one of the following shadow effects (chosen upon creation) to one of them. During the gloomblade’s turn, he can increase his reach with that weapon by 5 feet. The gloomblade can increase a thrown shadow weapon’s range increment (if any) by 20 feet. When he hits a foe with a melee attack with the weapon, he can use it to perform a reposition combat maneuver against the creature hit as a swift action. This does not provoke attacks of opportunity. Attacks made with the weapon ignore hardness equal to or less than the gloomblade’s fighter level. For every 4 levels he has beyond 9th, a gloomblade can apply an additional effect to his shadow weapons, to a maximum of three effects at 17th level; these effects can be split between multiple shadow weapons as a gloomblade desires, but they don’t stack with themselves.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Student of Darkness (Ex)
- Shadow Weapon (Su)
- Shadow Weapon Training (Ex)
