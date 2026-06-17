# Rogue - Swamp Poisoner

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Swamp Poisoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Swamp%20Poisoner
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Prerequisites; Mucous Membrane (Ex); Mark the Vein (Ex); Poison the Well (Ex)
- **Replaced / altered class features:** Racial Traits; Trapfinding; 2nd-level Rogue Talent; Trap Sense

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Prerequisites
- **Description:** A swamp poisoner must have selected the toxic skin grippli alternate racial trait.
- **Detailed mechanics:**
  - **Rules text to implement:** A swamp poisoner must have selected the toxic skin grippli alternate racial trait.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - feat grant/prerequisite handling.

### Replaces: trapfinding

- **Archetype feature:** Mucous Membrane (Ex)
- **Description:** A swamp poisoner gains a bonus equal to half his class level on Escape Artist checks and to his CMD when resisting grapple attempts (minimum 1).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A swamp poisoner gains a bonus equal to half his class level on Escape Artist checks and to his CMD when resisting grapple attempts (minimum 1).
- **Implementation flags:**
  - poison subsystem.

### Replaces: the rogue talent gained at 2nd level

- **Archetype feature:** Mark the Vein (Ex)
- **Description:** At 2nd level, when the swamp poisoner attacks a target that is currently affected by his grippli racial poison, that target is denied its Dexterity bonus to AC.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, when the swamp poisoner attacks a target that is currently affected by his grippli racial poison, that target is denied its Dexterity bonus to AC. The target must be actively poisoned, not just suffering the effects of poison, such as lingering ability damage.
- **Implementation flags:**
  - poison subsystem.

### Replaces: trap sense

- **Archetype feature:** Poison the Well (Ex)
- **Description:** At 3rd level as a standard action, a swamp poisoner can smear the poison generated through the use of his toxic skin alternate racial trait onto the ground in a 5-foot area, instead of onto a weapon or his own body.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level as a standard action, a swamp poisoner can smear the poison generated through the use of his toxic skin alternate racial trait onto the ground in a 5-foot area, instead of onto a weapon or his own body. The first creature other than the swamp poisoner to enter the area is exposed to the poison. The poison loses its potency after 1 hour. This area is considered a trap, and the DCs of Perception checks to notice it and Disable Device checks to disable it are equal to 10 + half the swamp poisoner’s level + the swamp poisoner’s Constitution modifier. The swamp poisoner also gains an extra use per day of his toxic skin alternate racial trait, plus one additional use per day for every 3 levels beyond 3rd. An unchained rogue replaces danger sense instead.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.

## Parsed source feature headings

- Prerequisites
- Mucous Membrane (Ex)
- Mark the Vein (Ex)
- Poison the Well (Ex)
