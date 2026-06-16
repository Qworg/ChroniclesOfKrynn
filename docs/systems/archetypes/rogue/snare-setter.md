# Rogue - Snare Setter

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Snare Setter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Snare%20Setter
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Trapper (Ex); Trapsmithing (Ex); Deadly Traps (Ex); Sneak Attack (Su); Master Snare Setter (Ex); Rogue Talents
- **Replaced / altered class features:** sneak attack (but see below); trapfinding; master strike

## Replacement details

### Replaces: sneak attack (but see below)

- **Archetype feature:** Trapper (Ex)
- **Description:** At 1st level, a snare setter gains Learn Ranger Trap (see page 24) as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a snare setter gains Learn Ranger Trap (see page 24) as a bonus feat. In addition to the trap granted by this feat, he learns how to construct the tripwire trap for free. For the purposes of this feat, he’s considered a ranger of his snare setter level, and uses his Intelligence in place of Wisdom to determine uses per day and the DC of his ranger traps. Whenever the snare setter could learn a new rogue trick, he may instead learn a new ranger trap.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, sneak attack hook.

### Replaces: trapfinding

- **Archetype feature:** Trapsmithing (Ex)
- **Description:** A snare setter gains a bonus on Perception skill checks to detect traps and on Craft (traps) checks equal to 1/2 his snare setter level.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A snare setter gains a bonus on Perception skill checks to detect traps and on Craft (traps) checks equal to 1/2 his snare setter level. He can use Craft (traps) in place of Disable Device to disarm traps, including magical traps.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: master strike

- **Archetype feature:** Master Snare Setter (Ex)
- **Description:** At 20th level, the snare setter can attach one of a rogue’s master strike effects to a trap he creates.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, the snare setter can attach one of a rogue’s master strike effects to a trap he creates. When the trap is triggered, the subject makes an additional Fortitude save at the same DC as the trap to avoid this effect. A snare setter can have only one trap affected by this ability active at any time. He may remove this ability from a trap at any range as a free action.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.

## Parsed source feature headings

- Trapper (Ex)
- Trapsmithing (Ex)
- Deadly Traps (Ex)
- Sneak Attack (Su)
- Master Snare Setter (Ex)
- Rogue Talents

