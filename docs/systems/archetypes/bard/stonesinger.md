# Bard - Stonesinger

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Stonesinger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Stonesinger
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Earth Magic; Stone Song (Su); Tremor (Su); Quake (Su)
- **Replaced / altered class features:** Spellcasting; Bardic Performance; Countersong; Dirge of Doom

## Replacement details

### Alters: spellcasting

- **Archetype feature:** Earth Magic
- **Description:** A stonesinger is treated as having the Eschew Materials feat so long as he is touching natural or manufactured stone.
- **Mechanics:**
  - Mechanics summary: A stonesinger is treated as having the Eschew Materials feat so long as he is touching natural or manufactured stone. Additionally, a stonesinger adds the following spells to the bard spell list at the listed level: 1— magic stone , 2— stone shield , 3— stone shape , 4— earth glide , 5— stoneskin , 6— stone tell .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, ki/monk hook.

### Alters: bardic performance

- **Archetype feature:** Stone Song (Su)
- **Description:** A stonesinger’s bardic performance is a subsonic vibration that resonates from his body and travels through solid rock.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A stonesinger’s bardic performance is a subsonic vibration that resonates from his body and travels through solid rock. This vibration is subtle enough to not be heard, though creatures with the tremorsense universal monster ability can distinctly hear the stone song out to a range of 100 feet per bard level. A stonesinger must use Perform (song) or Perform (oratory) for this bardic performance.
- **Implementation flags:**
  - Likely existing hooks: bardic performance hook.

### Replaces: countersong

- **Archetype feature:** Tremor (Su)
- **Description:** As part of another bardic performance, a stonesinger can cause the ground within 30 feet to tremble, throwing enemies off balance and causing them to take a –1 circumstance penalty to AC as long as the stonesinger continues performing.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: As part of another bardic performance, a stonesinger can cause the ground within 30 feet to tremble, throwing enemies off balance and causing them to take a –1 circumstance penalty to AC as long as the stonesinger continues performing. This penalty increases by 1 at 5th level and every 6 levels thereafter. Creatures levitating or flying above the ground are unaffected by this ability.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, bardic performance hook.

### Replaces: dirge of doom

- **Archetype feature:** Quake (Su)
- **Description:** At 8th level, a stonesinger causes the ground to shudder and buckle with his song.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a stonesinger causes the ground to shudder and buckle with his song. All enemies within 30 feet of the stonesinger must succeed at a Reflex save (DC = 10 + half the stonesinger’s level + his Charisma bonus) when he begins a bardic performance or be knocked prone.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, bardic performance hook.

## Parsed source feature headings

- Earth Magic
- Stone Song (Su)
- Tremor (Su)
- Quake (Su)

