# Bard - Hatharat Agent

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Hatharat Agent
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Hatharat%20Agent
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Called Favor (Ex); Informed Persuasion (Ex); Bardic Performance
- **Replaced / altered class features:** bardic knowledge; well-versed

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Called Favor (Ex)
- **Description:** At 1st level, a Hatharat agent can use his contacts to ask for a favor from various individuals who have benefited from Hatharat aid in the past.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 7, 5, 11, 19.
  - Mechanics summary: At 1st level, a Hatharat agent can use his contacts to ask for a favor from various individuals who have benefited from Hatharat aid in the past. The agent must spend 1d4 hours in an urban area with a population of at least 200 people to use this ability, and must succeed at a DC 20 Diplomacy check to secure the favor. Once an attempt to call in a favor has been made, whether or not the Diplomacy check was successful, the Hatharat agent must wait 2d6 days before attempting to call in a new favor, so as to not overtax the favors owed the society as a whole. The Hatharat agent can use a successful called favor to secure an introduction to an important NPC, either to learn an important piece of information (something that would otherwise require a successful DC 20 Knowledge check to know) or to secure a pardon for a minor crime of which an ally has been convicted. At 7th level, an agent need only wait 1d6 days between uses of called favors. In addition to the favors above, he can now ask for a favor that supplies the aid of a single 5th-level specialist for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

### Replaces: well-versed

- **Archetype feature:** Informed Persuasion (Ex)
- **Description:** At 2nd level, a Hatharat agent uses his knowledge of a target to increase his persuasiveness.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a Hatharat agent uses his knowledge of a target to increase his persuasiveness. If he has at least 1 rank in an associated Knowledge skill, he applies his Intelligence modifier (in addition to his Charisma modifier, as normal) to Bluff, Diplomacy, and Intimidate checks against that Knowledge skill’s associated category of targets. The types of Knowledge and their associated groups are arcana (spellcasters), geography (tribal citizens), local (urban citizens), nobility (politicians and nobles), and religion (worshipers of a recognized faith).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Called Favor (Ex)
- Informed Persuasion (Ex)
- Bardic Performance

