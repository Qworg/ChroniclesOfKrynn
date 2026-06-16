# Rogue - Relic Raider

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Relic Raider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Relic%20Raider
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Curse Sense (Ex); Disable Curse (Su); Advanced Talents
- **Replaced / altered class features:** uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: uncanny dodge

- **Archetype feature:** Curse Sense (Ex)
- **Description:** At 4th level, a relic raider adds 1/2 her rogue level on Perception checks to notice haunts and on Spellcraft checks to identify cursed items (using detect magic or similar effects).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 6, 18.
  - Mechanics summary: At 4th level, a relic raider adds 1/2 her rogue level on Perception checks to notice haunts and on Spellcraft checks to identify cursed items (using detect magic or similar effects). In addition, the relic raider gains a +1 bonus on saving throws against curses and haunts and a +1 dodge bonus to AC against attacks by haunts. These bonuses increase by 1 at 6th level and every 3 rogue levels thereafter (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.
  - Needs implementation review: haunt rules.

### Replaces: improved uncanny dodge

- **Archetype feature:** Disable Curse (Su)
- **Description:** At 8th level, a relic raider can attempt to disable a curse as she would a magical trap.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8, 12.
  - Mechanics summary: At 8th level, a relic raider can attempt to disable a curse as she would a magical trap. This ability acts as remove curse , except instead of a caster level check, the relic raider attempts a Disable Device check (DC = 15 + the DC of the curse). Disabling a curse takes 2d4 rounds, and the relic raider cannot take 10 or 20 on this check. A relic raider can use this ability once per day at 8th level. At 12th level and every 4 rogue levels thereafter, a relic raider can use disable curse one additional time per day.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

## Parsed source feature headings

- Curse Sense (Ex)
- Disable Curse (Su)
- Advanced Talents

