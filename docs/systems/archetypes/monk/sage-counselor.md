# Monk - Sage Counselor

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Sage Counselor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Sage%20Counselor
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Cunning Fist (Ex); Feinting Flurry; Deceptive Ki (Su)
- **Replaced / altered class features:** the bonus feats gained at 1st, 2nd, and 6th levels

## Replacement details

### Alters: the monk’s class skills

- **Archetype feature:** Class Skills
- **Description:** A sage counselor adds Bluff, Diplomacy, and Knowledge (nobility) to his list of class skills, instead of Climb, Escape Artist, and Perception.
- **Mechanics:**
  - Mechanics summary: A sage counselor adds Bluff, Diplomacy, and Knowledge (nobility) to his list of class skills, instead of Climb, Escape Artist, and Perception.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the bonus feats gained at 1st, 2nd
- **Archetype feature:** Cunning Fist (Ex)
- **Description:** A sage counselor gains Combat Expertise as a bonus feat, even if he doesn’t meet the prerequisites, and he can ignore the Intelligence prerequisite on feats that have Combat Expertise as a prerequisite.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6.
  - Mechanics summary: A sage counselor gains Combat Expertise as a bonus feat, even if he doesn’t meet the prerequisites, and he can ignore the Intelligence prerequisite on feats that have Combat Expertise as a prerequisite. At 2nd level, he gains Improved Feint, and at 6th level, he gains Greater Feint, even if he doesn’t meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: 6th levels

- **Archetype feature:** Cunning Fist (Ex)
- **Description:** A sage counselor gains Combat Expertise as a bonus feat, even if he doesn’t meet the prerequisites, and he can ignore the Intelligence prerequisite on feats that have Combat Expertise as a prerequisite.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6.
  - Mechanics summary: A sage counselor gains Combat Expertise as a bonus feat, even if he doesn’t meet the prerequisites, and he can ignore the Intelligence prerequisite on feats that have Combat Expertise as a prerequisite. At 2nd level, he gains Improved Feint, and at 6th level, he gains Greater Feint, even if he doesn’t meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Alters: flurry of blows and ki pool, and it replaces the bonus feat gained at 10th level

- **Archetype feature:** Feinting Flurry
- **Description:** At 4th level, a sage counselor can spend 1 ki point while performing a flurry of blows to feint an opponent as a swift action, but he can’t spend 1 ki point to make an additional attack when making a flurry of blows.
- **Mechanics:**
  - Level hooks: 4, 10.
  - Mechanics summary: At 4th level, a sage counselor can spend 1 ki point while performing a flurry of blows to feint an opponent as a swift action, but he can’t spend 1 ki point to make an additional attack when making a flurry of blows. At 10th level, he can also choose to replace his first attack during a flurry of blows with a feint check.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Alters: ki pool

- **Archetype feature:** Deceptive Ki (Su)
- **Description:** At 4th level, the sage counselor can spend 1 point from his ki pool as a swift action to give himself a +4 insight bonus on his next Bluff check.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, the sage counselor can spend 1 point from his ki pool as a swift action to give himself a +4 insight bonus on his next Bluff check. The sage counselor does not gain the ability to spend ki to increase his speed by 20 feet for 1 round.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Cunning Fist (Ex)
- Feinting Flurry
- Deceptive Ki (Su)

