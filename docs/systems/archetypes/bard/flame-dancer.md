# Bard - Flame Dancer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Flame Dancer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Flame%20Dancer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Fan the Flames (Su)
- **Replaced / altered class features:** countersong; inspire competence; suggestion; dirge of doom

## Replacement details

### Replaces: countersong

- **Archetype feature:** Bardic Performance
- **Description:** A flame dancer gains the following bardic performances.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3, 6, 11.
  - Mechanics summary: A flame dancer gains the following bardic performances. Fire Dance (Su) : At 1st level, a fire dancer learns to protect himself and others from the pain of fire, and discovers how to control the flame while enduring its heat. Each round of the fire dance, he rolls a Perform (dance or sing) check. Any ally within 30 feet of the bard that has caught on fire or is affected by a fire effect or extreme heat can use the bard’s Perform check result in place of its saving throw against that fire. Any ally within 30 feet of the bard who is suffering from heatstroke can ignore the fatigue from heat exposure so long as the bard maintains this performance. Song of the Fiery Gaze (Su) : At 3rd level, a fire dancer can allow allies to see through flames without any distortion.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, bardic performance hook.

### Replaces: inspire competence

- **Archetype feature:** Bardic Performance
- **Description:** A flame dancer gains the following bardic performances.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3, 6, 11.
  - Mechanics summary: A flame dancer gains the following bardic performances. Fire Dance (Su) : At 1st level, a fire dancer learns to protect himself and others from the pain of fire, and discovers how to control the flame while enduring its heat. Each round of the fire dance, he rolls a Perform (dance or sing) check. Any ally within 30 feet of the bard that has caught on fire or is affected by a fire effect or extreme heat can use the bard’s Perform check result in place of its saving throw against that fire. Any ally within 30 feet of the bard who is suffering from heatstroke can ignore the fatigue from heat exposure so long as the bard maintains this performance. Song of the Fiery Gaze (Su) : At 3rd level, a fire dancer can allow allies to see through flames without any distortion.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, bardic performance hook.

### Replaces: suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A flame dancer gains the following bardic performances.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3, 6, 11.
  - Mechanics summary: A flame dancer gains the following bardic performances. Fire Dance (Su) : At 1st level, a fire dancer learns to protect himself and others from the pain of fire, and discovers how to control the flame while enduring its heat. Each round of the fire dance, he rolls a Perform (dance or sing) check. Any ally within 30 feet of the bard that has caught on fire or is affected by a fire effect or extreme heat can use the bard’s Perform check result in place of its saving throw against that fire. Any ally within 30 feet of the bard who is suffering from heatstroke can ignore the fatigue from heat exposure so long as the bard maintains this performance. Song of the Fiery Gaze (Su) : At 3rd level, a fire dancer can allow allies to see through flames without any distortion.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, bardic performance hook.

### Replaces: dirge of doom

- **Archetype feature:** Fan the Flames (Su)
- **Description:** At 8th level, a fire dancer adds burning hands , flaming sphere , and fireball to his list of bard spells known (as 1st-, 2nd-, and 3rd-level spells, respectively).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8, 3.
  - Mechanics summary: At 8th level, a fire dancer adds burning hands , flaming sphere , and fireball to his list of bard spells known (as 1st-, 2nd-, and 3rd-level spells, respectively).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Bardic Performance
- Fan the Flames (Su)

