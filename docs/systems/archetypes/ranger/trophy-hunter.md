# Ranger - Trophy Hunter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Trophy Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Trophy%20Hunter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Improved Tracking (Ex); Firearm Style; Hunter’s Aim (Ex)
- **Replaced / altered class features:** wild empathy; all combat style feats; hunter’s bond

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Improved Tracking (Ex)
- **Description:** At 1st level, a trophy hunter gains a +2 bonus on Survival skill checks when following or identifying tracks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a trophy hunter gains a +2 bonus on Survival skill checks when following or identifying tracks. When he tracks, he can also attempt a Knowledge (nature) check at DC 15. On a success, the trophy hunter can discern the type and condition of any animals or magical beasts he tracks.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, save DC calculation, ki/monk hook.

### Replaces: all combat style feats

- **Archetype feature:** Firearm Style
- **Description:** At 2nd level, a trophy hunter gains the Amateur Gunslinger feat and Exotic Weapon Proficiency (firearms), and can use any 1st-level gunslinger deed (page 10).
- **Mechanics:**
  - Level hooks: 2, 1.
  - Mechanics summary: At 2nd level, a trophy hunter gains the Amateur Gunslinger feat and Exotic Weapon Proficiency (firearms), and can use any 1st-level gunslinger deed (page 10). At every four levels thereafter, the trophy hunter can take a grit feat or select a gunslinger deed of his level or lower, ranger’s choice.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.
  - Needs implementation review: firearms / gunslinger rules, grit resource, deed subsystem.

### Replaces: hunter’s bond

- **Archetype feature:** Hunter’s Aim (Ex)
- **Description:** At 4th level, a trophy hunter gains a specific understanding of the weaknesses and vulnerabilities of his favored enemies, and his careful study of these enemies reveals the best way to hurt them.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a trophy hunter gains a specific understanding of the weaknesses and vulnerabilities of his favored enemies, and his careful study of these enemies reveals the best way to hurt them. When the trophy hunter makes a firearm attack against a favored enemy, he can target touch AC in the first two range increments of his firearm.
- **Implementation flags:**
  - Likely existing hooks: favored enemy hook.
  - Needs implementation review: firearms / gunslinger rules.

## Parsed source feature headings

- Improved Tracking (Ex)
- Firearm Style
- Hunter’s Aim (Ex)

