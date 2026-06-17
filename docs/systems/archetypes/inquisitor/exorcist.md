# Inquisitor - Exorcist

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Exorcist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Exorcist
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Verdict of Exorcism (Su); Verdict of Exile (Su); Closed Mind (Su); Verdict of Anathema (Su)
- **Replaced / altered class features:** second judgment; third judgment; slayer; true judgement

## Implementation details

### Replaces: second judgment

- **Archetype feature:** Verdict of Exorcism (Su)
- **Description:** At 8th level, an inquisitor using judgment can unleash the verdict of exorcism on a creature.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, an inquisitor using judgment can unleash the verdict of exorcism on a creature. When she does, her judgment ends, but the creature is dazed for 1 round (Will negates); if the creature is possessed, the possessing entity must succeed at a Will saving throw (DC 10 + 1/2 inquisitor level + inquisitor’s Wisdom bonus), or be exorcised and never again allowed in that same body.
- **Implementation flags:**
  - judgment subsystem.

### Replaces: third judgment

- **Archetype feature:** Verdict of Exile (Su)
- **Description:** At 16th level, an inquisitor using judgment can unleash the verdict of exile on a creature.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 16.
  - **Rules text to implement:** At 16th level, an inquisitor using judgment can unleash the verdict of exile on a creature. When she does, her judgment ends, but the creature subject to that judgment is dazed for 1 round (Will negates, DC of 10 + 1/2 inquisitor level + Wisdom bonus). If the creature is possessed or an outsider, the possessing entity or the outsider is affected by dismissal (Will negates).
- **Implementation flags:**
  - judgment subsystem.

### Replaces: slayer

- **Archetype feature:** Closed Mind (Su)
- **Description:** An exorcist inquisitor must close off her mind to deny her enemies even a foothold.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 17.
  - **Rules text to implement:** An exorcist inquisitor must close off her mind to deny her enemies even a foothold. At 17th level, the inquisitor becomes immune to compulsion effects and possession attempts (including magic jar ).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: true judgement

- **Archetype feature:** Verdict of Anathema (Su)
- **Description:** At 20th level, an inquisitor using judgment can unleash the verdict of anathema on her enemies.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, an inquisitor using judgment can unleash the verdict of anathema on her enemies. When she does, her judgment ends, and all enemy creatures within 10 feet are affected by her verdict of exorcism.
- **Implementation flags:**
  - judgment subsystem.

## Parsed source feature headings

- Verdict of Exorcism (Su)
- Verdict of Exile (Su)
- Closed Mind (Su)
- Verdict of Anathema (Su)
