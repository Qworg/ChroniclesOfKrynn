# Inquisitor - Oathkeeper

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Oathkeeper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Oathkeeper
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Divine Witness (Su); Oathbreaker’s Scourge (Su)
- **Replaced / altered class features:** Alignment; Class Skills; Monster Lore; Track

## Replacement details

### Alters: the inquisitor’s alignment requirements

- **Archetype feature:** Alignment
- **Description:** An oathkeeper must be of a lawful alignment, and her alignment must be within one step of her deity’s.
- **Mechanics:**
  - Mechanics summary: An oathkeeper must be of a lawful alignment, and her alignment must be within one step of her deity’s.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the inquisitor’s class skills

- **Archetype feature:** Class Skills
- **Description:** An oathkeeper removes Knowledge (nature) from her list of class skills and adds Appraise.
- **Mechanics:**
  - Mechanics summary: An oathkeeper removes Knowledge (nature) from her list of class skills and adds Appraise.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: monster lore

- **Archetype feature:** Divine Witness (Su)
- **Description:** Every oathkeeper inquisitor develops a unique personal symbol, which she can use to seal an agreement between two or more willing parties.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: Every oathkeeper inquisitor develops a unique personal symbol, which she can use to seal an agreement between two or more willing parties. The agreement, whether it’s a trade contract, a truce, or a political marriage, must be as detailed as possible and then signed in the oathkeeper’s presence by every creature involved. Creatures must sign of their own free will—any magical or physical coercion will cause the contract to crumble into ash when the oathkeeper attempts to place her seal upon it. So long as no mystic or physical force is influencing any participating creature, the oathkeeper can mystically seal the arrangement with her personal symbol, binding all signing parties into upholding their ends of the bargain for the length of time spelled out in the agreement. Should any oathbound creature break the exact wording of the contract, the agreement is dissolved and the offending creature is cursed, taking a penalty on all d20 rolls equal to the oathkeeper’s Wisdom modifier for a number of weeks equal to the oathkeeper’s inquisitor level. Furthermore, the inquisitor’s symbol appears as a mystic symbol on the offending creature’s throat and hands, allowing the oathkeeper to know the creature’s location at all times, as per the discern location spell.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, spellcasting/spell-list hook, ki/monk hook.

### Replaces: track

- **Archetype feature:** Oathbreaker’s Scourge (Su)
- **Description:** At 2nd level, if an oathkeeper is given physical evidence of a broken agreement and asked to hunt down the contract’s breaker by the offended party, the oathkeeper gains a +4 sacred or profane bonus on Diplomacy and Survival skill checks to gather information about and track the target.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, if an oathkeeper is given physical evidence of a broken agreement and asked to hunt down the contract’s breaker by the offended party, the oathkeeper gains a +4 sacred or profane bonus on Diplomacy and Survival skill checks to gather information about and track the target. The inquisitor is also treated as being 3 levels higher for the purpose of one judgment she uses against the deal breaker, so long as she keeps possession of the evidence. If the oathkeeper uses oathbreaker’s scourge when attacking someone who is actually innocent of fraud—due to forgery, hasty judgments, or other deceptions—she loses access to all of her oathkeeper archetype abilities for 1 month or until she is the target of an atonement spell.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Divine Witness (Su)
- Oathbreaker’s Scourge (Su)

