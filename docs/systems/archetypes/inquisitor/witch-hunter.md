# Inquisitor - Witch Hunter

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Witch Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Witch%20Hunter
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spell Sage (Ex); Knowledgeable Defense; Spell Scent; Witch’s Bane Judgment (Ex)
- **Replaced / altered class features:** monster lore; detect alignment , discern lies , and true judgment; track; exploit weakness

## Replacement details

### Replaces: monster lore

- **Archetype feature:** Spell Sage (Ex)
- **Description:** At 1st level, a witch hunter adds her Wisdom modifier on Spellcraft checks in addition to her Intelligence modifier when attempting to identify a spell as it is being cast, to identify the properties of a magic item using detect magic , or to decipher a scroll.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a witch hunter adds her Wisdom modifier on Spellcraft checks in addition to her Intelligence modifier when attempting to identify a spell as it is being cast, to identify the properties of a magic item using detect magic , or to decipher a scroll.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: detect alignment , discern lies , and true judgment

- **Archetype feature:** Knowledgeable Defense
- **Description:** At 2nd level, a witch hunter who identifies a spell with Spellcraft gains a bonus against its effects, either a +1 bonus on saving throws or a +1 dodge bonus to AC against this spell.
- **Mechanics:**
  - Level hooks: 2, 18, 20.
  - Mechanics summary: At 2nd level, a witch hunter who identifies a spell with Spellcraft gains a bonus against its effects, either a +1 bonus on saving throws or a +1 dodge bonus to AC against this spell. This bonus increases every four levels (to a maximum of +5 at 18th level). At 20th level, once per day as a swift action, she can grant this bonus to all her allies within 60 feet, for 1 minute. The allies gain the bonus when the witch hunter identifies the spell, and those among the allies who have at least 1 rank in Spellcraft can aid the witch hunter’s next Spellcraft check as a swift action while under the effect of this ability.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: track

- **Archetype feature:** Spell Scent
- **Description:** At 6th level, the witch hunter learns how to sense unique spell signatures, and can follow the trail of a cast spell or spell effect cast back to its source.
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: At 6th level, the witch hunter learns how to sense unique spell signatures, and can follow the trail of a cast spell or spell effect cast back to its source. Once per day, when the witch hunter comes into contact with or is exposed to a spell effect or a magic item, she can spend a full-round action to examine the spell effect or magic item, and then gains the effect of a locate creature spell. She can do this even if the spell effect was instantaneous, but must start her examination within 1 round after she experienced the spell’s effect. Instead of locating a known creature, the witch hunter locates the caster of the spell effect or magic item she examined. Doing so does not allow the witch hunter to gain any intelligence about the spellcaster other than its location.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: exploit weakness

- **Archetype feature:** Witch’s Bane Judgment (Ex)
- **Description:** At 14th level, a witch hunter gains the following judgment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a witch hunter gains the following judgment. Witch’s Bane : Any creature that casts an arcane spell within 30 feet of the witch hunter takes a –2 penalty to AC against her attacks and a –2 penalty on saving throws against her spells while this judgment remains in effect.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, spellcasting/spell-list hook.

## Parsed source feature headings

- Spell Sage (Ex)
- Knowledgeable Defense
- Spell Scent
- Witch’s Bane Judgment (Ex)

