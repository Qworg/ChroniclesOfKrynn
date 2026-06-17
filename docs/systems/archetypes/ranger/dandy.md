# Ranger - Dandy

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Dandy
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Dandy
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Favored Nation (Ex); Rumor Empathy (Ex); Favored Terrain (Ex); Hobnob (Ex); Dandy Spells (Su); Party Crasher (Ex)
- **Replaced / altered class features:** favored enemy; wild empathy; woodland stride

## Implementation details

### Alters: the ranger’s class skills

- **Archetype feature:** Class Skills
- **Description:** A dandy adds Bluff, Diplomacy, Knowledge (local), Knowledge (nobility), and Sense Motive to his list of class skills, instead of Handle Animal, Knowledge (dungeoneering), Knowledge (geography), Knowledge (nature), and Survival.
- **Detailed mechanics:**
  - **Rules text to implement:** A dandy adds Bluff, Diplomacy, Knowledge (local), Knowledge (nobility), and Sense Motive to his list of class skills, instead of Handle Animal, Knowledge (dungeoneering), Knowledge (geography), Knowledge (nature), and Survival.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: favored enemy

- **Archetype feature:** Favored Nation (Ex)
- **Description:** Each time he would select a favored enemy, a dandy instead selects a country with whose courtly graces he is wholly versed and studied.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Each time he would select a favored enemy, a dandy instead selects a country with whose courtly graces he is wholly versed and studied. He gains a +2 bonus on Bluff, Diplomacy, Knowledge, Perception, Sense Motive, and Survival checks against courtiers, officials, nobles, and gentry from that nation. Likewise, he gains a +2 bonus on weapon attack and damage rolls against them. A dandy can attempt the appropriate Knowledge checks untrained to identify such people from the selected country. A dandy gains additional favored nations, and can increase the bonuses of one of his current favored nations, in the same way he would with a normal ranger’s favored enemy.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: wild empathy

- **Archetype feature:** Rumor Empathy (Ex)
- **Description:** A dandy can alter the flow and spread of rumors in his favor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dandy can alter the flow and spread of rumors in his favor. This functions similarly to wild empathy, except that it takes 1 day (8 hours of work), instead of 1 minute, and it affects the general tenor of a rumor instead of a wild animal. A successful rumor empathy check allows the dandy to increase or decrease the rumor’s tone by one step. For example, he could make an indifferent rumor friendly and thus positive toward its target, or an unfriendly rumor hostile and thus even more negative toward its target than it was originally. The difficulty of influencing a rumor depends on the size of the community in which it is spreading. The DC of the check is 15 in a village or smaller settlement. This DC increases by 5 and the number of days required to attempt the check increases by 2 for every settlement size category larger than a village—to a maximum of DC 40 and 11 days to affect a rumor spreading through an entire metropolis. If the rumor is only spreading through a smaller segment of the population, such as the elven district in a larger metropolis, use the population of that smaller segment to determine the DC and number of days of work required to use rumor empathy. The DC also increases by 10 if the rumor is about the dandy himself, since the dandy is obviously a biased source with respects to rumors about his own person.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: favored terrain

- **Archetype feature:** Favored Terrain (Ex)
- **Description:** At 3rd level, a dandy gains favored terrain (urban), and though the ability continues to increase at the same levels, he doesn’t add additional terrains.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 8.
  - **Rules text to implement:** At 3rd level, a dandy gains favored terrain (urban), and though the ability continues to increase at the same levels, he doesn’t add additional terrains. However, at 8th level, whenever he is at a courtly function or party, his favored terrain bonuses increase by an additional 2.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: hunter’s bond

- **Archetype feature:** Hobnob (Ex)
- **Description:** At 4th level, a dandy must choose his allies as his hunter’s bond, not an animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a dandy must choose his allies as his hunter’s bond, not an animal companion. In addition to the usual hunter’s bond ability, the dandy can spend 10 minutes at a particular event or party hobnobbing and introducing his allies to the right people in order to provide them with half the skill bonuses of his favored nation (though not the bonuses on attack and damage rolls) for the duration of the event.
- **Implementation flags:**
  - animal companion progression.
  - ki subsystem.
  - skill/class-skill modification.

### Alters: the ranger’s spellcasting

- **Archetype feature:** Dandy Spells (Su)
- **Description:** At 4th level, the dandy gains a different sort of spellcasting than most rangers.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, the dandy gains a different sort of spellcasting than most rangers. A dandy uses his Charisma instead of his Wisdom to determine spells per day, DCs, and other factors related to spellcasting. He casts spells spontaneously from the bard spell list (rather than the ranger spell list) with the same number of spells known and spells per day as a medium ( Pathfinder RPG Occult Adventures 30 ) of his ranger level.
- **Implementation flags:**
  - archetype spell-list override.

### Replaces: woodland stride

- **Archetype feature:** Party Crasher (Ex)
- **Description:** At 7th level, the dandy is able to finagle his way into fancy parties, kings’ balls, and other social events meant for the cream of society.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, the dandy is able to finagle his way into fancy parties, kings’ balls, and other social events meant for the cream of society. To do so, he must attempt a DC 25 Diplomacy check, which takes 1d4 hours. If he succeeds, he finds himself an invitation, an invitee looking for a date, a staff member willing to look the other way, or some other way to enter the party. This does not allow him to break into restricted areas or to infiltrate strictly closed gatherings, such as secret meetings; it only allows him access to social events.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Class Skills
- Favored Nation (Ex)
- Rumor Empathy (Ex)
- Favored Terrain (Ex)
- Hobnob (Ex)
- Dandy Spells (Su)
- Party Crasher (Ex)
