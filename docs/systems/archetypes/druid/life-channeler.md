# Druid - Life Channeler

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Life Channeler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Life%20Channeler
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Plant Preservation (Su); Wicker Talismans (Su); Rampant Growth; Stored Life
- **Replaced / altered class features:** wild shape; venom immunity

## Replacement details

### Alters: the druid’s alignment requirements

- **Archetype feature:** Alignment
- **Description:** In addition to a druid’s usual alignment requirements, a life channeler must be of a nongood alignment.
- **Mechanics:**
  - Mechanics summary: In addition to a druid’s usual alignment requirements, a life channeler must be of a nongood alignment. If she becomes good, she can no longer take levels in the druid class or fill her wicker talismans (see below), but she otherwise keeps all her abilities.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: nature bond

- **Archetype feature:** Plant Preservation (Su)
- **Description:** A life channeler must choose the Plant domain with her nature bond (she can select the Growth subdomain if she wishes).
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A life channeler must choose the Plant domain with her nature bond (she can select the Growth subdomain if she wishes). When she performs a coup de grace that kills a sentient humanoid creature (not a summoned creature), she can do so ritualistically in order to affect the area centered on the body with the enrichment version of plant growth .
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook, ki/monk hook.

### Replaces: wild shape

- **Archetype feature:** Wicker Talismans (Su)
- **Description:** At 4th level, a life channeler gains a selection of wicker talismans that can store and convert the life energy of sentient creatures into the growth, health, and fertility of plants around her.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 1, 6.
  - Mechanics summary: At 4th level, a life channeler gains a selection of wicker talismans that can store and convert the life energy of sentient creatures into the growth, health, and fertility of plants around her. The life channeler gains one wicker talisman corresponding to each level of druid spells she can cast, starting with 1st-level spells. These talismans are initially empty, but can hold life energy. When the life channeler ritualistically kills a creature with a coup de grace, she can store life energy in a talisman instead of gaining the plant growth effect. The creature must be of a CR equal to at least twice the spell level of the corresponding talisman. For instance, a CR 8 creature’s life energy could provide energy for a talisman holding up to a 4th-level spell.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty, spellcasting/spell-list hook, cleric domain hook, wild shape hook, ki/monk hook.

### Replaces: venom immunity

- **Archetype feature:** Stored Life
- **Description:** At 9th level, a life channeler gains a third option when using a coup de grace on a sentient humanoid.
- **Mechanics:**
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a life channeler gains a third option when using a coup de grace on a sentient humanoid. If the victim had a CR at least as high as the life channeler’s class level, the life channeler can store the creature’s life energy in her body. She can have the life energy from only 1 creature in her body at a time. While she is storing life energy, if she would take damage or die from a death effect or if she would gain negative levels or take energy drain, she can sacrifice the stored energy to negate the effect without spending an action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Plant Preservation (Su)
- Wicker Talismans (Su)
- Rampant Growth
- Stored Life

