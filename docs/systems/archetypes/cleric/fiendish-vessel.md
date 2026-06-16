# Cleric - Fiendish Vessel

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Fiendish Vessel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Fiendish%20Vessel
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Domains; Channel Evil (Su); Fiendish Familiar; Fiendish Summoning
- **Replaced / altered class features:** channel energy

## Replacement details

### Replaces: channel energy

- **Archetype feature:** Channel Evil (Su)
- **Description:** At 1st level, a fiendish vessel, rather than channeling positive or negative energy, instead channels the pure evil power of her fiendish patron.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 19, 5.
  - Mechanics summary: At 1st level, a fiendish vessel, rather than channeling positive or negative energy, instead channels the pure evil power of her fiendish patron. This ability is similar to channeling negative energy, but instead of healing undead and dealing damage to living creatures, this blast of evil energy automatically heals evil creatures and debilitates good creatures within its burst. Channeling this evil causes a burst that affects all creatures in a 30-foot radius centered on the fiendish vessel. In the case of evil creatures, the amount of damage healed is equal to 1d4 points of damage and increases by 1d4 at every two levels beyond 1st (to a maximum of 10d4 at 19th level). Good creatures in the burst receive a Will saving throw to negate this damage. Good creatures that fail their saving throws are sickened for 1d4 rounds.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, smite hook.

## Parsed source feature headings

- Domains
- Channel Evil (Su)
- Fiendish Familiar
- Fiendish Summoning

