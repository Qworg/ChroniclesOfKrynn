# Bard - Court Fool

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Court Fool
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Court%20Fool
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Buffoonery (Ex); Bardic Performance; Caper and Jeer (Ex)
- **Replaced / altered class features:** lore master

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Buffoonery (Ex)
- **Description:** A court fool gains a bonus equal to 1/2 his bard level on Acrobatics, Bluff, Climb, and Disguise checks (minimum +1).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A court fool gains a bonus equal to 1/2 his bard level on Acrobatics, Bluff, Climb, and Disguise checks (minimum +1).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: lore master

- **Archetype feature:** Caper and Jeer (Ex)
- **Description:** At 5th level, a court fool can take 10 on Acrobatics and Bluff checks, even when in danger or distracted, and can use Bluff to create a diversion to hide (as per the Stealth skill) as a swift action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a court fool can take 10 on Acrobatics and Bluff checks, even when in danger or distracted, and can use Bluff to create a diversion to hide (as per the Stealth skill) as a swift action. He can take 20 on an Acrobatics or Bluff check once per day, plus one time per 6 levels beyond 5th, even when in danger or distracted.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Buffoonery (Ex)
- Bardic Performance
- Caper and Jeer (Ex)

