# Summoner - Storm Caller

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Storm Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Storm%20Caller
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Stormy Eidolon; Summon Storm’s Fury (Sp); Electrical Polarity (Su); Storm’s Wings (Su)
- **Replaced / altered class features:** shield ally and greater shield ally; maker’s call and transposition

## Replacement details

### Alters: eidolon

- **Archetype feature:** Stormy Eidolon
- **Description:** A storm caller must select the resistance (electricity) or immunity (electricity) evolution for his eidolon.
- **Mechanics:**
  - Mechanics summary: A storm caller must select the resistance (electricity) or immunity (electricity) evolution for his eidolon. If the eidolon has neither of these evolutions, it becomes nauseated until it regains one of them.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook, eidolon evolution hook.

### Alters: the summoner's summon monster I–IX abilities

- **Archetype feature:** Summon Storm’s Fury (Sp)
- **Description:** A storm caller can summon creatures infused with the power of the storm to help him.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 3, 19, 5.
  - Mechanics summary: A storm caller can summon creatures infused with the power of the storm to help him. This functions as the summoner's summon monster I–IX abilities, except the storm caller can summon only the following creatures at the indicated spell levels: I—eagle; II—small air elemental, small lightning elemental B2 ; III—dire bat; IV—medium air elemental, medium lightning elemental B2 , pteranodon; V—large air elemental, large lightning elemental B2 ; VI—huge air eleme... Any creatures summoned with this ability gain immunity to electricity. Alternatively, whenever his eidolon is not summoned, a storm caller can expend a daily use of this ability to summon a magical storm as a standard action. This functions as call lightning with a caster level equal to his summoner level, except as noted below. Each bolt of lightning deals 1d6 points of electricity damage.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook, summoner eidolon hook.

### Replaces: shield ally and greater shield ally

- **Archetype feature:** Electrical Polarity (Su)
- **Description:** At 4th level, a storm caller and his eidolon can temporarily form an electrical current between them.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 12.
  - Mechanics summary: At 4th level, a storm caller and his eidolon can temporarily form an electrical current between them. The storm caller can expend a use of his summon storm’s fury ability as a standard action to create an instantaneous line of lightning between him and his eidolon, provided that the eidolon is within 60 feet of him. The lightning arc deals the same amount of damage to all creatures in the line and has the same save DC as a bolt of lightning from the summon storm’s fury ability (unlike call lightning , this damage is dealt only once). At 12th level, the storm caller gains the benefit of his eidolon’s resistance (electricity) or immunity (electricity) evolution whenever he is within 30 feet of the eidolon.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, summoner eidolon hook, eidolon evolution hook.

### Replaces: maker’s call and transposition

- **Archetype feature:** Storm’s Wings (Su)
- **Description:** At 6th level, a storm caller can borrow some of his eidolon’s elemental might.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 8, 10, 18.
  - Mechanics summary: At 6th level, a storm caller can borrow some of his eidolon’s elemental might. He can gain the flight evolution ( Pathfinder Unchained 37) as though he were using the summoner’s aspect ability, deducting 2 evolution points from the eidolon’s evolution pool. At 8th level, the storm caller’s eidolon can have the flight evolution even if the storm caller has that evolution. At 10th level, the storm caller automatically gains the flight evolution without reducing the number of evolution points available to the eidolon. He can use the aspect ability (and at 18th level, the greater aspect ability) to gain additional evolutions.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook, eidolon evolution hook.

## Parsed source feature headings

- Stormy Eidolon
- Summon Storm’s Fury (Sp)
- Electrical Polarity (Su)
- Storm’s Wings (Su)

