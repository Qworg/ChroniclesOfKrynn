# Alchemist - Chirurgeon

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Chirurgeon
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Chirurgeon
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Infused Curative; Anaesthetic; Power Over Death; Discoveries
- **Replaced / altered class features:** poison use; poison resistance +4; poison immunity

## Implementation details

### Replaces: poison use

- **Archetype feature:** Infused Curative
- **Description:** At 2nd level, a chirurgeon’s extracts of cure spells automatically act as infusions, and can be used by non-alchemists.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a chirurgeon’s extracts of cure spells automatically act as infusions, and can be used by non-alchemists. When a chirurgeon prepares his extracts, he may choose to render any or all of his infused curatives inert and prepare other extracts to replace them (unlike infusions, which continue to occupy the alchemist’s daily extract slots until consumed or used).
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison resistance +4

- **Archetype feature:** Anaesthetic
- **Description:** At 5th level, a chirurgeon learns how to supplement uses of the Heal skill with pain-killing drugs.
- **Detailed mechanics:**
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a chirurgeon learns how to supplement uses of the Heal skill with pain-killing drugs. He gains Skill Focus (Heal) as a bonus feat. Any use of the Heal skill that has a risk of harming the patient (such as extracting a barb) only deals the minimum damage when performed by a chirurgeon.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: poison immunity

- **Archetype feature:** Power Over Death
- **Description:** At 10th level, a chirurgeon adds breath of life to his formula book as a 4th-level extract.
- **Detailed mechanics:**
  - **Level hooks:** 10, 4.
  - **Rules text to implement:** At 10th level, a chirurgeon adds breath of life to his formula book as a 4th-level extract. His infused curative ability applies to this extract. The chirurgeon can draw and administer a breath of life infusion to another creature as a full-round action.
- **Implementation flags:**
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the chirurgeon archetype: elixir of life, healing touch, infusion, and spontaneous healing.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the chirurgeon archetype: elixir of life, healing touch, infusion, and spontaneous healing.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Infused Curative
- Anaesthetic
- Power Over Death
- Discoveries
