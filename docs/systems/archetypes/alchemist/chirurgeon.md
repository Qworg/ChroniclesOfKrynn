# Alchemist - Chirurgeon

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Chirurgeon
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Chirurgeon
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Infused Curative; Anaesthetic; Power Over Death; Discoveries
- **Replaced / altered class features:** poison use; poison resistance +4; poison immunity

## Replacement details

### Replaces: poison use

- **Archetype feature:** Infused Curative
- **Description:** At 2nd level, a chirurgeon’s extracts of cure spells automatically act as infusions, and can be used by non-alchemists.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a chirurgeon’s extracts of cure spells automatically act as infusions, and can be used by non-alchemists. When a chirurgeon prepares his extracts, he may choose to render any or all of his infused curatives inert and prepare other extracts to replace them (unlike infusions, which continue to occupy the alchemist’s daily extract slots until consumed or used).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: poison resistance +4

- **Archetype feature:** Anaesthetic
- **Description:** At 5th level, a chirurgeon learns how to supplement uses of the Heal skill with pain-killing drugs.
- **Mechanics:**
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a chirurgeon learns how to supplement uses of the Heal skill with pain-killing drugs. He gains Skill Focus (Heal) as a bonus feat. Any use of the Heal skill that has a risk of harming the patient (such as extracting a barb) only deals the minimum damage when performed by a chirurgeon.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: poison immunity

- **Archetype feature:** Power Over Death
- **Description:** At 10th level, a chirurgeon adds breath of life to his formula book as a 4th-level extract.
- **Mechanics:**
  - Level hooks: 10, 4.
  - Mechanics summary: At 10th level, a chirurgeon adds breath of life to his formula book as a 4th-level extract. His infused curative ability applies to this extract. The chirurgeon can draw and administer a breath of life infusion to another creature as a full-round action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Infused Curative
- Anaesthetic
- Power Over Death
- Discoveries

