# Ranger - Fortune-Finder

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Fortune-Finder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Fortune-Finder
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Hinterlander (Ex); Adaptable Study (Ex); Trailblazer (Ex); Fast Study (Ex); Master Explorer (Ex)
- **Replaced / altered class features:** hunter’s bond; woodland stride; quarry and improved quarry; master hunter

## Implementation details

### Replaces: track

- **Archetype feature:** Hinterlander (Ex)
- **Description:** A fortune-finder adds 1/2 his level (minimum 1) on all Climb and Swim checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A fortune-finder adds 1/2 his level (minimum 1) on all Climb and Swim checks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: hunter’s bond

- **Archetype feature:** Adaptable Study (Ex)
- **Description:** At 4th level, a fortune-finder can adapt and orient himself to new environments and new enemies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a fortune-finder can adapt and orient himself to new environments and new enemies. He gains a +1 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival checks whenever he is in a terrain he hasn’t selected as one of his favored terrains. He leaves no trail and can’t be tracked in any such terrain (though he can leave a trail if he so chooses). In addition to this, the fortune-finder can study an opponent he can see as a move action. He then gains a bonus on Bluff, Knowledge, Perception, Sense Motive, and Survival checks attempted against that opponent, as well as on weapon attack and damage rolls against it. The bonus is equal to half the fortune-finder’s highest favored enemy bonus. A fortune-finder can’t attempt Knowledge checks untrained to identify an opponent he has studied with adaptable study. Bonuses from adaptable study don’t stack with those from the favored enemy ability. The ranger can study only a single target at a time.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: woodland stride

- **Archetype feature:** Trailblazer (Ex)
- **Description:** Starting at 7th level, a fortune-finder can move through any sort of difficult terrain at his normal speed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** Starting at 7th level, a fortune-finder can move through any sort of difficult terrain at his normal speed. Terrain that is enchanted or magically manipulated to impede movement, however, still affects the fortune-finder.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: quarry and improved quarry

- **Archetype feature:** Fast Study (Ex)
- **Description:** Beginning at 11th level, a fortune-finder can study an opponent using adaptable study as a swift or move action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11, 19.
  - **Rules text to implement:** Beginning at 11th level, a fortune-finder can study an opponent using adaptable study as a swift or move action. In addition to this, he can maintain bonuses from adaptable study against one additional opponent. At 19th level, he can study an opponent using adaptable study as an immediate, swift, or move action and can maintain the bonuses from adaptable study against a total of three opponents.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: master hunter

- **Archetype feature:** Master Explorer (Ex)
- **Description:** A fortune-finder of 20th level becomes a master explorer.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** A fortune-finder of 20th level becomes a master explorer. He can move through any sort of terrain that impedes movement at his full speed, even if it is enchanted or magically manipulated to impede motion. As a full-round action, he can study one opponent he can see and has already studied with adaptable study, increasing the benefits he gains from that ability to equal his full favored enemy bonus.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Hinterlander (Ex)
- Adaptable Study (Ex)
- Trailblazer (Ex)
- Fast Study (Ex)
- Master Explorer (Ex)
