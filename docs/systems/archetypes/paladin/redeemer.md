# Paladin - Redeemer

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Redeemer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Redeemer
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Merciful Smite (Su); Monstrous Rapport (Ex); Pact of Peace (Sp); Aura of Mercy (Su); Associates
- **Replaced / altered class features:** detect evil

## Replacement details

### Replaces: detect evil

- **Archetype feature:** Monstrous Rapport (Ex)
- **Description:** At 1st level, redeemers gain a +2 bonus on Diplomacy checks to influence creatures who are commonly considered monstrous.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, redeemers gain a +2 bonus on Diplomacy checks to influence creatures who are commonly considered monstrous. This includes but is not limited to "monstrous" races such as goblins and orcs, monstrous humanoids, and other intelligent non-humanoid monsters.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: aura of resolve

- **Archetype feature:** Pact of Peace (Sp)
- **Description:** At 8th level, a redeemer can force a defeated creature to accept a binding pact of peace as a condition of its surrender, as if using lesser geas.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a redeemer can force a defeated creature to accept a binding pact of peace as a condition of its surrender, as if using lesser geas . Her caster level for this ability is equal to her paladin level. Example geas include "Leave this city and do not return" or "Do not attack caravans." The prohibition must be against an area no larger than 300 square miles or one specific group of people (such as a tribe or citizens of a particular city). This ability lasts 1 month per paladin level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: aura of justice

- **Archetype feature:** Aura of Mercy (Su)
- **Description:** At 11th level, a redeemer can expend two uses of her merciful smite ability to grant the merciful smite ability to all allies within 10 feet, using her bonuses.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a redeemer can expend two uses of her merciful smite ability to grant the merciful smite ability to all allies within 10 feet, using her bonuses. Allies must use this merciful smite ability by the start of the paladin’s next turn and the bonuses last for 1 minute. Using this ability is a free action. Evil creatures gain no benefit from this ability.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, smite hook, paladin mercy hook.

## Parsed source feature headings

- Merciful Smite (Su)
- Monstrous Rapport (Ex)
- Pact of Peace (Sp)
- Aura of Mercy (Su)
- Associates

