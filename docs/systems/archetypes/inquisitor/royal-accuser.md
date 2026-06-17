# Inquisitor - Royal Accuser

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Royal Accuser
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Royal%20Accuser
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Meticulous Inspection (Ex); Detect Monsters and Secrets (Sp); Favored Enemy (Ex); Informed Hunch (Su); Greater Detect Magic (Sp); Final Sway (Ex)
- **Replaced / altered class features:** stern gaze; detect alignment; the teamwork feat granted at 12th

## Implementation details

### Alters: the inquisitor’s class skills

- **Archetype feature:** Class Skills
- **Description:** A royal accuser adds Knowledge (local) to his list of class skills, instead of Knowledge (nature).
- **Detailed mechanics:**
  - **Rules text to implement:** A royal accuser adds Knowledge (local) to his list of class skills, instead of Knowledge (nature).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: stern gaze

- **Archetype feature:** Meticulous Inspection (Ex)
- **Description:** A royal accuser gains a morale bonus equal to 1/2 his inquisitor level on all Perception checks (minimum +1).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A royal accuser gains a morale bonus equal to 1/2 his inquisitor level on all Perception checks (minimum +1).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: detect alignment

- **Archetype feature:** Detect Monsters and Secrets (Sp)
- **Description:** At 2nd level, a royal accuser can use detect aberration APG, detect secret doors, and detect undead at will.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a royal accuser can use detect aberration APG, detect secret doors, and detect undead at will. He can only use one of these at any given time.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: solo tactics and the teamwork feats gained at 3rd, 9th, and 15th levels

- **Archetype feature:** Favored Enemy (Ex)
- **Description:** At 3rd level, a royal accuser gains favored enemy, as the ranger class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a royal accuser gains favored enemy, as the ranger class feature. He must choose his favored enemy from the following list: aberration, dragon, humanoid (orc), humanoid (shapechanger), and undead. He gains another favored enemy at 9th and 15th levels.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the teamwork feat granted at 6th level

- **Archetype feature:** Informed Hunch (Su)
- **Description:** At 6th level, once per day, a royal accuser can contemplate an ongoing investigation he is involved in and potentially know whether his hunches are on the right track.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, once per day, a royal accuser can contemplate an ongoing investigation he is involved in and potentially know whether his hunches are on the right track. This functions as augury, except if it succeeds, the royal accuser gets one of the following results in place of weal, woe, or weal and woe. The royal accuser treats his inquisitor level as his caster level. Correct (if the hunch is the exact truth, such as if a particular individual is responsible for a crime, or if a particular organization is behind a series of events). Incorrect (if the hunch is entirely off base, such as if a suspected individual had nothing to do with a crime, or a suspected organization had no interest or hand in a series of events). On the right track (if the hunch is partially correct, such as if a suspected individual participated in a criminal conspiracy or had foreknowledge of the crime in question, or if a suspected organization directly profited from and knew about but did not entirely orchestrate a series of events).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the teamwork feat granted at 12th

- **Archetype feature:** Greater Detect Magic (Sp)
- **Description:** At 12th level, a royal accuser can use greater detect magic ( Ultimate Intrigue 212 ) at will.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a royal accuser can use greater detect magic ( Ultimate Intrigue 212 ) at will.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the teamwork feat granted at 18th level

- **Archetype feature:** Final Sway (Ex)
- **Description:** At 18th level, a royal accuser’s word and intuition are greatly trusted and valued.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 18.
  - **Rules text to implement:** At 18th level, a royal accuser’s word and intuition are greatly trusted and valued. Once per day, when using the influence system ( Ultimate Intrigue 102 ) and interacting with an individual or organization with whom he has at least minor sway or is respected (rank 2), the royal accuser can treat his influence as two steps higher for the purposes of making a single request of that individual or organization. Alternatively, he can treat an individual’s attitude toward him as up to two steps higher for the purpose of such a request.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Meticulous Inspection (Ex)
- Detect Monsters and Secrets (Sp)
- Favored Enemy (Ex)
- Informed Hunch (Su)
- Greater Detect Magic (Sp)
- Final Sway (Ex)
