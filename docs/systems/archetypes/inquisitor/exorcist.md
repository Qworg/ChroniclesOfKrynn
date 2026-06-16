# Inquisitor - Exorcist

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Exorcist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Exorcist
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Verdict of Exorcism (Su); Verdict of Exile (Su); Closed Mind (Su); Verdict of Anathema (Su)
- **Replaced / altered class features:** second judgment; third judgment; slayer; true judgement

## Replacement details

### Replaces: second judgment

- **Archetype feature:** Verdict of Exorcism (Su)
- **Description:** At 8th level, an inquisitor using judgment can unleash the verdict of exorcism on a creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, an inquisitor using judgment can unleash the verdict of exorcism on a creature. When she does, her judgment ends, but the creature is dazed for 1 round (Will negates); if the creature is possessed, the possessing entity must succeed at a Will saving throw (DC 10 + 1/2 inquisitor level + inquisitor’s Wisdom bonus), or be exorcised and never again allowed in that same body.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation.

### Replaces: third judgment

- **Archetype feature:** Verdict of Exile (Su)
- **Description:** At 16th level, an inquisitor using judgment can unleash the verdict of exile on a creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 16.
  - Mechanics summary: At 16th level, an inquisitor using judgment can unleash the verdict of exile on a creature. When she does, her judgment ends, but the creature subject to that judgment is dazed for 1 round (Will negates, DC of 10 + 1/2 inquisitor level + Wisdom bonus).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation.

### Replaces: slayer

- **Archetype feature:** Closed Mind (Su)
- **Description:** An exorcist inquisitor must close off her mind to deny her enemies even a foothold.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 17.
  - Mechanics summary: An exorcist inquisitor must close off her mind to deny her enemies even a foothold. At 17th level, the inquisitor becomes immune to compulsion effects and possession attempts (including magic jar ).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: true judgement

- **Archetype feature:** Verdict of Anathema (Su)
- **Description:** At 20th level, an inquisitor using judgment can unleash the verdict of anathema on her enemies.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, an inquisitor using judgment can unleash the verdict of anathema on her enemies. When she does, her judgment ends, and all enemy creatures within 10 feet are affected by her verdict of exorcism.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Verdict of Exorcism (Su)
- Verdict of Exile (Su)
- Closed Mind (Su)
- Verdict of Anathema (Su)

