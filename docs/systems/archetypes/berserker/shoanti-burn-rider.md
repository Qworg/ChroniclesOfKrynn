# Berserker - Shoanti Burn Rider

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Shoanti Burn Rider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Shoanti%20Burn%20Rider
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Flame Runner (Ex); Cinder Sight (Ex); Cinder Dance (Ex); Mount; Give Me Fire (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense; the rage powers gained at 4th, 8th, 12th, and 16th level; improved uncanny dodge

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Flame Runner (Ex)
- **Description:** At 1st level, once per rage, a burn rider can goad her mount into a burst of incredible speed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 9, 15.
  - **Rules text to implement:** At 1st level, once per rage, a burn rider can goad her mount into a burst of incredible speed. The mount’s speed increases by 10 feet until the end of the burn rider’s turn. This bonus to speed increases by 10 feet at 9th level and again at 15th level.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: uncanny dodge

- **Archetype feature:** Cinder Sight (Ex)
- **Description:** At 2nd level, a Shoanti burn rider can see through fire, fog, and smoke without penalty as long as the light is sufficient to allow her to see normally.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a Shoanti burn rider can see through fire, fog, and smoke without penalty as long as the light is sufficient to allow her to see normally.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Cinder Dance (Ex)
- **Description:** At 3rd level, when a burn rider succeeds at a Reflex save to avoid fire damage, she can spend an immediate action to move up to half her speed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, when a burn rider succeeds at a Reflex save to avoid fire damage, she can spend an immediate action to move up to half her speed. If the burn rider ends this movement outside the area of effect, she takes no damage from the effect. After this sudden movement, the burn rider is staggered until the end of her next turn. If the burn rider is mounted, her mount makes the movement instead, and both the mount and the burn rider are staggered until the end of the burn rider’s next turn.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rage powers gained at 4th, 8th, 12th, and 16th level

- **Archetype feature:** Mount
- **Description:** At 4th level, a burn rider gains a loyal mount.
- **Detailed mechanics:**
  - **Level hooks:** 4, 16.
  - **Rules text to implement:** At 4th level, a burn rider gains a loyal mount. This ability functions like the druid’s animal companion ability (as described in the nature bond class feature), except that the burn rider always gains a horse or pony (though she can gain additional options at the GM’s discretion) and her effective druid level is equal to her Shoanti burn rider level – 3.
- **Implementation flags:**
  - animal companion progression.
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: improved uncanny dodge

- **Archetype feature:** Give Me Fire (Ex)
- **Description:** At 5th level, if a Shoanti burn rider takes fire damage while raging, she regains 1 round of rage.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, if a Shoanti burn rider takes fire damage while raging, she regains 1 round of rage. The burn rider regains the round of rage only if the fire damage bypasses or exceeds any energy resistance or other protections in effect. The burn rider can only regain 1 round of rage per round.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the Shoanti burn rider archetype: elemental rage, energy resistance, ferocious mount, ferocious trample, increased damage reduction, low-light vision, night vision, renewed vigor, scent, spirit steed, sprint, and swift foot.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the Shoanti burn rider archetype: elemental rage, energy resistance, ferocious mount, ferocious trample, increased damage reduction, low-light vision, night vision, renewed vigor, scent, spirit steed, sprint, and swift foot.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Flame Runner (Ex)
- Cinder Sight (Ex)
- Cinder Dance (Ex)
- Mount
- Give Me Fire (Ex)
- Rage Powers
