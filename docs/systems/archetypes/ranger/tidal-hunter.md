# Ranger - Tidal Hunter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Tidal Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Tidal%20Hunter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Waterborn (Su); Keen Scent (Ex); Aquatic Mastery (Ex); Wave Rush (Ex); Tidal Surge (Sp)
- **Replaced / altered class features:** Wild Empathy; 6th-level Combat Style Feat; Track; Camouflage; Favored Terrain; Woodland Stride; Improved Evasion

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Waterborn (Su)
- **Description:** A tidal hunter can breathe water for up to 10 minutes per ranger level each day.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: A tidal hunter can breathe water for up to 10 minutes per ranger level each day. At 6th level, he can breathe underwater indefinitely.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: the 6th-level combat style feat

- **Archetype feature:** Waterborn (Su)
- **Description:** A tidal hunter can breathe water for up to 10 minutes per ranger level each day.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: A tidal hunter can breathe water for up to 10 minutes per ranger level each day. At 6th level, he can breathe underwater indefinitely.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: track and camouflage

- **Archetype feature:** Keen Scent (Ex)
- **Description:** A tidal hunter gains scent, as per the universal monster rule.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: A tidal hunter gains scent, as per the universal monster rule. At 12th level, while in water, the tidal hunter can detect particularly strong or distinct odors (such as blood) up to 1 mile away.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: favored terrain

- **Archetype feature:** Aquatic Mastery (Ex)
- **Description:** At 3rd level, a tidal hunter must select water as his favored terrain, and he doesn’t gain additional favored terrains.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8.
  - Mechanics summary: At 3rd level, a tidal hunter must select water as his favored terrain, and he doesn’t gain additional favored terrains. At 8th level and every 5 levels thereafter, the bonus from this favored terrain increases by 2.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored terrain hook.

### Replaces: woodland stride

- **Archetype feature:** Wave Rush (Ex)
- **Description:** At 7th level, a tidal hunter gains a swim speed equal to his base speed.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a tidal hunter gains a swim speed equal to his base speed. If he already has a swim speed, it increases by 10 feet.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: improved evasion

- **Archetype feature:** Tidal Surge (Sp)
- **Description:** At 16th level, a tidal hunter gains control over water, and he can use the tides to attack his foes.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 16.
  - Mechanics summary: At 16th level, a tidal hunter gains control over water, and he can use the tides to attack his foes. Once per day, he can cast tidal surge as a spell-like ability.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Waterborn (Su)
- Keen Scent (Ex)
- Aquatic Mastery (Ex)
- Wave Rush (Ex)
- Tidal Surge (Sp)

