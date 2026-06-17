# Monk - Karmic Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Karmic Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Karmic%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Karmic Strike (Su); Balanced Mind (Su); Ki Pool (Su); Harmony (Su); Karmic Disruption (Su); Harmonic Self
- **Replaced / altered class features:** stunning fist; still mind; the 7th- and 10th-level ki pool abilities; improved evasion; slow fall 80 feet, and alters slow fall at 19th level to become slow fall 80 feet

## Implementation details

### Alters: the monk’s alignment requirement

- **Archetype feature:** Alignment
- **Description:** A karmic monk must be true neutral or of any lawful alignment.
- **Detailed mechanics:**
  - **Rules text to implement:** A karmic monk must be true neutral or of any lawful alignment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the monk’s class skills

- **Archetype feature:** Class Skills
- **Description:** The karmic monk gains Diplomacy (Cha) as a class skill instead of Intimidate.
- **Detailed mechanics:**
  - **Rules text to implement:** The karmic monk gains Diplomacy (Cha) as a class skill instead of Intimidate.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: stunning fist

- **Archetype feature:** Karmic Strike (Su)
- **Description:** At 1st level, a karmic monk gains bonuses against creatures that attack him first.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a karmic monk gains bonuses against creatures that attack him first. If a creature the karmic monk has not attacked within the past 24 hours makes an attack roll against the karmic monk or casts an offensive spell that affects the karmic monk, the karmic monk receives a +2 bonus on attack rolls and damage rolls against that creature. If the karmic monk hits such a target, this bonus lasts until the end of the karmic monk’s turn (or until the beginning of the karmic monk’s next turn, if it isn’t his turn). Otherwise, the bonus against a particular creature lasts for 1 minute after the creature’s last attack against the karmic monk.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: still mind

- **Archetype feature:** Balanced Mind (Su)
- **Description:** At 3rd level, a karmic monk receives a +2 bonus on saving throws against effects with the chaos, evil, good, or law subtype.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a karmic monk receives a +2 bonus on saving throws against effects with the chaos, evil, good, or law subtype. He also receives this bonus against the abilities and effects of creatures of the listed subtypes.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the 7th- and 10th-level ki pool abilities

- **Archetype feature:** Ki Pool (Su)
- **Description:** At 7th level, when a karmic monk makes unarmed strikes, they’re treated as chaotic, evil, good, and lawful.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7, 10.
  - **Rules text to implement:** At 7th level, when a karmic monk makes unarmed strikes, they’re treated as chaotic, evil, good, and lawful.
- **Implementation flags:**
  - ki subsystem.

### Replaces: improved evasion

- **Archetype feature:** Harmony (Su)
- **Description:** At 9th level, as an immediate action, a karmic monk can shift his alignment by one step for the purpose of all effects dependent on alignment until the beginning of his next turn.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, as an immediate action, a karmic monk can shift his alignment by one step for the purpose of all effects dependent on alignment until the beginning of his next turn. This does not actually alter the karmic monk’s alignment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: slow fall 80 feet, and alters slow fall at 19th level to become slow fall 80 feet

- **Archetype feature:** Karmic Disruption (Su)
- **Description:** At 16th level, a karmic monk can spend 1 point from his ki pool as a swift action to add 1d6 points of damage to his unarmed strikes against creatures of either chaotic, evil, good, or lawful alignment for 1 round.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 16, 19.
  - **Rules text to implement:** At 16th level, a karmic monk can spend 1 point from his ki pool as a swift action to add 1d6 points of damage to his unarmed strikes against creatures of either chaotic, evil, good, or lawful alignment for 1 round. This stacks with other abilities that deal damage based on alignment. He cannot alter his alignment choice until the next time he uses this ability. Creatures that are of the appropriate alignment and are struck by this attack must succeed at a Will save (DC = 10 + 1/2 the karmic monk’s class level + the karmic monk’s Wisdom modifier) or lose any damage reduction based on alignment for a number of rounds equal to the karmic monk’s Wisdom modifier (minimum 1 round). A creature that succeeds at this save is immune to having its damage reduction disrupted by that karmic monk for 24 hours. This attack disrupts only alignment components of damage reduction, not any other components; for example, DR/cold iron and good becomes DR/cold iron.
- **Implementation flags:**
  - ki subsystem.

### Alters: perfect self

- **Archetype feature:** Harmonic Self
- **Description:** At 20th level, a karmic monk is truly in tune with the harmonic balance of the universe.
- **Detailed mechanics:**
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a karmic monk is truly in tune with the harmonic balance of the universe. He gains the abilities of perfect self, except that instead of DR 10/chaotic, he gains DR 10 that is overcome only by attacks that do not count as chaotic, evil, good, or lawful.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Alignment
- Class Skills
- Karmic Strike (Su)
- Balanced Mind (Su)
- Ki Pool (Su)
- Harmony (Su)
- Karmic Disruption (Su)
- Harmonic Self
