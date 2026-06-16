# Wizard - Clocksmith

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Clocksmith
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Clocksmith
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Clockwork Bond (Ex); Clockwork Expertise (Ex); Craft Construct; Familiar Tinkering (Ex)
- **Replaced / altered class features:** Arcane Bond; Arcane School; Scribe Scroll; Bonus Feats

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Clockwork Bond (Ex)
- **Description:** A clocksmith forms a bond with one of his clockwork creations and begins play with a constructed familiar.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A clocksmith forms a bond with one of his clockwork creations and begins play with a constructed familiar. He must select this familiar as his arcane bond. A construct familiar grants only half of its typical bonus (minimum +1 bonus) from its special familiar ability to its master.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the school powers granted by the wizard’s arcane school

- **Archetype feature:** Clockwork Expertise (Ex)
- **Description:** A clocksmith is especially adept at dealing with clockworks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: A clocksmith is especially adept at dealing with clockworks. He gains a +2 bonus on saving throws against effects created by creatures of the clockwork subtype. This bonus increases to +4 at 8th level. Additionally, he treats his caster level as 1 higher when casting a spell that affects or targets only creatures of the clockwork subtype. At 8th level, he treats his caster level as 2 higher when casting such a spell.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: Scribe Scroll

- **Archetype feature:** Craft Construct
- **Description:** A clocksmith gains Craft Construct as a bonus feat, even if he does not meet the prerequisites.
- **Mechanics:**
  - Mechanics summary: A clocksmith gains Craft Construct as a bonus feat, even if he does not meet the prerequisites. He can create any construct, but he increases the cost required to create constructs without the clockwork subtype by 50%.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feats gained at 5th, 10th, 15th
- **Archetype feature:** Familiar Tinkering (Ex)
- **Description:** At 5th level, a clocksmith learns to improve upon his clockwork familiar.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a clocksmith learns to improve upon his clockwork familiar. A clocksmith can grant his familiar 1 evolution point worth of eidolon evolutions for every 5 wizard levels he has, though he can’t select any evolutions that require a specific base form. Each time the clocksmith gains a level, he can change his familiar’s evolutions. These evolutions stack with those from the Evolved Familiar feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, summoner eidolon hook, eidolon evolution hook.

### Replaces: 20th levels

- **Archetype feature:** Familiar Tinkering (Ex)
- **Description:** At 5th level, a clocksmith learns to improve upon his clockwork familiar.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a clocksmith learns to improve upon his clockwork familiar. A clocksmith can grant his familiar 1 evolution point worth of eidolon evolutions for every 5 wizard levels he has, though he can’t select any evolutions that require a specific base form. Each time the clocksmith gains a level, he can change his familiar’s evolutions. These evolutions stack with those from the Evolved Familiar feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, summoner eidolon hook, eidolon evolution hook.

## Parsed source feature headings

- Clockwork Bond (Ex)
- Clockwork Expertise (Ex)
- Craft Construct
- Familiar Tinkering (Ex)

