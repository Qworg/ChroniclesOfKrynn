# Bard - Masked Performer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Masked Performer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Masked%20Performer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Dual Identity (Ex); Bardic Performance; Social Grace (Ex); Masked Talents
- **Replaced / altered class features:** bardic knowledge; countersong; inspire competence; suggestion; mass suggestion; versatile performance; lore master

## Implementation details

### Replaces: bardic knowledge

- **Archetype feature:** Dual Identity (Ex)
- **Description:** This ability acts as the vigilante ability of the same name, except as follows.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** This ability acts as the vigilante ability of the same name, except as follows. The masked performer’s identities are referred to as social and masked, rather than social and vigilante. Unlike a vigilante, most people who know of the masked performer actually know that the masked performer’s identities are one and the same. Nonetheless, the dual identity ability is valuable to the masked performer due to offering her two perspectives on any problem and two different alignments.
- **Implementation flags:**
  - vigilante identity subsystem.

### Replaces: countersong

- **Archetype feature:** Bardic Performance
- **Description:** A masked performer gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 3, 7, 11, 15, 19, 6, 18.
  - **Rules text to implement:** A masked performer gains the following types of bardic performance. Seamless Guise (Ex) : At 1st level, a masked performer learns to behave in a way that appears perfectly proper and normal for her current role, on stage or off. She can maintain this performance for 1 hour for every 3 rounds of bardic performance she spends. While this performance is active, she receives a +10 bonus on Disguise and Perform (act) checks to remain in character after she has already established her character. For instance, this bonus does not apply against the initial Perception check when meeting a creature paying attention to her but does apply on the automatic additional Perception check each hour of interacting. Exaggerated Pose (Su) : At 3rd level, a masked performer can enhance her own physical and social abilities by simply altering her posture. When she starts this performance, the masked performer chooses a Strength-, Dexterity-, or Charisma-based skill and gains a +2 competence bonus on checks with that skill as long as she maintains this performance. This bonus increases by 1 for every 4 bard levels the masked performer has beyond 3rd (+3 at 7th level, +4 at 11th level, +5 at 15th level, and +6 at 19th level). The masked performer can change the chosen skill as a swift action. Exaggerated pose is an emotion effect and relies on visual components. Stage Combat (Su) : At 6th level, a masked performer gains the benefit of a combat feat she doesn’t have as long as she maintains this performance. The masked performer chooses the feat when she starts this performance. The masked performer must meet all the feat’s prerequisites. As usual when temporarily gaining a feat, if the feat she chooses has any limitations on uses, such as Stunning Fist ’s daily uses, all uses of that combat feat while maintaining stage combat count toward that feat’s limit. In the case of Stunning Fist, if the masked performer gained that feat again later the same day, the expended uses would remain expended. Stage combat relies on visual components. Multiplicity of Masks (Su) : At 18th level, a masked performer can cause any number of her allies to appear as herself or as another ally within 60 feet. To be affected, an ally must be within 60 feet of the masker performer and able to see her. As long as the masked performer maintains this performance, enemies perceive all affected allies as the chosen character. If an affected ally is a different size or creature type than the chosen character, enemies can attempt a Will save (DC = 10 + 1/2 the masked performer’s bard level + her Charisma modifier) to disbelieve. Otherwise, there is no saving throw, but a successful attack against a disguised ally automatically reveals the ally’s true form. If an ally moves out of range, that ally reverts to his original form, and the entire effect ends if the ally providing his appearance to the others moves out of range. Multiplicity of masks is an illusion (glamer) effect that relies on visual components.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: inspire competence

- **Archetype feature:** Bardic Performance
- **Description:** A masked performer gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 3, 7, 11, 15, 19, 6, 18.
  - **Rules text to implement:** A masked performer gains the following types of bardic performance. Seamless Guise (Ex) : At 1st level, a masked performer learns to behave in a way that appears perfectly proper and normal for her current role, on stage or off. She can maintain this performance for 1 hour for every 3 rounds of bardic performance she spends. While this performance is active, she receives a +10 bonus on Disguise and Perform (act) checks to remain in character after she has already established her character. For instance, this bonus does not apply against the initial Perception check when meeting a creature paying attention to her but does apply on the automatic additional Perception check each hour of interacting. Exaggerated Pose (Su) : At 3rd level, a masked performer can enhance her own physical and social abilities by simply altering her posture. When she starts this performance, the masked performer chooses a Strength-, Dexterity-, or Charisma-based skill and gains a +2 competence bonus on checks with that skill as long as she maintains this performance. This bonus increases by 1 for every 4 bard levels the masked performer has beyond 3rd (+3 at 7th level, +4 at 11th level, +5 at 15th level, and +6 at 19th level). The masked performer can change the chosen skill as a swift action. Exaggerated pose is an emotion effect and relies on visual components. Stage Combat (Su) : At 6th level, a masked performer gains the benefit of a combat feat she doesn’t have as long as she maintains this performance. The masked performer chooses the feat when she starts this performance. The masked performer must meet all the feat’s prerequisites. As usual when temporarily gaining a feat, if the feat she chooses has any limitations on uses, such as Stunning Fist ’s daily uses, all uses of that combat feat while maintaining stage combat count toward that feat’s limit. In the case of Stunning Fist, if the masked performer gained that feat again later the same day, the expended uses would remain expended. Stage combat relies on visual components. Multiplicity of Masks (Su) : At 18th level, a masked performer can cause any number of her allies to appear as herself or as another ally within 60 feet. To be affected, an ally must be within 60 feet of the masker performer and able to see her. As long as the masked performer maintains this performance, enemies perceive all affected allies as the chosen character. If an affected ally is a different size or creature type than the chosen character, enemies can attempt a Will save (DC = 10 + 1/2 the masked performer’s bard level + her Charisma modifier) to disbelieve. Otherwise, there is no saving throw, but a successful attack against a disguised ally automatically reveals the ally’s true form. If an ally moves out of range, that ally reverts to his original form, and the entire effect ends if the ally providing his appearance to the others moves out of range. Multiplicity of masks is an illusion (glamer) effect that relies on visual components.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A masked performer gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 3, 7, 11, 15, 19, 6, 18.
  - **Rules text to implement:** A masked performer gains the following types of bardic performance. Seamless Guise (Ex) : At 1st level, a masked performer learns to behave in a way that appears perfectly proper and normal for her current role, on stage or off. She can maintain this performance for 1 hour for every 3 rounds of bardic performance she spends. While this performance is active, she receives a +10 bonus on Disguise and Perform (act) checks to remain in character after she has already established her character. For instance, this bonus does not apply against the initial Perception check when meeting a creature paying attention to her but does apply on the automatic additional Perception check each hour of interacting. Exaggerated Pose (Su) : At 3rd level, a masked performer can enhance her own physical and social abilities by simply altering her posture. When she starts this performance, the masked performer chooses a Strength-, Dexterity-, or Charisma-based skill and gains a +2 competence bonus on checks with that skill as long as she maintains this performance. This bonus increases by 1 for every 4 bard levels the masked performer has beyond 3rd (+3 at 7th level, +4 at 11th level, +5 at 15th level, and +6 at 19th level). The masked performer can change the chosen skill as a swift action. Exaggerated pose is an emotion effect and relies on visual components. Stage Combat (Su) : At 6th level, a masked performer gains the benefit of a combat feat she doesn’t have as long as she maintains this performance. The masked performer chooses the feat when she starts this performance. The masked performer must meet all the feat’s prerequisites. As usual when temporarily gaining a feat, if the feat she chooses has any limitations on uses, such as Stunning Fist ’s daily uses, all uses of that combat feat while maintaining stage combat count toward that feat’s limit. In the case of Stunning Fist, if the masked performer gained that feat again later the same day, the expended uses would remain expended. Stage combat relies on visual components. Multiplicity of Masks (Su) : At 18th level, a masked performer can cause any number of her allies to appear as herself or as another ally within 60 feet. To be affected, an ally must be within 60 feet of the masker performer and able to see her. As long as the masked performer maintains this performance, enemies perceive all affected allies as the chosen character. If an affected ally is a different size or creature type than the chosen character, enemies can attempt a Will save (DC = 10 + 1/2 the masked performer’s bard level + her Charisma modifier) to disbelieve. Otherwise, there is no saving throw, but a successful attack against a disguised ally automatically reveals the ally’s true form. If an ally moves out of range, that ally reverts to his original form, and the entire effect ends if the ally providing his appearance to the others moves out of range. Multiplicity of masks is an illusion (glamer) effect that relies on visual components.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A masked performer gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 3, 7, 11, 15, 19, 6, 18.
  - **Rules text to implement:** A masked performer gains the following types of bardic performance. Seamless Guise (Ex) : At 1st level, a masked performer learns to behave in a way that appears perfectly proper and normal for her current role, on stage or off. She can maintain this performance for 1 hour for every 3 rounds of bardic performance she spends. While this performance is active, she receives a +10 bonus on Disguise and Perform (act) checks to remain in character after she has already established her character. For instance, this bonus does not apply against the initial Perception check when meeting a creature paying attention to her but does apply on the automatic additional Perception check each hour of interacting. Exaggerated Pose (Su) : At 3rd level, a masked performer can enhance her own physical and social abilities by simply altering her posture. When she starts this performance, the masked performer chooses a Strength-, Dexterity-, or Charisma-based skill and gains a +2 competence bonus on checks with that skill as long as she maintains this performance. This bonus increases by 1 for every 4 bard levels the masked performer has beyond 3rd (+3 at 7th level, +4 at 11th level, +5 at 15th level, and +6 at 19th level). The masked performer can change the chosen skill as a swift action. Exaggerated pose is an emotion effect and relies on visual components. Stage Combat (Su) : At 6th level, a masked performer gains the benefit of a combat feat she doesn’t have as long as she maintains this performance. The masked performer chooses the feat when she starts this performance. The masked performer must meet all the feat’s prerequisites. As usual when temporarily gaining a feat, if the feat she chooses has any limitations on uses, such as Stunning Fist ’s daily uses, all uses of that combat feat while maintaining stage combat count toward that feat’s limit. In the case of Stunning Fist, if the masked performer gained that feat again later the same day, the expended uses would remain expended. Stage combat relies on visual components. Multiplicity of Masks (Su) : At 18th level, a masked performer can cause any number of her allies to appear as herself or as another ally within 60 feet. To be affected, an ally must be within 60 feet of the masker performer and able to see her. As long as the masked performer maintains this performance, enemies perceive all affected allies as the chosen character. If an affected ally is a different size or creature type than the chosen character, enemies can attempt a Will save (DC = 10 + 1/2 the masked performer’s bard level + her Charisma modifier) to disbelieve. Otherwise, there is no saving throw, but a successful attack against a disguised ally automatically reveals the ally’s true form. If an ally moves out of range, that ally reverts to his original form, and the entire effect ends if the ally providing his appearance to the others moves out of range. Multiplicity of masks is an illusion (glamer) effect that relies on visual components.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: versatile performance

- **Archetype feature:** Social Grace (Ex)
- **Description:** At 2nd level, a masked performer gains the social grace vigilante social talent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 1, 6, 10.
  - **Rules text to implement:** At 2nd level, a masked performer gains the social grace vigilante social talent. She gains an additional skill with social grace 1 level later than a vigilante (at 6th level, 10th level, and so on).
- **Implementation flags:**
  - ki subsystem.
  - vigilante identity subsystem.
  - skill/class-skill modification.

### Replaces: lore master

- **Archetype feature:** Masked Talents
- **Description:** At 5th level, a masked performer gains a rogue talent from the following list: expert leaper, fast stealth, ledge walker, rogue crawl, rope master, stand up, and wall scramble.
- **Detailed mechanics:**
  - **Level hooks:** 5, 17.
  - **Rules text to implement:** At 5th level, a masked performer gains a rogue talent from the following list: expert leaper, fast stealth, ledge walker, rogue crawl, rope master, stand up, and wall scramble. At 17th level, a masked performer can choose any of the above talents or an advanced talent from the following list: defensive roll, fast tumble, hide in plain sight, and skill mastery. This ability does not qualify her for the Extra Rogue Talent feat.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Dual Identity (Ex)
- Bardic Performance
- Social Grace (Ex)
- Masked Talents
