# Ranger - Dandy

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Dandy
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Dandy
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Favored Nation (Ex); Rumor Empathy (Ex); Favored Terrain (Ex); Hobnob (Ex); Dandy Spells (Su); Party Crasher (Ex)
- **Replaced / altered class features:** favored enemy; wild empathy; woodland stride

## Replacement details

### Alters: the ranger’s class skills

- **Archetype feature:** Class Skills
- **Description:** A dandy adds Bluff, Diplomacy, Knowledge (local), Knowledge (nobility), and Sense Motive to his list of class skills, instead of Handle Animal, Knowledge (dungeoneering), Knowledge (geography), Knowledge (nature), and Survival.
- **Mechanics:**
  - Mechanics summary: A dandy adds Bluff, Diplomacy, Knowledge (local), Knowledge (nobility), and Sense Motive to his list of class skills, instead of Handle Animal, Knowledge (dungeoneering), Knowledge (geography), Knowledge (nature), and Survival.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: favored enemy

- **Archetype feature:** Favored Nation (Ex)
- **Description:** Each time he would select a favored enemy, a dandy instead selects a country with whose courtly graces he is wholly versed and studied.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Each time he would select a favored enemy, a dandy instead selects a country with whose courtly graces he is wholly versed and studied. He gains a +2 bonus on Bluff, Diplomacy, Knowledge, Perception, Sense Motive, and Survival checks against courtiers, officials, nobles, and gentry from that nation. Likewise, he gains a +2 bonus on weapon attack and damage rolls against them. A dandy can attempt the appropriate Knowledge checks untrained to identify such people from the selected country. A dandy gains additional favored nations, and can increase the bonuses of one of his current favored nations, in the same way he would with a normal ranger’s favored enemy.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

### Replaces: wild empathy

- **Archetype feature:** Rumor Empathy (Ex)
- **Description:** A dandy can alter the flow and spread of rumors in his favor.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A dandy can alter the flow and spread of rumors in his favor. This functions similarly to wild empathy, except that it takes 1 day (8 hours of work), instead of 1 minute, and it affects the general tenor of a rumor instead of a wild animal. The DC of the check is 15 in a village or smaller settlement. This DC increases by 5 and the number of days required to attempt the check increases by 2 for every settlement size category larger than a village—to a maximum of DC 40 and 11 days to affect a rumor spreading through an entire metropolis. If the rumor is only spreading through a smaller segment of the population, such as the elven district in a larger metropolis, use the population of that smaller segment to determine the DC and number of days of work required to use rumor empathy. The DC also increases by 10 if the rumor is about the dandy himself, since the dandy is obviously a biased source with respects to rumors about his own person.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

### Alters: favored terrain

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a dandy gains favored terrain (urban), and though the ability continues to increase at the same levels, he doesn’t add additional terrains.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8.
  - Mechanics summary: At 3rd level, a dandy gains favored terrain (urban), and though the ability continues to increase at the same levels, he doesn’t add additional terrains. However, at 8th level, whenever he is at a courtly function or party, his favored terrain bonuses increase by an additional 2.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored terrain hook.

### Alters: hunter’s bond

- **Archetype feature:** Hobnob (Ex)
- **Description:** At 4th level, a dandy must choose his allies as his hunter’s bond, not an animal companion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a dandy must choose his allies as his hunter’s bond, not an animal companion. In addition to the usual hunter’s bond ability, the dandy can spend 10 minutes at a particular event or party hobnobbing and introducing his allies to the right people in order to provide them with half the skill bonuses of his favored nation (though not the bonuses on attack and damage rolls) for the duration of the event.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, animal companion hook, ki/monk hook.

### Alters: the ranger’s spellcasting

- **Archetype feature:** Dandy Spells (Su)
- **Description:** At 4th level, the dandy gains a different sort of spellcasting than most rangers.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, the dandy gains a different sort of spellcasting than most rangers. A dandy uses his Charisma instead of his Wisdom to determine spells per day, DCs, and other factors related to spellcasting. He casts spells spontaneously from the bard spell list (rather than the ranger spell list) with the same number of spells known and spells per day as a medium ( Pathfinder RPG Occult Adventures 30 ) of his ranger level.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook.
  - Needs implementation review: occult subsystem.

### Replaces: woodland stride

- **Archetype feature:** Party Crasher (Ex)
- **Description:** At 7th level, the dandy is able to finagle his way into fancy parties, kings’ balls, and other social events meant for the cream of society.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, the dandy is able to finagle his way into fancy parties, kings’ balls, and other social events meant for the cream of society. To do so, he must attempt a DC 25 Diplomacy check, which takes 1d4 hours.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Favored Nation (Ex)
- Rumor Empathy (Ex)
- Favored Terrain (Ex)
- Hobnob (Ex)
- Dandy Spells (Su)
- Party Crasher (Ex)

