# Druid - Mountain Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Mountain Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Mountain%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Mountaineer (Ex); Sure-Footed (Ex); Spire Walker (Ex); Wild Shape (Su); Mountain Stance (Ex); Mountain Stone (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Mountaineer (Ex)
- **Description:** At 2nd level, a mountain druid gains a bonus on Initiative checks and Climb, Knowledge (geography), Perception, Stealth, and Survival checks equal to half her druid level in mountainous terrain, and she cannot be tracked in such an environment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a mountain druid gains a bonus on Initiative checks and Climb, Knowledge (geography), Perception, Stealth, and Survival checks equal to half her druid level in mountainous terrain, and she cannot be tracked in such an environment.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trackless step

- **Archetype feature:** Sure-Footed (Ex)
- **Description:** At 3rd level, a mountain druid suffers no penalty to speed or on Acrobatics or Stealth checks when walking across steep slopes, rubble, or scree.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a mountain druid suffers no penalty to speed or on Acrobatics or Stealth checks when walking across steep slopes, rubble, or scree.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, ki/monk hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Spire Walker (Ex)
- **Description:** At 4th level, a mountain druid does not lose her Dexterity bonus when climbing.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a mountain druid does not lose her Dexterity bonus when climbing. A mountain druid is immune to altitude sickness and ignores the effects of a cold climate as if under the effects of endure elements .
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: venom immunity

- **Archetype feature:** Mountain Stance (Ex)
- **Description:** At 9th level, a mountain druid gains immunity to petrification and receives a +4 bonus on saving throws or to CMD to resist any attempt to push, pull, bull rush, or drag her, or to resist any other effect that would physically move her from her position (e.g., repel wood , reverse gravity , or being blown away by high winds).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a mountain druid gains immunity to petrification and receives a +4 bonus on saving throws or to CMD to resist any attempt to push, pull, bull rush, or drag her, or to resist any other effect that would physically move her from her position (e.g., repel wood , reverse gravity , or being blown away by high winds). This does not protect her against being tripped, grappled, or overrun.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: a thousand faces

- **Archetype feature:** Mountain Stone (Ex)
- **Description:** At 13th level, a mountain druid can transform her body into a weathered stone outcrop and back at will.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a mountain druid can transform her body into a weathered stone outcrop and back at will. This effect functions as statue .
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Mountaineer (Ex)
- Sure-Footed (Ex)
- Spire Walker (Ex)
- Wild Shape (Su)
- Mountain Stance (Ex)
- Mountain Stone (Ex)

