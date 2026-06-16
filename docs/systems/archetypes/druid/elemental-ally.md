# Druid - Elemental Ally

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Elemental Ally
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Elemental%20Ally
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Elemental Eidolons; Elemental Empathy (Ex); Elemental Magic; Elemental Resistance (Ex)
- **Replaced / altered class features:** nature’s bond and wild shape; wild empathy; resist nature’s lure

## Replacement details

### Replaces: nature’s bond and wild shape

- **Archetype feature:** Elemental Eidolons
- **Description:** At 1st level, an elemental ally has four elemental eidolons she can summon, one each for the elements of air, earth, fire, and water.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, an elemental ally has four elemental eidolons she can summon, one each for the elements of air, earth, fire, and water. Their abilities and statistics are determined using the rules for elemental eidolons for the summoner class from page 33 of Pathfinder RPG Pathfinder Unchained , as if the elemental ally were a summoner of her druid level, except they gain no additional evolution pool ( just those evolutions from their base form and base evolutions from their subtype). Each of the four elementals has its own base form, skills, and feats. The elemental ally can summon one of these elementals with the same 1-minute ritual a summoner normally uses to do so. The elemental ally can’t summon an eidolon or cast summon nature’s ally if she currently has an eidolon summoned. She also can’t summon an eidolon if she currently has a creature summoned through other means.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, spellcasting/spell-list hook, summoner eidolon hook, eidolon evolution hook, animal companion hook, wild shape hook, ki/monk hook.

### Replaces: wild empathy

- **Archetype feature:** Elemental Empathy (Ex)
- **Description:** An elemental ally can improve the attitude of a creature of the elemental subtype.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An elemental ally can improve the attitude of a creature of the elemental subtype. This ability functions just like a Diplomacy check to improve the attitude of a person. The elemental ally rolls 1d20 and adds her druid level and her Charisma modifier to determine the elemental empathy check result. To use elemental empathy, the elemental ally and the elemental must be able to study each other, which means that they must be within 30 feet of one another under normal conditions. Generally, influencing an elemental in this way takes 1 minute, but as with influencing people, it might take more or less time. An elemental ally can also use this ability to influence a non-elemental outsider with the air, earth, fire, or water subtype, but she takes a –4 penalty on the check.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: resist nature’s lure

- **Archetype feature:** Elemental Resistance (Ex)
- **Description:** At 4th level, an elemental ally gains resist acid, cold, electricity, and fire 5.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an elemental ally gains resist acid, cold, electricity, and fire 5.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Elemental Eidolons
- Elemental Empathy (Ex)
- Elemental Magic
- Elemental Resistance (Ex)

