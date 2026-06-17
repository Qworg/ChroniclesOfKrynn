# Rogue - Shadow Walker

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Shadow Walker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Shadow%20Walker
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Expanded Sight (Su); Illumination Control (Sp); Favored Illumination (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; the rogue talent gained at 2nd level and trap sense; the rogue’s uncanny dodge and improved uncanny dodge

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Expanded Sight (Su)
- **Description:** At 1st level, a shadow walker gains darkvision with a range of 30 feet.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 3.
  - **Rules text to implement:** At 1st level, a shadow walker gains darkvision with a range of 30 feet. If she already has darkvision, the range of her darkvision increases by 10 feet. When the shadow walker reaches 3rd level, and every 2 rogue levels thereafter, the range of her darkvision increases by 10 feet. Also at 3rd level, the shadow walker loses the light sensitivity weakness, if she has it. If she has light blindness, she instead treats it as light sensitivity.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talent gained at 2nd level and trap sense

- **Archetype feature:** Illumination Control (Sp)
- **Description:** At 3rd level, a shadow walker can manipulate nearby illumination.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 3, 2.
  - **Rules text to implement:** At 3rd level, a shadow walker can manipulate nearby illumination. At the start of each day, a shadow walker gains a number of illumination points equal to half her rogue level and can spend illumination points to use certain spell-like abilities. As long as she has at least 1 illumination point, she can cast light at will. She can spend 2 illumination points to cast darkness, and 3 illumination points to cast daylight, deeper darkness, or motes of dusk and dawn (see page 28). These spell-like abilities have a caster level equal to the shadow walker’s rogue level. Using these spell-like abilities does not hamper the shadow walker’s vision; for example, she can see through the deeper darkness she creates, and does not take penalties for light sensitivity in the area of her own daylight.
- **Implementation flags:**
  - spell-like ability support.

### Replaces: the rogue’s uncanny dodge and improved uncanny dodge

- **Archetype feature:** Favored Illumination (Su)
- **Description:** At 4th level, a shadow walker chooses one illumination level: bright light, normal light, dim light, or darkness (including supernatural darkness).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 6.
  - **Rules text to implement:** At 4th level, a shadow walker chooses one illumination level: bright light, normal light, dim light, or darkness (including supernatural darkness). While she is within her chosen illumination level, she gains a +2 bonus on initiative checks and Acrobatics, Perception, and Sleight of Hand skill checks, and can take 10 on any Stealth check attempted within that illumination level. When the shadow walker confirms a critical hit with a melee attack that deals sneak attack damage while in her chosen illumination level, she regains 1 illumination point (to a maximum of half her rogue level). Confirming a critical hit on a creature that has fewer Hit Dice than half the shadow walker’s character level doesn’t restore illumination points. When the shadow walker reaches 6th level, and every 3 rogue levels thereafter, the bonuses she gains within her chosen illumination level increase by 1.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the shadow walker archetype: deft palm UC, gloom magic, greater gloom magic, obscuring blow, surprise attack, umbral gear.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the shadow walker archetype: deft palm UC, gloom magic, greater gloom magic, obscuring blow, surprise attack, umbral gear.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the shadow walker archetype: hide in plain sight UC, see in darkness, slippery mind, unwitting ally UC, and weapon snatcher UC.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the shadow walker archetype: hide in plain sight UC, see in darkness, slippery mind, unwitting ally UC, and weapon snatcher UC.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Expanded Sight (Su)
- Illumination Control (Sp)
- Favored Illumination (Su)
- Rogue Talents
- Advanced Talents
