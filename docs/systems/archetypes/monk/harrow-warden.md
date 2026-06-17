# Monk - Harrow Warden

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Harrow Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Harrow%20Warden
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Idiot Strike (Su); Mute Hag Stance (Su); Big Sky Stance (Su); Eclipse Strike (Su)
- **Replaced / altered class features:** stunning fist; improved evasion; diamond body; quivering palm

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** The harrow warden is proficient with all simple weapons, as well as with the klar ( Pathfinder RPG Ultimate Equipment 31), rapier, short sword, and starknife.
- **Detailed mechanics:**
  - **Rules text to implement:** The harrow warden is proficient with all simple weapons, as well as with the klar ( Pathfinder RPG Ultimate Equipment 31), rapier, short sword, and starknife. Additionally, harrow wardens treat starknives as monk weapons.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: stunning fist

- **Archetype feature:** Idiot Strike (Su)
- **Description:** At 1st level, the harrow warden can make an unarmed strike against a target and curse the creature with bad luck.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 4, 12, 16.
  - **Rules text to implement:** At 1st level, the harrow warden can make an unarmed strike against a target and curse the creature with bad luck. Foes damaged by an idiot strike must succeed at a Will save (DC 10 + 1/2 the monk’s level + the monk’s Wisdom modifier) or become jinxed. A jinxed creature must roll twice whenever it attempts an attack roll, a saving throw, a skill check, or a caster level check for 1 round, taking the lower result in each instance. The harrow warden can use idiot strike once per day per monk level. She must declare that she is using an idiot strike before making the attack roll; thus, a failed roll wastes the attempt. At 4th level and again at 12th level, the jinx effect lasts an additional round. At 16th level, a harrow warden can expend two uses of idiot strike to instead curse her target as the bestow curse spell.
- **Implementation flags:**
  - ki subsystem.
  - curse subsystem.
  - skill/class-skill modification.

### Replaces: improved evasion

- **Archetype feature:** Mute Hag Stance (Su)
- **Description:** Beginning at 9th level, the harrow warden can block opponents’ metaphysical ties to one another.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** Beginning at 9th level, the harrow warden can block opponents’ metaphysical ties to one another. Enemies threatened by the harrow warden do not gain the effects of any morale or insight bonuses on attack rolls or skill checks as long as they are within the harrow warden’s threatened area.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: diamond body

- **Archetype feature:** Big Sky Stance (Su)
- **Description:** At 11th level, the harrow warden becomes secure in her role within the larger story.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, the harrow warden becomes secure in her role within the larger story. She gains immunity to curses and polymorph effects.
- **Implementation flags:**
  - curse subsystem.

### Replaces: quivering palm

- **Archetype feature:** Eclipse Strike (Su)
- **Description:** Beginning at 15th level, the harrow warden can strike a target with enough force to realign its place in the world.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 15.
  - **Rules text to implement:** Beginning at 15th level, the harrow warden can strike a target with enough force to realign its place in the world. Foes damaged by the harrow warden’s idiot strike can attempt a Fortitude save (DC 10 + 1/2 the monk’s level + the monk’s Wisdom modifier). Those that fail are transmuted into a harmless form, as per the baleful polymorph spell.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Weapon and Armor Proficiency
- Idiot Strike (Su)
- Mute Hag Stance (Su)
- Big Sky Stance (Su)
- Eclipse Strike (Su)
