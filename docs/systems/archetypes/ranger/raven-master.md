# Ranger - Raven Master

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Raven Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Raven%20Master
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Avian Empathy (Ex); Raven Companion (Ex); Argent Magic
- **Replaced / altered class features:** woodland stride; swift tracker; camouflage

## Implementation details

### Alters: the ranger’s class skills

- **Archetype feature:** Class Skills
- **Description:** A raven master adds Bluff, Disguise, and Sleight of Hand to her list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A raven master adds Bluff, Disguise, and Sleight of Hand to her list of class skills. She does not gain Climb, Heal, Intimidate, Ride, or Swim as class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: wild empathy

- **Archetype feature:** Avian Empathy (Ex)
- **Description:** A raven master’s wild empathy affects only birds.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A raven master’s wild empathy affects only birds.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: hunter’s bond and replaces specific ranger abilities as indicated below

- **Archetype feature:** Raven Companion (Ex)
- **Description:** At 4th level, a raven master earns the trust and companionship of a particularly large, powerful, and intelligent raven.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 7, 8, 12.
  - **Rules text to implement:** At 4th level, a raven master earns the trust and companionship of a particularly large, powerful, and intelligent raven. This ability functions like the druid animal companion ability, except that the raven master’s effective druid level is equal to her ranger level – 3. The raven master must select a bird as her animal companion. The raven companion starts with an Intelligence score of 3 and can speak one language known by the raven master. In addition to the normal abilities an animal companion gains as the raven master increases in level, the raven companion gains the following abilities. Silver Champion (Ex) : At 7th level, the raven companion takes on a silvery, metallic appearance. It treats all of its natural attacks as though they were magic and silver for the purpose of bypassing damage reduction. Mimic Figurine (Su) : At 8th level, once per day as a standard action, the raven master can transform her raven companion into a token similar to a figurine of wondrous power. Any gear worn by the raven melds into its body as part of this transformation, but held items do not. The raven can remain in this form indefinitely, or until the raven master spends a standard action to activate the statuette as though it were a figurine of wondrous power. Cheat Death (Sp) At 12th level, once per week, when a raven companion would otherwise be slain by an attack, spell, or effect, it can turn into a figurine of wondrous power as per its mimic figurine ability as an immediate action. Once transformed this way, the raven companion cannot transform back into a raven until the raven master next prepares spells.
- **Implementation flags:**
  - animal companion progression.

### Replaces: woodland stride

- **Archetype feature:** Raven Companion (Ex)
- **Description:** At 4th level, a raven master earns the trust and companionship of a particularly large, powerful, and intelligent raven.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 7, 8, 12.
  - **Rules text to implement:** At 4th level, a raven master earns the trust and companionship of a particularly large, powerful, and intelligent raven. This ability functions like the druid animal companion ability, except that the raven master’s effective druid level is equal to her ranger level – 3. The raven master must select a bird as her animal companion. The raven companion starts with an Intelligence score of 3 and can speak one language known by the raven master. In addition to the normal abilities an animal companion gains as the raven master increases in level, the raven companion gains the following abilities. Silver Champion (Ex) : At 7th level, the raven companion takes on a silvery, metallic appearance. It treats all of its natural attacks as though they were magic and silver for the purpose of bypassing damage reduction. Mimic Figurine (Su) : At 8th level, once per day as a standard action, the raven master can transform her raven companion into a token similar to a figurine of wondrous power. Any gear worn by the raven melds into its body as part of this transformation, but held items do not. The raven can remain in this form indefinitely, or until the raven master spends a standard action to activate the statuette as though it were a figurine of wondrous power. Cheat Death (Sp) At 12th level, once per week, when a raven companion would otherwise be slain by an attack, spell, or effect, it can turn into a figurine of wondrous power as per its mimic figurine ability as an immediate action. Once transformed this way, the raven companion cannot transform back into a raven until the raven master next prepares spells.
- **Implementation flags:**
  - animal companion progression.

### Replaces: swift tracker

- **Archetype feature:** Raven Companion (Ex)
- **Description:** At 4th level, a raven master earns the trust and companionship of a particularly large, powerful, and intelligent raven.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 7, 8, 12.
  - **Rules text to implement:** At 4th level, a raven master earns the trust and companionship of a particularly large, powerful, and intelligent raven. This ability functions like the druid animal companion ability, except that the raven master’s effective druid level is equal to her ranger level – 3. The raven master must select a bird as her animal companion. The raven companion starts with an Intelligence score of 3 and can speak one language known by the raven master. In addition to the normal abilities an animal companion gains as the raven master increases in level, the raven companion gains the following abilities. Silver Champion (Ex) : At 7th level, the raven companion takes on a silvery, metallic appearance. It treats all of its natural attacks as though they were magic and silver for the purpose of bypassing damage reduction. Mimic Figurine (Su) : At 8th level, once per day as a standard action, the raven master can transform her raven companion into a token similar to a figurine of wondrous power. Any gear worn by the raven melds into its body as part of this transformation, but held items do not. The raven can remain in this form indefinitely, or until the raven master spends a standard action to activate the statuette as though it were a figurine of wondrous power. Cheat Death (Sp) At 12th level, once per week, when a raven companion would otherwise be slain by an attack, spell, or effect, it can turn into a figurine of wondrous power as per its mimic figurine ability as an immediate action. Once transformed this way, the raven companion cannot transform back into a raven until the raven master next prepares spells.
- **Implementation flags:**
  - animal companion progression.

### Replaces: camouflage

- **Archetype feature:** Raven Companion (Ex)
- **Description:** At 4th level, a raven master earns the trust and companionship of a particularly large, powerful, and intelligent raven.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 7, 8, 12.
  - **Rules text to implement:** At 4th level, a raven master earns the trust and companionship of a particularly large, powerful, and intelligent raven. This ability functions like the druid animal companion ability, except that the raven master’s effective druid level is equal to her ranger level – 3. The raven master must select a bird as her animal companion. The raven companion starts with an Intelligence score of 3 and can speak one language known by the raven master. In addition to the normal abilities an animal companion gains as the raven master increases in level, the raven companion gains the following abilities. Silver Champion (Ex) : At 7th level, the raven companion takes on a silvery, metallic appearance. It treats all of its natural attacks as though they were magic and silver for the purpose of bypassing damage reduction. Mimic Figurine (Su) : At 8th level, once per day as a standard action, the raven master can transform her raven companion into a token similar to a figurine of wondrous power. Any gear worn by the raven melds into its body as part of this transformation, but held items do not. The raven can remain in this form indefinitely, or until the raven master spends a standard action to activate the statuette as though it were a figurine of wondrous power. Cheat Death (Sp) At 12th level, once per week, when a raven companion would otherwise be slain by an attack, spell, or effect, it can turn into a figurine of wondrous power as per its mimic figurine ability as an immediate action. Once transformed this way, the raven companion cannot transform back into a raven until the raven master next prepares spells.
- **Implementation flags:**
  - animal companion progression.

### Alters: the ranger’s spellcasting

- **Archetype feature:** Argent Magic
- **Description:** A raven master casts spells as do most rangers, but her spell list is somewhat expanded from the normal options most rangers can choose from, for her association with the bards and other talented performers among the Silver Ravens allows her to add a limited number of bard spells to her spell list.
- **Detailed mechanics:**
  - **Level hooks:** 6, 1, 9, 3, 12, 4, 15.
  - **Rules text to implement:** A raven master casts spells as do most rangers, but her spell list is somewhat expanded from the normal options most rangers can choose from, for her association with the bards and other talented performers among the Silver Ravens allows her to add a limited number of bard spells to her spell list. These spells function as divine spells, and are cast and prepared in the same manner as her other ranger spells. At 6th level, the raven master selects one 1st-level bard spell of her choice and adds it to her spell list as a 1st-level ranger spell. At 9th level she does the same but for a 2ndlevel bard spell. She adds a 3rd-level bard spell at 12th level, and adds a 4th-level bard spell at 15th level.
- **Implementation flags:**
  - archetype spell-list override.

## Parsed source feature headings

- Class Skills
- Avian Empathy (Ex)
- Raven Companion (Ex)
- Argent Magic
