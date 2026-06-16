# Monk - Menhir Guardian

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Menhir Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Menhir%20Guardian
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Claws (Ex); Wild Flurry (Ex); Rebuking Strike (Ex)
- **Replaced / altered class features:** Alignment; Weapon/Armor Proficiencies; Unarmed Strike; Ki Pool; Flurry of Blows; Stunning Fist; High Jump; Quivering Palm

## Replacement details

### Alters: the monk’s alignment requirement

- **Archetype feature:** Alignment
- **Description:** A menhir guardian can be lawful neutral, neutral good, neutral evil, or neutral.
- **Mechanics:**
  - Mechanics summary: A menhir guardian can be lawful neutral, neutral good, neutral evil, or neutral. While they can work with chaotic allies, they cannot themselves be chaotic.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the monk’s weapon

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A menhir guardian is proficient with the club, dagger, dart, quarterstaff, sickle, shortspear, sling, and spear.
- **Mechanics:**
  - Mechanics summary: A menhir guardian is proficient with the club, dagger, dart, quarterstaff, sickle, shortspear, sling, and spear. A menhir guardian can use these weapons in conjunction with his wild flurry ability.
- **Implementation flags:**
  - Feature-key mapping needed for non-feat class-table changes such as skills/proficiencies.

### Replaces: armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A menhir guardian is proficient with the club, dagger, dart, quarterstaff, sickle, shortspear, sling, and spear.
- **Mechanics:**
  - Mechanics summary: A menhir guardian is proficient with the club, dagger, dart, quarterstaff, sickle, shortspear, sling, and spear. A menhir guardian can use these weapons in conjunction with his wild flurry ability.
- **Implementation flags:**
  - Feature-key mapping needed for non-feat class-table changes such as skills/proficiencies.

### Replaces: unarmed strike

- **Archetype feature:** Claws (Ex)
- **Description:** A menhir guardian learns to draw upon natural forces to subtly change his body.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A menhir guardian learns to draw upon natural forces to subtly change his body. He gains the shifter’s shifter claws class feature and treats his monk level as his shifter level for the purposes of this ability. The menhir guardian cannot use the ki strike aspect of ki pool.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, ki/monk hook.

### Replaces: alters ki pool

- **Archetype feature:** Claws (Ex)
- **Description:** A menhir guardian learns to draw upon natural forces to subtly change his body.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A menhir guardian learns to draw upon natural forces to subtly change his body. He gains the shifter’s shifter claws class feature and treats his monk level as his shifter level for the purposes of this ability. The menhir guardian cannot use the ki strike aspect of ki pool.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, ki/monk hook.

### Alters: furry of blows

- **Archetype feature:** Wild Flurry (Ex)
- **Description:** A menhir guardian gains flurry of blows.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A menhir guardian gains flurry of blows. He can use this ability with the natural attacks provided by his shifter claws ability or the weapons specified above under weapon and armor proficiency.
- **Implementation flags:**
  - Likely existing hooks: natural attack system.

### Replaces: stunning fist, high jump, and quivering palm

- **Archetype feature:** Rebuking Strike (Ex)
- **Description:** At 1st level, a menhir guardian can channel his ki into a devastating strike that repels his enemies.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 5, 15.
  - Mechanics summary: At 1st level, a menhir guardian can channel his ki into a devastating strike that repels his enemies. A menhir guardian must declare that he is using rebuking strike before making a natural attack with his claws. On a hit, a foe damaged by the menhir guardian’s claws must succeed at a Fortitude saving throw (DC = 10 + half the menhir guardian’s level + his Wisdom modifier) or be pushed back 5 feet directly away from the menhir guardian, plus an additional 5 feet for every 4 levels the menhir guardian has beyond 1st. If this movement would be blocked by a solid object, the target of rebuking strike takes 1d6 points of damage per 10 feet moved and falls prone at the end of the movement. At 5th level, a creature that fails its save against a menhir guardian’s rebuking strike also has its speed reduced by half for a number of rounds equal to the menhir guardian’s level. At 15th level, a creature that fails its save is also affected by aversion , making it avoid the menhir guardian’s current location for 1 round per level the menhir guardian has.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, ki/monk hook, natural attack system.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Weapon/Armor Proficiencies
- Flurry of Blows

## Parsed source feature headings

- Weapon and Armor Proficiency
- Claws (Ex)
- Wild Flurry (Ex)
- Rebuking Strike (Ex)

