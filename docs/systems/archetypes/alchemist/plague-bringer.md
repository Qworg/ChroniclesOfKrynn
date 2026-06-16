# Alchemist - Plague Bringer

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Plague Bringer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Plague%20Bringer
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Plague Vial (Su); Disease Resistance (Ex); Discoveries
- **Replaced / altered class features:** mutagen; all increments of poison resistance and poison immunity

## Replacement details

### Replaces: mutagen

- **Archetype feature:** Plague Vial (Su)
- **Description:** At 1st level, a plague bringer can create a plague vial, an alchemically grown and concentrated disease sample.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a plague bringer can create a plague vial, an alchemically grown and concentrated disease sample. It takes 1 hour to prepare a plague vial, and once prepared, the vial remains potent until used. A plague bringer can only maintain 1 plague vial at a time—if he prepares a second vial, any existing plague vial becomes inert. A plague vial that is not in a plague bringer’s possession becomes inert until a plague bringer picks it up again. It’s a standard action to drink a plague vial. Upon being imbibed, the plague vial infects the plague bringer’s blood, sweat, tears, and other bodily fluids for 10 minutes per class level.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, mutagen hook, alchemist discovery hook, ki/monk hook.

### Replaces: all increments of poison resistance and poison immunity

- **Archetype feature:** Disease Resistance (Ex)
- **Description:** At 2nd level, a plague bringer gains a +2 bonus on all saving throws against disease.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 5, 8, 10.
  - Mechanics summary: At 2nd level, a plague bringer gains a +2 bonus on all saving throws against disease. This bonus increases to +4 at 5th level, and to +6 at 8th level. At 10th level, a plague bringer becomes completely immune to disease (including magical diseases).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Plague Vial (Su)
- Disease Resistance (Ex)
- Discoveries

