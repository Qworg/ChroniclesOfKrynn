# Druid - Season Keeper

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Season Keeper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Season%20Keeper
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Nature Bond (Ex); Wild Shape (Su)
- **Replaced / altered class features:** Nature Bond; Trackless Step; Venom Immunity; Timeless Body; Wild Shape

## Replacement details

### Alters: nature bond and replaces trackless step, venom immunity, and timeless body

- **Archetype feature:** Nature Bond (Ex)
- **Description:** A season keeper must select an animal companion for her nature bond.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 3, 9, 15.
  - Mechanics summary: A season keeper must select an animal companion for her nature bond. Seasonal Spirits (Su): Starting at 1st level, each day when she prepares spells, a season keeper can imbue her animal companion with the spirit of summer or the spirit of winter. Allies in the aura can exist comfortably in hot conditions as if they each had the seasoned racial ability of a Summerborn Triaxian. At 3rd level, the aura increases the power of the season keeper’s healing magic—whenever the season keeper targets an ally with a spell that has the healing descriptor, the target also gains fast healing 2 for a number of rounds equal to the spell’s level. At 9th level, allies within the aura leave no trails in natural grassy or forest environments, thus can’t be tracked in such terrain. At 15th level, the duration of the fast healing effect increases to 2 rounds per spell level and affected allies can ignore difficult terrain caused by natural undergrowth such as nonmagical thorns, briars, overgrowth, and similar terrain.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, animal companion hook.

### Alters: wild shape

- **Archetype feature:** Wild Shape (Su)
- **Description:** A season keeper gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: A season keeper gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2. If she has imbued her animal companion with the spirit of winter, she uses her full druid level when taking on the form of an ice elemental. If she has imbued her companion with the spirit of summer, she uses her full druid level when taking on the form of a plant. A season keeper cannot use wild shape to assume the form of an elemental except an ice elemental, and can assume that shape only if her animal companion has the spirit of winter. Similarly, she can assume a plant form only if her animal companion has the spirit of summer.
- **Implementation flags:**
  - Likely existing hooks: animal companion hook, wild shape hook, ki/monk hook.

## Parsed source feature headings

- Nature Bond (Ex)
- Wild Shape (Su)

