# Monk - Menhir Guardian

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Menhir Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Menhir%20Guardian
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Claws (Ex); Wild Flurry (Ex); Rebuking Strike (Ex)
- **Replaced / altered class features:** Alignment; Weapon/Armor Proficiencies; Unarmed Strike; Ki Pool; Flurry of Blows; Stunning Fist; High Jump; Quivering Palm

## Implementation details

### Alters: the monk’s alignment requirement

- **Archetype feature:** Alignment
- **Description:** A menhir guardian can be lawful neutral, neutral good, neutral evil, or neutral.
- **Detailed mechanics:**
  - **Rules text to implement:** A menhir guardian can be lawful neutral, neutral good, neutral evil, or neutral. While they can work with chaotic allies, they cannot themselves be chaotic.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the monk’s weapon and armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A menhir guardian is proficient with the club, dagger, dart, quarterstaff, sickle, shortspear, sling, and spear.
- **Detailed mechanics:**
  - **Rules text to implement:** A menhir guardian is proficient with the club, dagger, dart, quarterstaff, sickle, shortspear, sling, and spear. A menhir guardian can use these weapons in conjunction with his wild flurry ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: unarmed strike and alters ki pool

- **Archetype feature:** Claws (Ex)
- **Description:** A menhir guardian learns to draw upon natural forces to subtly change his body.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A menhir guardian learns to draw upon natural forces to subtly change his body. He gains the shifter’s shifter claws class feature and treats his monk level as his shifter level for the purposes of this ability. The menhir guardian cannot use the ki strike aspect of ki pool.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: furry of blows

- **Archetype feature:** Wild Flurry (Ex)
- **Description:** A menhir guardian gains flurry of blows.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A menhir guardian gains flurry of blows. He can use this ability with the natural attacks provided by his shifter claws ability or the weapons specified above under weapon and armor proficiency.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: stunning fist, high jump, and quivering palm

- **Archetype feature:** Rebuking Strike (Ex)
- **Description:** At 1st level, a menhir guardian can channel his ki into a devastating strike that repels his enemies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 5, 15.
  - **Rules text to implement:** At 1st level, a menhir guardian can channel his ki into a devastating strike that repels his enemies. A menhir guardian must declare that he is using rebuking strike before making a natural attack with his claws. On a hit, a foe damaged by the menhir guardian’s claws must succeed at a Fortitude saving throw (DC = 10 + half the menhir guardian’s level + his Wisdom modifier) or be pushed back 5 feet directly away from the menhir guardian, plus an additional 5 feet for every 4 levels the menhir guardian has beyond 1st. If this movement would be blocked by a solid object, the target of rebuking strike takes 1d6 points of damage per 10 feet moved and falls prone at the end of the movement. At 5th level, a creature that fails its save against a menhir guardian’s rebuking strike also has its speed reduced by half for a number of rounds equal to the menhir guardian’s level. At 15th level, a creature that fails its save is also affected by aversion, making it avoid the menhir guardian’s current location for 1 round per level the menhir guardian has. The menhir guardian can attempt a rebuking strike a number of times per day equal to his monk level but only once per round.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Alignment
- Weapon and Armor Proficiency
- Claws (Ex)
- Wild Flurry (Ex)
- Rebuking Strike (Ex)
