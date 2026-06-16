# Paladin - Shining Knight

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Shining Knight
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Shining%20Knight
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skilled Rider (Ex and Su); Divine Bond (Su); Knight’s Charge (Su)
- **Replaced / altered class features:** divine health; aura of justice

## Replacement details

### Replaces: divine health

- **Archetype feature:** Skilled Rider (Ex and Su)
- **Description:** At 3rd level, a shining knight does not take any penalty to her Ride skill due to her armor check penalty.
- **Mechanics:**
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a shining knight does not take any penalty to her Ride skill due to her armor check penalty. In addition, any mount she is riding gains the benefit of her divine grace class feature, adding her Charisma bonus (if any) to its saving throws.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, numeric penalty, ki/monk hook.

### Replaces: aura of justice

- **Archetype feature:** Knight’s Charge (Su)
- **Description:** At 11th level, whenever a mounted shining knight charges a foe, her movement does not provoke attacks of opportunity, for either her or her mount.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, whenever a mounted shining knight charges a foe, her movement does not provoke attacks of opportunity, for either her or her mount. In addition, if her target is also the target of her smite evil ability and the charge attack hits, the target must make a Will save or be panicked for a number of rounds equal to 1/2 the shining knight’s level. The DC of this save is equal to 10 + 1/2 the shining knight’s level + the shining knight’s Charisma modifier.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, smite hook.

## Parsed source feature headings

- Skilled Rider (Ex and Su)
- Divine Bond (Su)
- Knight’s Charge (Su)

