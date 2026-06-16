# Warrior - Gloomblade

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Gloomblade
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Gloomblade
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Student of Darkness (Ex); Shadow Weapon (Su); Shadow Weapon Training (Ex)
- **Replaced / altered class features:** Class Skills; Armor Proficiencies; Armor Training; Weapon Training

## Replacement details

### Alters: the fighter’s class skills

- **Archetype feature:** Student of Darkness (Ex)
- **Description:** A gloomblade gains Acrobatics, Knowledge (planes), Perception, and Stealth as class skills, but does not gain Climb, Handle Animal, Ride, or Swim as class skills.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A gloomblade gains Acrobatics, Knowledge (planes), Perception, and Stealth as class skills, but does not gain Climb, Handle Animal, Ride, or Swim as class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the fighter’s armor training and proficiency with heavy armor and shields (he retains proficiency in light

- **Archetype feature:** Shadow Weapon (Su)
- **Description:** A gloomblade can create a shadowy weapon in a free hand as a move action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 18, 7, 11, 15.
  - Mechanics summary: A gloomblade can create a shadowy weapon in a free hand as a move action. This can take the form of any melee weapon with which he is proficient. A gloomblade can have only one shadow weapon in existence at a time; creating a new shadow weapon causes an existing shadow weapon to vanish. At 3rd level, the shadow weapon acts as a magic weapon with a +1 enhancement bonus; this bonus increases by 1 for every 4 levels a gloomblade has beyond 2nd, to a maximum enhancement bonus of +5 at 18th level. At 7th level, a gloomblade can create (and maintain) two shadow weapons at a time as a move action; if he does, each weapon has an enhancement bonus 1 lower than normal. If a gloomblade creates only one weapon, it gains a weapon special ability of his choice (chosen upon creation); the ability must be valid for the shadow weapon’s weapon type and must be chosen from defending , flaming , frost , keen , ghost touch , merciful , shock , thundering , or vicious .
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: medium armor)

- **Archetype feature:** Shadow Weapon (Su)
- **Description:** A gloomblade can create a shadowy weapon in a free hand as a move action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 18, 7, 11, 15.
  - Mechanics summary: A gloomblade can create a shadowy weapon in a free hand as a move action. This can take the form of any melee weapon with which he is proficient. A gloomblade can have only one shadow weapon in existence at a time; creating a new shadow weapon causes an existing shadow weapon to vanish. At 3rd level, the shadow weapon acts as a magic weapon with a +1 enhancement bonus; this bonus increases by 1 for every 4 levels a gloomblade has beyond 2nd, to a maximum enhancement bonus of +5 at 18th level. At 7th level, a gloomblade can create (and maintain) two shadow weapons at a time as a move action; if he does, each weapon has an enhancement bonus 1 lower than normal. If a gloomblade creates only one weapon, it gains a weapon special ability of his choice (chosen upon creation); the ability must be valid for the shadow weapon’s weapon type and must be chosen from defending , flaming , frost , keen , ghost touch , merciful , shock , thundering , or vicious .
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Alters: weapon training

- **Archetype feature:** Shadow Weapon Training (Ex)
- **Description:** At 5th level, a gloomblade gains weapon training, except that he does not select a weapon group; instead, the bonus applies to the shadow weapons he creates.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 9, 17.
  - Mechanics summary: At 5th level, a gloomblade gains weapon training, except that he does not select a weapon group; instead, the bonus applies to the shadow weapons he creates. A gloomblade does not select additional weapon groups as he gains levels. At 9th level, whenever a gloomblade creates one or more shadow weapons, he can apply any one of the following shadow effects (chosen upon creation) to one of them. During the gloomblade’s turn, he can increase his reach with that weapon by 5 feet. The gloomblade can increase a thrown shadow weapon’s range increment (if any) by 20 feet. When he hits a foe with a melee attack with the weapon, he can use it to perform a reposition combat maneuver against the creature hit as a swift action.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Armor Proficiencies

## Parsed source feature headings

- Student of Darkness (Ex)
- Shadow Weapon (Su)
- Shadow Weapon Training (Ex)

