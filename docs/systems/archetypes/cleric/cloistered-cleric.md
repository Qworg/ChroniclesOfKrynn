# Cleric - Cloistered Cleric

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Cloistered Cleric
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Cloistered%20Cleric
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Class Skills; Skill Ranks per Level; Diminished Spellcasting; Breadth of Knowledge; Well-Read (Ex); Verbal Instruction (Ex); Scribe Scroll (Su)
- **Replaced / altered class features:** Weapon/Armor Proficiencies; Domains; Spells

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Cloistered clerics are proficient with light armor and with the following weapons: club, heavy mace, light mace, quarterstaff, and sling.
- **Detailed mechanics:**
  - **Rules text to implement:** Cloistered clerics are proficient with light armor and with the following weapons: club, heavy mace, light mace, quarterstaff, and sling. They are not proficient with shields.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** The cloistered cleric’s class skills are Appraise (Int), Craft (Int), Diplomacy (Cha), Heal (Wis), Knowledge (all) (Int), Linguistics (Int), Profession (Wis), Sense Motive (Wis), and Spellcraft (Int).
- **Detailed mechanics:**
  - **Rules text to implement:** The cloistered cleric’s class skills are Appraise (Int), Craft (Int), Diplomacy (Cha), Heal (Wis), Knowledge (all) (Int), Linguistics (Int), Profession (Wis), Sense Motive (Wis), and Spellcraft (Int).
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skill Ranks per Level
- **Description:** 4 + Int modifier.
- **Detailed mechanics:**
  - **Rules text to implement:** 4 + Int modifier.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Diminished Spellcasting
- **Description:** A cloistered cleric chooses only one domain from her deity’s list of domains, and her number of non-domain spells per day for each spell level is one less than normal (for example, a 4th-level cloistered cleric has three cantrips, two 1st-level spells, one 1st-level domain spell, one 2nd-level spell, and one 2nd-level domain spell).
- **Detailed mechanics:**
  - **Level hooks:** 4, 1, 2.
  - **Rules text to implement:** A cloistered cleric chooses only one domain from her deity’s list of domains, and her number of non-domain spells per day for each spell level is one less than normal (for example, a 4th-level cloistered cleric has three cantrips, two 1st-level spells, one 1st-level domain spell, one 2nd-level spell, and one 2nd-level domain spell). If this reduces the number of spells per day for that level to 0, she gains only the bonus spells she would be entitled to based on her Wisdom score for that level, plus her domain spell for that level.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Breadth of Knowledge
- **Description:** At 1st level, a cloistered cleric gains a bonus on Knowledge skill checks equal to half her class level (minimum +1) and can make Knowledge skill checks untrained.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a cloistered cleric gains a bonus on Knowledge skill checks equal to half her class level (minimum +1) and can make Knowledge skill checks untrained.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Well-Read (Ex)
- **Description:** At 2nd level, a cloistered cleric gains a +2 bonus on skill checks, caster level checks, and saving throws if such rolls pertain to mundane or magical glyphs, runes, scrolls, symbols, and other writings.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a cloistered cleric gains a +2 bonus on skill checks, caster level checks, and saving throws if such rolls pertain to mundane or magical glyphs, runes, scrolls, symbols, and other writings.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Verbal Instruction (Ex)
- **Description:** At 3rd level, a cloistered cleric can use the aid another action to assist an ally within 30 feet on a skill or ability check.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a cloistered cleric can use the aid another action to assist an ally within 30 feet on a skill or ability check. The ally must be able to hear and understand the cleric’s instructions. For every three class levels beyond 3rd, the cloistered cleric can instruct one additional ally. If all allies are not engaged in the same task, using this ability is a full-round action rather than a standard action.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Scribe Scroll (Su)
- **Description:** At 4th level, a cloistered cleric gains Scribe Scroll as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a cloistered cleric gains Scribe Scroll as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Class Skills
- Skill Ranks per Level
- Diminished Spellcasting
- Breadth of Knowledge
- Well-Read (Ex)
- Verbal Instruction (Ex)
- Scribe Scroll (Su)
