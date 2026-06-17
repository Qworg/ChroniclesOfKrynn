# Ranger - Tidal Hunter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Tidal Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Tidal%20Hunter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Waterborn (Su); Keen Scent (Ex); Aquatic Mastery (Ex); Wave Rush (Ex); Tidal Surge (Sp)
- **Replaced / altered class features:** Wild Empathy; 6th-level Combat Style Feat; Track; Camouflage; Favored Terrain; Woodland Stride; Improved Evasion

## Implementation details

### Replaces: wild empathy and the 6th-level combat style feat

- **Archetype feature:** Waterborn (Su)
- **Description:** A tidal hunter can breathe water for up to 10 minutes per ranger level each day.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** A tidal hunter can breathe water for up to 10 minutes per ranger level each day. At 6th level, he can breathe underwater indefinitely.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: track and camouflage

- **Archetype feature:** Keen Scent (Ex)
- **Description:** A tidal hunter gains scent, as per the universal monster rule.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** A tidal hunter gains scent, as per the universal monster rule. At 12th level, while in water, the tidal hunter can detect particularly strong or distinct odors (such as blood) up to 1 mile away.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: favored terrain

- **Archetype feature:** Aquatic Mastery (Ex)
- **Description:** At 3rd level, a tidal hunter must select water as his favored terrain, and he doesn’t gain additional favored terrains.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 8.
  - **Rules text to implement:** At 3rd level, a tidal hunter must select water as his favored terrain, and he doesn’t gain additional favored terrains. At 8th level and every 5 levels thereafter, the bonus from this favored terrain increases by 2.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: woodland stride

- **Archetype feature:** Wave Rush (Ex)
- **Description:** At 7th level, a tidal hunter gains a swim speed equal to his base speed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a tidal hunter gains a swim speed equal to his base speed. If he already has a swim speed, it increases by 10 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved evasion

- **Archetype feature:** Tidal Surge (Sp)
- **Description:** At 16th level, a tidal hunter gains control over water, and he can use the tides to attack his foes.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 16.
  - **Rules text to implement:** At 16th level, a tidal hunter gains control over water, and he can use the tides to attack his foes. Once per day, he can cast tidal surge as a spell-like ability.
- **Implementation flags:**
  - spell-like ability support.

## Parsed source feature headings

- Waterborn (Su)
- Keen Scent (Ex)
- Aquatic Mastery (Ex)
- Wave Rush (Ex)
- Tidal Surge (Sp)
