# Bard - Thundercaller

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Thundercaller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Thundercaller
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bound to the Land (Ex); Bardic Performance
- **Replaced / altered class features:** Bardic Knowledge; Inspire Competence; Suggestion; Mass Suggestion; Dirge of Doom; Frightening Tune

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Bound to the Land (Ex)
- **Description:** A thundercaller gains a bonus equal to half her level on Handle Animal checks, Knowledge (nature) checks, and Survival checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A thundercaller gains a bonus equal to half her level on Handle Animal checks, Knowledge (nature) checks, and Survival checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: suggestion and mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A thundercaller gains the following types of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 7, 11, 6, 8, 14.
  - Mechanics summary: A thundercaller gains the following types of bardic performance. Thunder Call (Su) : At 3rd level, the thundercaller can start a performance to unleash a deafening peal of thunder. This allows the thundercaller to spend a round of performance to create an effect similar to the spell sound burst (having the same range and area and allowing the same saving throw). At 7th level, the sonic damage dealt by this blast of sound increases to 3d8. This damage further increases by 2d8 at 11th level, and every 4 levels thereafter. A creature that succeeds at its saving throw against thunder call is immune to the stunning effect but still takes sonic damage.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, save DC calculation, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Inspire Competence
- Dirge of Doom
- Frightening Tune

## Parsed source feature headings

- Bound to the Land (Ex)
- Bardic Performance

