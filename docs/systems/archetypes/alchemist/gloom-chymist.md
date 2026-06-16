# Alchemist - Gloom Chymist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Gloom Chymist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Gloom%20Chymist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Gloom (Su); Umbral Gloom (Su)
- **Replaced / altered class features:** bomb; poison resistance, poison use, and swift poisoning

## Replacement details

### Replaces: bomb

- **Archetype feature:** Gloom (Su)
- **Description:** A gloom chymist is skilled at mixing potent concoctions known as glooms, which are infused with shadow energy.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A gloom chymist is skilled at mixing potent concoctions known as glooms, which are infused with shadow energy. A gloom is identical to a bomb except that it deals 1d6 points of cold damage + additional damage equal to the gloom chymist’s Intelligence modifier. This damage increases by 1d6 for every 2 alchemist levels beyond 1st the gloom chymist has. A gloom does not qualify as a bomb for the purposes of feats or discoveries.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, alchemist bomb hook, ki/monk hook.

### Replaces: poison resistance, poison use, and swift poisoning

- **Archetype feature:** Umbral Gloom (Su)
- **Description:** At 2nd level, whenever a gloom chymist makes a gloom, he can have it increase or decrease the light level by one step within its splash radius, in addition to its other effects.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 8.
  - Mechanics summary: At 2nd level, whenever a gloom chymist makes a gloom, he can have it increase or decrease the light level by one step within its splash radius, in addition to its other effects. This change lasts for a number of rounds equal to the gloom chymist’s Intelligence modifier. At 8th level, the gloom chymist expend two uses of his daily glooms to increase or decrease light levels as per daylight or deeper darkness , respectively, using his alchemist level as the caster level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Gloom (Su)
- Umbral Gloom (Su)

