# Monk - Wanderer

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Wanderer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Wanderer
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Far Traveler (Ex); Long Walk (Ex); Light Step (Su); Inscrutable (Su); Wanderer’s Wisdom (Ex); Disappear Unnoticed (Ex); Free Step (Su)
- **Replaced / altered class features:** the bonus feat gained at 1st level; still mind; slow fall; high jump; wholeness of body; abundant step; diamond soul

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** The wanderer adds Diplomacy, Knowledge (geography), Knowledge (local), Linguistics, and Survival to his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** The wanderer adds Diplomacy, Knowledge (geography), Knowledge (local), Linguistics, and Survival to his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Far Traveler (Ex)
- **Description:** At 1st level, the wanderer gains either one additional language known or proficiency in one exotic or martial weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 4.
  - **Rules text to implement:** At 1st level, the wanderer gains either one additional language known or proficiency in one exotic or martial weapon. At 4th level and every four levels thereafter, the wanderer may gain an additional language known or may retrain her weapon proficiency from this ability to a different exotic or martial weapon.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: still mind

- **Archetype feature:** Long Walk (Ex)
- **Description:** At 3rd level, the wanderer gains Endurance as a bonus feat, and the feat bonus doubles when he makes Constitution checks because of a forced march.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the wanderer gains Endurance as a bonus feat, and the feat bonus doubles when he makes Constitution checks because of a forced march. In addition, a wanderer gains a +2 bonus on saving throws against spells and effects that cause exhaustion and fatigue.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: slow fall

- **Archetype feature:** Light Step (Su)
- **Description:** At 5th level, a wanderer leaves no trail and cannot be tracked, though he can leave a trail if desired.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a wanderer leaves no trail and cannot be tracked, though he can leave a trail if desired. By spending 1 point from his ki pool, he can use ant haul, feather step, pass without trace, or tireless pursuit as a spell-like ability (with a caster level equal to his monk level).
- **Implementation flags:**
  - ki subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Replaces: high jump

- **Archetype feature:** Inscrutable (Su)
- **Description:** At 5th level, the wanderer gains a supernatural air of mystery.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, the wanderer gains a supernatural air of mystery. The DC to gain information or insight into the wanderer with Diplomacy, Knowledge skills, or Sense Motive increases by 5. In addition, by spending 1 point from his ki pool, the wanderer gains nondetection for 24 hours with a caster level equal to his monk level.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: wholeness of body

- **Archetype feature:** Wanderer’s Wisdom (Ex)
- **Description:** At 7th level, the wanderer can dispense excellent advice in the form of philosophical proverbs and parables.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, the wanderer can dispense excellent advice in the form of philosophical proverbs and parables. As a swift action, the wanderer can inspire courage or inspire competence as a bard of his monk level by spending 2 points from his ki pool. This affects one creature within 30 feet and lasts a number of rounds equal to the wanderer’s Wisdom modifier (minimum 1 round). This ability is language-dependent.
- **Implementation flags:**
  - rage/rage power subsystem.
  - ki subsystem.

### Replaces: abundant step

- **Archetype feature:** Disappear Unnoticed (Ex)
- **Description:** At 12th level, the wanderer may use Stealth to hide even while being directly observed or when no cover or concealment is available, as long as he is adjacent to at least one creature of his size or larger, by spending 1 point from his ki pool.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, the wanderer may use Stealth to hide even while being directly observed or when no cover or concealment is available, as long as he is adjacent to at least one creature of his size or larger, by spending 1 point from his ki pool. This effect lasts until the beginning of the wanderer’s next turn and may be continued in consecutive rounds by spending 1 ki point each round.
- **Implementation flags:**
  - ki subsystem.

### Replaces: diamond soul

- **Archetype feature:** Free Step (Su)
- **Description:** At 13th level, the wanderer gains continuous freedom of movement as a continuous spell-like ability.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, the wanderer gains continuous freedom of movement as a continuous spell-like ability.
- **Implementation flags:**
  - spell-like ability support.

## Parsed source feature headings

- Class Skills
- Far Traveler (Ex)
- Long Walk (Ex)
- Light Step (Su)
- Inscrutable (Su)
- Wanderer’s Wisdom (Ex)
- Disappear Unnoticed (Ex)
- Free Step (Su)
