# Druid - Swamp Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Swamp Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Swamp%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Marshwight (Ex); Swamp Strider (Ex); Pond Scum (Ex); Wild Shape (Su); Slippery (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; a thousand faces

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Marshwight (Ex)
- **Description:** At 2nd level, a swamp druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, Swim, and Survival checks equal to 1/2 her druid level in swamp terrain, and she cannot be tracked in such an environment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a swamp druid gains a bonus on Initiative checks and Knowledge (geography), Perception, Stealth, Swim, and Survival checks equal to 1/2 her druid level in swamp terrain, and she cannot be tracked in such an environment.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trackless step

- **Archetype feature:** Swamp Strider (Ex)
- **Description:** At 3rd level, a swamp druid suffers no penalty to speed or on Acrobatics or Stealth checks in bogs and undergrowth.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a swamp druid suffers no penalty to speed or on Acrobatics or Stealth checks in bogs and undergrowth.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: resist nature’s lure

- **Archetype feature:** Pond Scum (Ex)
- **Description:** At 4th level, a swamp druid gains a +4 bonus on saves against disease and the exceptional, supernatural, and spell-like abilities of monstrous humanoids.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a swamp druid gains a +4 bonus on saves against disease and the exceptional, supernatural, and spell-like abilities of monstrous humanoids. A swamp druid also gains DR/— equal to half her druid level against attacks by swarms. If this damage resistance prevents damage, the druid is unaffected by distraction or other special attacks of the swarm.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook.

### Replaces: a thousand faces

- **Archetype feature:** Slippery (Ex)
- **Description:** At 13th level, a swamp druid gains continuous freedom of movement .
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a swamp druid gains continuous freedom of movement .
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Marshwight (Ex)
- Swamp Strider (Ex)
- Pond Scum (Ex)
- Wild Shape (Su)
- Slippery (Ex)

