# Alchemist - Preservationist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Preservationist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Preservationist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bottled Ally I; Bottled Ally II; Bottled Ally III; Bottled Ally IV; Bottled Ally V; Bottled Ally VI; Discoveries
- **Replaced / altered class features:** poison use; poison resistance +4; poison resistance +6; poison immunity; persistent mutagen; his 18th-level discovery

## Replacement details

### Replaces: poison use

- **Archetype feature:** Bottled Ally I
- **Description:** At 2nd level, a preservationist adds Handle Animal to his list of class skills.
- **Mechanics:**
  - Level hooks: 2, 1.
  - Mechanics summary: At 2nd level, a preservationist adds Handle Animal to his list of class skills. He adds summon nature's ally I to his formula book as a 1st-level extract. When he prepares that extract, he actually prepares a tiny, preserved specimen in a bottle (as with a caster casting the spell, the preservationist doesn’t have to choose the creature until he uses the extract). When the alchemist opens the bottle, the specimen animates and grows to normal size, serving the preservationist as per the spell and otherwise being treated as a summoned creature. If the preservationist has the infusion discovery, another character can use the infused specimen. The Augment Summoning feat can be applied to these specimens.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, spellcasting/spell-list hook, alchemist discovery hook, ki/monk hook.

### Replaces: poison resistance +4

- **Archetype feature:** Bottled Ally II
- **Description:** At 5th level, a preservationist adds summon nature's ally II to his formula book as a 2nd-level extract.
- **Mechanics:**
  - Level hooks: 5, 2.
  - Mechanics summary: At 5th level, a preservationist adds summon nature's ally II to his formula book as a 2nd-level extract.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: poison resistance +6

- **Archetype feature:** Bottled Ally III
- **Description:** At 8th level, a preservationist adds summon nature's ally IV to his formula book as a 3rd-level extract.
- **Mechanics:**
  - Level hooks: 8, 3.
  - Mechanics summary: At 8th level, a preservationist adds summon nature's ally IV to his formula book as a 3rd-level extract.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: poison immunity

- **Archetype feature:** Bottled Ally IV
- **Description:** At 10th level, a preservationist adds summon nature's ally V to his formula book as a 4th-level extract.
- **Mechanics:**
  - Level hooks: 10, 4.
  - Mechanics summary: At 10th level, a preservationist adds summon nature's ally V to his formula book as a 4th-level extract.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: persistent mutagen

- **Archetype feature:** Bottled Ally V
- **Description:** At 14th level, a preservationist adds summon nature's ally VII to his formula book as a 5th-level extract.
- **Mechanics:**
  - Level hooks: 14, 5.
  - Mechanics summary: At 14th level, a preservationist adds summon nature's ally VII to his formula book as a 5th-level extract.
- **Implementation flags:**
  - Likely existing hooks: mutagen hook.

### Replaces: his 18th-level discovery

- **Archetype feature:** Bottled Ally VI
- **Description:** At 18 level, a preservationist adds summon nature's ally IX to his formula book as a 6th-level extract.
- **Mechanics:**
  - Level hooks: 18, 6.
  - Mechanics summary: At 18 level, a preservationist adds summon nature's ally IX to his formula book as a 6th-level extract.
- **Implementation flags:**
  - Likely existing hooks: alchemist discovery hook.

## Parsed source feature headings

- Bottled Ally I
- Bottled Ally II
- Bottled Ally III
- Bottled Ally IV
- Bottled Ally V
- Bottled Ally VI
- Discoveries

