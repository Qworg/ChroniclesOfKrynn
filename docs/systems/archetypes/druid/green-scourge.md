# Druid - Green Scourge

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Green Scourge
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Green%20Scourge
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nature’s Armaments; Aberration Sense (Ex); Scentless (Ex); Resist Unnatural Influence (Ex)
- **Replaced / altered class features:** trackless step

## Implementation details

### Alters: spontaneous casting

- **Archetype feature:** Nature’s Armaments
- **Description:** A green scourge can lose a prepared 1st- or 2nd-level spell in order to cast shillelagh or flame blade, respectively.
- **Detailed mechanics:**
  - **Level hooks:** 2, 5.
  - **Rules text to implement:** A green scourge can lose a prepared 1st- or 2nd-level spell in order to cast shillelagh or flame blade, respectively. She can instead choose to lose a higher-level spell in order to increase the enhancement bonus of her shillelagh, or to add any of the following weapon special abilities to her shillelagh or flame blade : bane (aberrations only), frost, mighty cleaving, returning, shock, throwing, or vicious. If the target weapon is a quarterstaff, these bonuses apply to only one of its ends. If a flame blade gains the frost or shock special ability, the base damage of the spell changes to match the energy type; neither a flame blade nor shillelagh can gain both of these special abilities. A green scourge cannot add the throwing property to a flame blade unless she also adds the returning property. When adding weapon special abilities or increasing the enhancement bonus, the final level of the spell expended is 1 higher than the base spell level (2nd for shillelagh and 3rd for flame blade ), increased by the additional special abilities’ total base price modifier (see Table 15–9 on page 469 of the Core Rulebook ). For example, creating an aberration-bane vicious flame blade requires spending a 5th-level spell slot, which also counts as a 5th-level spell for purposes of dispelling.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: nature sense

- **Archetype feature:** Aberration Sense (Ex)
- **Description:** At 1st level, a green scourge adds Knowledge (dungeoneering) to her class skills and gains a +2 bonus on Knowledge (dungeoneering) checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a green scourge adds Knowledge (dungeoneering) to her class skills and gains a +2 bonus on Knowledge (dungeoneering) checks.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trackless step

- **Archetype feature:** Scentless (Ex)
- **Description:** At 3rd level, a green scourge cannot be detected or tracked with the scent ability or any other special senses that rely on acute smell.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a green scourge cannot be detected or tracked with the scent ability or any other special senses that rely on acute smell. She can choose to exude a scent if desired.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Unnatural Influence (Ex)
- **Description:** At 4th level, a green scourge gains a +4 bonus on saving throws against aberrations’ spelllike abilities, supernatural abilities, and poisons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a green scourge gains a +4 bonus on saving throws against aberrations’ spelllike abilities, supernatural abilities, and poisons.
- **Implementation flags:**
  - poison subsystem.

## Parsed source feature headings

- Nature’s Armaments
- Aberration Sense (Ex)
- Scentless (Ex)
- Resist Unnatural Influence (Ex)
