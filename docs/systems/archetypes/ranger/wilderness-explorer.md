# Ranger - Wilderness Explorer

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Wilderness Explorer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Wilderness%20Explorer
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills (Ex); Cultural Contact (Ex); Hazard Sense (Ex); Indigenous Spirit (Su); Guardian Spirit (Su); Manifest Spirit (Su)
- **Replaced / altered class features:** Class Skills; Wild Empathy; Hunter's Bond; Swift Tracker; Favored Terrain; Quarry; Improved Quarry

## Implementation details

### Alters: the ranger’s class skills

- **Archetype feature:** Class Skills (Ex)
- **Description:** A wilderness explorer gains Diplomacy and Knowledge (local) as class skills, but he does not gain Intimidate or Knowledge (dungeoneering) as class skills.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A wilderness explorer gains Diplomacy and Knowledge (local) as class skills, but he does not gain Intimidate or Knowledge (dungeoneering) as class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: wild empathy

- **Archetype feature:** Cultural Contact (Ex)
- **Description:** A wilderness explorer gains the ability to communicate with creatures with which he doesn’t share a common language.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A wilderness explorer gains the ability to communicate with creatures with which he doesn’t share a common language. Only basic concepts can be conveyed or understood, such as “I need help,” “I come in peace,” “Come over here,” “Go over there,” and the like. This allows the wilderness explorer to ignore the common language requirement of social interaction and language-dependent spells and effects, but he can do so only when the information being shared is relatively simple. The creature with which the wilderness explorer communicates must understand at least one language for this ability to function. Additionally, a wilderness explorer can peacefully influence the initial attitude of humanoids that have Intelligence scores of 2 or lower. This ability functions just like wild empathy, but it works on humanoids instead of on animals. The wilderness explorer can also use this ability to influence a monstrous humanoid with 2 or lower Intelligence, but the wilderness explorer takes a –4 penalty on the check.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: hunter’s bond

- **Archetype feature:** Hazard Sense (Ex)
- **Description:** At 4th level, a wilderness explorer gains an intuitive understanding of natural hazards and traps fashioned from a natural environment.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level, a wilderness explorer gains an intuitive understanding of natural hazards and traps fashioned from a natural environment. He gains a +1 bonus on Reflex saves against natural hazards and wilderness traps and a +1 dodge bonus to AC against attacks from wilderness traps. This bonus increases by 1 at 8th level and every 4 levels thereafter.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: swift tracker and alters favored terrain

- **Archetype feature:** Indigenous Spirit (Su)
- **Description:** At 8th level, a wilderness explorer attracts the aid of native spirits, which reward his appreciation of their home with whispered warnings.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a wilderness explorer attracts the aid of native spirits, which reward his appreciation of their home with whispered warnings. The wilderness explorer gains uncanny dodge as long as he remains within one of his chosen favored terrains. This works like the barbarian ability of the same name.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: quarry and alters favored terrain

- **Archetype feature:** Guardian Spirit (Su)
- **Description:** At 11th level, a wilderness explorer gains the aid of indigenous spirits, which favor him when he is defending himself against multiple foes that surround him.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a wilderness explorer gains the aid of indigenous spirits, which favor him when he is defending himself against multiple foes that surround him. He gains improved uncanny dodge; this ability functions only while the ranger is within one of his favored terrains.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved quarry and alters favored terrain

- **Archetype feature:** Manifest Spirit (Su)
- **Description:** At 19th level, a wilderness explorer is shielded from magic by those guardian spirits that favor him.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, a wilderness explorer is shielded from magic by those guardian spirits that favor him. He gains spell resistance equal to 11 + his ranger level. This ability functions only while the wilderness explorer is within one of his favored terrains.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills (Ex)
- Cultural Contact (Ex)
- Hazard Sense (Ex)
- Indigenous Spirit (Su)
- Guardian Spirit (Su)
- Manifest Spirit (Su)
