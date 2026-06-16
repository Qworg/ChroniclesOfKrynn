# Inquisitor - Kinslayer

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Kinslayer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Kinslayer
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Judgment (Su); Greater Brand (Su); Undead Sense (Sp)
- **Replaced / altered class features:** the destruction judgment; detect alignment

## Replacement details

### Replaces: the destruction judgment

- **Archetype feature:** Judgment (Su)
- **Description:** At 1st level, a kinslayer gains the following judgment.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a kinslayer gains the following judgment. Slayer’s Brand (Su) : When using this judgment, the kinslayer gains the ability to brand undead creatures with positive energy. To do so, she must make a successful melee touch attack against the undead creature. This attack deals an amount of positive energy damage equal to 1d6 + the kinslayer’s Charisma modifier, and burns her personal symbol into the undead creature’s flesh, bone, or even its incorporeal form. From that point onward, the kinslayer can sense the existence of the branded creature as if it were the target of a locate creature spell (caster level equal to 1/2 the kinslayer’s inquisitor level). A slayer’s brand lasts until the undead creature is destroyed or until the kinslayer uses this ability on another creature.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Replaces: detect alignment

- **Archetype feature:** Undead Sense (Sp)
- **Description:** At 2nd level, a kinslayer gains the ability to use detect undead as a spell-like ability (caster level equal to the kinslayer’s inquisitor level) at will.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a kinslayer gains the ability to use detect undead as a spell-like ability (caster level equal to the kinslayer’s inquisitor level) at will. If she detects the presence of undead, she can use her monster lore ability to attempt to determine the type of undead detected as well as to reveal any strengths or weaknesses the undead might have. If any of the detected undead are vampires, she gains a bonus on the check equal to her inquisitor level to immediately identify them as such.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Judgment (Su)
- Greater Brand (Su)
- Undead Sense (Sp)

