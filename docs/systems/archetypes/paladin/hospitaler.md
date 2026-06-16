# Paladin - Hospitaler

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Hospitaler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Hospitaler
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Smite Evil (Su); Channel Positive Energy (Su); Aura of Healing (Su)
- **Replaced / altered class features:** aura of justice

## Replacement details

### Replaces: the standard paladin’s channel positive energy ability

- **Archetype feature:** Channel Positive Energy (Su)
- **Description:** When a hospitaler reaches 4th level, she gains the ability to channel positive energy as a cleric equal to her paladin level –3.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: When a hospitaler reaches 4th level, she gains the ability to channel positive energy as a cleric equal to her paladin level –3. She can use this ability a number of times per day equal to 3 + her Charisma modifier. Using this ability does not expend uses of lay on hands, as it does with other paladins.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: aura of justice

- **Archetype feature:** Aura of Healing (Su)
- **Description:** At 11th level, a hospitaler can expend one use of her channel positive energy ability to emit a 30-foot aura of healing for a number of rounds equal to her paladin level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a hospitaler can expend one use of her channel positive energy ability to emit a 30-foot aura of healing for a number of rounds equal to her paladin level. Allies in this aura (including the hospitaler) automatically stabilize if below 0 hit points and are immune to bleed damage. In addition, allies (including the paladin) that spend at least 1 full round inside the aura are healed an amount of damage equal to their total number of Hit Dice and may make a saving throw against any afflictions they are suffering from, such as a curse, disease, or poison. This saving throw only counts toward curing the affliction and does not impose any penalty on a failed save. Allies can only be healed once by a use of this ability and they can only attempt additional saving throws once per day, even if they are exposed to this aura multiple times.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, saving throw hook.

## Parsed source feature headings

- Smite Evil (Su)
- Channel Positive Energy (Su)
- Aura of Healing (Su)

