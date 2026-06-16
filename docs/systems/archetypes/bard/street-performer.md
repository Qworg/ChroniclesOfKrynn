# Bard - Street Performer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Street Performer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Street%20Performer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Gladhanding; Streetwise; Quick Change (Ex)
- **Replaced / altered class features:** countersong; lore master

## Replacement details

### Replaces: countersong

- **Archetype feature:** Gladhanding
- **Description:** A street performer earns double the normal amount of money from Perform checks.
- **Mechanics:**
  - Mechanics summary: A street performer earns double the normal amount of money from Perform checks. As a standard action, he may use a Bluff check in place of a Diplomacy check to improve a creature’s attitude for 1 minute, after which its attitude becomes one step worse than originally.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: bardic knowledge

- **Archetype feature:** Streetwise
- **Description:** A street performer gains a bonus equal to half his level on Bluff, Disguise, Knowledge (local), and Sleight of Hand checks, Diplomacy or Intimidate checks made to influence crowds, and Diplomacy checks to gather information (minimum +1).
- **Mechanics:**
  - Mechanics summary: A street performer gains a bonus equal to half his level on Bluff, Disguise, Knowledge (local), and Sleight of Hand checks, Diplomacy or Intimidate checks made to influence crowds, and Diplomacy checks to gather information (minimum +1).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: lore master

- **Archetype feature:** Quick Change (Ex)
- **Description:** At 5th level, a street performer can don a disguise as a standard action by taking a –5 penalty on his check.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a street performer can don a disguise as a standard action by taking a –5 penalty on his check. He can take 10 on Bluff and Disguise checks and use Bluff to create a diversion to hide as a swift action. He can take 20 on a Bluff or Disguise check once per day, plus one time per six levels beyond 5th.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, ki/monk hook.

## Parsed source feature headings

- Bardic Performance
- Gladhanding
- Streetwise
- Quick Change (Ex)

