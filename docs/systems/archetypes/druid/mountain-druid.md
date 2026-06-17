# Druid - Mountain Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Mountain Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Mountain%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Mountaineer (Ex); Sure-Footed (Ex); Spire Walker (Ex); Wild Shape (Su); Mountain Stance (Ex); Mountain Stone (Ex)
- **Replaced / altered class features:** woodland stride; trackless step; resist nature’s lure; venom immunity; a thousand faces

## Implementation details

### Replaces: woodland stride

- **Archetype feature:** Mountaineer (Ex)
- **Description:** At 2nd level, a mountain druid gains a bonus on Initiative checks and Climb, Knowledge (geography), Perception, Stealth, and Survival checks equal to half her druid level in mountainous terrain, and she cannot be tracked in such an environment.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a mountain druid gains a bonus on Initiative checks and Climb, Knowledge (geography), Perception, Stealth, and Survival checks equal to half her druid level in mountainous terrain, and she cannot be tracked in such an environment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Sure-Footed (Ex)
- **Description:** At 3rd level, a mountain druid suffers no penalty to speed or on Acrobatics or Stealth checks when walking across steep slopes, rubble, or scree.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a mountain druid suffers no penalty to speed or on Acrobatics or Stealth checks when walking across steep slopes, rubble, or scree.
- **Implementation flags:**
  - ki subsystem.

### Replaces: resist nature’s lure

- **Archetype feature:** Spire Walker (Ex)
- **Description:** At 4th level, a mountain druid does not lose her Dexterity bonus when climbing.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a mountain druid does not lose her Dexterity bonus when climbing. A mountain druid is immune to altitude sickness and ignores the effects of a cold climate as if under the effects of endure elements.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** A mountain druid gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 12, 16.
  - **Rules text to implement:** A mountain druid gains this ability at 6th level, except that her effective druid level for the ability is equal to her druid level – 2. A mountain druid cannot use wild shape to adopt a plant form. However, at 12th level she can assume the form of a Large giant as if using giant form I. At 16th level, she may assume the form of a Huge giant as if using giant form II.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: venom immunity

- **Archetype feature:** Mountain Stance (Ex)
- **Description:** At 9th level, a mountain druid gains immunity to petrification and receives a +4 bonus on saving throws or to CMD to resist any attempt to push, pull, bull rush, or drag her, or to resist any other effect that would physically move her from her position (e.g., repel wood, reverse gravity, or being blown away by high winds).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a mountain druid gains immunity to petrification and receives a +4 bonus on saving throws or to CMD to resist any attempt to push, pull, bull rush, or drag her, or to resist any other effect that would physically move her from her position (e.g., repel wood, reverse gravity, or being blown away by high winds). This does not protect her against being tripped, grappled, or overrun.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: a thousand faces

- **Archetype feature:** Mountain Stone (Ex)
- **Description:** At 13th level, a mountain druid can transform her body into a weathered stone outcrop and back at will.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a mountain druid can transform her body into a weathered stone outcrop and back at will. This effect functions as statue.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Mountaineer (Ex)
- Sure-Footed (Ex)
- Spire Walker (Ex)
- Wild Shape (Su)
- Mountain Stance (Ex)
- Mountain Stone (Ex)
