# Paladin - Sacred Servant

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Sacred Servant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Sacred%20Servant
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Smite Evil (Su); Spells; Divine Bond (Su); Call Celestial Ally (Sp)
- **Replaced / altered class features:** aura of resolve

## Implementation details

### Replaces: smite evil

- **Archetype feature:** Smite Evil (Su)
- **Description:** This functions as the paladin ability, but the sacred servant can smite evil one additional time per day at 7th level, and every six levels thereafter (instead of 4th level and every three levels thereafter).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7, 4.
  - **Rules text to implement:** This functions as the paladin ability, but the sacred servant can smite evil one additional time per day at 7th level, and every six levels thereafter (instead of 4th level and every three levels thereafter).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Spells
- **Description:** At 4th level, when a sacred servant gains the ability to cast spells, she also chooses one domain associated with her deity.
- **Detailed mechanics:**
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, when a sacred servant gains the ability to cast spells, she also chooses one domain associated with her deity. Her effective cleric level for this domain is equal to her paladin level –3. In addition, she also gains one domain spell slot for each level of paladin spells she can cast. Every day she must prepare the domain spell from her chosen domain in that spell slot.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Divine Bond (Su)
- **Description:** At 5th level, instead of forming a divine bond with her weapon or a mount, a sacred servant forms a bond with her holy symbol.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 17.
  - **Rules text to implement:** At 5th level, instead of forming a divine bond with her weapon or a mount, a sacred servant forms a bond with her holy symbol. As a standard action, a sacred servant can bind a celestial spirit to her holy symbol for 1 minute per paladin level. When called, the spirit causes the sacred servant’s holy symbol to shed light like a torch. At 5th level, the spirit grants one bonus. For every three levels beyond 5th, the spirit grants one additional bonus. These bonuses can be spent in a number of ways to grant the paladin enhanced abilities to channel positive energy and to cast spells. Each bonus can be used to grant one of the following enhancements: +1 caster level to any paladin spell cast, +1 to the DC to halve the damage of channel positive energy when used to harm undead, +1d6 to channel positive energy, +1 use/day of lay on hands. These enhancements stack and can be selected multiple times. The enhancements granted by the spirit are determined when the spirit is called and cannot be changed until the spirit is called again. If the sacred servant increases her number of uses of lay on hands per day in this way, that choice is set for the rest of the day, and once used, these additional uses are not restored (even if the spirit is called again that day). The celestial spirit imparts no enhancements if the holy symbol is held by anyone other than the sacred servant, but resumes giving enhancements if returned to the sacred servant. A sacred servant can use this ability once per day at 5th level, and one additional time per day for every four levels beyond 5th, to a total of four times per day at 17th level. If a holy symbol with a celestial spirit is destroyed, the sacred servant loses the use of this ability for 30 days, or until she gains a level, whichever comes first. During this 30-day period, the sacred servant takes a –1 penalty on attack and weapon damage rolls.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of resolve

- **Archetype feature:** Call Celestial Ally (Sp)
- **Description:** At 8th level, a sacred servant can call upon her deity for aid, in the form of a powerful servant.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 8, 12, 16.
  - **Rules text to implement:** At 8th level, a sacred servant can call upon her deity for aid, in the form of a powerful servant. This allows the sacred servant to cast lesser planar ally once per week as a spell-like ability without having to pay the material component cost or the servant (for reasonable tasks). At 12th level, this improves to planar ally and at 16th level, this improves to greater planar ally. The sacred servant’s caster level for this effect is equal to her paladin level.
- **Implementation flags:**
  - spell-like ability support.

## Parsed source feature headings

- Smite Evil (Su)
- Spells
- Divine Bond (Su)
- Call Celestial Ally (Sp)
