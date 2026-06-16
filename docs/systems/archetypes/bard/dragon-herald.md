# Bard - Dragon Herald

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Dragon Herald
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Dragon%20Herald
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Dragon Patron (Ex); Coat of Arms (Ex); Dragon Voice (Ex); Bardic Performance; Master of Persuasion (Ex); Extol Glory (Su)
- **Replaced / altered class features:** bardic knowledge; lore master; jack-of-all-trades

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Dragon Voice (Ex)
- **Description:** A dragon herald gains a bonus equal to half her level on Intimidate and Diplomacy checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A dragon herald gains a bonus equal to half her level on Intimidate and Diplomacy checks. She gains Draconic as a bonus language.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: lore master

- **Archetype feature:** Master of Persuasion (Ex)
- **Description:** At 5th level, the dragon herald becomes so sure in her craft that she can take 10 on any Diplomacy or Intimidate check, even when rushed or threatened.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 17.
  - Mechanics summary: At 5th level, the dragon herald becomes so sure in her craft that she can take 10 on any Diplomacy or Intimidate check, even when rushed or threatened. Once per day, she may attempt either a Diplomacy or Intimidate check as a full-round action, instead of spending a full minute. She can use this ability one additional time per day at 11th and 17th level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: jack-of-all-trades

- **Archetype feature:** Extol Glory (Su)
- **Description:** At 10th level, the dragon herald gains the ability to spread her patron’s glory to all intelligent creatures.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, the dragon herald gains the ability to spread her patron’s glory to all intelligent creatures. When she speaks Draconic, any intelligent creature that hears her and knows any language can understand her words.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Dragon Patron (Ex)
- Coat of Arms (Ex)
- Dragon Voice (Ex)
- Bardic Performance
- Master of Persuasion (Ex)
- Extol Glory (Su)

