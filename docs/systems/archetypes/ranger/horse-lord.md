# Ranger - Horse Lord

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Horse Lord
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Horse%20Lord
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Combat Style Feat (Ex); Mounted Bond (Ex); Strong Bond (Ex); Spiritual Bond (Su)
- **Replaced / altered class features:** hunter’s bond; camouflage; hide in plain sight

## Replacement details

### Replaces: hunter’s bond

- **Archetype feature:** Mounted Bond (Ex)
- **Description:** At 4th level, the horse lord forms a bond with an animal he can use as a mount, which becomes his animal companion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 7.
  - Mechanics summary: At 4th level, the horse lord forms a bond with an animal he can use as a mount, which becomes his animal companion. A Medium ranger can select a camel or a horse. A small ranger can select a pony or wolf, but can also select a boar or dog if he is at least 7th level. This ability functions like the druid animal companion ability except that the ranger’s effective druid level is equal to his ranger level – 3. The ranger gains a +2 bonus on Handle Animal and Ride checks with his animal companion mount.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, animal companion hook.

### Replaces: camouflage

- **Archetype feature:** Strong Bond (Ex)
- **Description:** At 12th level, the horse lord strengthens his bond with his mount.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, the horse lord strengthens his bond with his mount. The ranger’s effective druid level for his mount is now equal to his ranger level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: hide in plain sight

- **Archetype feature:** Spiritual Bond (Su)
- **Description:** At 17th level, the horse lord can grant his animal companion temporary hit points equal to his ranger level once per day.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, the horse lord can grant his animal companion temporary hit points equal to his ranger level once per day. While these temporary hit points last, when his mount is within 30 feet of the him, he can choose to share the damage taken by his mount as if using shield other .
- **Implementation flags:**
  - Likely existing hooks: animal companion hook.

## Parsed source feature headings

- Combat Style Feat (Ex)
- Mounted Bond (Ex)
- Strong Bond (Ex)
- Spiritual Bond (Su)

