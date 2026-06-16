# Druid - Mantella

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Mantella
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Mantella
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Poison Affinity (Su); Toxic Diet (Ex)
- **Replaced / altered class features:** Wild Shape; Venom Immunity; Spontaneous Casting

## Replacement details

### Alters: wild shape

- **Archetype feature:** Poison Affinity (Su)
- **Description:** At 4th level, if a form the mantella assumes with wild shape has any poison abilities, the mantella also gains those abilities.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, if a form the mantella assumes with wild shape has any poison abilities, the mantella also gains those abilities. However, the mantilla can never use wild shape to take the form of an elemental.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.

### Alters: venom immunity and replaces spontaneous casting

- **Archetype feature:** Toxic Diet (Ex)
- **Description:** At 6th level, both the mantella and her animal companion gain immunity to poison.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 8.
  - Mechanics summary: At 6th level, both the mantella and her animal companion gain immunity to poison. Additionally, as an immediate action when exposed to a dose of poison, a mantella can absorb the toxin and store it internally for up to 1 day. As a swift action, a mantella can secrete this poison; this changes the poison’s type to injury and applies the dose of poison to all of the druid’s natural attacks. A mantella can use this ability three times per day, plus one additional time per day at 8th level and every 2 druid levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: animal companion hook, natural attack system.

## Parsed source feature headings

- Poison Affinity (Su)
- Toxic Diet (Ex)

