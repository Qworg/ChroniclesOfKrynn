# Inquisitor - Iconoclast

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Iconoclast
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Iconoclast
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Shake Effects (Ex); Detect Magic (Sp); Dispelling Attack (Sp); Negating Critical (Sp); Destroy Artifact (Sp)
- **Replaced / altered class features:** monster lore; detect alignment; discern lies; exploit weakness; true judgment

## Implementation details

### Replaces: monster lore

- **Archetype feature:** Shake Effects (Ex)
- **Description:** At 1st level, an iconoclast gains a +2 bonus on all saving throws against effects that come from a magic item.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an iconoclast gains a +2 bonus on all saving throws against effects that come from a magic item.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: detect alignment

- **Archetype feature:** Detect Magic (Sp)
- **Description:** At 2nd level, an iconoclast gains the ability to detect magic at will.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an iconoclast gains the ability to detect magic at will.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: discern lies

- **Archetype feature:** Dispelling Attack (Sp)
- **Description:** At 5th level, once per day as a standard action, an iconoclast can make a melee or ranged attack against an opponent, and if she hits, she can affect that opponent as if she had cast dispel magic, using the targeted dispel option.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, once per day as a standard action, an iconoclast can make a melee or ranged attack against an opponent, and if she hits, she can affect that opponent as if she had cast dispel magic, using the targeted dispel option. If she misses, this ability is wasted. Use her inquisitor level as the caster level of the dispel magic effect.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: exploit weakness

- **Archetype feature:** Negating Critical (Sp)
- **Description:** At 14th level, when an iconoclast confirms a critical hit, the creature she hit must succeed at a Fortitude save at DC 10 + 1/2 the iconoclast’s caster level + the iconoclast’s Wisdom modifier for each non-artifact magic item the target is wearing or carrying.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, when an iconoclast confirms a critical hit, the creature she hit must succeed at a Fortitude save at DC 10 + 1/2 the iconoclast’s caster level + the iconoclast’s Wisdom modifier for each non-artifact magic item the target is wearing or carrying. On a failed saving throw, the target of the critical hit can neither use nor gain benefit from any minor magic item for 1d4 rounds. This ability can be used in conjunction with critical feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: true judgment

- **Archetype feature:** Destroy Artifact (Sp)
- **Description:** At 20th level, an iconoclast has the ability to destroy minor artifacts.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, an iconoclast has the ability to destroy minor artifacts. The iconoclast must have possession of the minor artifact for at least a week, which she must spend in uninterrupted contemplation of the nature of the artifact. At the end of that week, she makes a DC 30 Spellcraft check to unweave the fabric of the item, and if she is successful, the artifact is destroyed. If the iconoclast fails, she cannot try to destroy the artifact again with this ability, but another iconoclast can.
- **Implementation flags:**
  - judgment subsystem.
  - crafting subsystem.

## Parsed source feature headings

- Shake Effects (Ex)
- Detect Magic (Sp)
- Dispelling Attack (Sp)
- Negating Critical (Sp)
- Destroy Artifact (Sp)
