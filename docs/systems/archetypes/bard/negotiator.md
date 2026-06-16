# Bard - Negotiator

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Negotiator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Negotiator
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Hard Bargainer; Bardic Performance; Rogue Talents; Master of Rhetoric (Ex); Advanced Talents
- **Replaced / altered class features:** bardic knowledge; versatile performance; lore master

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Hard Bargainer
- **Description:** A negotiator adds half his class level (minimum 1) on Bluff, Diplomacy, Intimidate, Knowledge (local), and Sense Motive checks.
- **Mechanics:**
  - Mechanics summary: A negotiator adds half his class level (minimum 1) on Bluff, Diplomacy, Intimidate, Knowledge (local), and Sense Motive checks.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: versatile performance

- **Archetype feature:** Rogue Talents
- **Description:** At 2nd level, a negotiator gains a rogue talent , as the rogue class feature of the same name.
- **Mechanics:**
  - Level hooks: 2, 6.
  - Mechanics summary: At 2nd level, a negotiator gains a rogue talent , as the rogue class feature of the same name. At 6th level and every 4 levels thereafter, the negotiator gains an additional rogue talent. A negotiator cannot select a rogue talent that modifies the sneak attack ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, sneak attack hook.

### Replaces: lore master

- **Archetype feature:** Master of Rhetoric (Ex)
- **Description:** At 5th level, the negotiator can take 10 on any Bluff, Diplomacy, Intimidate, Knowledge (local), or Sense Motive check if he has ranks in that skill.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 11, 17.
  - Mechanics summary: At 5th level, the negotiator can take 10 on any Bluff, Diplomacy, Intimidate, Knowledge (local), or Sense Motive check if he has ranks in that skill. A negotiator can choose not to take 10 and can instead roll normally. In addition, the negotiator can take 20 on one of those skill checks (without spending any additional time). The negotiator can do this once per day at 5th level, twice per day at 11th level, and three times per day at 17th level.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Hard Bargainer
- Bardic Performance
- Rogue Talents
- Master of Rhetoric (Ex)
- Advanced Talents

