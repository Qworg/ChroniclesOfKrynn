# Druid - Blight Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Blight Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Blight%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Nature Bond (Ex); Vermin Empathy (Su); Miasma (Ex); Blightblooded (Ex); Plaguebearer (Su)
- **Replaced / altered class features:** wild empathy; trackless step and resist nature’s lure; venom immunity; a thousand faces

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Vermin Empathy (Su)
- **Description:** A blight druid can improve the attitude of vermin as a normal druid can with animals.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A blight druid can improve the attitude of vermin as a normal druid can with animals. Vermin have a starting attitude of unfriendly. The blight druid can also improve the attitude of animals and mindless undead creatures that were formerly animals, but she takes a –4 penalty on the check unless the animal or undead has a disease special attack.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: trackless step and resist nature’s lure

- **Archetype feature:** Miasma (Ex)
- **Description:** Starting at 5th level, if a blight druid is adjacent to a creature at the beginning of its turn, the creature must succeed at a Fortitude save with a DC of 10 + 1/2 the druid’s level + the druid’s Wisdom modifier or become sickened for 1 round.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: Starting at 5th level, if a blight druid is adjacent to a creature at the beginning of its turn, the creature must succeed at a Fortitude save with a DC of 10 + 1/2 the druid’s level + the druid’s Wisdom modifier or become sickened for 1 round. A creature of the animal, fey, or plant type that fails its save is nauseated for 1 round and sickened for 1 minute thereafter. If the creature makes its save, it is immune to this effect for 24 hours, as are creatures immune to disease.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.

### Replaces: venom immunity

- **Archetype feature:** Blightblooded (Ex)
- **Description:** At 9th level, a blight druid gains immunity to all diseases, including natural and supernatural diseases.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a blight druid gains immunity to all diseases, including natural and supernatural diseases. She also becomes immune to effects that would cause her to become sickened or nauseated.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: a thousand faces

- **Archetype feature:** Plaguebearer (Su)
- **Description:** Starting at 13th level, any creature that strikes a blight druid with a touch attack, unarmed strike, or natural weapon must succeed at a Fortitude save with a DC of 10 + 1/2 the druid’s level + the druid’s Wisdom modifier or contract a disease, as the contagion spell.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13.
  - Mechanics summary: Starting at 13th level, any creature that strikes a blight druid with a touch attack, unarmed strike, or natural weapon must succeed at a Fortitude save with a DC of 10 + 1/2 the druid’s level + the druid’s Wisdom modifier or contract a disease, as the contagion spell. If the creature makes its save, it is immune to this effect for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook.

## Parsed source feature headings

- Nature Bond (Ex)
- Vermin Empathy (Su)
- Miasma (Ex)
- Blightblooded (Ex)
- Plaguebearer (Su)

