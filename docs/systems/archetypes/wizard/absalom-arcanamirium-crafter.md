# Wizard - Absalom: Arcanamirium Crafter

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Absalom: Arcanamirium Crafter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Absalom%20%20Arcanamirium%20Crafter
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Associated School; Replacement Power; Metacharge (Ex)
- **Replaced / altered class features:** Hand of the Apprentice

## Replacement details

### Alters: arcane school specialization choice

- **Archetype feature:** Associated School
- **Description:** The archetype is fixed to the universalist school.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build restriction
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard's associated school is universalist.
    - The archetype does not allow specialist-school selection.
    - Later replacement powers are keyed to the universalist chassis.
  - Scaling: None
  - Interactions: The archetype follows universalist timing for school-feature replacement.
  - Edge cases: Rebuild or retraining flows should not allow a different school while keeping this archetype.
  - Implementation flags:
    - Likely existing hooks: school lock.

### Replaces: hand of the apprentice

- **Archetype feature:** Metacharge (Ex)
- **Description:** The wizard trades the universalist's thrown-weapon trick for delayed feat access and better metamagic-assisted crafting.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 3
  - Action/timing: Passive feat grant and passive crafting modifier
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - At 3rd level, gain one bonus feat.
    - The feat must be an item creation feat or a metamagic feat.
    - All normal prerequisites still apply, including caster-level requirements.
    - Gain a +2 bonus on the skill check to create a magic item when metamagic feats are involved in that item's creation.
  - Scaling: None
  - Interactions: This replaces hand of the apprentice entirely and does not supply a separate 1st-level activated power.
  - Edge cases: The +2 bonus applies only to the creation check tied to metamagic-assisted item crafting.
  - Implementation flags:
    - Likely existing hooks: delayed bonus feat grant, crafting skill-check modifier conditioned on metamagic-assisted item creation.
    - Unsupported / review needed: item-creation skill-check flow if crafting is only partially modeled.

## Parsed source feature headings

- Associated School
- Replacement Power
- Metacharge (Ex)
