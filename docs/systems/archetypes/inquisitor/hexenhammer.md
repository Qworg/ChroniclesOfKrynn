# Inquisitor - Hexenhammer

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Hexenhammer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Hexenhammer
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Withering Gaze (Su); Pride and Penance (Ex); Cunning Mind (Ex); Hexcrafter (Su); Dark Trade (Su); Witchcraft (Ex)
- **Replaced / altered class features:** monster lore and stern gaze; cunning initiative; teamwork feats; solo tactics

## Replacement details

### Replaces: monster lore and stern gaze

- **Archetype feature:** Withering Gaze (Su)
- **Description:** Hexenhammers study the effects of a witch’s evil eye, and can use this dark magic to steel their gaze in a similar manner.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: Hexenhammers study the effects of a witch’s evil eye, and can use this dark magic to steel their gaze in a similar manner. Beginning at 1st level, whenever a hexenhammer successfully demoralizes a creature as a standard action, instead of applying the shaken condition, she can apply the effects of the witch evil eye APG hex as if she were a 1stlevel witch (save DC = 10 + 1/2 the hexenhammer’s inquisitor level + her Wisdom modifier).
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.
  - Needs implementation review: witch/shaman hex mechanics.

### Alters: domain

- **Archetype feature:** Pride and Penance (Ex)
- **Description:** Hexenhammers are deeply conflicted about their dealings with dark powers.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Hexenhammers are deeply conflicted about their dealings with dark powers. If a hexenhammer uses a hex or casts a spell gained from the witch class spell list, she temporarily loses access to her domain abilities and her cunning mind bonus until she undergoes a brief period of penance and atonement that takes 1 minute of quiet prayer and contemplation; this atonement doesn’t require any additional cost, and it automatically restores the lost abilit... If the hexenhammer uses her dark trade ability (see below) to trade uses of judgment for hexes, she loses access to her domain abilities and cunning mind bonus until the next time she regains her spell slots for the day.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, cleric domain hook.
  - Needs implementation review: witch/shaman hex mechanics.

### Replaces: cunning initiative

- **Archetype feature:** Cunning Mind (Ex)
- **Description:** At 2nd level, a hexenhammer gains a +2 bonus on saving throws against hexes, curses, spells of the necromancy school, and spells with the evil descriptor.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a hexenhammer gains a +2 bonus on saving throws against hexes, curses, spells of the necromancy school, and spells with the evil descriptor.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.
  - Needs implementation review: witch/shaman hex mechanics.

### Replaces: teamwork feats

- **Archetype feature:** Hexcrafter (Su)
- **Description:** Beginning at 3rd level, a hexenhammer learns to turn some powers of witches to her own advantage.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 6, 9, 18, 12.
  - Mechanics summary: Beginning at 3rd level, a hexenhammer learns to turn some powers of witches to her own advantage. She learns either the blight APG , the misfortune APG , or the slumber APG hex from the witch’s hex list, and can use that hex once per day as a standard action, using her inquisitor level in place of a witch level. If the hex allows a saving throw, the save DC to resist the hex is equal to 10 + 1/2 the inquisitor’s level + the inquisitor’s Wisdom modifier. At 6th level, 12th, and 15th levels, the hexenhammer learns an additional hex from her available hexes. At 9th level and 18th level, the hexenhammer can use any one of her hexes one additional time per day. At 12th level, the hexenhammer adds the agony APG , nightmares APG , and retribution APG major hexes to her list of learnable hexes.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, saving throw hook, save DC calculation.
  - Needs implementation review: witch/shaman hex mechanics.

### Replaces: solo tactics

- **Archetype feature:** Dark Trade (Su)
- **Description:** At 3rd level, a hexenhammer can forgo the power of her judgments and succumb to the temptation of darker powers.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a hexenhammer can forgo the power of her judgments and succumb to the temptation of darker powers. She can trade a daily use of judgment to instead gain an additional use of one of her hexes.
- **Implementation flags:**
  - Needs implementation review: witch/shaman hex mechanics.

### Alters: the inquisitor’s spellcasting

- **Archetype feature:** Witchcraft (Ex)
- **Description:** At 5th level and at every 3 inquisitor levels thereafter, a hexenhammer can learn a witch spell in place of a spell she already knows.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 1.
  - Mechanics summary: At 5th level and at every 3 inquisitor levels thereafter, a hexenhammer can learn a witch spell in place of a spell she already knows. In effect, she loses an old spell in exchange for a new one selected from the witch class spell list. The new spell’s level must be the same as that of the spell being exchanged, and it must be at least 1 level lower than the highest-level inquisitor spell she can cast. The hexenhammer can swap out only a single spell at any given level and must choose whether or not to swap the spell at the same time she gains new spells known for the level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.
  - Needs implementation review: witch/shaman hex mechanics.

## Parsed source feature headings

- Withering Gaze (Su)
- Pride and Penance (Ex)
- Cunning Mind (Ex)
- Hexcrafter (Su)
- Dark Trade (Su)
- Witchcraft (Ex)

