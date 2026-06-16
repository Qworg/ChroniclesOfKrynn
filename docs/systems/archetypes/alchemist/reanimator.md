# Alchemist - Reanimator

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Reanimator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Reanimator
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bomb; Simple Reanimation; Create Undead; Create Greater Undead; Discoveries
- **Replaced / altered class features:** the increase to bomb damage at this level; the increase to bomb damage at this level; the increase to bomb damage at this level

## Replacement details

### Replaces: the increase to bomb damage at this level

- **Archetype feature:** Simple Reanimation
- **Description:** At 7th level, a reanimator adds lesser animate dead to his formula book as a 3rd-level extract.
- **Mechanics:**
  - Level hooks: 7, 3.
  - Mechanics summary: At 7th level, a reanimator adds lesser animate dead to his formula book as a 3rd-level extract. When he uses that extract, rather than drinking it, he injects it into the corpse he intends to animate, which rises as an undead creature under his control 1 hour later. The extract can only create zombies (including variant zombies).
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, ki/monk hook.

### Replaces: the increase to bomb damage at this level

- **Archetype feature:** Create Undead
- **Description:** At 13th level, a reanimator adds create undead to his formula book as a 4th-level extract.
- **Mechanics:**
  - Level hooks: 13, 4.
  - Mechanics summary: At 13th level, a reanimator adds create undead to his formula book as a 4th-level extract. When he uses that extract, rather than drinking it, he injects it into the corpse he intends to animate, which rises as an uncontrolled undead 1 hour later. The extract can only create corporeal undead.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, ki/monk hook.

### Replaces: the increase to bomb damage at this level

- **Archetype feature:** Create Greater Undead
- **Description:** At 15th level, a reanimator adds create greater undead to his formula book as a 5th-level extract.
- **Mechanics:**
  - Level hooks: 15, 5.
  - Mechanics summary: At 15th level, a reanimator adds create greater undead to his formula book as a 5th-level extract. This otherwise acts similarly to a create undead extract.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook.

## Parsed source feature headings

- Bomb
- Simple Reanimation
- Create Undead
- Create Greater Undead
- Discoveries

