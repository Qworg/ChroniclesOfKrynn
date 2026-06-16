# Ranger - Urban Ranger

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Urban Ranger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Urban%20Ranger
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Favored Community (Ex); Trapfinding (Ex); Push Through (Ex); Blend In (Ex); Invisibility Trick (Sp)
- **Replaced / altered class features:** favored terrain; endurance; hide in plain sight

## Replacement details

### Replaces: favored terrain

- **Archetype feature:** Favored Community (Ex)
- **Description:** At 3rd level, the urban ranger forms a bond with a community.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8.
  - Mechanics summary: At 3rd level, the urban ranger forms a bond with a community. While inside the limits of this community, he gains a +2 bonus on initiative checks and Knowledge (local), Perception, Stealth, and Survival skill checks. An urban ranger traveling through his favored community leaves no trail and cannot be tracked (although he may leave a trail if he so desires). At 8th level, and every five levels thereafter, an urban ranger may select an additional favored community. In addition, at each such interval, the skill bonus and initiative bonus in any one favored community (including the one just selected, if so desired) increases by +2. The community may be larger than this minimum.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, favored terrain hook, ki/monk hook.

### Replaces: endurance

- **Archetype feature:** Trapfinding (Ex)
- **Description:** At 3rd level, an urban ranger can find and disable traps, as the rogue class feature of the same name.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, an urban ranger can find and disable traps, as the rogue class feature of the same name.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: woodland stride

- **Archetype feature:** Push Through (Ex)
- **Description:** At 7th level, an urban ranger is never slowed by difficult terrain in his favored communities.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, an urban ranger is never slowed by difficult terrain in his favored communities. In addition, he can move through the space occupied by local citizens as if they were allies.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: camouflage

- **Archetype feature:** Blend In (Ex)
- **Description:** An urban ranger of 12th level or higher can use his Stealth bonus in place of a Disguise skill check in any of his favored communities.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: An urban ranger of 12th level or higher can use his Stealth bonus in place of a Disguise skill check in any of his favored communities. This disguise does not take an action to don. He must make a check whenever someone attempts to pick him out from the local citizens. While not invisible, enemies do not notice his presence and take no actions against him unless they are taking actions against the local citizens in general.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: hide in plain sight

- **Archetype feature:** Invisibility Trick (Sp)
- **Description:** At 17th level, the urban ranger can cast greater invisibility on himself as a wizard of his ranger level as a swift action.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, the urban ranger can cast greater invisibility on himself as a wizard of his ranger level as a swift action. He can use this spell-like ability a number of times per day equal to his Wisdom modifier (minimum 1).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Urban Ranger
- Favored Community (Ex)
- Trapfinding (Ex)
- Push Through (Ex)
- Blend In (Ex)
- Invisibility Trick (Sp)

