# Warrior - Savage Warrior

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Savage Warrior
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Savage%20Warrior
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spark of Life (Ex); Natural Savagery (Ex); Savage Charge (Ex); Careful Claw (Ex); Greater Savage Charge (Ex); Natural Weapon Mastery (Ex)
- **Replaced / altered class features:** bravery; weapon training 1; weapon training 2; weapon training 3; weapon training 4; weapon mastery

## Replacement details

### Replaces: bravery

- **Archetype feature:** Spark of Life (Ex)
- **Description:** At 2nd level, a savage warrior gains a +1 bonus on saving throws made against energy drain and death effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a savage warrior gains a +1 bonus on saving throws made against energy drain and death effects. This bonus increases by +1 for every four levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 1

- **Archetype feature:** Natural Savagery (Ex)
- **Description:** At 5th level, a savage warrior gains a +1 bonus on attack and damage rolls with natural weapons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a savage warrior gains a +1 bonus on attack and damage rolls with natural weapons. This bonus also applies to CMB and CMD for grappling. This bonus increases by +1 for every four levels beyond 5th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 2

- **Archetype feature:** Savage Charge (Ex)
- **Description:** At 9th level, when a savage warrior attacks with a natural weapon at the end of a charge, he gains a bonus on his natural weapon attack rolls equal to half his fighter level, while suffering a penalty to his AC equal to half his fighter level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, when a savage warrior attacks with a natural weapon at the end of a charge, he gains a bonus on his natural weapon attack rolls equal to half his fighter level, while suffering a penalty to his AC equal to half his fighter level. These replace the normal attack roll bonus and AC penalty for charging. This bonus also applies to his CMB for a bull rush or overrun combat maneuvers made when charging.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

### Replaces: weapon training 3

- **Archetype feature:** Careful Claw (Ex)
- **Description:** At 13th level, when using a natural weapon to attack a creature using fire shield or a similar effect that damages creatures attacking it (such as a barbed devil’s barbed defense), a savage warrior reduces the damage from such effects by an amount equal to 1/2 his fighter level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, when using a natural weapon to attack a creature using fire shield or a similar effect that damages creatures attacking it (such as a barbed devil’s barbed defense), a savage warrior reduces the damage from such effects by an amount equal to 1/2 his fighter level.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: weapon training 4

- **Archetype feature:** Greater Savage Charge (Ex)
- **Description:** At 17th level, when using savage charge, the AC penalty is reduced to 1/4 his fighter level instead of 1/2 his fighter level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, when using savage charge, the AC penalty is reduced to 1/4 his fighter level instead of 1/2 his fighter level. In addition, a savage warrior can charge through friendly creatures and difficult terrain.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: weapon mastery

- **Archetype feature:** Natural Weapon Mastery (Ex)
- **Description:** At 20th level, a savage warrior must choose one natural weapon.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a savage warrior must choose one natural weapon.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Spark of Life (Ex)
- Natural Savagery (Ex)
- Savage Charge (Ex)
- Careful Claw (Ex)
- Greater Savage Charge (Ex)
- Natural Weapon Mastery (Ex)

