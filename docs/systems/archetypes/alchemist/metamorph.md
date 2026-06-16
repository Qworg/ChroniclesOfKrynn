# Alchemist - Metamorph

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Metamorph
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Metamorph
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Shapechanger (Su); Mutagen (Ex); Adaptive Physiology (Ex)
- **Replaced / altered class features:** alchemy (which also includes bombs, extracts, and mutagen) and Throw Anything; swift alchemy, swift poisoning, and instant alchemy

## Replacement details

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** A metamorph adds Disguise to her list of class skills.
- **Mechanics:**
  - Mechanics summary: A metamorph adds Disguise to her list of class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: alchemy (which also includes bombs, extracts, and mutagen) and Throw Anything

- **Archetype feature:** Shapechanger (Su)
- **Description:** At 1st level, a metamorph gains the ability to transform herself into another form.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 4, 18, 20, 5, 9, 11, 13, 15.
  - Mechanics summary: At 1st level, a metamorph gains the ability to transform herself into another form. This ability functions like alter self , except as noted here. The effect lasts for 1 hour per metamorph’s alchemist level, or until she changes back. Changing form (to another form or back) is a standard action that doesn’t provoke attacks of opportunity. The metamorph is fatigued for 1 round each time she changes shape. A metamorph can use this ability once per day at 1st level, and an additional time per day at 4th level, and every 2 alchemist levels thereafter, for a total of nine times at 18th level.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, mutagen hook.

### Replaces: swift alchemy, swift poisoning, and instant alchemy

- **Archetype feature:** Adaptive Physiology (Ex)
- **Description:** At 3rd level, a metamorph gains a 25% chance to negate critical hits and precision damage, similar to the preserve organs discovery.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6, 18.
  - Mechanics summary: At 3rd level, a metamorph gains a 25% chance to negate critical hits and precision damage, similar to the preserve organs discovery. This chance increases to 50% at 6th level, and to 75% at 18th level.
- **Implementation flags:**
  - Likely existing hooks: alchemist discovery hook.

## Parsed source feature headings

- Class Skills
- Shapechanger (Su)
- Mutagen (Ex)
- Adaptive Physiology (Ex)

