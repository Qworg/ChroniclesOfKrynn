# Druid - Kraken Caller

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Kraken Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Kraken%20Caller
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Call of the Waves (Ex); Bonus Languages; Dauntless Swimmer (Ex); Hold Breath (Ex); Resist the Waves’ Lure (Ex); Wild Shape (Su); Beast of the Depths (Su)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; a thousand faces

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Call of the Waves (Ex)
- **Description:** A kraken caller must choose Besmara as her deity.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A kraken caller must choose Besmara as her deity. If she ever changes her deity, she loses this archetype and becomes a normal druid.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the druid’s bonus languages class feature

- **Archetype feature:** Bonus Languages
- **Description:** A kraken caller’s bonus language options include Aquan instead of Sylvan.
- **Detailed mechanics:**
  - **Rules text to implement:** A kraken caller’s bonus language options include Aquan instead of Sylvan.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Dauntless Swimmer (Ex)
- **Description:** At 2nd level, a kraken caller can always take 10 on Swim checks, even if she is rushed or threatened.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a kraken caller can always take 10 on Swim checks, even if she is rushed or threatened.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Hold Breath (Ex)
- **Description:** At 3rd level, a kraken caller can hold her breath for a number of minutes equal to her Constitution score before she risks drowning.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a kraken caller can hold her breath for a number of minutes equal to her Constitution score before she risks drowning.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Resist the Waves’ Lure (Ex)
- **Description:** At 4th level, a kraken caller gains a +4 bonus on saving throws against the spell-like and supernatural abilities of creatures with the aquatic subtype.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a kraken caller gains a +4 bonus on saving throws against the spell-like and supernatural abilities of creatures with the aquatic subtype.
- **Implementation flags:**
  - spell-like ability support.

### Alters: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** A kraken caller’s options for wild shape are limited to animals with the aquatic or water subtype or that have the amphibious special quality.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** A kraken caller’s options for wild shape are limited to animals with the aquatic or water subtype or that have the amphibious special quality. The kraken caller can alternatively expend a daily use of wild shape to grow tentacles out of her body while otherwise retaining her own form. This effect lasts for 10 minutes per level, or until the kraken caller changes back. At 4th level, the kraken caller grows two tentacles while in this form. The tentacles have a reach of 5 feet regardless of the kraken caller’s size, and the kraken caller can use them as secondary natural attacks that deal 1d4 points of damage (1d3 for a Small kraken caller). She also gains a racial bonus on Climb, Swim, and dirty trick combat maneuver checks equal to the number of tentacles grown. At each of 6th, 8th, 10th, and 12th levels, a kraken caller can grow an additional tentacle. As a move action, she can retract or regrow any number of the additional tentacles, redistributing the mass of any retracted tentacles. For every 2 retracted tentacles, she can increase the reach of the remaining tentacles by 5 feet (to a maximum of 15 feet), or increase the damage dealt by her tentacles as if she were one size category larger. While in this form, a kraken caller can expel a 10-footradius cloud of ink once per minute as a standard action. This cloud provides total concealment in water and persists for 1 round per level. The ink has no effect out of water.
- **Implementation flags:**
  - wild shape subsystem.

### Replaces: a thousand faces

- **Archetype feature:** Beast of the Depths (Su)
- **Description:** At 13th level, a kraken caller gains a swim speed equal to her base land speed and can breathe water as though affected by the spell water breathing.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a kraken caller gains a swim speed equal to her base land speed and can breathe water as though affected by the spell water breathing.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Call of the Waves (Ex)
- Bonus Languages
- Dauntless Swimmer (Ex)
- Hold Breath (Ex)
- Resist the Waves’ Lure (Ex)
- Wild Shape (Su)
- Beast of the Depths (Su)
