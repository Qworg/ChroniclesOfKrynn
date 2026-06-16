# Rogue - Dark Lurker

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Dark Lurker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Dark%20Lurker
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Blades from the Shadows (Ex); Blind-Fight (Ex); Improved Blind-Fight (Ex); Greater Blind-Fight (Ex); Instinctual Sense (Ex); Rogue Talents
- **Replaced / altered class features:** evasion; the dark lurker can take evasion as a rogue talent; the rogue talent gained at 2nd level; the rogue talent gained at 8th level; the rogue talent gained at 14th level; the rogue talent gained at 20th level

## Replacement details

### Replaces: evasion

- **Archetype feature:** Blades from the Shadows (Ex)
- **Description:** At 2nd level, a dark lurker gains shadow strike APG as a bonus rogue talent.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6.
  - Mechanics summary: At 2nd level, a dark lurker gains shadow strike APG as a bonus rogue talent. (A character using the unchained rogue class from Pathfinder RPG Pathfinder Unchained instead gains the ability to make attacks of opportunity against foes with cover, though not foes with improved cover or total cover). At 6th level, the dark lurker can deal precision damage to targets with total concealment (though any miss chance applies normally, and may prevent an attack from hitting in the first place).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the dark lurker can take evasion as a rogue talent

- **Archetype feature:** Blades from the Shadows (Ex)
- **Description:** At 2nd level, a dark lurker gains shadow strike APG as a bonus rogue talent.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6.
  - Mechanics summary: At 2nd level, a dark lurker gains shadow strike APG as a bonus rogue talent. (A character using the unchained rogue class from Pathfinder RPG Pathfinder Unchained instead gains the ability to make attacks of opportunity against foes with cover, though not foes with improved cover or total cover). At 6th level, the dark lurker can deal precision damage to targets with total concealment (though any miss chance applies normally, and may prevent an attack from hitting in the first place).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Blind-Fight (Ex)
- **Description:** At 2nd level, a dark lurker gains Blind-Fight as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a dark lurker gains Blind-Fight as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 8th level

- **Archetype feature:** Improved Blind-Fight (Ex)
- **Description:** At 8th level, a dark lurker gains Improved Blind-Fight APG as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a dark lurker gains Improved Blind-Fight APG as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 14th level

- **Archetype feature:** Greater Blind-Fight (Ex)
- **Description:** At 14th level, a dark lurker gains Greater Blind-Fight APG as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a dark lurker gains Greater Blind-Fight APG as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 20th level

- **Archetype feature:** Instinctual Sense (Ex)
- **Description:** At 20th level, a dark lurker gains blindsight with a range of 30 feet.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a dark lurker gains blindsight with a range of 30 feet.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Blades from the Shadows (Ex)
- Blind-Fight (Ex)
- Improved Blind-Fight (Ex)
- Greater Blind-Fight (Ex)
- Instinctual Sense (Ex)
- Rogue Talents

