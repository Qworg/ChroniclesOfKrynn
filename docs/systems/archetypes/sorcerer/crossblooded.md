# Sorcerer - Crossblooded

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Crossblooded
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Crossblooded
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skill; Bonus Spells; Bonus Feat; Bloodline Arcana; Bloodline Powers; Drawbacks
- **Replaced / altered class features:** Spells Known

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skill
- **Description:** A crossblooded sorcerer receives the bonus class skill from both of her bloodlines.
- **Detailed mechanics:**
  - **Rules text to implement:** A crossblooded sorcerer receives the bonus class skill from both of her bloodlines. If these are the same skill, this does not grant any additional benefit.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Spells
- **Description:** A crossblooded sorcerer may select her bonus spells from either of her bloodlines.
- **Detailed mechanics:**
  - **Level hooks:** 3, 5, 1.
  - **Rules text to implement:** A crossblooded sorcerer may select her bonus spells from either of her bloodlines. The sorcerer also has the choice to learn a lower-level bonus spell she did not choose in place of the higher-level bonus spell she would normally gain. Lower-level bonus spells learned this way always use the spell level that they would be if the sorcerer had learned them with the appropriate bonus spell. Example : A 3rd-level aberrant/abyssal crossblooded sorcerer has the choice of learning cause fear or enlarge person as her bloodline bonus spell. If she selected cause fear as her 3rd-level bonus spell, at 5th level she could use her new bonus spell to learn enlarge person instead of bull’s strength or see invisibility, and she would add it to her list of 1st-level spells known (just as if she had learned it as her 3rd-level bonus spell).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feat
- **Description:** A crossblooded sorcerer combines the bonus feat lists from both of her bloodlines and may select her bloodline bonus feats from this combined list.
- **Detailed mechanics:**
  - **Rules text to implement:** A crossblooded sorcerer combines the bonus feat lists from both of her bloodlines and may select her bloodline bonus feats from this combined list.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bloodline Arcana
- **Description:** A crossblooded sorcerer gains the bloodline arcana of both her bloodlines.
- **Detailed mechanics:**
  - **Rules text to implement:** A crossblooded sorcerer gains the bloodline arcana of both her bloodlines.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bloodline Powers
- **Description:** At 1st, 3rd, 9th, 15th, and 20th levels, a crossblooded sorcerer gains one of the two new bloodline powers available to her at that level.
- **Detailed mechanics:**
  - **Rules text to implement:** At 1st, 3rd, 9th, 15th, and 20th levels, a crossblooded sorcerer gains one of the two new bloodline powers available to her at that level. She may instead select a lower-level bloodline power she did not choose in place of one of these higher-level powers.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Drawbacks
- **Description:** A crossblooded sorcerer has one fewer spell known at each level (including cantrips) than is presented on the sorcerer spells known table.
- **Detailed mechanics:**
  - **Rules text to implement:** A crossblooded sorcerer has one fewer spell known at each level (including cantrips) than is presented on the sorcerer spells known table. Furthermore, the conflicting urges created by the divergent nature of the crossblooded sorcerer’s dual heritage forces her to constantly take some mental effort just to remain focused on her current situation and needs. This leaves her with less mental resolve to deal with external threats. A crossblooded sorcerer always takes a –2 penalty on Will saves.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skill
- Bonus Spells
- Bonus Feat
- Bloodline Arcana
- Bloodline Powers
- Drawbacks
