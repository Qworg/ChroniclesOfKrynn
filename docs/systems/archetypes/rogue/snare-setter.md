# Rogue - Snare Setter

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Snare Setter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Snare%20Setter
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Trapper (Ex); Trapsmithing (Ex); Deadly Traps (Ex); Sneak Attack (Su); Master Snare Setter (Ex); Rogue Talents
- **Replaced / altered class features:** sneak attack (but see below); trapfinding; master strike

## Implementation details

### Replaces: sneak attack (but see below)

- **Archetype feature:** Trapper (Ex)
- **Description:** At 1st level, a snare setter gains Learn Ranger Trap (see page 24) as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a snare setter gains Learn Ranger Trap (see page 24) as a bonus feat. In addition to the trap granted by this feat, he learns how to construct the tripwire trap for free. For the purposes of this feat, he’s considered a ranger of his snare setter level, and uses his Intelligence in place of Wisdom to determine uses per day and the DC of his ranger traps. Whenever the snare setter could learn a new rogue trick, he may instead learn a new ranger trap.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: trapfinding

- **Archetype feature:** Trapsmithing (Ex)
- **Description:** A snare setter gains a bonus on Perception skill checks to detect traps and on Craft (traps) checks equal to 1/2 his snare setter level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A snare setter gains a bonus on Perception skill checks to detect traps and on Craft (traps) checks equal to 1/2 his snare setter level. He can use Craft (traps) in place of Disable Device to disarm traps, including magical traps.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Deadly Traps (Ex)
- **Description:** At 3rd level, the snare setter’s traps deal an additional 1d6 points of damage on the first round they’re activated.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the snare setter’s traps deal an additional 1d6 points of damage on the first round they’re activated. This damage is of the same type the trap normally deals. Traps that don’t deal damage are unaffected by this ability. This additional damage increases by 1d6 points every 4 levels beyond 3rd (7th, 11th, 15th, and 19th).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Sneak Attack (Su)
- **Description:** At 5th level, the snare setter gains sneak attack +1d6.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, the snare setter gains sneak attack +1d6. This functions as the rogue ability of the same name, but the damage increases by 1d6 every 4 levels after 5th (9th, 13th, and 17th).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: master strike

- **Archetype feature:** Master Snare Setter (Ex)
- **Description:** At 20th level, the snare setter can attach one of a rogue’s master strike effects to a trap he creates.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, the snare setter can attach one of a rogue’s master strike effects to a trap he creates. When the trap is triggered, the subject makes an additional Fortitude save at the same DC as the trap to avoid this effect. A snare setter can have only one trap affected by this ability active at any time. He may remove this ability from a trap at any range as a free action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the snare setter archetype: camouflage, cunning trigger, fast stealth, sniper’s eye.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the snare setter archetype: camouflage, cunning trigger, fast stealth, sniper’s eye.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Trapper (Ex)
- Trapsmithing (Ex)
- Deadly Traps (Ex)
- Sneak Attack (Su)
- Master Snare Setter (Ex)
- Rogue Talents
