# Berserker - Shoanti Burn Rider

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Shoanti Burn Rider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Shoanti%20Burn%20Rider
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Flame Runner (Ex); Cinder Sight (Ex); Cinder Dance (Ex); Mount; Give Me Fire (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense; the rage powers gained at 4th, 8th, 12th, and 16th level; improved uncanny dodge

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Flame Runner (Ex)
- **Description:** At 1st level, once per rage, a burn rider can goad her mount into a burst of incredible speed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 9, 15.
  - Mechanics summary: At 1st level, once per rage, a burn rider can goad her mount into a burst of incredible speed. The mount’s speed increases by 10 feet until the end of the burn rider’s turn. This bonus to speed increases by 10 feet at 9th level and again at 15th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: uncanny dodge

- **Archetype feature:** Cinder Sight (Ex)
- **Description:** At 2nd level, a Shoanti burn rider can see through fire, fog, and smoke without penalty as long as the light is sufficient to allow her to see normally.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a Shoanti burn rider can see through fire, fog, and smoke without penalty as long as the light is sufficient to allow her to see normally.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: trap sense

- **Archetype feature:** Cinder Dance (Ex)
- **Description:** At 3rd level, when a burn rider succeeds at a Reflex save to avoid fire damage, she can spend an immediate action to move up to half her speed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, when a burn rider succeeds at a Reflex save to avoid fire damage, she can spend an immediate action to move up to half her speed. If the burn rider ends this movement outside the area of effect, she takes no damage from the effect. After this sudden movement, the burn rider is staggered until the end of her next turn. If the burn rider is mounted, her mount makes the movement instead, and both the mount and the burn rider are staggered until the end of the burn rider’s next turn.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook.

### Replaces: the rage powers gained at 4th, 8th, 12th
- **Archetype feature:** Mount
- **Description:** At 4th level, a burn rider gains a loyal mount.
- **Mechanics:**
  - Level hooks: 4, 16.
  - Mechanics summary: At 4th level, a burn rider gains a loyal mount. This ability functions like the druid’s animal companion ability (as described in the nature bond class feature), except that the burn rider always gains a horse or pony (though she can gain additional options at the GM’s discretion) and her effective druid level is equal to her Shoanti burn rider level – 3.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, rage/rage-power hook, animal companion hook.

### Replaces: 16th level

- **Archetype feature:** Mount
- **Description:** At 4th level, a burn rider gains a loyal mount.
- **Mechanics:**
  - Level hooks: 4, 16.
  - Mechanics summary: At 4th level, a burn rider gains a loyal mount. This ability functions like the druid’s animal companion ability (as described in the nature bond class feature), except that the burn rider always gains a horse or pony (though she can gain additional options at the GM’s discretion) and her effective druid level is equal to her Shoanti burn rider level – 3.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, rage/rage-power hook, animal companion hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Give Me Fire (Ex)
- **Description:** At 5th level, if a Shoanti burn rider takes fire damage while raging, she regains 1 round of rage.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, if a Shoanti burn rider takes fire damage while raging, she regains 1 round of rage. The burn rider regains the round of rage only if the fire damage bypasses or exceeds any energy resistance or other protections in effect. The burn rider can only regain 1 round of rage per round.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Parsed source feature headings

- Flame Runner (Ex)
- Cinder Sight (Ex)
- Cinder Dance (Ex)
- Mount
- Give Me Fire (Ex)
- Rage Powers

