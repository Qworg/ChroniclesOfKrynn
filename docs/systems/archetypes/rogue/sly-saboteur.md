# Rogue - Sly Saboteur

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Sly Saboteur
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Sly%20Saboteur
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Scamper (Ex); Catastrophic Failure (Ex); Disable Magic Device (Su); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** Class Skills; Trap Sense; Uncanny Dodge; Improved Uncanny Dodge;

## Replacement details

### Alters: the rogue’s class skills

- **Archetype feature:** Class Skills
- **Description:** A sly saboteur adds Survival to her list of class skills instead of Knowledge (dungeoneering).
- **Mechanics:**
  - Mechanics summary: A sly saboteur adds Survival to her list of class skills instead of Knowledge (dungeoneering).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Scamper (Ex)
- **Description:** At 3rd level, a sly saboteur can move through 5 feet of difficult terrain each round as if it were normal terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6, 18.
  - Mechanics summary: At 3rd level, a sly saboteur can move through 5 feet of difficult terrain each round as if it were normal terrain. At 6th level and every 3 levels thereafter, this distance increases by 5 feet (to a maximum of 30 feet at 18th level). This ability applies only when she is wearing light armor or no armor and carrying no more than a light load, and it stacks with the Acrobatic Steps and Nimble Moves feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: uncanny dodge

- **Archetype feature:** Catastrophic Failure (Ex)
- **Description:** At 4th level, when a sly saboteur uses Disable Device to rig a device to fail, she can increase the DC of the check by 5.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, when a sly saboteur uses Disable Device to rig a device to fail, she can increase the DC of the check by 5. If she does so and succeeds at the check, when the device fails, users take damage equal to the sly saboteur’s sneak attack, or they take half that amount with a successful Reflex save (DC = 10 + half the sly saboteur’s level + her Dexterity modifier). The type of damage depends on the nature of the device but is typically bludgeoning, fire, piercing, or slashing.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, sneak attack hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Disable Magic Device (Su)
- **Description:** At 8th level, a sly saboteur can use Disable Device to rig a magic item to fail as if it were an extremely complex device.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a sly saboteur can use Disable Device to rig a magic item to fail as if it were an extremely complex device. If the item’s effect is instantaneous, the effect is countered the next time the item is activated, but the activation still consumes a charge or use. If the item’s effect is continuous or has a duration, the effect fails after 1d4 rounds or minutes of use (sly saboteur’s choice). This ends the duration or suppresses a continuous effect for 1d4 rounds (as the spell dispel magic ). This ability cannot be used on artifacts. If this ability is combined with the catastrophic failure ability, the resulting damage is untyped magic and is not reduced by damage reduction or energy resistance.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Class Skills
- Scamper (Ex)
- Catastrophic Failure (Ex)
- Disable Magic Device (Su)
- Rogue Talents
- Advanced Talents

