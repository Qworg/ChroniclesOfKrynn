# Paladin - Divine Defender

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Divine Defender
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Divine%20Defender
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Shared Defense (Su); Divine Bond (Su)
- **Replaced / altered class features:** mercy

## Replacement details

### Replaces: mercy

- **Archetype feature:** Shared Defense (Su)
- **Description:** At 3rd level, a divine defender can spend one use of her lay on hands ability as a standard action to grant all adjacent allies (including paladins) a bonus.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 9, 15, 6, 12, 18.
  - Mechanics summary: At 3rd level, a divine defender can spend one use of her lay on hands ability as a standard action to grant all adjacent allies (including paladins) a bonus. At 3rd level, adjacent allies receive a +1 sacred bonus to their AC and CMD and on their saving throws. These bonuses last for a number of rounds equal to the divine defender’s Charisma modifier. At 9th level and 15th level, this bonus increases by +1. At 6th level, these bonuses are granted to all allies within 10 feet, and allies that are at fewer than 0 hit points within this area are automatically stabilized. At 12th level, these bonuses are granted to all allies within 15 feet, and allies within this area are immune to bleed damage.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, paladin mercy hook, sneak attack hook.

## Parsed source feature headings

- Shared Defense (Su)
- Divine Bond (Su)

