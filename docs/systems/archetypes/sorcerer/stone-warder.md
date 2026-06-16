# Sorcerer - Stone Warder

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Stone Warder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Stone%20Warder
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Blood of the Earth; Power of Stone (Su); Rune of Warding (Sp)
- **Replaced / altered class features:** Eschew Materials, the bloodline spell gained at 3rd level, and the bloodline feat gained at 7th level

## Replacement details

### Replaces: Eschew Materials, the bloodline spell gained at 3rd level
- **Archetype feature:** Rune of Warding (Sp)
- **Description:** As a standard action, a stone warder can create a warding rune in any adjacent square.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 1, 3, 7.
  - Mechanics summary: As a standard action, a stone warder can create a warding rune in any adjacent square. The stone warder selects a sorcerer spell known that is at least 1 level lower than the highest-level spell she can cast, and casts it as part of creating the rune of warding. The spell must have a casting time of 1 standard action or less, and it must target one or more creatures. Rather than have its normal effect, the spell is stored in the rune. The first creature to enter the square triggers the rune of warding, and becomes the target of the selected spell. Regardless of the number of targets the spell can normally affect, it affects only the creature that triggers the rune.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, save DC calculation, spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the bloodline feat gained at 7th level

- **Archetype feature:** Rune of Warding (Sp)
- **Description:** As a standard action, a stone warder can create a warding rune in any adjacent square.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 1, 3, 7.
  - Mechanics summary: As a standard action, a stone warder can create a warding rune in any adjacent square. The stone warder selects a sorcerer spell known that is at least 1 level lower than the highest-level spell she can cast, and casts it as part of creating the rune of warding. The spell must have a casting time of 1 standard action or less, and it must target one or more creatures. Rather than have its normal effect, the spell is stored in the rune. The first creature to enter the square triggers the rune of warding, and becomes the target of the selected spell. Regardless of the number of targets the spell can normally affect, it affects only the creature that triggers the rune.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, save DC calculation, spellcasting/spell-list hook, sorcerer bloodline hook.

## Parsed source feature headings

- Blood of the Earth
- Power of Stone (Su)
- Rune of Warding (Sp)

