# Sorcerer - Tattooed Sorcerer

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Tattooed Sorcerer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Tattooed%20Sorcerer
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Familiar Tattoo (Su); Varisian Tattoo (Ex); Bloodline Tattoos (Ex); Create Spell Tattoo (Su); Enhanced Varisian Tattoo (Su)
- **Replaced / altered class features:** her 1st-level bloodline power; her Eschew Materials bonus feat; the bloodline feat gained at 7th level; the 9th-level bloodline power

## Replacement details

### Replaces: her 1st-level bloodline power

- **Archetype feature:** Familiar Tattoo (Su)
- **Description:** A tattooed sorcerer gains a familiar as an arcane bond, as a wizard equal to her sorcerer level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: A tattooed sorcerer gains a familiar as an arcane bond, as a wizard equal to her sorcerer level. Her sorcerer levels stack with any wizard or witch levels she possesses when determining the powers of her familiar—this ability does not allow her to have both a familiar and a bonded item. Unlike most familiars, her familiar can transform itself into a tattoo that she carries in her flesh. Transforming into a tattoo or back to normal familiar form is a move action for her familiar. In tattoo form it continues to grant its special familiar ability ( Core Rulebook 82), but otherwise has no abilities and can take no actions except to transform from tattoo into creature. A familiar tattoo cannot be erased or dispelled.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: her Eschew Materials bonus feat

- **Archetype feature:** Varisian Tattoo (Ex)
- **Description:** At 1st level, the tattooed sorcerer gains Varisian Tattoo (see the Inner Sea World Guide ) as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the tattooed sorcerer gains Varisian Tattoo (see the Inner Sea World Guide ) as a bonus feat. If she doesn’t have Spell Focus, she may choose which school of magic her Varisian Tattoo enhances.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the bloodline feat gained at 7th level

- **Archetype feature:** Create Spell Tattoo (Su)
- **Description:** At 7th level, a tattooed sorcerer can create a spell tattoo (see page 16) once per day with a single touch as a standard action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7, 11, 15.
  - Mechanics summary: At 7th level, a tattooed sorcerer can create a spell tattoo (see page 16) once per day with a single touch as a standard action. The recipient of the spell tattoo must be willing to receive the spell tattoo. If she gives the spell tattoo to herself, it does not count against the regular limit of magic tattoos she can have. The spell tattoo must be of a spell that she knows that has no material or focus component. She can maintain one spell tattoo created by this ability at a time—if she uses this ability again, the previous spell tattoo she created fades away. Spell tattoos she creates with Inscribe Magic Tattoo do not count against this limit.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the 9th-level bloodline power

- **Archetype feature:** Enhanced Varisian Tattoo (Su)
- **Description:** At 9th level, the tattooed sorcerer can pick any one spell she knows for which she has a Varisian Tattoo feat.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, the tattooed sorcerer can pick any one spell she knows for which she has a Varisian Tattoo feat. This spell must be one that lacks focus components and costly material components. She can now use that spell as a spell-like ability once per day. This spell-like ability is not enhanced by her Varisian Tattoo, but it functions at +2 caster levels above her sorcerer caster level. Whenever she gains a bloodline power at a later date, she may change this spell-like ability to another qualifying spell.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, sorcerer bloodline hook.

## Parsed source feature headings

- Familiar Tattoo (Su)
- Varisian Tattoo (Ex)
- Bloodline Tattoos (Ex)
- Create Spell Tattoo (Su)
- Enhanced Varisian Tattoo (Su)

