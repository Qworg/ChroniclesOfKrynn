# Wizard - Spirit Binder

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Spirit Binder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Spirit%20Binder
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Soulbound Familiar (Ex); Arcane School; Lost Talents (Ex)
- **Replaced / altered class features:** Scribe Scroll and the wizard’s bonus feats

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Soulbound Familiar (Ex)
- **Description:** A spirit binder must select a familiar for his arcane bond.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: A spirit binder must select a familiar for his arcane bond. Unlike in a normal familiar-summoning ritual, a spirit binder created his special familiar through a dangerous ritual catalyzed by the death of a loved one. It can have any alignment, even one that is diametrically opposed to the spirit binder’s. A soulbound familiar has the base attack bonus and base saving throws of the loved one’s favored class (using the spirit binder’s level as its level). If the loved one died before the beginning of the campaign, the spirit binder selects the familiar’s favored class at 1st level and it cannot be changed.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Alters: arcane school

- **Archetype feature:** Arcane School
- **Description:** A spirit binder can’t choose necromancy as an opposition school.
- **Mechanics:**
  - Mechanics summary: A spirit binder can’t choose necromancy as an opposition school.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: Scribe Scroll

- **Archetype feature:** Lost Talents (Ex)
- **Description:** A spirit binder’s soulbound familiar possesses some of the ability of the lost loved one, and it is capable of learning more.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 5.
  - Mechanics summary: A spirit binder’s soulbound familiar possesses some of the ability of the lost loved one, and it is capable of learning more. At 1st level, 5th level, and every 5 levels thereafter, the spirit binder’s familiar gains a new feat for which it meets the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the wizard’s bonus feats

- **Archetype feature:** Lost Talents (Ex)
- **Description:** A spirit binder’s soulbound familiar possesses some of the ability of the lost loved one, and it is capable of learning more.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 5.
  - Mechanics summary: A spirit binder’s soulbound familiar possesses some of the ability of the lost loved one, and it is capable of learning more. At 1st level, 5th level, and every 5 levels thereafter, the spirit binder’s familiar gains a new feat for which it meets the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Soulbound Familiar (Ex)
- Arcane School
- Lost Talents (Ex)

