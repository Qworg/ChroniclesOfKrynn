# Monk - Sin Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Sin Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Sin%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Well of Sin (Su); Sinful Strike (Su); Burden with Sin (Su); Simultaneous Sins (Su); Spawn of Sin (Ex)
- **Replaced / altered class features:** Ki Pool; High Jump; Wholeness of Body; Abundant Step; Empty Body; Perfect Self

## Replacement details

### Replaces: ki pool

- **Archetype feature:** Well of Sin (Su)
- **Description:** At 4th level, a sin monk gains a pool of sin points, representing energy he has gained from indulging in forbidden vices.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 10, 16.
  - Mechanics summary: At 4th level, a sin monk gains a pool of sin points, representing energy he has gained from indulging in forbidden vices. The sin monk has a number of sin points equal to half his class level + his Wisdom modifier; these points cannot be used on abilities that require spending ki points. As a swift action, he can spend 1 point from his sin pool to activate one of the following abilities until the start of his next turn. Envy : The sin monk gains a +4 bonus on Perception and Sense Motive checks. This bonus increases to +6 at 10th level and +8 at 16th level. Gluttony : Each time the sin monk deals lethal damage with a melee attack, he regains a number of hit points equal to the amount of damage dealt (maximum 2).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, ki/monk hook.

### Replaces: alters high jump

- **Archetype feature:** Well of Sin (Su)
- **Description:** At 4th level, a sin monk gains a pool of sin points, representing energy he has gained from indulging in forbidden vices.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 10, 16.
  - Mechanics summary: At 4th level, a sin monk gains a pool of sin points, representing energy he has gained from indulging in forbidden vices. The sin monk has a number of sin points equal to half his class level + his Wisdom modifier; these points cannot be used on abilities that require spending ki points. As a swift action, he can spend 1 point from his sin pool to activate one of the following abilities until the start of his next turn. Envy : The sin monk gains a +4 bonus on Perception and Sense Motive checks. This bonus increases to +6 at 10th level and +8 at 16th level. Gluttony : Each time the sin monk deals lethal damage with a melee attack, he regains a number of hit points equal to the amount of damage dealt (maximum 2).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, ki/monk hook.

### Replaces: wholeness of body

- **Archetype feature:** Sinful Strike (Su)
- **Description:** At 7th level, a sin monk can spend 2 sin points as a swift action to focus his power.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a sin monk can spend 2 sin points as a swift action to focus his power. The next time he deals damage before the end of his next turn, he deals an additional amount damage equal to his monk level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: abundant step

- **Archetype feature:** Burden with Sin (Su)
- **Description:** At 12th level, a sin monk can spend a swift action and one daily use of Stunning Fist to draw his sinful nature to the fore of his consciousness.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a sin monk can spend a swift action and one daily use of Stunning Fist to draw his sinful nature to the fore of his consciousness. The next person he hits with a melee attack before the end of his next turn must succeed at a Will save (DC = 10 + half the sin monk’s class level + his Wisdom modifier) or suffer the burden of the sin monk’s sins. The target is treated as if she were carrying a load one step heavier (from a light load to a medium load, and so on) and must succeed at a caster level check to use any form of teleportation (DC = 10 + the monk’s class level). This is a curse UM effect that lasts a number of rounds equal to the sin monk’s Wisdom modifier unless it is removed through remove curse or a similar effect.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.

### Replaces: empty body

- **Archetype feature:** Simultaneous Sins (Su)
- **Description:** At 19th level, a sin monk can spend 3 points from his sin pool as a swift action to gain the benefits of two different sins simultaneously.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a sin monk can spend 3 points from his sin pool as a swift action to gain the benefits of two different sins simultaneously.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: perfect self

- **Archetype feature:** Spawn of Sin (Ex)
- **Description:** At 20th level, the sin monk becomes the physical manifestation of his sins.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, the sin monk becomes the physical manifestation of his sins. He is forevermore treated as an aberration rather than a humanoid (or whatever the monk’s creature type was) for the purpose of spells and magical effects, and his mind is so consumed by sin that he gains immunity to mind-affecting effects. He does not change in appearance or gain other abilities; however, should the sin monk be slain and brought back from the dead, he returns to life as a sinspawn ( Pathfinder RPG Bestiary 2 246), retaining his class levels but otherwise replacing his creature type and racial abilities with those of his new form and becoming an NPC under the GM’s control.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Well of Sin (Su)
- Sinful Strike (Su)
- Burden with Sin (Su)
- Simultaneous Sins (Su)
- Spawn of Sin (Ex)

