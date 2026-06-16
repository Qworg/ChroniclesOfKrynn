# Alchemist - Crimson Chymist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Crimson Chymist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Crimson%20Chymist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Crimson Discoveries (Su); Mantis Mutagen (Su)
- **Replaced / altered class features:** Mutagen

## Replacement details

### Alters: discovery

- **Archetype feature:** Crimson Discoveries (Su)
- **Description:** A crimson chymist gains access to several additional unique discoveries, as detailed below.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 10.
  - Mechanics summary: A crimson chymist gains access to several additional unique discoveries, as detailed below. Arms of Achaekek : The small barbs that grow on the crimson chymist’s arms when she drinks her mantis mutagen grow significantly in size, granting her two claw attacks as natural weapons. These claws deal damage as appropriate for her size (1d4 for Medium crimson chymists) and function as secondary attacks. These claws do not replace the chymist’s hands, and she can still use her hands to wield weapons, attack, hold objects, and otherwise use her hands with ease, but she cannot be wearing any item in the wrists slot or any armor—if she dons magic items that occupy the wrists slot or any armor, her claws shrink back to cosmetic barbs that can’t be used in combat as long as the a... A crimson chymist must be at least 6th level before selecting this discovery. Improved Arms of Achaekek : The claws granted by the arms of Achaekek discovery now function as primary weapons when the crimson chymist makes no attacks with manufactured weapons (the claws function as secondary weapons if the chymist attacks with a manufactured weapon).
- **Implementation flags:**
  - Likely existing hooks: mutagen hook, alchemist discovery hook.

### Alters: mutagen

- **Archetype feature:** Mantis Mutagen (Su)
- **Description:** At 1st level, a crimson chymist discovers how to create a specialized mutagen that grants her aspects of a praying mantis.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a crimson chymist discovers how to create a specialized mutagen that grants her aspects of a praying mantis. A mantis mutagen functions as an alchemist mutagen, save that it always enhances Dexterity and applies a penalty to Charisma. When imbibed, the mutagen causes the crimson chymist’s flesh to grow red chitinous plates on her body as natural armor and a row of small, cosmetic barbed hooks along her arms.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, saving throw hook, mutagen hook, AC/natural armor bonus.

## Parsed source feature headings

- Crimson Discoveries (Su)
- Mantis Mutagen (Su)

