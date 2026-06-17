# Druid - Elemental Ally

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Elemental Ally
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Elemental%20Ally
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Elemental Eidolons; Elemental Empathy (Ex); Elemental Magic; Elemental Resistance (Ex)
- **Replaced / altered class features:** nature’s bond and wild shape; wild empathy; resist nature’s lure

## Implementation details

### Replaces: nature’s bond and wild shape

- **Archetype feature:** Elemental Eidolons
- **Description:** At 1st level, an elemental ally has four elemental eidolons she can summon, one each for the elements of air, earth, fire, and water.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an elemental ally has four elemental eidolons she can summon, one each for the elements of air, earth, fire, and water. Their abilities and statistics are determined using the rules for elemental eidolons for the summoner class from page 33 of Pathfinder RPG Pathfinder Unchained, as if the elemental ally were a summoner of her druid level, except they gain no additional evolution pool ( just those evolutions from their base form and base evolutions from their subtype). Each of the four elementals has its own base form, skills, and feats. The elemental ally can summon one of these elementals with the same 1-minute ritual a summoner normally uses to do so. The elemental ally can’t summon an eidolon or cast summon nature’s ally if she currently has an eidolon summoned. She also can’t summon an eidolon if she currently has a creature summoned through other means. If one of the elemental ally’s eidolons is killed, she cannot summon any eidolons for 24 hours. The elemental ally can dismiss her eidolon as a standard action. As the elemental ally gains levels, her elemental eidolons’ base statistics and base evolutions increase as if her druid level were her summoner level. The eidolons gain the darkvision, link, share spells, evasion, ability score increase, devotion, multiattack, and improved evasion abilities at the appropriate levels, but never gain an evolution pool. Abilities and spells that grant additional evolution points to eidolons do not function for elemental eidolons, though any ability that would grant evolution points to an animal companion does work. The elemental ally does not gain life link or any other class features a summoner gains in relation to her eidolon.
- **Implementation flags:**
  - animal companion progression.
  - wild shape subsystem.
  - eidolon/evolution subsystem.
  - ki subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: wild empathy

- **Archetype feature:** Elemental Empathy (Ex)
- **Description:** An elemental ally can improve the attitude of a creature of the elemental subtype.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An elemental ally can improve the attitude of a creature of the elemental subtype. This ability functions just like a Diplomacy check to improve the attitude of a person. The elemental ally rolls 1d20 and adds her druid level and her Charisma modifier to determine the elemental empathy check result. To use elemental empathy, the elemental ally and the elemental must be able to study each other, which means that they must be within 30 feet of one another under normal conditions. Generally, influencing an elemental in this way takes 1 minute, but as with influencing people, it might take more or less time. An elemental ally can also use this ability to influence a non-elemental outsider with the air, earth, fire, or water subtype, but she takes a –4 penalty on the check.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Elemental Magic
- **Description:** The elemental ally can target elementals (including her elemental eidolons) with any spell she casts that targets animals, even though elementals can’t normally be targeted by such spells.
- **Detailed mechanics:**
  - **Rules text to implement:** The elemental ally can target elementals (including her elemental eidolons) with any spell she casts that targets animals, even though elementals can’t normally be targeted by such spells.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

### Replaces: resist nature’s lure

- **Archetype feature:** Elemental Resistance (Ex)
- **Description:** At 4th level, an elemental ally gains resist acid, cold, electricity, and fire 5.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an elemental ally gains resist acid, cold, electricity, and fire 5.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Elemental Eidolons
- Elemental Empathy (Ex)
- Elemental Magic
- Elemental Resistance (Ex)
