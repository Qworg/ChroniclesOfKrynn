# Paladin - Silver Champion

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Silver Champion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Silver%20Champion
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Deity; Drake Mount; Dragon Magic
- **Replaced / altered class features:** divine bond, channel energy, aura of justice, and aura of righteousness, and alters smite evil and mercy

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Deity
- **Description:** A silver champion must worship Apsu.
- **Detailed mechanics:**
  - **Rules text to implement:** A silver champion must worship Apsu.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: divine bond, channel energy, aura of justice, and aura of righteousness, and alters smite evil and mercy

- **Archetype feature:** Drake Mount
- **Description:** At 5th level, a silver champion gains a drake companion.
- **Detailed mechanics:**
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a silver champion gains a drake companion. If the drake companion is at least one size larger than the silver champion, it gains the mount drake power as a bonus power. However, a silver champion doesn’t gain additional uses per day of smite evil at 4th, 10th, and 16th levels, and doesn’t gain mercies at 6th, 12th, and 18th levels.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the paladin’s spellcasting

- **Archetype feature:** Dragon Magic
- **Description:** The silver champion does not have access to the normal paladin spell list.
- **Detailed mechanics:**
  - **Level hooks:** 4.
  - **Rules text to implement:** The silver champion does not have access to the normal paladin spell list. She instead adds the 1stthrough 4th-level spells from the domains granted by Apsu (Artifice, Good, Law, Scalykind, Travel) and the god’s associated subdomains (Archon, Construct, Dragon, Exploration, Toil, and Trade) to her class spell list. A silver champion casts one fewer spell of each level than normal. If this reduces the number to less than 0, she can’t cast spells of that level.
- **Implementation flags:**
  - domain system.
  - ki subsystem.
  - archetype spell-list override.

## Parsed source feature headings

- Deity
- Drake Mount
- Dragon Magic
