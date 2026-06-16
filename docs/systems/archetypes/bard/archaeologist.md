# Bard - Archaeologist

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Archaeologist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Archaeologist
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Archaeologist’s Luck (Ex); Clever Explorer (Ex); Uncanny Dodge (Ex); Trap Sense (Ex); Rogue Talents; Evasion (Ex); Advanced Talent
- **Replaced / altered class features:** the versatile performance ability; well-versed

## Replacement details

### Replaces: the versatile performance ability

- **Archetype feature:** Clever Explorer (Ex)
- **Description:** At 2nd level, an archaeologist gains a bonus equal to half his class level on Disable Device and Perception checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6.
  - Mechanics summary: At 2nd level, an archaeologist gains a bonus equal to half his class level on Disable Device and Perception checks. He can disable intricate and complex devices in half the normal amount of time (minimum 1 round) and open a lock as a standard action. At 6th level, an archaeologist can take 10 on Disable Device checks, even if distracted or endangered, and can disarm magical traps.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: well-versed

- **Archetype feature:** Uncanny Dodge (Ex)
- **Description:** At 2nd level, an archaeologist gains uncanny dodge, as the rogue class feature of the same name .
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an archaeologist gains uncanny dodge, as the rogue class feature of the same name .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

## Parsed source feature headings

- Bardic Performance
- Archaeologist’s Luck (Ex)
- Clever Explorer (Ex)
- Uncanny Dodge (Ex)
- Trap Sense (Ex)
- Rogue Talents
- Evasion (Ex)
- Advanced Talent

