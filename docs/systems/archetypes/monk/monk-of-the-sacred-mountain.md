# Monk - Monk of the Sacred Mountain

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Sacred Mountain
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Sacred%20Mountain
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Iron Monk (Ex); Bastion Stance (Ex); Iron Limb Defense (Ex); Adamantine Monk (Ex); Vow of Silence (Su)
- **Replaced / altered class features:** evasion; slow fall; high jump; improved evasion; tongue of the sun and the moon

## Implementation details

### Replaces: evasion

- **Archetype feature:** Iron Monk (Ex)
- **Description:** At 2nd level, a monk of the sacred mountain gains Toughness as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a monk of the sacred mountain gains Toughness as a bonus feat. In addition, the monk gains a +1 natural armor bonus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: slow fall

- **Archetype feature:** Bastion Stance (Ex)
- **Description:** At 4th level, a monk of the sacred mountain becomes like stone, nearly impossible to move when he stands his ground.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 16.
  - **Rules text to implement:** At 4th level, a monk of the sacred mountain becomes like stone, nearly impossible to move when he stands his ground. If the monk starts and ends his turn in the same space, he cannot be knocked prone or forcibly moved until the start of his next turn, except by mind-affecting or teleportation effects. At 16th level, he is immune to any attempts to force him to move, even mind-affecting and teleportation effects.
- **Implementation flags:**
  - teleport/positioning subsystem.

### Replaces: high jump

- **Archetype feature:** Iron Limb Defense (Ex)
- **Description:** At 5th level, a monk of the sacred mountain can deflect blows with an active defense that complements his bastion stance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a monk of the sacred mountain can deflect blows with an active defense that complements his bastion stance. If the monk starts and ends his turn in the same space, he gains a +2 shield bonus to AC and CMD until the start of his next turn. As a swift action, he can spend 1 ki point to increase this bonus to +4.
- **Implementation flags:**
  - ki subsystem.

### Replaces: improved evasion

- **Archetype feature:** Adamantine Monk (Ex)
- **Description:** At 9th level, a monk of the sacred mountain has muscles so strong and skin so resilient that he gains DR 1/—.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a monk of the sacred mountain has muscles so strong and skin so resilient that he gains DR 1/—. This DR increases by 1 for every three levels thereafter. As a swift action, the monk can spend 1 ki point to double his DR until the beginning of his next turn.
- **Implementation flags:**
  - ki subsystem.

### Replaces: tongue of the sun and the moon

- **Archetype feature:** Vow of Silence (Su)
- **Description:** At 17th level, a monk of the sacred mountain becomes as impassive as stone, making a vow of silence in exchange for greater abilities.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a monk of the sacred mountain becomes as impassive as stone, making a vow of silence in exchange for greater abilities. The monk gains a +2 insight bonus to AC and CMD and a +4 bonus on Sense Motive, Stealth, and Perception checks. The monk does not lose the capacity for speech, but if he ever speaks, he loses this feature for 24 hours.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Iron Monk (Ex)
- Bastion Stance (Ex)
- Iron Limb Defense (Ex)
- Adamantine Monk (Ex)
- Vow of Silence (Su)
