# Rogue - Fey Prankster

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Fey Prankster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Fey%20Prankster
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Treacherous Plants (Sp); Improved Dirty Trick; Steal Appearance (Sp); Greater Dirty Trick; Plant Traps (Su); Unseen Trickster
- **Replaced / altered class features:** Trapfinding; 2nd, 6th, 8th, and 12th-level Rogue Talents; Uncanny Dodge; Improved Uncanny Dodge

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Treacherous Plants (Sp)
- **Description:** The fey prankster can cause plants to distract nearby creatures.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: The fey prankster can cause plants to distract nearby creatures. To use this ability, the fey prankster attempts a Bluff check to create a distraction to hide as a swift action or to feint against an adjacent opponent as a move action, so long as the target is adjacent to plants. He gains a bonus on this check equal to half his rogue level (minimum +1).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Improved Dirty Trick
- **Description:** At 2nd level, the fey prankster gains Improved Dirty Trick as a bonus feat.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, the fey prankster gains Improved Dirty Trick as a bonus feat. He need not meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** Steal Appearance (Sp)
- **Description:** At 4th level, the fey prankster can exchange the appearance of two adjacent items of the same size.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 4, 8.
  - Mechanics summary: At 4th level, the fey prankster can exchange the appearance of two adjacent items of the same size. He can also exchange the appearance of two creatures if at least one is willing and both are adjacent. Affecting an unwilling creature or an item it wears or carries requires a successful dirty trick combat maneuver against that creature. If he succeeds, the objects or creatures are each disguised as the other as if with veil cast at his rogue level. The Will save DC to resist or disbelieve the illusion is equal to 10 + half the rogue’s level + his Intelligence modifier. At 8th level, the fey prankster can also exchange the locations of the two targets by succeeding at a DC 20 Sleight of Hand check.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.

### Replaces: the rogue talent gained at 6th level

- **Archetype feature:** Greater Dirty Trick
- **Description:** At 6th level, the fey prankster gains Greater Dirty Trick as a bonus feat.
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: At 6th level, the fey prankster gains Greater Dirty Trick as a bonus feat. He does not need to meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 8th level

- **Archetype feature:** Plant Traps (Su)
- **Description:** At 8th level, the fey trickster can modify a plant (but not plant creatures) into a trap as a full-round action up to three times per day.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, the fey trickster can modify a plant (but not plant creatures) into a trap as a full-round action up to three times per day. The Perception and Disable Device DCs for the trap are each equal to 15 + his rogue level. A Tiny or larger plant can be used to perform a trip or dirty trick combat maneuver using the fey trickster’s CMB and the plant’s size. A Large or larger plant can be used to create a snare as per the spell. The save DC is equal to 12 + the rogue’s Intelligence modifier. The fey trickster can trigger any plant trap he created as a standard action as long as he is within 60 feet of it.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook.

### Replaces: the rogue talent gained at 12th level

- **Archetype feature:** Unseen Trickster
- **Description:** At 12th level, the fey trickster can attempt Stealth checks in areas with plants even if he does not have cover or concealment.
- **Mechanics:**
  - Level hooks: 12.
  - Mechanics summary: At 12th level, the fey trickster can attempt Stealth checks in areas with plants even if he does not have cover or concealment.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 2nd, 6th, 8th, and 12th-level Rogue Talents

## Parsed source feature headings

- Treacherous Plants (Sp)
- Improved Dirty Trick
- Steal Appearance (Sp)
- Greater Dirty Trick
- Plant Traps (Su)
- Unseen Trickster

