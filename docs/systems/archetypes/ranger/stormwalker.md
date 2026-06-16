# Ranger - Stormwalker

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Stormwalker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Stormwalker
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Combat Style Feat (Ex); Thundershot (Su); Wind Treader (Ex); Flash Step (Su); Control Weather (Sp); Flash Shot (Su)
- **Replaced / altered class features:** Combat Style; Hunter's Bond; Swift Tracker; Quarry; Improved Evasion; Improved Quarry

## Replacement details

### Alters: the ranger’s combat style

- **Archetype feature:** Combat Style Feat (Ex)
- **Description:** At 2nd level, a stormwalker must choose archery style.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a stormwalker must choose archery style.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: hunter’s bond

- **Archetype feature:** Thundershot (Su)
- **Description:** At 4th level, a stormwalker can wreathe his weapon in lightning.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 12.
  - Mechanics summary: At 4th level, a stormwalker can wreathe his weapon in lightning. As a standard action, he can grant a single weapon he holds the shock special ability for 1 minute; while under this effect, the weapon counts as magic for the purpose of overcoming damage reduction. A stormwalker can use this ability a number of times per day equal to 3 + his Wisdom modifier. At 12th level, weapons affected by this ability gain the shocking burst special ability.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: swift tracker

- **Archetype feature:** Wind Treader (Ex)
- **Description:** At 8th level, a stormwalker becomes immune to the effects of strong wind.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a stormwalker becomes immune to the effects of strong wind. He can move without hindrance in windy conditions, and his ranged attacks take no penalties from nonmagical wind.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: quarry

- **Archetype feature:** Flash Step (Su)
- **Description:** At 11th level, a stormwalker can move across the battlefield like a bolt of lightning.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a stormwalker can move across the battlefield like a bolt of lightning. As a full-round action, he can transform into lightning and move to any unoccupied square within 60 feet without provoking attacks of opportunity. He can make a single ranged attack before or after this movement.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: improved evasion

- **Archetype feature:** Control Weather (Sp)
- **Description:** At 16th level, a stormwalker can cast control weather as a spell-like ability once per day.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 16.
  - Mechanics summary: At 16th level, a stormwalker can cast control weather as a spell-like ability once per day.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: improved quarry

- **Archetype feature:** Flash Shot (Su)
- **Description:** At 19th level, when a stormwalker uses flash step, he can make a ranged attack both before and after his movement.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, when a stormwalker uses flash step, he can make a ranged attack both before and after his movement. Both of these attacks are made at his highest base attack bonus.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Hunter's Bond

## Parsed source feature headings

- Combat Style Feat (Ex)
- Thundershot (Su)
- Wind Treader (Ex)
- Flash Step (Su)
- Control Weather (Sp)
- Flash Shot (Su)

