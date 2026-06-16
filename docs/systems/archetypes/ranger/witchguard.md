# Ranger - Witchguard

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Witchguard
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Witchguard
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Defend Charge (Ex); Bodyguard (Ex); Patron (Su); Sworn Defender (Ex)
- **Replaced / altered class features:** hunter’s bond; endurance; woodland stride

## Replacement details

### Replaces: hunter’s bond

- **Archetype feature:** Defend Charge (Ex)
- **Description:** At 4th level, a witchguard forms a bond with a spellcaster he has sworn to defend.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 5.
  - Mechanics summary: At 4th level, a witchguard forms a bond with a spellcaster he has sworn to defend. Once per day, this bond allows the witchguard to spend a move action to grant an adjacent spellcaster a +2 dodge bonus to AC and a +2 circumstance bonus on concentration checks. At 5th level and every 5 levels thereafter, these bonuses increase by 2. The bonuses last for a number of rounds equal to the witchguard’s Wisdom modifier (minimum 1). At 4th level and every 3 levels thereafter, the witchguard can use this ability one additional time per day.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: endurance

- **Archetype feature:** Bodyguard (Ex)
- **Description:** At 3rd level, a witchguard gains Bodyguard APG as a bonus feat, even if he doesn’t meet the prerequisite.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a witchguard gains Bodyguard APG as a bonus feat, even if he doesn’t meet the prerequisite.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: woodland stride

- **Archetype feature:** Sworn Defender (Ex)
- **Description:** At 7th level, a witchguard gains In Harm’s Way APG as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a witchguard gains In Harm’s Way APG as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Class Skills
- Defend Charge (Ex)
- Bodyguard (Ex)
- Patron (Su)
- Sworn Defender (Ex)

