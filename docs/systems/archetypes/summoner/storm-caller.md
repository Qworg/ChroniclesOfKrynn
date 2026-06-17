# Summoner - Storm Caller

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Storm Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Storm%20Caller
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Stormy Eidolon; Summon Storm’s Fury (Sp); Electrical Polarity (Su); Storm’s Wings (Su)
- **Replaced / altered class features:** shield ally and greater shield ally; maker’s call and transposition

## Implementation details

### Alters: eidolon

- **Archetype feature:** Stormy Eidolon
- **Description:** A storm caller must select the resistance (electricity) or immunity (electricity) evolution for his eidolon.
- **Detailed mechanics:**
  - **Rules text to implement:** A storm caller must select the resistance (electricity) or immunity (electricity) evolution for his eidolon. If the eidolon has neither of these evolutions, it becomes nauseated until it regains one of them.
- **Implementation flags:**
  - eidolon/evolution subsystem.

### Alters: the summoner's summon monster I–IX abilities

- **Archetype feature:** Summon Storm’s Fury (Sp)
- **Description:** A storm caller can summon creatures infused with the power of the storm to help him.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 3, 19, 5.
  - **Rules text to implement:** A storm caller can summon creatures infused with the power of the storm to help him. This functions as the summoner's summon monster I–IX abilities, except the storm caller can summon only the following creatures at the indicated spell levels: I—eagle; II—small air elemental, small lightning elemental B2 ; III—dire bat; IV—medium air elemental, medium lightning elemental B2, pteranodon; V—large air elemental, large lightning elemental B2 ; VI—huge air elemental, huge lightning elemental B2 ; VII—roc; VIII—elder air elemental, elder lightning elemental B2 ; IX—advanced elder air elemental, advanced elder lightning elemental B2. Any creatures summoned with this ability gain immunity to electricity. Alternatively, whenever his eidolon is not summoned, a storm caller can expend a daily use of this ability to summon a magical storm as a standard action. This functions as call lightning with a caster level equal to his summoner level, except as noted below. Each bolt of lightning deals 1d6 points of electricity damage. This damage increases by 1d6 at 3rd level and every 2 levels thereafter, to a maximum of 10d6 at 19th level. The prevailing weather has no effect on the damage of the lightning bolts. The Reflex save DC is equal to 10 + half the storm caller's summoner level + his Charisma modifier. If the storm caller uses this ability again before he has used all of his available bolts of lightning (to summon another magical storm, to summon a monster, or to use the gate spell), any unused bolts are expended with no effect. The storm caller adds call lightning to his summoner spell list as a 3rd-level spell and call lightning storm to his summoner spell list as a 5th-level spell, but he does not automatically add them to his list of spells known.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.
  - archetype spell-list override.

### Replaces: shield ally and greater shield ally

- **Archetype feature:** Electrical Polarity (Su)
- **Description:** At 4th level, a storm caller and his eidolon can temporarily form an electrical current between them.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 12.
  - **Rules text to implement:** At 4th level, a storm caller and his eidolon can temporarily form an electrical current between them. The storm caller can expend a use of his summon storm’s fury ability as a standard action to create an instantaneous line of lightning between him and his eidolon, provided that the eidolon is within 60 feet of him. The lightning arc deals the same amount of damage to all creatures in the line and has the same save DC as a bolt of lightning from the summon storm’s fury ability (unlike call lightning, this damage is dealt only once). The storm caller and his eidolon are not affected by this lightning. At 12th level, the storm caller gains the benefit of his eidolon’s resistance (electricity) or immunity (electricity) evolution whenever he is within 30 feet of the eidolon.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

### Replaces: maker’s call and transposition

- **Archetype feature:** Storm’s Wings (Su)
- **Description:** At 6th level, a storm caller can borrow some of his eidolon’s elemental might.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 8, 10, 18.
  - **Rules text to implement:** At 6th level, a storm caller can borrow some of his eidolon’s elemental might. He can gain the flight evolution ( Pathfinder Unchained 37) as though he were using the summoner’s aspect ability, deducting 2 evolution points from the eidolon’s evolution pool. If he does so, his eidolon is unable to take the flight evolution as long as the storm caller has that evolution. At 8th level, the storm caller’s eidolon can have the flight evolution even if the storm caller has that evolution. At 10th level, the storm caller automatically gains the flight evolution without reducing the number of evolution points available to the eidolon. He can use the aspect ability (and at 18th level, the greater aspect ability) to gain additional evolutions.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

## Parsed source feature headings

- Stormy Eidolon
- Summon Storm’s Fury (Sp)
- Electrical Polarity (Su)
- Storm’s Wings (Su)
