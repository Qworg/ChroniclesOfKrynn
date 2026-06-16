# Paladin - Banishing Warden

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Banishing Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Banishing%20Warden
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Smite Evil (Su); Banishing Smite (Su); Smiting Aura (Su)
- **Replaced / altered class features:** the mercy gained at 3rd level

## Replacement details

### Alters: smite evil

- **Archetype feature:** Smite Evil (Su)
- **Description:** A banishing warden’s smite evil deals its bonus damage only on the first attack against outsiders (but not dragons or undead).
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A banishing warden’s smite evil deals its bonus damage only on the first attack against outsiders (but not dragons or undead). However, it damages any evil outsider, not only those with the evil subtype (including native outsiders).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, smite hook.

### Replaces: the mercy gained at 3rd level

- **Archetype feature:** Banishing Smite (Su)
- **Description:** At 3rd level, once per day when the banishing warden confirms a critical hit against a target of her smite evil effect, she can attempt to forcibly banish the target to its home plane.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 10, 15, 6.
  - Mechanics summary: At 3rd level, once per day when the banishing warden confirms a critical hit against a target of her smite evil effect, she can attempt to forcibly banish the target to its home plane. The creature struck must succeed at a Will save (DC = 10 + half the banishing warden’s level + the banishing warden’s Charisma modifier) or be sent back to its home plane as per dismissal . At 10th level, a creature dismissed in this manner takes an amount of damage equal to 2 points per paladin level at the start of its next turn. The banishing warden gains an additional daily use of this ability at 9th and 15th level. A banishing warden still receives the benefits of the mercy class ability starting at 6th level and onward.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, smite hook, paladin mercy hook.

### Alters: aura of justice

- **Archetype feature:** Smiting Aura (Su)
- **Description:** At 11th level, when an ally of the banishing warden is affected by her aura of justice, that ally can use banishing smite.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, when an ally of the banishing warden is affected by her aura of justice, that ally can use banishing smite. This counts toward the banishing warden’s number of uses per day and cannot be activated if the banishing warden has no uses of banishing smite remaining.
- **Implementation flags:**
  - Likely existing hooks: smite hook.

## Parsed source feature headings

- Class Skills
- Smite Evil (Su)
- Banishing Smite (Su)
- Smiting Aura (Su)

