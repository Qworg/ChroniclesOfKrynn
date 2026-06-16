# Bard - Fortune-Teller

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Fortune-Teller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Fortune-Teller
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fortune-Teller’s Divinations; Oracular Performance; d%; Result for Ally; Result for Enemy; Fortune-Teller’s Acumen; Bardic Performance
- **Replaced / altered class features:** well-versed; dirge of doom

## Replacement details

### Alters: the bard’s spell list

- **Archetype feature:** Fortune-Teller’s Divinations
- **Description:** Add the following spells to the fortune-teller’s bard spell list.
- **Mechanics:**
  - Mechanics summary: Add the following spells to the fortune-teller’s bard spell list. He doesn’t automatically gain them and must still select them as spells known if he wants to use them.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: bardic performance and replaces countersong and distraction

- **Archetype feature:** Result for Enemy
- **Description:** 1-35 Woe Weal 36-65 Inconclusive Inconclusive 66+ Weal Woe On an inconclusive result, the bard fails to get any information from the reading and the subject is affected by the performance normally.
- **Mechanics:**
  - Mechanics summary: 1-35 Woe Weal 36-65 Inconclusive Inconclusive 66+ Weal Woe On an inconclusive result, the bard fails to get any information from the reading and the subject is affected by the performance normally. For an ally, on a weal result the subject’s bonus from the performance increases by 1, and on a woe result the subject’s bonus decreases by 1 (minimum 0). This affects only numeric bonuses. For example, a subject wouldn’t gain another Hit Die from inspire greatness. For an enemy, on a weal result the subject gains a +2 bonus on its saving throw to negate the bard’s performance, and on a woe result it takes a –2 penalty on its save. All adjustments on an ally last for 1 minute, applying each time the fortune-teller uses that particular bardic performance on that ally but ending when the duration expires, even if the performance continues.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, saving throw hook, bardic performance hook.

### Replaces: well-versed

- **Archetype feature:** Fortune-Teller’s Acumen
- **Description:** At 2nd level, whenever he casts a spell from the divination school, a fortune-teller can use a fortune-teller’s deck, crystal ball, or similar item instead of the spell’s material component, as long as the cost of the material component is no more than 100 gp per bard level.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, whenever he casts a spell from the divination school, a fortune-teller can use a fortune-teller’s deck, crystal ball, or similar item instead of the spell’s material component, as long as the cost of the material component is no more than 100 gp per bard level. If he chooses to cast the spell using such an item and the spell’s normal material component (regardless of that component’s cost), he casts the spell at +1 caster level. This special focus can’t be used with other special foci that have a similar effect, but can be used with spells that normally require a focus component (which must also be provided).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: dirge of doom

- **Archetype feature:** Bardic Performance
- **Description:** A fortune-teller gains the following bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: A fortune-teller gains the following bardic performance. Transparent Fate (Su) : At 8th level, the fortune-teller can cause all enemies within 30 feet to have their near future revealed for all to see. A successful Will saving throw (DC = 10 + 1/2 the fortune-teller’s level + the fortune-teller’s Cha modifier) negates the effect. This ability causes any creature attacked by an affected enemy to gain a +2 bonus to AC and on saving throws against the attack. As a secondary effect, if an affected creature’s hit points are reduced to less than its Constitution score, it also sees a vision of its own death and must succeed at another Will save or become frightened for 1 round. A given creature needs to save against this secondary effect at most once per performance of transparent fate, even if its hit points are reduced to less than its Constitution score multiple times.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, bardic performance hook.

## Parsed source feature headings

- Fortune-Teller’s Divinations
- Oracular Performance
- d%
- Result for Ally
- Result for Enemy
- Fortune-Teller’s Acumen
- Bardic Performance

