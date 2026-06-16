# Bard - Masked Performer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Masked Performer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Masked%20Performer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Dual Identity (Ex); Bardic Performance; Social Grace (Ex); Masked Talents
- **Replaced / altered class features:** bardic knowledge; countersong; inspire competence; suggestion; mass suggestion; versatile performance; lore master

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Dual Identity (Ex)
- **Description:** This ability acts as the vigilante ability of the same name , except as follows.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: This ability acts as the vigilante ability of the same name , except as follows. The masked performer’s identities are referred to as social and masked, rather than social and vigilante.
- **Implementation flags:**
  - Needs implementation review: vigilante identity/social-talent mechanics.

### Replaces: countersong

- **Archetype feature:** Bardic Performance
- **Description:** A masked performer gains the following types of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 3, 7, 11, 15, 19, 6, 18.
  - Mechanics summary: A masked performer gains the following types of bardic performance. Seamless Guise (Ex) : At 1st level, a masked performer learns to behave in a way that appears perfectly proper and normal for her current role, on stage or off. She can maintain this performance for 1 hour for every 3 rounds of bardic performance she spends. While this performance is active, she receives a +10 bonus on Disguise and Perform (act) checks to remain in character after she has already established her character. For instance, this bonus does not apply against the initial Perception check when meeting a creature paying attention to her but does apply on the automatic additional Perception check each hour of interacting. Exaggerated Pose (Su) : At 3rd level, a masked performer can enhance her own physical and social abilities by simply altering her posture.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, save DC calculation, bardic performance hook, ki/monk hook.

### Replaces: inspire competence

- **Archetype feature:** Bardic Performance
- **Description:** A masked performer gains the following types of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 3, 7, 11, 15, 19, 6, 18.
  - Mechanics summary: A masked performer gains the following types of bardic performance. Seamless Guise (Ex) : At 1st level, a masked performer learns to behave in a way that appears perfectly proper and normal for her current role, on stage or off. She can maintain this performance for 1 hour for every 3 rounds of bardic performance she spends. While this performance is active, she receives a +10 bonus on Disguise and Perform (act) checks to remain in character after she has already established her character. For instance, this bonus does not apply against the initial Perception check when meeting a creature paying attention to her but does apply on the automatic additional Perception check each hour of interacting. Exaggerated Pose (Su) : At 3rd level, a masked performer can enhance her own physical and social abilities by simply altering her posture.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, save DC calculation, bardic performance hook, ki/monk hook.

### Replaces: suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A masked performer gains the following types of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 3, 7, 11, 15, 19, 6, 18.
  - Mechanics summary: A masked performer gains the following types of bardic performance. Seamless Guise (Ex) : At 1st level, a masked performer learns to behave in a way that appears perfectly proper and normal for her current role, on stage or off. She can maintain this performance for 1 hour for every 3 rounds of bardic performance she spends. While this performance is active, she receives a +10 bonus on Disguise and Perform (act) checks to remain in character after she has already established her character. For instance, this bonus does not apply against the initial Perception check when meeting a creature paying attention to her but does apply on the automatic additional Perception check each hour of interacting. Exaggerated Pose (Su) : At 3rd level, a masked performer can enhance her own physical and social abilities by simply altering her posture.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, save DC calculation, bardic performance hook, ki/monk hook.

### Replaces: mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A masked performer gains the following types of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 3, 7, 11, 15, 19, 6, 18.
  - Mechanics summary: A masked performer gains the following types of bardic performance. Seamless Guise (Ex) : At 1st level, a masked performer learns to behave in a way that appears perfectly proper and normal for her current role, on stage or off. She can maintain this performance for 1 hour for every 3 rounds of bardic performance she spends. While this performance is active, she receives a +10 bonus on Disguise and Perform (act) checks to remain in character after she has already established her character. For instance, this bonus does not apply against the initial Perception check when meeting a creature paying attention to her but does apply on the automatic additional Perception check each hour of interacting. Exaggerated Pose (Su) : At 3rd level, a masked performer can enhance her own physical and social abilities by simply altering her posture.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, save DC calculation, bardic performance hook, ki/monk hook.

### Replaces: versatile performance

- **Archetype feature:** Social Grace (Ex)
- **Description:** At 2nd level, a masked performer gains the social grace vigilante social talent.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 1, 6, 10.
  - Mechanics summary: At 2nd level, a masked performer gains the social grace vigilante social talent . She gains an additional skill with social grace 1 level later than a vigilante (at 6th level, 10th level, and so on).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.
  - Needs implementation review: vigilante identity/social-talent mechanics.

### Replaces: lore master

- **Archetype feature:** Masked Talents
- **Description:** At 5th level, a masked performer gains a rogue talent from the following list: expert leaper, fast stealth, ledge walker, rogue crawl, rope master, stand up, and wall scramble.
- **Mechanics:**
  - Level hooks: 5, 17.
  - Mechanics summary: At 5th level, a masked performer gains a rogue talent from the following list: expert leaper, fast stealth, ledge walker, rogue crawl, rope master, stand up, and wall scramble. At 17th level, a masked performer can choose any of the above talents or an advanced talent from the following list: defensive roll, fast tumble, hide in plain sight, and skill mastery. This ability does not qualify her for the Extra Rogue Talent feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Dual Identity (Ex)
- Bardic Performance
- Social Grace (Ex)
- Masked Talents

