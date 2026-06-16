# Wizard - Worldseeker

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Worldseeker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Worldseeker
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Walk the Planes (Sp, Su); Planar Adaptation (Su); Planar Associates (Ex); Planar Redoubt (Sp)
- **Replaced / altered class features:** Scribe Scroll; 6th/8th-level School Ability; Arcane Bond; 5th, 15th-level Bonus Feat

## Replacement details

### Replaces: Scribe Scroll

- **Archetype feature:** Walk the Planes (Sp, Su)
- **Description:** A worldseeker learns every plane’s place in the Great Beyond and trains to survive even on the harshest of them.
- **Mechanics:**
  - Mechanics summary: A worldseeker learns every plane’s place in the Great Beyond and trains to survive even on the harshest of them. She gains a +2 bonus on Knowledge (planes) checks and is constantly under the effects of endure elements.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the school ability normally gained at 6th or 8th level

- **Archetype feature:** Planar Adaptation (Su)
- **Description:** At 8th level, a worldseeker is continually protected from planar environments as by planar adaptation.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8, 15.
  - Mechanics summary: At 8th level, a worldseeker is continually protected from planar environments as by planar adaptation. At 15th level, she can extend that benefit to all allies within 30 feet of her.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: arcane bond and replaces the bonus feat gained at 5th level

- **Archetype feature:** Planar Associates (Ex)
- **Description:** A worldseeker’s travels and dealings across the planes allow her to make connections she can call upon when necessary to gain assistance without needing to resort to planar binding.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 7, 4, 6, 11, 8, 15.
  - Mechanics summary: A worldseeker’s travels and dealings across the planes allow her to make connections she can call upon when necessary to gain assistance without needing to resort to planar binding. A worldseeker must choose a familiar for her arcane bond. At 5th level, she gains Improved Familiar as a bonus feat and must choose an outsider familiar that matches her alignment exactly; she can choose an outsider in this way even if it normally requires a 7th-level spellcaster as its master. At 7th level, a worldseeker automatically learns lesser planar ally as a 4th-level wizard spell. She automatically learns planar ally as a 6th-level wizard spell at 11th level, and greater planar ally as an 8th-level wizard spell at 15th level. She can swap out a prepared spell of an equal spell level to spontaneously cast any of these three spells (one 4th-level spell for lesser planar ally, a 6th-level spell for planar ally, and a 8th level spell for greater planar ally).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the bonus feat gained at 15th level

- **Archetype feature:** Planar Redoubt (Sp)
- **Description:** At 15th level, a worldseeker creates a planar redoubt, a personal demiplane to which she can retreat to rest and plan.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a worldseeker creates a planar redoubt, a personal demiplane to which she can retreat to rest and plan. This functions like lesser create demiplane , except the demiplane is up to a single 50-foot cube in size and is permanent.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 6th/8th-level School Ability
- 5th, 15th-level Bonus Feat

## Parsed source feature headings

- Walk the Planes (Sp, Su)
- Planar Adaptation (Su)
- Planar Associates (Ex)
- Planar Redoubt (Sp)

