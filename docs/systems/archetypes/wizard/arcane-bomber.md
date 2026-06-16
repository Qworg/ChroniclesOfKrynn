# Wizard - Arcane Bomber

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Arcane Bomber
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Arcane%20Bomber
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bomb (Su); Spellblast Bombs (Su); School of the Bomb
- **Replaced / altered class features:** arcane bond; cantrips, but the arcana bomber gains the detect magic and read magic cantrips and places them in his spellbook; arcane school

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Bomb (Su)
- **Description:** At 1st level, the arcane bomber gains an ability nearly identical to the alchemist’s bomb ability.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the arcane bomber gains an ability nearly identical to the alchemist’s bomb ability. Unlike the alchemist, at 1st level, the arcane bomber chooses one type of energy from the following list: acid, cold, fire, and electricity. He can throw bombs of that type, but cannot modify them with discoveries. This ability stacks with the alchemist bomb ability to determine the level of bomb damage, but an arcane bomber that becomes an alchemist does not gain that class’s bomb ability, nor does an alchemist that becomes an arcane bomber gain this bomb ability.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook.

### Replaces: cantrips, but the arcana bomber gains the detect magic and read magic cantrips and places them in his spellbook

- **Archetype feature:** Spellblast Bombs (Su)
- **Description:** At 1st level, as a swift action, an arcane bomber can sacrifice one of his spells to empower the next bomb he throws during his turn.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, as a swift action, an arcane bomber can sacrifice one of his spells to empower the next bomb he throws during his turn. When he does, he gains a bonus to hit with the next bomb he throws before the end of his turn equal to the level of the spell he sacrificed, and a bonus to damage equal to twice the level of the spell. He can cast either of these as 1st-level spells.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, alchemist bomb hook.

### Replaces: arcane school

- **Archetype feature:** School of the Bomb
- **Description:** The creation and use of bombs is often so engrossing or intellectually taxing that an arcane bomber forsakes four schools of magic.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: The creation and use of bombs is often so engrossing or intellectually taxing that an arcane bomber forsakes four schools of magic. These opposition schools are chosen at 1st level and cannot be changed later. An arcane bomber who prepares spells from his opposition school must use two spell slots of that level to prepare the spell. In addition, the arcane bomber takes a –4 penalty on any skill checks made when crafting a magic item that has a spell from one of his opposition schools.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, spellcasting/spell-list hook, alchemist bomb hook, ki/monk hook.

## Parsed source feature headings

- Bomb (Su)
- Spellblast Bombs (Su)
- School of the Bomb

