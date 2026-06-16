# Rogue - Counterfeit Mage

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Counterfeit Mage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Counterfeit%20Mage
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Magical Expertise (Ex); Signature Wand (Ex); Wand Adept (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; the rogue talent gained at 4th level

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Magical Expertise (Ex)
- **Description:** At 1st level, a counterfeit mage adds 1/2 his level to Disable Device checks to disarm magical traps, Perception checks to find magical traps, and Use Magic Device checks to activate scrolls and wands.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a counterfeit mage adds 1/2 his level to Disable Device checks to disarm magical traps, Perception checks to find magical traps, and Use Magic Device checks to activate scrolls and wands. A counterfeit mage can use Disable Device to disarm magic traps.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the rogue talent gained at 4th level

- **Archetype feature:** Signature Wand (Ex)
- **Description:** At 4th level, a counterfeit mage can spend 1 hour practicing with a wand to designate it as his signature wand.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a counterfeit mage can spend 1 hour practicing with a wand to designate it as his signature wand. He can draw that wand as a free action, and can activate it without having to succeed at a Use Magic Device check. He can change his signature wand once per day.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Magical Expertise (Ex)
- Signature Wand (Ex)
- Wand Adept (Ex)
- Rogue Talents
- Advanced Talents

