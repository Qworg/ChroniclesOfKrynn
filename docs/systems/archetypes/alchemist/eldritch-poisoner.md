# Alchemist - Eldritch Poisoner

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Eldritch Poisoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Eldritch%20Poisoner
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Arcanotoxin (Su); Toxicologist (Ex); Sneak Attack (Ex); Discoveries; Careful Injection (Ex)
- **Replaced / altered class features:** bomb; Throw Anything; mutagen and persistent mutagen; the discovery gained at 4th level

## Replacement details

### Replaces: bomb

- **Archetype feature:** Arcanotoxin (Su)
- **Description:** An eldritch poisoner can blend volatile chemicals and her own personal magic to create deadly poisons known as arcanotoxins.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3.
  - Mechanics summary: An eldritch poisoner can blend volatile chemicals and her own personal magic to create deadly poisons known as arcanotoxins. She can use this ability a number of times each day equal to her alchemist level + her Intelligence modifier. An arcanotoxin functions only when used by the eldritch poisoner and becomes inert if not used within 1 minute. Creating an arcanotoxin is a standard action, and it can be applied to a weapon as a move action. At 1st level, an eldritch poisoner must choose whether her arcanotoxin deals Strength or Dexterity damage. At 3rd level and every 2 alchemist levels thereafter, she can enhance her arcanotoxin in one of the following ways.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, alchemist bomb hook, ki/monk hook.

### Replaces: Throw Anything

- **Archetype feature:** Toxicologist (Ex)
- **Description:** An eldritch poisoner gains a +2 bonus on Craft (alchemy) checks to create poisons and antitoxins, and creates them in half the normal amount of time.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An eldritch poisoner gains a +2 bonus on Craft (alchemy) checks to create poisons and antitoxins, and creates them in half the normal amount of time.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: mutagen and persistent mutagen

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** At 1st level, the eldritch poisoner gains a sneak attack identical to the rogue class feature, dealing 1d6 points of sneak attack damage at 1st level; the damage increases by 1d6 at 4th level and every 4 alchemist levels thereafter.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 4.
  - Mechanics summary: At 1st level, the eldritch poisoner gains a sneak attack identical to the rogue class feature, dealing 1d6 points of sneak attack damage at 1st level; the damage increases by 1d6 at 4th level and every 4 alchemist levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, mutagen hook, sneak attack hook.

### Replaces: the discovery gained at 4th level

- **Archetype feature:** Careful Injection (Ex)
- **Description:** At 4th level, an eldritch poisoner can forgo some of her sneak attack damage in order to increase the save DC of a poison or arcanotoxin on the weapon used to make the sneak attack.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an eldritch poisoner can forgo some of her sneak attack damage in order to increase the save DC of a poison or arcanotoxin on the weapon used to make the sneak attack. The poison’s DC increases by 1 for every 1d6 points of sneak attack damage forgone.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, alchemist discovery hook, sneak attack hook.

## Parsed source feature headings

- Arcanotoxin (Su)
- Type
- Save
- Frequency
- Effect
- Cure
- Toxicologist (Ex)
- Sneak Attack (Ex)
- Discoveries
- Careful Injection (Ex)

