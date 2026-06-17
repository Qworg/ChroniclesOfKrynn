# Ranger - Abendego Diver

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Abendego Diver
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Abendego%20Diver
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Ocean’s Blessing; Deep Diver (Ex); Aquatic Terrain (Ex); Aquatic Adaptation (Ex); Shark Sense (Ex); Killer of the Deep (Ex)
- **Replaced / altered class features:** track; wild empathy; swift tracker; master hunter

## Implementation details

### Alters: the ranger’s weapon and armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** An Abendego diver is not proficient with shields but is proficient with harpoons UE and nets.
- **Detailed mechanics:**
  - **Rules text to implement:** An Abendego diver is not proficient with shields but is proficient with harpoons UE and nets.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: track

- **Archetype feature:** Ocean’s Blessing
- **Description:** An Abendego diver adds buoyancy ACG, control water, elemental speech APG (water only), hydraulic push APG, hydraulic torrent APG, ride the waves UM, river whip ACG, water breathing, and wave shield ACG to his ranger spell list at the same spell level as they appear on the cleric spell list or sorcerer/wizard spell list, whichever is lower.
- **Detailed mechanics:**
  - **Rules text to implement:** An Abendego diver adds buoyancy ACG, control water, elemental speech APG (water only), hydraulic push APG, hydraulic torrent APG, ride the waves UM, river whip ACG, water breathing, and wave shield ACG to his ranger spell list at the same spell level as they appear on the cleric spell list or sorcerer/wizard spell list, whichever is lower. He still must select them as spells known, as normal.
- **Implementation flags:**
  - archetype spell-list override.

### Replaces: wild empathy

- **Archetype feature:** Deep Diver (Ex)
- **Description:** At 1st level, an Abendego diver can hold his breath for twice as long as usual (4 rounds times his Constitution score instead of the normal 2).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an Abendego diver can hold his breath for twice as long as usual (4 rounds times his Constitution score instead of the normal 2).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: favored terrain

- **Archetype feature:** Aquatic Terrain (Ex)
- **Description:** At 3rd level, an Abendego diver gains a +2 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival skill checks while underwater.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, an Abendego diver gains a +2 bonus on initiative checks and Knowledge (geography), Perception, Stealth, and Survival skill checks while underwater. Every 5 levels thereafter, the bonus on each of those checks increases by 2 while the Abendego diver is underwater (to a maximum of +8 at 18th level).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: woodland stride

- **Archetype feature:** Aquatic Adaptation (Ex)
- **Description:** At 7th level, an Abendego diver gains a swim speed equal to his unmodified base speed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, an Abendego diver gains a swim speed equal to his unmodified base speed. Because he has a swim speed, he gains the standard +8 bonus on Swim checks to perform a special action or evade a hazard, the ability to take 10 on a Swim check even if distracted or threatened, and the ability to use the run action while swimming if he swims in a straight line. If he already has a swim speed, his swim speed increases by 10 feet.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: swift tracker

- **Archetype feature:** Shark Sense (Ex)
- **Description:** At 8th level, an Abendego diver gains the scent ability while underwater.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, an Abendego diver gains the scent ability while underwater.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: master hunter

- **Archetype feature:** Killer of the Deep (Ex)
- **Description:** At 20th level, an Abendego diver is peerless at detecting prey underwater and delivering killing blows.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, an Abendego diver is peerless at detecting prey underwater and delivering killing blows. He can notice other creatures by scent in a 180-foot radius underwater and can detect blood in the water up to a mile away. As a standard action, he can make a single attack against a favored enemy at his full attack bonus while underwater. If the attack hits, the target takes damage normally and must succeed at a Fortitude save or die. The DC of this save is equal to 10 + half the ranger’s level + the ranger’s Wisdom modifier. An Abendego diver can instead deal an additional amount of nonlethal damage equal to the creature’s current hit points. A successful save negates this damage. An Abendego diver can use this ability once per day against each of his favored enemy types but not against the same creature more than once in a 24-hour period.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Ocean’s Blessing
- Deep Diver (Ex)
- Aquatic Terrain (Ex)
- Aquatic Adaptation (Ex)
- Shark Sense (Ex)
- Killer of the Deep (Ex)
