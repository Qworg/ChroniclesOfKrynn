# Rogue - Shadow Walker

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Shadow Walker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Shadow%20Walker
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Expanded Sight (Su); Illumination Control (Sp); Favored Illumination (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; the rogue talent gained at 2nd level and trap sense; the rogue’s uncanny dodge and improved uncanny dodge

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Expanded Sight (Su)
- **Description:** At 1st level, a shadow walker gains darkvision with a range of 30 feet.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3.
  - Mechanics summary: At 1st level, a shadow walker gains darkvision with a range of 30 feet. If she already has darkvision, the range of her darkvision increases by 10 feet. When the shadow walker reaches 3rd level, and every 2 rogue levels thereafter, the range of her darkvision increases by 10 feet. Also at 3rd level, the shadow walker loses the light sensitivity weakness, if she has it. If she has light blindness, she instead treats it as light sensitivity.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the rogue talent gained at 2nd level and trap sense

- **Archetype feature:** Illumination Control (Sp)
- **Description:** At 3rd level, a shadow walker can manipulate nearby illumination.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 3, 2.
  - Mechanics summary: At 3rd level, a shadow walker can manipulate nearby illumination. At the start of each day, a shadow walker gains a number of illumination points equal to half her rogue level and can spend illumination points to use certain spell-like abilities. As long as she has at least 1 illumination point, she can cast light at will. She can spend 2 illumination points to cast darkness , and 3 illumination points to cast daylight , deeper darkness , or motes of dusk and dawn (see page 28). These spell-like abilities have a caster level equal to the shadow walker’s rogue level. Using these spell-like abilities does not hamper the shadow walker’s vision; for example, she can see through the deeper darkness she creates, and does not take penalties for light sensitivity in the area of her own daylight .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: the rogue’s uncanny dodge and improved uncanny dodge

- **Archetype feature:** Favored Illumination (Su)
- **Description:** At 4th level, a shadow walker chooses one illumination level: bright light, normal light, dim light, or darkness (including supernatural darkness).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 6.
  - Mechanics summary: At 4th level, a shadow walker chooses one illumination level: bright light, normal light, dim light, or darkness (including supernatural darkness). While she is within her chosen illumination level, she gains a +2 bonus on initiative checks and Acrobatics, Perception, and Sleight of Hand skill checks, and can take 10 on any Stealth check attempted within that illumination level. When the shadow walker confirms a critical hit with a melee attack that deals sneak attack damage while in her chosen illumination level, she regains 1 illumination point (to a maximum of half her rogue level). Confirming a critical hit on a creature that has fewer Hit Dice than half the shadow walker’s character level doesn’t restore illumination points. When the shadow walker reaches 6th level, and every 3 rogue levels thereafter, the bonuses she gains within her chosen illumination level increase by 1.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, sneak attack hook, ki/monk hook.

## Parsed source feature headings

- Expanded Sight (Su)
- Illumination Control (Sp)
- Favored Illumination (Su)
- Rogue Talents
- Advanced Talents

