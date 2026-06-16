# Druid - Green Scourge

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Green Scourge
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Green%20Scourge
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Nature’s Armaments; Aberration Sense (Ex); Scentless (Ex); Resist Unnatural Influence (Ex)
- **Replaced / altered class features:** trackless step

## Replacement details

### Alters: spontaneous casting

- **Archetype feature:** Nature’s Armaments
- **Description:** A green scourge can lose a prepared 1st- or 2nd-level spell in order to cast shillelagh or flame blade , respectively.
- **Mechanics:**
  - Level hooks: 2, 5.
  - Mechanics summary: A green scourge can lose a prepared 1st- or 2nd-level spell in order to cast shillelagh or flame blade , respectively. She can instead choose to lose a higher-level spell in order to increase the enhancement bonus of her shillelagh , or to add any of the following weapon special abilities to her shillelagh or flame blade : bane (aberrations only), frost, mighty cleaving, returning, shock, throwing , or vicious . If the target weapon is a quarterstaff, these bonuses apply to only one of its ends. If a flame blade gains the frost or shock special ability, the base damage of the spell changes to match the energy type; neither a flame blade nor shillelagh can gain both of these special abilities. A green scourge cannot add the throwing property to a flame blade unless she also adds the returning property. When adding weapon special abilities or increasing the enhancement bonus, the final level of the spell expended is 1 higher than the base spell level (2nd for shillelagh and 3rd for flame blade ), increased by the additional special abilities’ total base price modifier (see Table 15–9 on page 469 of the Core Rulebook ).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: nature sense

- **Archetype feature:** Aberration Sense (Ex)
- **Description:** At 1st level, a green scourge adds Knowledge (dungeoneering) to her class skills and gains a +2 bonus on Knowledge (dungeoneering) checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a green scourge adds Knowledge (dungeoneering) to her class skills and gains a +2 bonus on Knowledge (dungeoneering) checks.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: trackless step

- **Archetype feature:** Scentless (Ex)
- **Description:** At 3rd level, a green scourge cannot be detected or tracked with the scent ability or any other special senses that rely on acute smell.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a green scourge cannot be detected or tracked with the scent ability or any other special senses that rely on acute smell. She can choose to exude a scent if desired.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Unnatural Influence (Ex)
- **Description:** At 4th level, a green scourge gains a +4 bonus on saving throws against aberrations’ spelllike abilities, supernatural abilities, and poisons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a green scourge gains a +4 bonus on saving throws against aberrations’ spelllike abilities, supernatural abilities, and poisons.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Nature’s Armaments
- Aberration Sense (Ex)
- Scentless (Ex)
- Resist Unnatural Influence (Ex)

