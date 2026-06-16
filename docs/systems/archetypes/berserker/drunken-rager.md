# Berserker - Drunken Rager

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Drunken Rager
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Drunken%20Rager
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Drunken Rage (Ex); Staggering Evasion (Ex); Tolerance (Ex); Improved Staggering Evasion (Ex); Drunken Swing (Ex)
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense; improved uncanny dodge; the rage power gained at 12th level

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Drunken Rage (Ex)
- **Description:** At 1st level, a drunken rager can drink a unit of ale or other strong alcohol while raging to gain 1 drunken rage point.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a drunken rager can drink a unit of ale or other strong alcohol while raging to gain 1 drunken rage point. The act of drinking is a standard action that does not provoke attacks of opportunity. At 1st level, the barbarian can have a maximum of 1 drunken rage point; this maximum increases by 1 every 2 levels thereafter. These drunken rage points last for 1 hour or until spent, whichever comes first. The barbarian can use drunken rage points only while raging. Unless otherwise noted, spending a drunken rage point is a free action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, rage/rage-power hook, ki/monk hook.

### Replaces: uncanny dodge

- **Archetype feature:** Staggering Evasion (Ex)
- **Description:** At 2nd level, as long as she has at least 1 drunken rage point, a drunken rager gains evasion, as the rogue class feature of the same name.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, as long as she has at least 1 drunken rage point, a drunken rager gains evasion, as the rogue class feature of the same name.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, rage/rage-power hook.

### Replaces: trap sense

- **Archetype feature:** Tolerance (Ex)
- **Description:** At 3rd level, as long as she has at least 1 drunken rage point, a drunken rager gains a +1 bonus on saves against effects that would nauseate, poison, or sicken her, as well as saves to avoid addiction or other ill effects associated with consuming alcohol.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6.
  - Mechanics summary: At 3rd level, as long as she has at least 1 drunken rage point, a drunken rager gains a +1 bonus on saves against effects that would nauseate, poison, or sicken her, as well as saves to avoid addiction or other ill effects associated with consuming alcohol. This bonus increases by 1 at 6th level and every 3 levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, rage/rage-power hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Improved Staggering Evasion (Ex)
- **Description:** At 5th level, as long as she has at least 2 drunken rage points, a drunken rager gains improved evasion, as the rogue advanced talent of the same name.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, as long as she has at least 2 drunken rage points, a drunken rager gains improved evasion, as the rogue advanced talent of the same name.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: the rage power gained at 12th level

- **Archetype feature:** Drunken Swing (Ex)
- **Description:** At 12th level, a drunken rager can spend 1 drunken rage point as a swift action before making a melee attack to drastically increase the deadliness of her attack.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12, 16, 20.
  - Mechanics summary: At 12th level, a drunken rager can spend 1 drunken rage point as a swift action before making a melee attack to drastically increase the deadliness of her attack. The critical threat range of her next attack that round increases by 1 (for example, a critical threat range of 20 would increase to 19–20). At 16th level and again at 20th level, the barbarian can spend 1 additional drunken rage point to further increase the critical threat range of her next attack (to a maximum critical threat range increase of 3 at 20th level).
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, ki/monk hook.

## Parsed source feature headings

- Drunken Rage (Ex)
- Staggering Evasion (Ex)
- Tolerance (Ex)
- Improved Staggering Evasion (Ex)
- Drunken Swing (Ex)

