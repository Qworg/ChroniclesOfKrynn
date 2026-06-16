# Berserker - Primal Hunter

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Primal Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Primal%20Hunter
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Exceptional Pull; Focused Rage (Ex); Rage Powers
- **Replaced / altered class features:** fast movement

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Exceptional Pull
- **Description:** At 1st level, a primal hunter gains Exceptional Pull as a bonus feat, even if she doesn’t meet the requirements.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a primal hunter gains Exceptional Pull as a bonus feat, even if she doesn’t meet the requirements. At 11th and 20th levels, the strength rating of weapons she wields increases by 1 (weapons without a strength rating are not affected).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Alters: rage

- **Archetype feature:** Focused Rage (Ex)
- **Description:** While raging, a primal hunter gains a +2 bonus on attack rolls with ranged weapons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11, 20.
  - Mechanics summary: While raging, a primal hunter gains a +2 bonus on attack rolls with ranged weapons. This bonus increases to +3 at 11th level and to +4 at 20th level. While raging, a primal hunter can attempt Stealth checks but doesn’t gain a morale bonus on Will saves.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, rage/rage-power hook.

## Parsed source feature headings

- Exceptional Pull
- Focused Rage (Ex)
- Rage Powers

