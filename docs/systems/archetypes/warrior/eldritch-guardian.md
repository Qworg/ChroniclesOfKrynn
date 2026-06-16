# Warrior - Eldritch Guardian

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Eldritch Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Eldritch%20Guardian
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Familiar (Ex); Share Training (Ex); Steel Will (Ex)
- **Replaced / altered class features:** the bonus feat gained at 1st level; the bonus feat gained at 2nd level; bravery

## Replacement details

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Familiar (Ex)
- **Description:** At 1st level, an eldritch guardian gains a familiar, treating his fighter level as his effective wizard level for the purpose of this ability.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, an eldritch guardian gains a familiar, treating his fighter level as his effective wizard level for the purpose of this ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feat gained at 2nd level

- **Archetype feature:** Share Training (Ex)
- **Description:** At 2nd level, when the familiar can see and hear its master, it can use any combat feat possessed by the eldritch guardian.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, when the familiar can see and hear its master, it can use any combat feat possessed by the eldritch guardian. The familiar doesn’t have to meet the feat’s prerequisites, but at the GM’s discretion may be precluded from using certain combat feats due to its physical form. For example, an eldritch guardian’s pig familiar with access to Exotic Weapon Proficiency (spiked chain) would not gain the ability to use spiked chains, since it doesn’t have any limbs capable of properly handling them.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: bravery

- **Archetype feature:** Steel Will (Ex)
- **Description:** At 2nd level, the eldritch guardian gains a +1 bonus on Will saves against fear and mind-affecting effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, the eldritch guardian gains a +1 bonus on Will saves against fear and mind-affecting effects. This bonus increases by 1 for every 4 levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

## Parsed source feature headings

- Class Skills
- Familiar (Ex)
- Share Training (Ex)
- Steel Will (Ex)

