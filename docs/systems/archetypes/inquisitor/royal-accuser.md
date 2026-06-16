# Inquisitor - Royal Accuser

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Royal Accuser
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Royal%20Accuser
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Meticulous Inspection (Ex); Detect Monsters and Secrets (Sp); Favored Enemy (Ex); Informed Hunch (Su); Greater Detect Magic (Sp); Final Sway (Ex)
- **Replaced / altered class features:** stern gaze; detect alignment; the teamwork feat granted at 12th

## Replacement details

### Alters: the inquisitor’s class skills

- **Archetype feature:** Class Skills
- **Description:** A royal accuser adds Knowledge (local) to his list of class skills, instead of Knowledge (nature).
- **Mechanics:**
  - Mechanics summary: A royal accuser adds Knowledge (local) to his list of class skills, instead of Knowledge (nature).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: stern gaze

- **Archetype feature:** Meticulous Inspection (Ex)
- **Description:** A royal accuser gains a morale bonus equal to 1/2 his inquisitor level on all Perception checks (minimum +1).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A royal accuser gains a morale bonus equal to 1/2 his inquisitor level on all Perception checks (minimum +1).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: detect alignment

- **Archetype feature:** Detect Monsters and Secrets (Sp)
- **Description:** At 2nd level, a royal accuser can use detect aberration APG , detect secret doors , and detect undead at will.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a royal accuser can use detect aberration APG , detect secret doors , and detect undead at will. He can only use one of these at any given time.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: solo tactics

- **Archetype feature:** Favored Enemy (Ex)
- **Description:** At 3rd level, a royal accuser gains favored enemy, as the ranger class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a royal accuser gains favored enemy, as the ranger class feature. He must choose his favored enemy from the following list: aberration, dragon, humanoid (orc), humanoid (shapechanger), and undead. He gains another favored enemy at 9th and 15th levels.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored enemy hook.

### Replaces: the teamwork feats gained at 3rd, 9th
- **Archetype feature:** Favored Enemy (Ex)
- **Description:** At 3rd level, a royal accuser gains favored enemy, as the ranger class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a royal accuser gains favored enemy, as the ranger class feature. He must choose his favored enemy from the following list: aberration, dragon, humanoid (orc), humanoid (shapechanger), and undead. He gains another favored enemy at 9th and 15th levels.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored enemy hook.

### Replaces: 15th levels

- **Archetype feature:** Favored Enemy (Ex)
- **Description:** At 3rd level, a royal accuser gains favored enemy, as the ranger class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a royal accuser gains favored enemy, as the ranger class feature. He must choose his favored enemy from the following list: aberration, dragon, humanoid (orc), humanoid (shapechanger), and undead. He gains another favored enemy at 9th and 15th levels.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored enemy hook.

### Replaces: the teamwork feat granted at 6th level

- **Archetype feature:** Informed Hunch (Su)
- **Description:** At 6th level, once per day, a royal accuser can contemplate an ongoing investigation he is involved in and potentially know whether his hunches are on the right track.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, once per day, a royal accuser can contemplate an ongoing investigation he is involved in and potentially know whether his hunches are on the right track. This functions as augury , except if it succeeds, the royal accuser gets one of the following results in place of weal, woe, or weal and woe. The royal accuser treats his inquisitor level as his caster level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: the teamwork feat granted at 12th

- **Archetype feature:** Greater Detect Magic (Sp)
- **Description:** At 12th level, a royal accuser can use greater detect magic ( Ultimate Intrigue 212 ) at will.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a royal accuser can use greater detect magic ( Ultimate Intrigue 212 ) at will.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: the teamwork feat granted at 18th level

- **Archetype feature:** Final Sway (Ex)
- **Description:** At 18th level, a royal accuser’s word and intuition are greatly trusted and valued.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 18.
  - Mechanics summary: At 18th level, a royal accuser’s word and intuition are greatly trusted and valued. Once per day, when using the influence system ( Ultimate Intrigue 102 ) and interacting with an individual or organization with whom he has at least minor sway or is respected (rank 2), the royal accuser can treat his influence as two steps higher for the purposes of making a single request of that individual or organization. Alternatively, he can treat an individual’s attitude toward him as up to two steps higher for the purpose of such a request.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Meticulous Inspection (Ex)
- Detect Monsters and Secrets (Sp)
- Favored Enemy (Ex)
- Informed Hunch (Su)
- Greater Detect Magic (Sp)
- Final Sway (Ex)

