# Paladin - Warrior of the Holy Light

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Warrior of the Holy Light
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Warrior%20of%20the%20Holy%20Light
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Power of Faith (Su); Shining Light (Su)
- **Replaced / altered class features:** aura of faith

## Replacement details

### Replaces: aura of faith

- **Archetype feature:** Shining Light (Su)
- **Description:** At 14th level, a warrior of the holy light can unleash a 30-foot burst of pure, white light as a standard action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a warrior of the holy light can unleash a 30-foot burst of pure, white light as a standard action. Evil creatures within this burst take 1d6 points of damage for every two paladin levels and are blinded for 1 round. Evil dragons, evil outsiders, and evil undead are blinded for 1d4 rounds on a failed save. A Reflex save halves this damage and negates the blindness. The DC of this save is equal to 10 + 1/2 the warrior of the holy light’s level + the warrior of the holy light’s Charisma modifier. Good creatures within this burst are healed 1d6 points of damage per two paladin levels and receive a +2 sacred bonus on ability checks, attack rolls, saving throws, and skill checks for 1 round.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, save DC calculation, ki/monk hook.

## Parsed source feature headings

- Power of Faith (Su)
- Shining Light (Su)

