# Druid - Kraken Caller

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Kraken Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Kraken%20Caller
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Call of the Waves (Ex); Bonus Languages; Dauntless Swimmer (Ex); Hold Breath (Ex); Resist the Waves’ Lure (Ex); Wild Shape (Su); Beast of the Depths (Su)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; a thousand faces

## Replacement details

### Alters: the druid’s bonus languages class feature

- **Archetype feature:** Bonus Languages
- **Description:** A kraken caller’s bonus language options include Aquan instead of Sylvan.
- **Mechanics:**
  - Mechanics summary: A kraken caller’s bonus language options include Aquan instead of Sylvan.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: woodland stride

- **Archetype feature:** Dauntless Swimmer (Ex)
- **Description:** At 2nd level, a kraken caller can always take 10 on Swim checks, even if she is rushed or threatened.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a kraken caller can always take 10 on Swim checks, even if she is rushed or threatened.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trackless step

- **Archetype feature:** Hold Breath (Ex)
- **Description:** At 3rd level, a kraken caller can hold her breath for a number of minutes equal to her Constitution score before she risks drowning.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a kraken caller can hold her breath for a number of minutes equal to her Constitution score before she risks drowning.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist the Waves’ Lure (Ex)
- **Description:** At 4th level, a kraken caller gains a +4 bonus on saving throws against the spell-like and supernatural abilities of creatures with the aquatic subtype.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a kraken caller gains a +4 bonus on saving throws against the spell-like and supernatural abilities of creatures with the aquatic subtype.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Alters: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** A kraken caller’s options for wild shape are limited to animals with the aquatic or water subtype or that have the amphibious special quality.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: A kraken caller’s options for wild shape are limited to animals with the aquatic or water subtype or that have the amphibious special quality. The kraken caller can alternatively expend a daily use of wild shape to grow tentacles out of her body while otherwise retaining her own form. This effect lasts for 10 minutes per level, or until the kraken caller changes back. At 4th level, the kraken caller grows two tentacles while in this form. The tentacles have a reach of 5 feet regardless of the kraken caller’s size, and the kraken caller can use them as secondary natural attacks that deal 1d4 points of damage (1d3 for a Small kraken caller). She also gains a racial bonus on Climb, Swim, and dirty trick combat maneuver checks equal to the number of tentacles grown.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, wild shape hook, natural attack system.

### Replaces: a thousand faces

- **Archetype feature:** Beast of the Depths (Su)
- **Description:** At 13th level, a kraken caller gains a swim speed equal to her base land speed and can breathe water as though affected by the spell water breathing.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a kraken caller gains a swim speed equal to her base land speed and can breathe water as though affected by the spell water breathing.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Call of the Waves (Ex)
- Bonus Languages
- Dauntless Swimmer (Ex)
- Hold Breath (Ex)
- Resist the Waves’ Lure (Ex)
- Wild Shape (Su)
- Beast of the Depths (Su)

