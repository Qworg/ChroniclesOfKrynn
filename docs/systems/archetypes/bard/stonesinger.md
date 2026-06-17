# Bard - Stonesinger

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Stonesinger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Stonesinger
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Earth Magic; Stone Song (Su); Tremor (Su); Quake (Su)
- **Replaced / altered class features:** Spellcasting; Bardic Performance; Countersong; Dirge of Doom

## Implementation details

### Alters: spellcasting

- **Archetype feature:** Earth Magic
- **Description:** A stonesinger is treated as having the Eschew Materials feat so long as he is touching natural or manufactured stone.
- **Detailed mechanics:**
  - **Rules text to implement:** A stonesinger is treated as having the Eschew Materials feat so long as he is touching natural or manufactured stone. Additionally, a stonesinger adds the following spells to the bard spell list at the listed level: 1— magic stone, 2— stone shield, 3— stone shape, 4— earth glide, 5— stoneskin, 6— stone tell.
- **Implementation flags:**
  - ki subsystem.
  - archetype spell-list override.
  - feat grant/prerequisite handling.

### Alters: bardic performance

- **Archetype feature:** Stone Song (Su)
- **Description:** A stonesinger’s bardic performance is a subsonic vibration that resonates from his body and travels through solid rock.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A stonesinger’s bardic performance is a subsonic vibration that resonates from his body and travels through solid rock. This vibration is subtle enough to not be heard, though creatures with the tremorsense universal monster ability can distinctly hear the stone song out to a range of 100 feet per bard level. All allies within 30 feet of the stonesinger benefit from stone song, perceiving the effect due to proximity. An allied creature with tremorsense benefits from stone song as long as it’s within the extended range, provided that there is an unobstructed path of solid earth between the creature and stonesinger. Natural and manufactured stone does not inhibit stone song’s range. A stonesinger must use Perform (song) or Perform (oratory) for this bardic performance.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: countersong

- **Archetype feature:** Tremor (Su)
- **Description:** As part of another bardic performance, a stonesinger can cause the ground within 30 feet to tremble, throwing enemies off balance and causing them to take a –1 circumstance penalty to AC as long as the stonesinger continues performing.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** As part of another bardic performance, a stonesinger can cause the ground within 30 feet to tremble, throwing enemies off balance and causing them to take a –1 circumstance penalty to AC as long as the stonesinger continues performing. This penalty increases by 1 at 5th level and every 6 levels thereafter. Creatures levitating or flying above the ground are unaffected by this ability.
- **Implementation flags:**
  - bardic performance subsystem.
  - flight/movement mode support.

### Replaces: dirge of doom

- **Archetype feature:** Quake (Su)
- **Description:** At 8th level, a stonesinger causes the ground to shudder and buckle with his song.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a stonesinger causes the ground to shudder and buckle with his song. All enemies within 30 feet of the stonesinger must succeed at a Reflex save (DC = 10 + half the stonesinger’s level + his Charisma bonus) when he begins a bardic performance or be knocked prone. Prone and flying creatures, as well as creatures with the earth glide universal monster ability, are unaffected by this performance.
- **Implementation flags:**
  - bardic performance subsystem.
  - flight/movement mode support.

## Parsed source feature headings

- Earth Magic
- Stone Song (Su)
- Tremor (Su)
- Quake (Su)
