# Inquisitor - Living Grimoire

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Living Grimoire
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Living%20Grimoire
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Holy Book (Su); Spells; Sacred Word (Su); Blessed Script (Su); Word of God (Su)
- **Replaced / altered class features:** monster lore; judgment; bane, greater bane, second judgment, and third judgment; true judgment

## Replacement details

### Replaces: monster lore

- **Archetype feature:** Holy Book (Su)
- **Description:** At 1st level, a living grimoire forms a supernatural bond with a large ironbound tome containing the holy text of his deity and learns to use it as a weapon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a living grimoire forms a supernatural bond with a large ironbound tome containing the holy text of his deity and learns to use it as a weapon. When wielding the holy book as a weapon, he deals base damage as if it were a cold iron light mace (but see Sacred Word below), is considered proficient with the book, takes no improvised weapon penalty, and gains a +1 bonus on attack rolls with the book. The tome serves as his holy symbol and divine focus, and can be enchanted as a magic weapon. He can replace his bonded tome with another book at any time, though he must perform a 24-hour binding ritual to attune himself to the new book.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

### Alters: orisons and spellcasting and replaces cunning initiative

- **Archetype feature:** Spells
- **Description:** A living grimoire must prepare his spells ahead of time, and can know any number of inquisitor spells.
- **Mechanics:**
  - Level hooks: 1, 0.
  - Mechanics summary: A living grimoire must prepare his spells ahead of time, and can know any number of inquisitor spells. He uses Intelligence instead of Wisdom as his key spellcasting ability score (to determine his spell DCs, bonus spells per day, modifier on concentration checks, and so on), and to determine the effects and number of uses of his domain powers. The living grimoire receives the same number of spell slots per day as a warpriest of his inquisitor level, and receives bonus spells per day if he has a high Intelligence score. He must choose and prepare his spells ahead of time by choosing a time each day for 1 hour of quiet contemplation while he studies his holy book. At 1st level, the living grimoire’s holy book contains all 0-level inquisitor spells plus three 1st-level inquisitor spells of his choice. He also selects a number of additional 1st-level inquisitor spells equal to his Intelligence modifier to add to his holy book.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook, cleric domain hook.

### Replaces: judgment

- **Archetype feature:** Sacred Word (Su)
- **Description:** At 1st level, a living grimoire learns to charge his holy book with the power of his faith.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 4, 20.
  - Mechanics summary: At 1st level, a living grimoire learns to charge his holy book with the power of his faith. The inquisitor gains the benefits of the warpriest’s sacred weapon ACG class ability, but the benefits apply only to his bonded holy book. Like a warpriest’s sacred weapon, the living grimoire’s book deals damage based on the inquisitor’s level, not the book’s base damage (unless the inquisitor chooses to use the book’s base damage). At 4th level, the living grimoire gains the ability to enhance his holy book with divine power as a swift action. This ability grants the holy book a +1 enhancement bonus. For every 4 inquisitor levels the living grimoire has beyond 4th, this bonus increases by 1 (to a maximum of +5 at 20th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: bane, greater bane, second judgment, and third judgment

- **Archetype feature:** Blessed Script (Su)
- **Description:** At 5th level, a living grimoire can permanently tattoo one spell of 2nd level or lower from his holy book onto his body.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 2, 8, 3, 12, 4, 16.
  - Mechanics summary: At 5th level, a living grimoire can permanently tattoo one spell of 2nd level or lower from his holy book onto his body. The tattooed spell cannot have an expensive material component or focus. The living grimoire can prepare any tattooed spell without needing his holy book, and can cast his tattooed spells as a spell-like ability once per day. At 8th level, the living grimoire can tattoo one additional spell of 3rd level or lower upon himself. At 12th level, he can tattoo one additional spell of 4th level or lower upon himself, and at 16th level he can tattoo a final additional spell of any level upon himself. When the living grimoire uses these spell-like abilities, the tattooed holy script associated with the spell-like ability glows as per light for a number of rounds equal to the spell’s level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: true judgment

- **Archetype feature:** Word of God (Su)
- **Description:** At 20th level, a living grimoire can smite his foes with the holy word of his deity.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a living grimoire can smite his foes with the holy word of his deity. Up to seven times per day, the inquisitor can make a single melee attack with his holy book against a target. If the attack hits, it deals damage normally and the target must succeed at a Fortitude save or die (DC = 10 + 1/2 the living grimoire’s inquisitor level + his Intelligence modifier). Regardless of whether the save is successful, the target creature is immune to the living grimoire’s word of god ability for 24 hours. Once the living grimoire uses this ability, he can’t use it again for 1d4 rounds.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, smite hook.

## Parsed source feature headings

- Holy Book (Su)
- Spells
- Sacred Word (Su)
- Blessed Script (Su)
- Word of God (Su)

