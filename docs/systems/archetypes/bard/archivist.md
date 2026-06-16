# Bard - Archivist

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Archivist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Archivist
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Lore Master (Ex); Magic Lore (Ex); Jack of All Trades (Ex); Probable Path (Ex)
- **Replaced / altered class features:** inspire courage; suggestion; mass suggestion; versatile performance; well-versed; lore master; jack of all trades

## Replacement details

### Replaces: inspire courage

- **Archetype feature:** Bardic Performance
- **Description:** An archivist gains the following types of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 6, 18.
  - Mechanics summary: An archivist gains the following types of bardic performance. Naturalist (Ex) : An archivist who has identified a creature with a Knowledge check appropriate to its type can use performance to share strategies for defeating it with allies in combat. The archivist and any allies within 30 feet gain a +1 insight bonus to AC and on attack rolls and saving throws against exceptional, supernatural, and spell-like abilities used by creatures of that specific kind of monster (e.g., frost giants, not all giants or all humanoids). This bonus increases by +1 at 5th level and every six levels thereafter. Lamentable Belaborment (Ex) : At 6th level, an archivist can bewilder a creature already fascinated by his performance. Using this ability does not disrupt the fascinate effect, but it does require a standard action to activate (in addition to the free action to continue the fascinate effect).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: suggestion

- **Archetype feature:** Bardic Performance
- **Description:** An archivist gains the following types of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 6, 18.
  - Mechanics summary: An archivist gains the following types of bardic performance. Naturalist (Ex) : An archivist who has identified a creature with a Knowledge check appropriate to its type can use performance to share strategies for defeating it with allies in combat. The archivist and any allies within 30 feet gain a +1 insight bonus to AC and on attack rolls and saving throws against exceptional, supernatural, and spell-like abilities used by creatures of that specific kind of monster (e.g., frost giants, not all giants or all humanoids). This bonus increases by +1 at 5th level and every six levels thereafter. Lamentable Belaborment (Ex) : At 6th level, an archivist can bewilder a creature already fascinated by his performance. Using this ability does not disrupt the fascinate effect, but it does require a standard action to activate (in addition to the free action to continue the fascinate effect).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** An archivist gains the following types of bardic performance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 6, 18.
  - Mechanics summary: An archivist gains the following types of bardic performance. Naturalist (Ex) : An archivist who has identified a creature with a Knowledge check appropriate to its type can use performance to share strategies for defeating it with allies in combat. The archivist and any allies within 30 feet gain a +1 insight bonus to AC and on attack rolls and saving throws against exceptional, supernatural, and spell-like abilities used by creatures of that specific kind of monster (e.g., frost giants, not all giants or all humanoids). This bonus increases by +1 at 5th level and every six levels thereafter. Lamentable Belaborment (Ex) : At 6th level, an archivist can bewilder a creature already fascinated by his performance. Using this ability does not disrupt the fascinate effect, but it does require a standard action to activate (in addition to the free action to continue the fascinate effect).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: versatile performance

- **Archetype feature:** Lore Master (Ex)
- **Description:** At 2nd level, an archivist may take 20 on Knowledge checks once per day, plus once per six levels beyond 2nd.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an archivist may take 20 on Knowledge checks once per day, plus once per six levels beyond 2nd.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: well-versed

- **Archetype feature:** Magic Lore (Ex)
- **Description:** At 2nd level, an archivist gains a bonus on Spellcraft checks to identify magic items or decipher scrolls equal to half his bard level and may take 10 on such checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an archivist gains a bonus on Spellcraft checks to identify magic items or decipher scrolls equal to half his bard level and may take 10 on such checks. An archivist can use Disable Device to disarm magical traps as per a rogue’s trapfinding ability and gains a +4 bonus on saves against magical traps, language-dependent effects, and symbols, glyphs, and magical writings of any kind.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook, ki/monk hook.

### Replaces: lore master

- **Archetype feature:** Jack of All Trades (Ex)
- **Description:** At 5th level, an archivist can use any skill, even if the skill normally requires him to be trained.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 11, 17.
  - Mechanics summary: At 5th level, an archivist can use any skill, even if the skill normally requires him to be trained. At 11th level, he considers all skills to be class skills, and at 17th level he can take 10 on any skill check, even if it is not normally allowed.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: jack of all trades

- **Archetype feature:** Probable Path (Ex)
- **Description:** At 10th level, an archivist can calculate the action likely to bring success with the least risk.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, an archivist can calculate the action likely to bring success with the least risk. Once per day, he can take 10 on any d20 roll. He may use this ability one additional time per day for every three levels after 10th.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Bardic Performance
- Lore Master (Ex)
- Magic Lore (Ex)
- Jack of All Trades (Ex)
- Probable Path (Ex)

