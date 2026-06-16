# Wizard - Poleiheira Adherent

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Poleiheira Adherent
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Poleiheira%20Adherent
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bonded Book (Sp); Great Odyssey
- **Replaced / altered class features:** Arcane Bond; Arcane School

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Bonded Book (Sp)
- **Description:** A Poleiheira adherent forms a bond with a spellbook.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: A Poleiheira adherent forms a bond with a spellbook. This bonded book becomes intrinsically tied to a Poleiheira adherent’s conscious and subconscious mind. The book always opens to the right page, and she can record any number of spells and other information in her bonded book—when she turns pages, more blank pages appear. Other wizards find it difficult to read the book, which displays information in a seemingly random order: the DC of all Spellcraft checks to copy or prepare spells from the book increases by 10. Each time a Poleiheira adherent attains a new wizard level, she gains four spells (rather than two) to add to the bonded book. The cost and time requirement for writing a new spell into the book are halved.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook.

### Replaces: arcane school

- **Archetype feature:** Great Odyssey
- **Description:** A Poleiheira adherent specializes in exploration and travel rather than a particular school of magic.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 8.
  - Mechanics summary: A Poleiheira adherent specializes in exploration and travel rather than a particular school of magic. She gains the abilities below. Mount (Sp) : A Poleiheira adherent can summon a magical steed to her side (per the mount spell) that lasts up to 2 hours per wizard level. The duration of this ability doesn’t need to be consecutive, but it must be spent in 2-hour increments. When riding a mount summoned with this ability, a Poleiheira adherent can substitute Spellcraft checks for Ride checks. Master Mariner (Su) At 8th level, a Poleiheira adherent can telekinetically control a boat or ship with such skill and finesse that she counts as a number of people equal to her wizard level for the purpose of determining how many crew members are needed to move a water vehicle ( Pathfinder RPG Ultimate Combat 174).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, ki/monk hook.
  - Needs implementation review: vehicle-specific action rules.

## Parsed source feature headings

- Bonded Book (Sp)
- Great Odyssey

