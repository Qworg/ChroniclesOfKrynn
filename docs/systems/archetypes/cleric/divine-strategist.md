# Cleric - Divine Strategist

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Divine Strategist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Divine%20Strategist
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Domains; Master Tactician (Ex); Caster Support (Su); Tactical Expertise (Ex)
- **Replaced / altered class features:** channel energy

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Domains
- **Description:** A divine strategist gains only a single domain.
- **Detailed mechanics:**
  - **Rules text to implement:** A divine strategist gains only a single domain.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Replaces: channel energy

- **Archetype feature:** Master Tactician (Ex)
- **Description:** A divine strategist can always act in a surprise round even if she fails to make a Perception check to notice enemies, though she is considered flat-footed until she acts.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** A divine strategist can always act in a surprise round even if she fails to make a Perception check to notice enemies, though she is considered flat-footed until she acts. In addition, the divine strategist gains a bonus on initiative checks equal to 1/2 her cleric level. At 20th level, a divine strategist’s initiative roll is automatically a natural 20. Allies able to see and hear the divine strategist gain a bonus on initiative checks equal to 1/4 the divine strategist’s level. This is a language-dependent ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Caster Support (Su)
- **Description:** A divine strategist can use the aid another action to assist another divine spellcaster, granting a +2 circumstance bonus on caster level checks and concentration checks until the beginning of the divine strategist’s next turn.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 20.
  - **Rules text to implement:** A divine strategist can use the aid another action to assist another divine spellcaster, granting a +2 circumstance bonus on caster level checks and concentration checks until the beginning of the divine strategist’s next turn. This bonus increases by +1 at 4th level and every four levels thereafter (to a maximum of +7 at 20th level). The allied caster must remain adjacent to the divine strategist to gain this benefit. Caster support can be used to assist arcane spellcasters or characters using magical items, but they gain only half the normal bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Tactical Expertise (Ex)
- **Description:** At 8th level, a divine strategist knows how to take best advantage of tactical opportunities.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a divine strategist knows how to take best advantage of tactical opportunities. Whenever she is flanking or makes an attack of opportunity, she may add her Intelligence bonus (if any) as a bonus on the attack roll. In addition, once per day as a swift action she may add her Intelligence modifier as a bonus on any single d20 roll made as part of a readied action. She can use this ability one additional time per day for every two levels after 8th.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Domains
- Master Tactician (Ex)
- Caster Support (Su)
- Tactical Expertise (Ex)
