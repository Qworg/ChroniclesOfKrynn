# Monk - Ironskin Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Ironskin Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Ironskin%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Iron Skin (Ex); Bonus Feat; Resilience (Ex); Ki Pool (Su); Staggering Blow (Ex); Tough as Nails (Ex); Evasion (Ex); Surefooted (Ex); Unbreakable (Ex)
- **Replaced / altered class features:** the monk’s AC bonus ability and the ability to add his Wisdom bonus to his AC; evasion; high jump; fast movement and slow fall; improved evasion; tongue of the sun and moon; perfect self

## Implementation details

### Replaces: the monk’s AC bonus ability and the ability to add his Wisdom bonus to his AC

- **Archetype feature:** Iron Skin (Ex)
- **Description:** At 1st level, an ironskin monk gains a +1 bonus to his natural armor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 4.
  - **Rules text to implement:** At 1st level, an ironskin monk gains a +1 bonus to his natural armor. This bonus stacks with any existing natural armor the ironskin monk already has. At 4th level, and every 4 levels thereafter, this bonus increases by +1.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feat
- **Description:** At 1st level, an ironskin monk adds Power Attack to his list of bonus feats.
- **Detailed mechanics:**
  - **Level hooks:** 1, 6, 10.
  - **Rules text to implement:** At 1st level, an ironskin monk adds Power Attack to his list of bonus feats. At 6th level, he adds Improved Sunder to the list. At 10th level, he adds Greater Sunder to the list. These bonus feat choices replace Dodge, Mobility, and Spring Attack on his bonus feat list.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: evasion

- **Archetype feature:** Resilience (Ex)
- **Description:** At 2nd level, an ironskin monk can shake off the physical effects of certain attacks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an ironskin monk can shake off the physical effects of certain attacks. If he makes a Fortitude saving throw against an attack that has a reduced effect on a successful save, he instead avoids the effect entirely. This ability can be used only if the monk is wearing light armor or no armor. A helpless monk does not gain the benefits of resilience.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the ability to increase speed with ki

- **Archetype feature:** Ki Pool (Su)
- **Description:** At 4th level, an ironskin monk can spend 1 point from his ki pool to gain a damage bonus equal to 1/2 his level against objects and constructs for 1 round.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an ironskin monk can spend 1 point from his ki pool to gain a damage bonus equal to 1/2 his level against objects and constructs for 1 round.
- **Implementation flags:**
  - ki subsystem.

### Replaces: high jump

- **Archetype feature:** Staggering Blow (Ex)
- **Description:** At 5th level, an ironskin monk attacking with an unarmed strike can spend 1 point from his ki pool as a free action after a successful critical hit to stagger the creature struck for 1 round (Fort DC 10 + 1/2 the ironskin monk’s level + the ironskin monk’s Wisdom modifier negates).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, an ironskin monk attacking with an unarmed strike can spend 1 point from his ki pool as a free action after a successful critical hit to stagger the creature struck for 1 round (Fort DC 10 + 1/2 the ironskin monk’s level + the ironskin monk’s Wisdom modifier negates).
- **Implementation flags:**
  - ki subsystem.

### Replaces: fast movement and slow fall

- **Archetype feature:** Tough as Nails (Ex)
- **Description:** At 6th level, an ironskin monk gains DR 1/—.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6, 9.
  - **Rules text to implement:** At 6th level, an ironskin monk gains DR 1/—. Subtract 1 point from the damage the ironskin monk takes each time he is dealt damage from a weapon or a natural attack. This damage reduction increases by 1 point at 9th level and every 3 levels thereafter. Damage reduction can reduce damage to 0 but not below 0.
- **Implementation flags:**
  - ki subsystem.

### Replaces: improved evasion

- **Archetype feature:** Evasion (Ex)
- **Description:** At 9th level, an ironskin monk gains evasion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, an ironskin monk gains evasion.
- **Implementation flags:**
  - ki subsystem.

### Replaces: tongue of the sun and moon

- **Archetype feature:** Surefooted (Ex)
- **Description:** At 17th level, an ironskin monk’s speed is not reduced by difficult terrain.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, an ironskin monk’s speed is not reduced by difficult terrain.
- **Implementation flags:**
  - ki subsystem.

### Replaces: perfect self

- **Archetype feature:** Unbreakable (Ex)
- **Description:** At 20th level, an ironskin monk sets aside many of the frailties of mortal flesh.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, an ironskin monk sets aside many of the frailties of mortal flesh. He becomes immune to death effects and stunning. He is not subject to ability damage or ability drain, and has a 75% chance of ignoring the extra damage dealt by critical hits and sneak attacks.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Iron Skin (Ex)
- Bonus Feat
- Resilience (Ex)
- Ki Pool (Su)
- Staggering Blow (Ex)
- Tough as Nails (Ex)
- Evasion (Ex)
- Surefooted (Ex)
- Unbreakable (Ex)
