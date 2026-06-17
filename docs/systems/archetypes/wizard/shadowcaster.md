# Wizard - Shadowcaster

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Shadowcaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Shadowcaster
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Shadow Spells (Su); Shadowsight (Ex); Shadowy Specialization (Ex)
- **Replaced / altered class features:** arcane bond; the shadowcaster’s 5th-level wizard bonus feat; the shadowcaster’s 10th-level wizard bonus feat

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Shadow Spells (Su)
- **Description:** Preparing spells in dim light allows the wizard to hide extra spell levels in his own shadow, but they can be cast only under the right lighting.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Passive during spell preparation; casting restriction applies passively later
  - Duration: Shadow-stored spells remain available until cast or until the next preparation reset
  - Uses: Extra spell levels equal to the highest wizard spell level currently castable; refreshes on spell preparation
  - Core function:
    - If the entire preparation period is spent in dim light, prepare extra spells in the wizard's shadow.
    - The total extra spell levels equal the highest wizard spell level the wizard can currently cast.
    - Those extra spells can be cast only while the wizard is in normal light or dim light.
    - They cannot be cast in darkness or in bright light.
  - Scaling: The extra spell-level pool grows as higher spell levels become available.
  - Interactions: Leaving dim light during preparation breaks access to the shadow-spell pool for that day.
  - Edge cases: Magical darkness does not count as the usable dim-light condition for casting these spells.
  - Implementation flags:
    - Likely existing hooks: bonus prepared-spell pool conditioned on preparation lighting, shadow-based extra slots, light-level casting restriction.

### Replaces: the 5th-level wizard bonus feat

- **Archetype feature:** Shadowsight (Ex)
- **Description:** The shadowcaster learns to see in the dark.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 5
  - Action/timing: Passive
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain darkvision 60 feet.
    - This sight works in ordinary darkness without needing a separate light source.
    - The feature does not create light or alter the surrounding illumination level.
  - Scaling: None
  - Interactions: If another source grants darkvision, use whichever range is better.
  - Edge cases: This does not pierce magical darkness by itself.
  - Implementation flags:
    - Likely existing hooks: darkvision 60-foot grant.

### Replaces: the 10th-level wizard bonus feat

- **Archetype feature:** Shadowy Specialization (Ex)
- **Description:** Shadow-illusion spells become more real to creatures that succeed on their saves.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 10
  - Action/timing: Passive modifier when casting qualifying illusion spells
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Increase the partial real-effect percentage by 20 points for shades, shadow conjuration, shadow evocation, and similar spells when a target succeeds on its save.
    - For example, a spell that would normally be 20% real on a successful save becomes 40% real instead.
    - The adjusted realness cannot exceed 100%.
  - Scaling: None
  - Interactions: This affects only the reduced-effect clause on a successful save; creatures that fail their save are still fully affected as normal.
  - Edge cases: Illusion spells without a listed partial-effect percentage are unaffected.
  - Implementation flags:
    - Likely existing hooks: shadow-illusion partial-effect percentage increase by 20 points.

## Parsed source feature headings

- Shadow Spells (Su)
- Shadowsight (Ex)
- Shadowy Specialization (Ex)
