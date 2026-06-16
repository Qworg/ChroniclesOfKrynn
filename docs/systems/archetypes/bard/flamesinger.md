# Bard - Flamesinger

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Flamesinger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Flamesinger
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fire Music; Bardic Performance; Wildfire (Ex)
- **Replaced / altered class features:** bardic knowledge and lore master; inspire courage; versatile performance

## Replacement details

### Replaces: bardic knowledge and lore master

- **Archetype feature:** Fire Music
- **Description:** A flamesinger gains Fire Music as a bonus feat at 1st level (without needing the meet the normal prerequisites).
- **Mechanics:**
  - Level hooks: 1, 4, 2, 16.
  - Mechanics summary: A flamesinger gains Fire Music as a bonus feat at 1st level (without needing the meet the normal prerequisites). At 4th level (when she gains access to 2nd-level spells), she adds summon monster I and summon monster II to her bard spells known; every 3 levels thereafter she gains the next level of summon monster , until she adds summon monster VI to her spells known at 16th level. The flamesinger must apply the Fire Music feat’s effect when casting these spells.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: inspire courage

- **Archetype feature:** Bardic Performance
- **Description:** A flamesinger gains the following bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 17.
  - Mechanics summary: A flamesinger gains the following bardic performance. Blazing Blades (Su) : The flamesinger’s song causes allies’ weapons to burst into flames. To be affected, an ally must be able to hear the bard perform and be within 30 feet. An affected creature’s successful attacks with manufactured or natural weapons deal 1d4 additional points of fire damage. This damage stacks with other sources of fire damage, such as the flaming special weapon ability. At 5th level and every 6 bard levels thereafter, this bonus fire damage increases by 1d4 (to a maximum of 4d4 at 17th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook, bardic performance hook.

### Replaces: versatile performance

- **Archetype feature:** Wildfire (Ex)
- **Description:** Like a raging wildfire, a flamesinger moves with blistering speed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 18.
  - Mechanics summary: Like a raging wildfire, a flamesinger moves with blistering speed. At 2nd level and every 4 levels thereafter, the flamesinger gains a +5-foot enhancement bonus to her base speed (to a maximum of +25 feet at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Fire Music
- Bardic Performance
- Wildfire (Ex)

