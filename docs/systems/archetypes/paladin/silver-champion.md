# Paladin - Silver Champion

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Silver Champion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Silver%20Champion
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Deity; Drake Mount; Dragon Magic
- **Replaced / altered class features:** divine bond, channel energy, aura of justice, and aura of righteousness, and alters smite evil and mercy

## Replacement details

### Replaces: divine bond, channel energy, aura of justice
- **Archetype feature:** Drake Mount
- **Description:** At 5th level, a silver champion gains a drake companion.
- **Mechanics:**
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a silver champion gains a drake companion. If the drake companion is at least one size larger than the silver champion, it gains the mount drake power as a bonus power. However, a silver champion doesn’t gain additional uses per day of smite evil at 4th, 10th, and 16th levels, and doesn’t gain mercies at 6th, 12th, and 18th levels.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, smite hook, paladin mercy hook.

### Replaces: aura of righteousness
- **Archetype feature:** Drake Mount
- **Description:** At 5th level, a silver champion gains a drake companion.
- **Mechanics:**
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a silver champion gains a drake companion. If the drake companion is at least one size larger than the silver champion, it gains the mount drake power as a bonus power. However, a silver champion doesn’t gain additional uses per day of smite evil at 4th, 10th, and 16th levels, and doesn’t gain mercies at 6th, 12th, and 18th levels.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, smite hook, paladin mercy hook.

### Replaces: alters smite evil and mercy

- **Archetype feature:** Drake Mount
- **Description:** At 5th level, a silver champion gains a drake companion.
- **Mechanics:**
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a silver champion gains a drake companion. If the drake companion is at least one size larger than the silver champion, it gains the mount drake power as a bonus power. However, a silver champion doesn’t gain additional uses per day of smite evil at 4th, 10th, and 16th levels, and doesn’t gain mercies at 6th, 12th, and 18th levels.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, smite hook, paladin mercy hook.

### Alters: the paladin’s spellcasting

- **Archetype feature:** Dragon Magic
- **Description:** The silver champion does not have access to the normal paladin spell list.
- **Mechanics:**
  - Level hooks: 4.
  - Mechanics summary: The silver champion does not have access to the normal paladin spell list. She instead adds the 1stthrough 4th-level spells from the domains granted by Apsu (Artifice, Good, Law, Scalykind, Travel) and the god’s associated subdomains (Archon, Construct, Dragon, Exploration, Toil, and Trade) to her class spell list. A silver champion casts one fewer spell of each level than normal. If this reduces the number to less than 0, she can’t cast spells of that level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook, ki/monk hook.

## Parsed source feature headings

- Deity
- Drake Mount
- Dragon Magic

