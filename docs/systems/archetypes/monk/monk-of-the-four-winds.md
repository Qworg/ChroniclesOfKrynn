# Monk - Monk of the Four Winds

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Four Winds
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Four%20Winds
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Elemental Fist (Su); Slow Time (Su); Aspect Master (Su); Immortality (Su)
- **Replaced / altered class features:** Stunning Fist; abundant step; timeless body; perfect self

## Replacement details

### Replaces: Stunning Fist

- **Archetype feature:** Elemental Fist (Su)
- **Description:** At 1st level, a monk of the four winds gains Elemental Fist as a bonus feat, even if he does not meet the prerequisites.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 5, 10.
  - Mechanics summary: At 1st level, a monk of the four winds gains Elemental Fist as a bonus feat, even if he does not meet the prerequisites. At 5th level, and every five levels thereafter, the monk increases the damage of his Elemental Fist by 1d6 (2d6 at 5th level, 3d6 at 10th level, and so on).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: abundant step

- **Archetype feature:** Slow Time (Su)
- **Description:** At 12th level, a monk of the four winds can use his ki to slow time or quicken his movements, depending on the observer.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a monk of the four winds can use his ki to slow time or quicken his movements, depending on the observer. As a swift action, the monk can expend 6 ki points to gain three standard actions during his turn instead of just one. The monk can use these actions to do the following: take a melee attack action, use a skill, use an extraordinary ability, or take a move action. The monk cannot use these actions to cast spells or use spell-like abilities, and cannot combine them to take full-attack actions. Any move actions the monk makes this turn do not provoke attacks of opportunity.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, ki/monk hook.

### Replaces: timeless body

- **Archetype feature:** Aspect Master (Su)
- **Description:** At 17th level, a monk of the four winds must choose an aspect of one of the great spirits of the world.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a monk of the four winds must choose an aspect of one of the great spirits of the world. Once made, this choice cannot be changed. Once this choice is made, it cannot be changed. The monk must abide by the alignment restrictions of the aspect. If the monk ever changes his alignment to something outside the aspect’s alignment restrictions, he loses this ability and cannot regain it unless his alignment later changes again to match that of the aspect. He can breathe water and gains a swim speed equal to his land speed.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, ki/monk hook, natural attack system.

### Replaces: perfect self

- **Archetype feature:** Immortality (Su)
- **Description:** At 20th level, a monk of the four winds no longer ages.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a monk of the four winds no longer ages. He remains in his current age category forever. Even if the monk comes to a violent end, he spontaneously reincarnates (as the spell) 24 hours later in a place of his choosing within 20 miles of the place he died. The monk must have visited the place in which he returns back to life at least once.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Elemental Fist (Su)
- Slow Time (Su)
- Aspect Master (Su)
- Immortality (Su)

