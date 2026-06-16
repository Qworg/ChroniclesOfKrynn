# Wizard - Familiar Adept

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Familiar Adept
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Familiar%20Adept
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Diminished Expertise; School Familiar (Ex); Familiar Spells (Ex); Focused School (Ex)
- **Replaced / altered class features:** Scribe Scroll; 5th and 10th-level Bonus Feats; Arcane Bond; Spellbooks

## Replacement details

### Alters: arcane bond

- **Archetype feature:** School Familiar (Ex)
- **Description:** At 1st level, a familiar adept must select a familiar for his arcane bond.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 4, 8.
  - Mechanics summary: At 1st level, a familiar adept must select a familiar for his arcane bond. His familiar automatically gains the school familiar archetype (see page 14), but it cannot use its lesser school power until 4th level. At 8th level, it gains access to its greater school power.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: spellbooks

- **Archetype feature:** Familiar Spells (Ex)
- **Description:** A familiar adept stores his spells in his familiar rather than in a spellbook, exactly as a witch does.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A familiar adept stores his spells in his familiar rather than in a spellbook, exactly as a witch does. His familiar can freely trade spells known with a witch’s familiar, provided the spells traded are on both casters’ class spell lists. The familiar adept’s familiar uses the witch rules for familiars, including the increased cost of replacing the familiar.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Scribe Scroll
- 5th and 10th-level Bonus Feats

## Parsed source feature headings

- Diminished Expertise
- School Familiar (Ex)
- Familiar Spells (Ex)
- Focused School (Ex)

