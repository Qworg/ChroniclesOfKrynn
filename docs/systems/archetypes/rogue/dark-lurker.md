# Rogue - Dark Lurker

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Dark Lurker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Dark%20Lurker
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Blades from the Shadows (Ex); Blind-Fight (Ex); Improved Blind-Fight (Ex); Greater Blind-Fight (Ex); Instinctual Sense (Ex); Rogue Talents
- **Replaced / altered class features:** evasion; the dark lurker can take evasion as a rogue talent; the rogue talent gained at 2nd level; the rogue talent gained at 8th level; the rogue talent gained at 14th level; the rogue talent gained at 20th level

## Implementation details

### Replaces: evasion

- **Archetype feature:** Blades from the Shadows (Ex)
- **Description:** At 2nd level, a dark lurker gains shadow strike APG as a bonus rogue talent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** At 2nd level, a dark lurker gains shadow strike APG as a bonus rogue talent. (A character using the unchained rogue class from Pathfinder RPG Pathfinder Unchained instead gains the ability to make attacks of opportunity against foes with cover, though not foes with improved cover or total cover). At 6th level, the dark lurker can deal precision damage to targets with total concealment (though any miss chance applies normally, and may prevent an attack from hitting in the first place).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the dark lurker can take evasion as a rogue talent

- **Archetype feature:** Blades from the Shadows (Ex)
- **Description:** At 2nd level, a dark lurker gains shadow strike APG as a bonus rogue talent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** At 2nd level, a dark lurker gains shadow strike APG as a bonus rogue talent. (A character using the unchained rogue class from Pathfinder RPG Pathfinder Unchained instead gains the ability to make attacks of opportunity against foes with cover, though not foes with improved cover or total cover). At 6th level, the dark lurker can deal precision damage to targets with total concealment (though any miss chance applies normally, and may prevent an attack from hitting in the first place).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Blind-Fight (Ex)
- **Description:** At 2nd level, a dark lurker gains Blind-Fight as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a dark lurker gains Blind-Fight as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the rogue talent gained at 8th level

- **Archetype feature:** Improved Blind-Fight (Ex)
- **Description:** At 8th level, a dark lurker gains Improved Blind-Fight APG as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a dark lurker gains Improved Blind-Fight APG as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the rogue talent gained at 14th level

- **Archetype feature:** Greater Blind-Fight (Ex)
- **Description:** At 14th level, a dark lurker gains Greater Blind-Fight APG as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a dark lurker gains Greater Blind-Fight APG as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the rogue talent gained at 20th level

- **Archetype feature:** Instinctual Sense (Ex)
- **Description:** At 20th level, a dark lurker gains blindsight with a range of 30 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a dark lurker gains blindsight with a range of 30 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the dark lurker archetype: befuddling strike APG, fast getaway APG, fast stealth, opportunist, sniper’s eye APG, and surprise attack.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the dark lurker archetype: befuddling strike APG, fast getaway APG, fast stealth, opportunist, sniper’s eye APG, and surprise attack.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Blades from the Shadows (Ex)
- Blind-Fight (Ex)
- Improved Blind-Fight (Ex)
- Greater Blind-Fight (Ex)
- Instinctual Sense (Ex)
- Rogue Talents
