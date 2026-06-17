# Bard - Dawnflower Dervish

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Dawnflower Dervish
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Dawnflower%20Dervish
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Deity; Battle Dance; Dervish Dance (Ex); Spinning Spellcaster (Ex); Meditative Whirl (Ex)
- **Replaced / altered class features:** their proficiency with the rapier and whip; bardic knowledge; lore master; the dirge of doom bardic performance

## Implementation details

### Replaces: their proficiency with the rapier and whip

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Dawnflower dervishes gain weapon proficiency with the scimitar.
- **Detailed mechanics:**
  - **Rules text to implement:** Dawnflower dervishes gain weapon proficiency with the scimitar.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Deity
- **Description:** A Dawnflower dervish must be a worshiper of Sarenrae.
- **Detailed mechanics:**
  - **Rules text to implement:** A Dawnflower dervish must be a worshiper of Sarenrae. A dervish who abandons or betrays this faith reverts to a standard bard.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the standard bardic performance ability

- **Archetype feature:** Battle Dance
- **Description:** A Dawnflower dervish is trained in the use of the Perform skill, especially dance, to create magical effects on himself.
- **Detailed mechanics:**
  - **Level hooks:** 10.
  - **Rules text to implement:** A Dawnflower dervish is trained in the use of the Perform skill, especially dance, to create magical effects on himself. This works like bardic performance, except that the Dawnflower dervish’s performances grant double their normal bonuses, but these bonuses only affect him. He does not need to be able to see or hear his own performance. Battle dancing is treated as bardic performance for the purposes of feats, abilities, and effects that affect bardic performance, except that battle dancing does not benefit from the Lingering Performance feat or any other ability that allows a bardic performance to grant bonuses after it has ended. The benefits of battle dancing apply only when the bard is wearing light or no armor. Like bardic performance, battle dancing cannot be maintained at the same time as other performance abilities. Starting a battle dance is a move action, but it can be maintained each round as a free action. Changing a battle dance from one effect to another requires the Dawnflower dervish to stop the previous performance and start the new one as a move action. Like a bard, a Dawnflower dervish’s performance ends immediately if he is killed, paralyzed, stunned, knocked unconscious, or otherwise prevented from taking a free action each round. A Dawnflower dervish cannot perform more than one battle dance at a time. At 10th level, a Dawnflower dervish can start a battle dance as a swift action instead of a move action. When the Dawnflower dervish uses the inspire courage, inspire greatness, or inspire heroics bardic performance types as battle dances, these performance types only provide benefit to the Dawnflower dervish himself. All other types of bardic performance work normally (affecting the bard and his allies, or the bard’s enemies, as appropriate).
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: bardic knowledge

- **Archetype feature:** Dervish Dance (Ex)
- **Description:** A Dawnflower dervish gains the Dervish Dance feat as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A Dawnflower dervish gains the Dervish Dance feat as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: lore master

- **Archetype feature:** Spinning Spellcaster (Ex)
- **Description:** At 5th level, a Dawnflower dervish gains a +4 bonus on concentration checks to cast spells defensively.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a Dawnflower dervish gains a +4 bonus on concentration checks to cast spells defensively.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the dirge of doom bardic performance

- **Archetype feature:** Meditative Whirl (Ex)
- **Description:** At 8th level, when using battle dance, the Dawnflower dervish can enter a trancelike state where his spinning motion represents the movement of the planets around the sun, and his spirit is attuned to the healing aspects of Sarenrae.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, when using battle dance, the Dawnflower dervish can enter a trancelike state where his spinning motion represents the movement of the planets around the sun, and his spirit is attuned to the healing aspects of Sarenrae. By spending a move action focusing on his whirling, the dervish can apply the Quicken Spell feat to any cure spell he is about to cast (effectively spending a move action and swift action to cast the spell). This does not alter the level of the spell or the casting time. The dervish can use this ability once per day at 8th level and one additional time per day for every two dervish levels he has beyond 8th.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Deity
- Battle Dance
- Dervish Dance (Ex)
- Spinning Spellcaster (Ex)
- Meditative Whirl (Ex)
