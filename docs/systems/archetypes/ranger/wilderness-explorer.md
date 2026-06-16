# Ranger - Wilderness Explorer

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Wilderness Explorer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Wilderness%20Explorer
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills (Ex); Cultural Contact (Ex); Hazard Sense (Ex); Indigenous Spirit (Su); Guardian Spirit (Su); Manifest Spirit (Su)
- **Replaced / altered class features:** Class Skills; Wild Empathy; Hunter's Bond; Swift Tracker; Favored Terrain; Quarry; Improved Quarry

## Replacement details

### Alters: the ranger’s class skills

- **Archetype feature:** Class Skills (Ex)
- **Description:** A wilderness explorer gains Diplomacy and Knowledge (local) as class skills, but he does not gain Intimidate or Knowledge (dungeoneering) as class skills.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A wilderness explorer gains Diplomacy and Knowledge (local) as class skills, but he does not gain Intimidate or Knowledge (dungeoneering) as class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: wild empathy

- **Archetype feature:** Cultural Contact (Ex)
- **Description:** A wilderness explorer gains the ability to communicate with creatures with which he doesn’t share a common language.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A wilderness explorer gains the ability to communicate with creatures with which he doesn’t share a common language. Only basic concepts can be conveyed or understood, such as “I need help,” “I come in peace,” “Come over here,” “Go over there,” and the like. This allows the wilderness explorer to ignore the common language requirement of social interaction and language-dependent spells and effects, but he can do so only when the information being shared is relatively simple. The creature with which the wilderness explorer communicates must understand at least one language for this ability to function. Additionally, a wilderness explorer can peacefully influence the initial attitude of humanoids that have Intelligence scores of 2 or lower. The wilderness explorer can also use this ability to influence a monstrous humanoid with 2 or lower Intelligence, but the wilderness explorer takes a –4 penalty on the check.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, spellcasting/spell-list hook.

### Replaces: hunter’s bond

- **Archetype feature:** Hazard Sense (Ex)
- **Description:** At 4th level, a wilderness explorer gains an intuitive understanding of natural hazards and traps fashioned from a natural environment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 8.
  - Mechanics summary: At 4th level, a wilderness explorer gains an intuitive understanding of natural hazards and traps fashioned from a natural environment. He gains a +1 bonus on Reflex saves against natural hazards and wilderness traps and a +1 dodge bonus to AC against attacks from wilderness traps. This bonus increases by 1 at 8th level and every 4 levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: swift tracker

- **Archetype feature:** Indigenous Spirit (Su)
- **Description:** At 8th level, a wilderness explorer attracts the aid of native spirits, which reward his appreciation of their home with whispered warnings.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a wilderness explorer attracts the aid of native spirits, which reward his appreciation of their home with whispered warnings. The wilderness explorer gains uncanny dodge as long as he remains within one of his chosen favored terrains.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook.

### Replaces: alters favored terrain

- **Archetype feature:** Indigenous Spirit (Su)
- **Description:** At 8th level, a wilderness explorer attracts the aid of native spirits, which reward his appreciation of their home with whispered warnings.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a wilderness explorer attracts the aid of native spirits, which reward his appreciation of their home with whispered warnings. The wilderness explorer gains uncanny dodge as long as he remains within one of his chosen favored terrains.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook.

### Replaces: quarry

- **Archetype feature:** Guardian Spirit (Su)
- **Description:** At 11th level, a wilderness explorer gains the aid of indigenous spirits, which favor him when he is defending himself against multiple foes that surround him.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a wilderness explorer gains the aid of indigenous spirits, which favor him when he is defending himself against multiple foes that surround him. He gains improved uncanny dodge; this ability functions only while the ranger is within one of his favored terrains.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook.

### Replaces: alters favored terrain

- **Archetype feature:** Guardian Spirit (Su)
- **Description:** At 11th level, a wilderness explorer gains the aid of indigenous spirits, which favor him when he is defending himself against multiple foes that surround him.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a wilderness explorer gains the aid of indigenous spirits, which favor him when he is defending himself against multiple foes that surround him. He gains improved uncanny dodge; this ability functions only while the ranger is within one of his favored terrains.
- **Implementation flags:**
  - Likely existing hooks: favored terrain hook.

### Replaces: improved quarry

- **Archetype feature:** Manifest Spirit (Su)
- **Description:** At 19th level, a wilderness explorer is shielded from magic by those guardian spirits that favor him.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a wilderness explorer is shielded from magic by those guardian spirits that favor him. He gains spell resistance equal to 11 + his ranger level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, favored terrain hook.

### Replaces: alters favored terrain

- **Archetype feature:** Manifest Spirit (Su)
- **Description:** At 19th level, a wilderness explorer is shielded from magic by those guardian spirits that favor him.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a wilderness explorer is shielded from magic by those guardian spirits that favor him. He gains spell resistance equal to 11 + his ranger level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, favored terrain hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Hunter's Bond

## Parsed source feature headings

- Class Skills (Ex)
- Cultural Contact (Ex)
- Hazard Sense (Ex)
- Indigenous Spirit (Su)
- Guardian Spirit (Su)
- Manifest Spirit (Su)

