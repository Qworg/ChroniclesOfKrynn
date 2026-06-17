# Bard - Geisha

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Geisha
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Geisha
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Tea Ceremony (Su); Geisha Knowledge; Scribe Scroll
- **Replaced / altered class features:** Weapon/Armor Proficiencies; Bardic Knowledge

## Implementation details

### Replaces: the normal bard armor and weapon proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Geisha are proficient in all simple weapons and one monk weapon.
- **Detailed mechanics:**
  - **Rules text to implement:** Geisha are proficient in all simple weapons and one monk weapon. Geisha are not proficient in any armor or shield; unlike bards, geisha are subject to arcane spell failure even when casting in light armor or when using a shield.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Tea Ceremony (Su)
- **Description:** By spending 10 minutes preparing an elaborate tea ceremony, a geisha may affect her allies with inspire courage, inspire competence, inspire greatness, or inspire heroics.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** By spending 10 minutes preparing an elaborate tea ceremony, a geisha may affect her allies with inspire courage, inspire competence, inspire greatness, or inspire heroics. The ceremony’s effects last 10 minutes. The geisha must spend 4 rounds of bardic performance for each creature to be affected.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: bardic knowledge

- **Archetype feature:** Geisha Knowledge
- **Description:** A geisha adds half her class level (minimum 1) on Craft (calligraphy) checks, Diplomacy checks, Knowledge (nobility) checks, and one type of Perform check (act, dance, oratory, percussion, string instruments, or sing); she may make checks with these skills untrained.
- **Detailed mechanics:**
  - **Rules text to implement:** A geisha adds half her class level (minimum 1) on Craft (calligraphy) checks, Diplomacy checks, Knowledge (nobility) checks, and one type of Perform check (act, dance, oratory, percussion, string instruments, or sing); she may make checks with these skills untrained.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Scribe Scroll
- **Description:** A geisha gains Scribe Scroll as a bonus feat.
- **Detailed mechanics:**
  - **Rules text to implement:** A geisha gains Scribe Scroll as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Tea Ceremony (Su)
- Geisha Knowledge
- Scribe Scroll
