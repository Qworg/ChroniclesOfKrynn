# Rogue - Vexing Dodger

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Vexing Dodger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Vexing%20Dodger
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Limb-Climber (Ex); Improved Dirty Trick (Ex); Underfoot Agility (Ex); Underfoot Trickster (Ex); Distracting Climber (Ex); Rogue Talents (Ex)
- **Replaced / altered class features:** trapfinding; the rogue talent gained at 2nd level; trap sense; uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Limb-Climber (Ex)
- **Description:** When adjacent to or in the space of a corporeal creature at least one size category larger than herself, a vexing dodger can climb that creature’s body with a successful Climb check against a DC equal to the target creature’s CMD.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** When adjacent to or in the space of a corporeal creature at least one size category larger than herself, a vexing dodger can climb that creature’s body with a successful Climb check against a DC equal to the target creature’s CMD. Although the vexing dodger is holding on to the creature, this action isn’t a grapple; it doesn’t provoke attacks of opportunity from the creature, and neither the vexing dodger nor the creature she climbs gains the grappled condition. While the vexing dodger is on the climbed creature, the creature takes a penalty on attack rolls against the vexing dodger equal to the number of sneak attack dice the dodger possesses.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Improved Dirty Trick (Ex)
- **Description:** At 2nd level, a vexing dodger gains Improved Dirty Trick APG as a bonus feat, even if she doesn’t meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a vexing dodger gains Improved Dirty Trick APG as a bonus feat, even if she doesn’t meet the prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Underfoot Agility (Ex)
- **Description:** At 3rd level, a vexing dodger gains a +1 morale bonus on Acrobatics, Climb, and Escape Artist attempts against creatures at least one size category larger than herself.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a vexing dodger gains a +1 morale bonus on Acrobatics, Climb, and Escape Artist attempts against creatures at least one size category larger than herself. This bonus increases by 1 for every 3 levels beyond 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge

- **Archetype feature:** Underfoot Trickster (Ex)
- **Description:** At 4th level, a vexing dodger can move through the space of a creature two size categories larger than herself without needing to attempt an Acrobatics check.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a vexing dodger can move through the space of a creature two size categories larger than herself without needing to attempt an Acrobatics check. She would still need to succeed at Acrobatics checks to avoid attacks of opportunity provoked by leaving a threatened space; this ability covers only the ability to move. Additionally, whenever the vexing dodger hits a larger foe with a melee sneak attack, she can choose to forgo the sneak attack bonus damage and instead attempt make a dirty trick combat maneuver as a swift action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Distracting Climber (Ex)
- **Description:** At 8th level, when a vexing dodger attempts a dirty trick maneuver against a creature she’s climbing, she gets a bonus on the combat maneuver check equal to the number of sneak attack dice she has.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, when a vexing dodger attempts a dirty trick maneuver against a creature she’s climbing, she gets a bonus on the combat maneuver check equal to the number of sneak attack dice she has. If she chooses to sicken the target with her dirty trick and succeeds at her combat maneuver check, the target must succeed at a Fortitude saving throw (DC = 10 + 1/2 the vexing dodger’s level + her Intelligence modifier) or be nauseated for 1 round.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents (Ex)
- **Description:** A vexing dodger can choose uncanny dodge as a rogue talent starting at 4th level, and she can choose improved uncanny dodge as an advanced rogue talent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** A vexing dodger can choose uncanny dodge as a rogue talent starting at 4th level, and she can choose improved uncanny dodge as an advanced rogue talent. The following talents complement the vexing dodger archetype: befuddling strike APG, confounding blades UC, peerless maneuver APG, positioning attack APG, slow reactions, wall scramble UC.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Limb-Climber (Ex)
- Improved Dirty Trick (Ex)
- Underfoot Agility (Ex)
- Underfoot Trickster (Ex)
- Distracting Climber (Ex)
- Rogue Talents (Ex)
