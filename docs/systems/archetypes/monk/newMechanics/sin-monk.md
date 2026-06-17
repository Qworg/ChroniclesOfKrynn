# Monk - Sin Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Sin Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Sin%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Well of Sin (Su); Sinful Strike (Su); Burden with Sin (Su); Simultaneous Sins (Su); Spawn of Sin (Ex)
- **Replaced / altered class features:** Ki Pool; High Jump; Wholeness of Body; Abundant Step; Empty Body; Perfect Self

## Implementation details

### Replaces: ki pool and alters high jump

- **Archetype feature:** Well of Sin (Su)
- **Description:** At 4th level, a sin monk gains a pool of sin points, representing energy he has gained from indulging in forbidden vices.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 10, 16.
  - **Rules text to implement:** At 4th level, a sin monk gains a pool of sin points, representing energy he has gained from indulging in forbidden vices. The sin monk has a number of sin points equal to half his class level + his Wisdom modifier; these points cannot be used on abilities that require spending ki points. As a swift action, he can spend 1 point from his sin pool to activate one of the following abilities until the start of his next turn. Envy : The sin monk gains a +4 bonus on Perception and Sense Motive checks. This bonus increases to +6 at 10th level and +8 at 16th level. Gluttony : Each time the sin monk deals lethal damage with a melee attack, he regains a number of hit points equal to the amount of damage dealt (maximum 2). He can’t exceed his maximum number of hit points. The maximum number of hit points he regains increases to 4 at 10th level and 6 at 16th level. Greed : The sin monk’s attacks count as being either cold iron or silver (sin monk’s choice) for the purpose of overcoming DR. At 10th level, he adds adamantine to the list of materials he can choose to have his attacks count as being for the purpose of overcoming DR. At 16th level, the sin monk’s attacks also ignore hardness. Lust : The sin monk gains a +4 bonus on Bluff and Diplomacy checks. This bonus increases to +6 at 10th level and +8 at 16th level. Pride : The sin monk gains one illusory double of himself, which functions as mirror image. This double automatically disappears at the beginning of the sin monk’s next turn unless destroyed first. At 10th level, the sin monk gains two such replicas of himself, and at 16th level, he gains three. Sloth : The sin monk gains the benefits of Vital Strike. At 10th level, he also gains the benefits of Improved Vital Strike, and at 16th level, he also gains the benefits of Greater Vital Strike. Wrath : The sin monk increases the save DCs of his attacks with Stunning Fist (and Punishing Kick, if he has that feat) by 1. The save DC instead increases by 2 at 10th level and by 3 at 16th level. When a sin monk gains a level in the monk class and would gain one of the following class features, he can forfeit that class feature to instead increase the size of his sin pool by 1 sin point: purity of body, diamond body, diamond soul, timeless body, tongue of the sun and moon. Once the decision is made, it cannot be changed.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: wholeness of body

- **Archetype feature:** Sinful Strike (Su)
- **Description:** At 7th level, a sin monk can spend 2 sin points as a swift action to focus his power.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a sin monk can spend 2 sin points as a swift action to focus his power. The next time he deals damage before the end of his next turn, he deals an additional amount damage equal to his monk level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: abundant step

- **Archetype feature:** Burden with Sin (Su)
- **Description:** At 12th level, a sin monk can spend a swift action and one daily use of Stunning Fist to draw his sinful nature to the fore of his consciousness.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a sin monk can spend a swift action and one daily use of Stunning Fist to draw his sinful nature to the fore of his consciousness. The next person he hits with a melee attack before the end of his next turn must succeed at a Will save (DC = 10 + half the sin monk’s class level + his Wisdom modifier) or suffer the burden of the sin monk’s sins. The target is treated as if she were carrying a load one step heavier (from a light load to a medium load, and so on) and must succeed at a caster level check to use any form of teleportation (DC = 10 + the monk’s class level). This is a curse UM effect that lasts a number of rounds equal to the sin monk’s Wisdom modifier unless it is removed through remove curse or a similar effect.
- **Implementation flags:**
  - curse subsystem.
  - teleport/positioning subsystem.

### Replaces: empty body

- **Archetype feature:** Simultaneous Sins (Su)
- **Description:** At 19th level, a sin monk can spend 3 points from his sin pool as a swift action to gain the benefits of two different sins simultaneously.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, a sin monk can spend 3 points from his sin pool as a swift action to gain the benefits of two different sins simultaneously.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: perfect self

- **Archetype feature:** Spawn of Sin (Ex)
- **Description:** At 20th level, the sin monk becomes the physical manifestation of his sins.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, the sin monk becomes the physical manifestation of his sins. He is forevermore treated as an aberration rather than a humanoid (or whatever the monk’s creature type was) for the purpose of spells and magical effects, and his mind is so consumed by sin that he gains immunity to mind-affecting effects. He does not change in appearance or gain other abilities; however, should the sin monk be slain and brought back from the dead, he returns to life as a sinspawn ( Pathfinder RPG Bestiary 2 246), retaining his class levels but otherwise replacing his creature type and racial abilities with those of his new form and becoming an NPC under the GM’s control.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Well of Sin (Su)
- Sinful Strike (Su)
- Burden with Sin (Su)
- Simultaneous Sins (Su)
- Spawn of Sin (Ex)
