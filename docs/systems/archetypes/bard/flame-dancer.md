# Bard - Flame Dancer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Flame Dancer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Flame%20Dancer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Fan the Flames (Su)
- **Replaced / altered class features:** countersong; inspire competence; suggestion; dirge of doom

## Implementation details

### Replaces: countersong

- **Archetype feature:** Bardic Performance
- **Description:** A flame dancer gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 3, 6, 11.
  - **Rules text to implement:** A flame dancer gains the following bardic performances. Fire Dance (Su) : At 1st level, a fire dancer learns to protect himself and others from the pain of fire, and discovers how to control the flame while enduring its heat. Each round of the fire dance, he rolls a Perform (dance or sing) check. Any ally within 30 feet of the bard that has caught on fire or is affected by a fire effect or extreme heat can use the bard’s Perform check result in place of its saving throw against that fire. Any ally within 30 feet of the bard who is suffering from heatstroke can ignore the fatigue from heat exposure so long as the bard maintains this performance. Fire dance relies on audible or visual components. Song of the Fiery Gaze (Su) : At 3rd level, a fire dancer can allow allies to see through flames without any distortion. Any ally within 30 feet of the bard who can hear the performance can see through fire, fog, and smoke without penalty as long as the light is sufficient to allow him to see normally, as with the base effect of the gaze of flames oracle revelation. Song of the fiery gaze relies on audible components. Fire Break (Su) : At 6th level, a fire dancer’s performance can bend flames away from others. Any ally within 30 feet of the bard who can hear or see the bardic performance gains resist fire 20 as long as the performance is maintained. At 11th level, this resistance increases to 30. Fire break relies on audible or visual components.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: inspire competence

- **Archetype feature:** Bardic Performance
- **Description:** A flame dancer gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 3, 6, 11.
  - **Rules text to implement:** A flame dancer gains the following bardic performances. Fire Dance (Su) : At 1st level, a fire dancer learns to protect himself and others from the pain of fire, and discovers how to control the flame while enduring its heat. Each round of the fire dance, he rolls a Perform (dance or sing) check. Any ally within 30 feet of the bard that has caught on fire or is affected by a fire effect or extreme heat can use the bard’s Perform check result in place of its saving throw against that fire. Any ally within 30 feet of the bard who is suffering from heatstroke can ignore the fatigue from heat exposure so long as the bard maintains this performance. Fire dance relies on audible or visual components. Song of the Fiery Gaze (Su) : At 3rd level, a fire dancer can allow allies to see through flames without any distortion. Any ally within 30 feet of the bard who can hear the performance can see through fire, fog, and smoke without penalty as long as the light is sufficient to allow him to see normally, as with the base effect of the gaze of flames oracle revelation. Song of the fiery gaze relies on audible components. Fire Break (Su) : At 6th level, a fire dancer’s performance can bend flames away from others. Any ally within 30 feet of the bard who can hear or see the bardic performance gains resist fire 20 as long as the performance is maintained. At 11th level, this resistance increases to 30. Fire break relies on audible or visual components.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A flame dancer gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 3, 6, 11.
  - **Rules text to implement:** A flame dancer gains the following bardic performances. Fire Dance (Su) : At 1st level, a fire dancer learns to protect himself and others from the pain of fire, and discovers how to control the flame while enduring its heat. Each round of the fire dance, he rolls a Perform (dance or sing) check. Any ally within 30 feet of the bard that has caught on fire or is affected by a fire effect or extreme heat can use the bard’s Perform check result in place of its saving throw against that fire. Any ally within 30 feet of the bard who is suffering from heatstroke can ignore the fatigue from heat exposure so long as the bard maintains this performance. Fire dance relies on audible or visual components. Song of the Fiery Gaze (Su) : At 3rd level, a fire dancer can allow allies to see through flames without any distortion. Any ally within 30 feet of the bard who can hear the performance can see through fire, fog, and smoke without penalty as long as the light is sufficient to allow him to see normally, as with the base effect of the gaze of flames oracle revelation. Song of the fiery gaze relies on audible components. Fire Break (Su) : At 6th level, a fire dancer’s performance can bend flames away from others. Any ally within 30 feet of the bard who can hear or see the bardic performance gains resist fire 20 as long as the performance is maintained. At 11th level, this resistance increases to 30. Fire break relies on audible or visual components.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: dirge of doom

- **Archetype feature:** Fan the Flames (Su)
- **Description:** At 8th level, a fire dancer adds burning hands, flaming sphere, and fireball to his list of bard spells known (as 1st-, 2nd-, and 3rd-level spells, respectively).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8, 3.
  - **Rules text to implement:** At 8th level, a fire dancer adds burning hands, flaming sphere, and fireball to his list of bard spells known (as 1st-, 2nd-, and 3rd-level spells, respectively).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Bardic Performance
- Fan the Flames (Su)
