# Bard - Geisha

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Geisha
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Geisha
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Tea Ceremony (Su); Geisha Knowledge; Scribe Scroll
- **Replaced / altered class features:** Weapon/Armor Proficiencies; Bardic Knowledge

## Replacement details

### Replaces: the normal bard armor and weapon proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Geisha are proficient in all simple weapons and one monk weapon.
- **Mechanics:**
  - Mechanics summary: Geisha are proficient in all simple weapons and one monk weapon. Geisha are not proficient in any armor or shield; unlike bards, geisha are subject to arcane spell failure even when casting in light armor or when using a shield.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: bardic knowledge

- **Archetype feature:** Geisha Knowledge
- **Description:** A geisha adds half her class level (minimum 1) on Craft (calligraphy) checks, Diplomacy checks, Knowledge (nobility) checks, and one type of Perform check (act, dance, oratory, percussion, string instruments, or sing); she may make checks with these skills untrained.
- **Mechanics:**
  - Mechanics summary: A geisha adds half her class level (minimum 1) on Craft (calligraphy) checks, Diplomacy checks, Knowledge (nobility) checks, and one type of Perform check (act, dance, oratory, percussion, string instruments, or sing); she may make checks with these skills untrained.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Weapon/Armor Proficiencies

## Parsed source feature headings

- Weapon and Armor Proficiency
- Tea Ceremony (Su)
- Geisha Knowledge
- Scribe Scroll

