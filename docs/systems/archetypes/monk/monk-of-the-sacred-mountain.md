# Monk - Monk of the Sacred Mountain

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Sacred Mountain
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Sacred%20Mountain
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Iron Monk (Ex); Bastion Stance (Ex); Iron Limb Defense (Ex); Adamantine Monk (Ex); Vow of Silence (Su)
- **Replaced / altered class features:** evasion; slow fall; high jump; improved evasion; tongue of the sun and the moon

## Replacement details

### Replaces: evasion

- **Archetype feature:** Iron Monk (Ex)
- **Description:** At 2nd level, a monk of the sacred mountain gains Toughness as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a monk of the sacred mountain gains Toughness as a bonus feat. In addition, the monk gains a +1 natural armor bonus.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, AC/natural armor bonus.

### Replaces: slow fall

- **Archetype feature:** Bastion Stance (Ex)
- **Description:** At 4th level, a monk of the sacred mountain becomes like stone, nearly impossible to move when he stands his ground.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 16.
  - Mechanics summary: At 4th level, a monk of the sacred mountain becomes like stone, nearly impossible to move when he stands his ground. If the monk starts and ends his turn in the same space, he cannot be knocked prone or forcibly moved until the start of his next turn, except by mind-affecting or teleportation effects. At 16th level, he is immune to any attempts to force him to move, even mind-affecting and teleportation effects.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: high jump

- **Archetype feature:** Iron Limb Defense (Ex)
- **Description:** At 5th level, a monk of the sacred mountain can deflect blows with an active defense that complements his bastion stance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a monk of the sacred mountain can deflect blows with an active defense that complements his bastion stance. If the monk starts and ends his turn in the same space, he gains a +2 shield bonus to AC and CMD until the start of his next turn. As a swift action, he can spend 1 ki point to increase this bonus to +4.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: improved evasion

- **Archetype feature:** Adamantine Monk (Ex)
- **Description:** At 9th level, a monk of the sacred mountain has muscles so strong and skin so resilient that he gains DR 1/—.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a monk of the sacred mountain has muscles so strong and skin so resilient that he gains DR 1/—. This DR increases by 1 for every three levels thereafter. As a swift action, the monk can spend 1 ki point to double his DR until the beginning of his next turn.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: tongue of the sun

- **Archetype feature:** Vow of Silence (Su)
- **Description:** At 17th level, a monk of the sacred mountain becomes as impassive as stone, making a vow of silence in exchange for greater abilities.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a monk of the sacred mountain becomes as impassive as stone, making a vow of silence in exchange for greater abilities. The monk gains a +2 insight bonus to AC and CMD and a +4 bonus on Sense Motive, Stealth, and Perception checks. The monk does not lose the capacity for speech, but if he ever speaks, he loses this feature for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the moon

- **Archetype feature:** Vow of Silence (Su)
- **Description:** At 17th level, a monk of the sacred mountain becomes as impassive as stone, making a vow of silence in exchange for greater abilities.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a monk of the sacred mountain becomes as impassive as stone, making a vow of silence in exchange for greater abilities. The monk gains a +2 insight bonus to AC and CMD and a +4 bonus on Sense Motive, Stealth, and Perception checks. The monk does not lose the capacity for speech, but if he ever speaks, he loses this feature for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Iron Monk (Ex)
- Bastion Stance (Ex)
- Iron Limb Defense (Ex)
- Adamantine Monk (Ex)
- Vow of Silence (Su)

