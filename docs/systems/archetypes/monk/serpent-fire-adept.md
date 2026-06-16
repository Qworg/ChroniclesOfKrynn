# Monk - Serpent-Fire Adept

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Serpent-Fire Adept
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Serpent-Fire%20Adept
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Chakra Training; Chakra Expertise (Ex); Light Spirit (Su); Chakra Adept (Ex); Linked Chakras (Ex); Chakra Mastery (Ex)
- **Replaced / altered class features:** stunning fist and the bonus feat gained at 1st level; the bonus feat gained at 2nd level; slow fall and high jump; the bonus feat gained at 6th level; wholeness of body; the bonus feats gained at 10th, 14th, and 18th level

## Replacement details

### Alters: the monk’s class skills

- **Archetype feature:** Class Skills
- **Description:** The serpent-fire adept adds Appraise, Diplomacy, Fly, Heal, Knowledge (arcana), Linguistics, and Survival to her list of class skills, but does not gain Climb, Intimidate, Knowledge (history), Perform, Ride, or Swim as class skills.
- **Mechanics:**
  - Mechanics summary: The serpent-fire adept adds Appraise, Diplomacy, Fly, Heal, Knowledge (arcana), Linguistics, and Survival to her list of class skills, but does not gain Climb, Intimidate, Knowledge (history), Perform, Ride, or Swim as class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: stunning fist

- **Archetype feature:** Chakra Training
- **Description:** A serpent-fire adept gains Chakra Initiate and Psychic Sensitivity as bonus feats.
- **Mechanics:**
  - Level hooks: 2, 1.
  - Mechanics summary: A serpent-fire adept gains Chakra Initiate and Psychic Sensitivity as bonus feats. She need not meet these feats’ prerequisites, and can use her serpent-fire ki from Chakra Initiate to open and maintain her root chakra, despite not being 2nd level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.
  - Needs implementation review: occult/psychic casting.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Chakra Training
- **Description:** A serpent-fire adept gains Chakra Initiate and Psychic Sensitivity as bonus feats.
- **Mechanics:**
  - Level hooks: 2, 1.
  - Mechanics summary: A serpent-fire adept gains Chakra Initiate and Psychic Sensitivity as bonus feats. She need not meet these feats’ prerequisites, and can use her serpent-fire ki from Chakra Initiate to open and maintain her root chakra, despite not being 2nd level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.
  - Needs implementation review: occult/psychic casting.

### Replaces: the bonus feat gained at 2nd level

- **Archetype feature:** Chakra Expertise (Ex)
- **Description:** At 2nd level, the serpent-fire adept gains a bonus equal to 1/2 her monk level on Fortitude and Will saves attempted to maintain awakened chakras.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 8, 16.
  - Mechanics summary: At 2nd level, the serpent-fire adept gains a bonus equal to 1/2 her monk level on Fortitude and Will saves attempted to maintain awakened chakras. At 8th level, when she has opened one or more chakras, she can maintain those chakras (without opening any new chakras) for 1 round without taking a swift action, expending ki, or attempting Fortitude or Will saves to maintain the chakras. This increases to 2 rounds at 16th level. After maintaining her chakras with chakra expertise, the monk must open a new chakra or maintain her open chakras normally before she can use chakra expertise again.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, ki/monk hook.

### Replaces: slow fall and high jump

- **Archetype feature:** Light Spirit (Su)
- **Description:** At 4th level when the serpent-fire adept has her sacral chakra open and chooses to benefit from its power, her fly speed is equal to either her base land speed or her bonus to her base speed from the monk fast movement class ability (whichever is higher).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level when the serpent-fire adept has her sacral chakra open and chooses to benefit from its power, her fly speed is equal to either her base land speed or her bonus to her base speed from the monk fast movement class ability (whichever is higher). She maintains this fly speed for a number of rounds equal to her Wisdom bonus (minimum 1 round), even if she closes her chakras.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the bonus feat gained at 6th level

- **Archetype feature:** Chakra Adept (Ex)
- **Description:** At 6th level, the serpent-fire adept gains Chakra Adept as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, the serpent-fire adept gains Chakra Adept as a bonus feat. She need not meet the feat’s prerequisites. When the serpent-fire adept has used all her rounds of chakra expertise to maintain open chakras, if she does not spend additional ki to maintain her open chakras on the next round, her highest chakra closes and she can spend a swift action to use any one of the abilities of her remaining open chakras. On the round after that, all her chakras close, and if she wishes to reopen them, she must start again with her root chakra.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: wholeness of body

- **Archetype feature:** Linked Chakras (Ex)
- **Description:** At 7th level, the serpent-fire adept can open multiple chakras at once as a standard action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 17.
  - Mechanics summary: At 7th level, the serpent-fire adept can open multiple chakras at once as a standard action. The round that she does this, she is required to make saving throws only to resist being overwhelmed by the highest chakra she opens, though the save DCs are increased by 5. She can do this once per day, plus one additional time per day each at 12th and 17th level.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.

### Replaces: the bonus feats gained at 10th, 14th
- **Archetype feature:** Chakra Mastery (Ex)
- **Description:** At 10th level, the serpent-fire adept gains Chakra Master as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10, 14, 18.
  - Mechanics summary: At 10th level, the serpent-fire adept gains Chakra Master as a bonus feat. She need not meet the feat’s prerequisites. When maintaining her open chakras with chakra expertise, she can spend 1 point of ki to gain the benefits of two chakras rather than one in that round (or three chakras, if she has opened her crown chakra). At 14th level, the serpent-fire adept’s pool of serpent-fire ki increases to 7 points, and at 18th level, it increases to 9 points.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: 18th level

- **Archetype feature:** Chakra Mastery (Ex)
- **Description:** At 10th level, the serpent-fire adept gains Chakra Master as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10, 14, 18.
  - Mechanics summary: At 10th level, the serpent-fire adept gains Chakra Master as a bonus feat. She need not meet the feat’s prerequisites. When maintaining her open chakras with chakra expertise, she can spend 1 point of ki to gain the benefits of two chakras rather than one in that round (or three chakras, if she has opened her crown chakra). At 14th level, the serpent-fire adept’s pool of serpent-fire ki increases to 7 points, and at 18th level, it increases to 9 points.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Chakra Training
- Chakra Expertise (Ex)
- Light Spirit (Su)
- Chakra Adept (Ex)
- Linked Chakras (Ex)
- Chakra Mastery (Ex)

