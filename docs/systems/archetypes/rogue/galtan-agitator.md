# Rogue - Galtan Agitator

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Galtan Agitator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Galtan%20Agitator
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Reputation (Ex); Ready for Betrayal (Ex); Enthralling Agitation (Su); Revolutionary’s Cause (Su); Leadership (Ex); Rogue Talents; Advanced Rogue Talents
- **Replaced / altered class features:** trapfinding; trap sense; the rogue talent gained at 8th level

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Reputation (Ex)
- **Description:** This ability functions as the renown vigilante social talent ( Pathfinder RPG Ultimate Intrigue 12 ).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: This ability functions as the renown vigilante social talent ( Pathfinder RPG Ultimate Intrigue 12 ). In addition to improving attitudes, it also improves the Galtan agitator’s starting influence ( Ultimate Intrigue 102 ) and reputation with contacts ( Pathfinder RPG Ultimate Campaign 148 ) in the area by one level or step. If the Galtan agitator has another identity, she does not gain any benefits from renown while in that identity unless she has the renown social talent or a similar ability.
- **Implementation flags:**
  - Needs implementation review: reputation subsystem, vigilante identity/social-talent mechanics.

### Replaces: trap sense

- **Archetype feature:** Ready for Betrayal (Ex)
- **Description:** At 3rd level, a Galtan agitator gains a +1 bonus on Perception checks to recognize disguises and notice hiding creatures and on Sense Motive checks to disbelieve lies.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 18.
  - Mechanics summary: At 3rd level, a Galtan agitator gains a +1 bonus on Perception checks to recognize disguises and notice hiding creatures and on Sense Motive checks to disbelieve lies. These bonuses increase by 1 every 3 rogue levels thereafter (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the rogue talent gained at 4th level

- **Archetype feature:** Enthralling Agitation (Su)
- **Description:** At 4th level, a Galtan agitator can captivate a crowd once per day, as per the spell enthrall.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a Galtan agitator can captivate a crowd once per day, as per the spell enthrall . (DC = 10 + 1/2 the Galtan agitator’s rogue level + her Charisma modifier). During the spell’s effect, the Galtan agitator can attempt a DC 15 Charisma check to increase her individual or organizational influence with the members of the crowd by 1 rank or step. Or, if the crowd members’ attitudes toward the Galtan agitator are indifferent or worse, this check can improve their attitudes by 1 step. The Galtan agitator can never use this ability to increase her individual or organization influence or improve the crowd’s attitude by more than 2 ranks or steps.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook.

### Replaces: the rogue talent gained at 8th level

- **Archetype feature:** Revolutionary’s Cause (Su)
- **Description:** At 8th level, the Galtan agitator can lift an enthralled crowd’s emotions and turn them toward a common purpose.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, the Galtan agitator can lift an enthralled crowd’s emotions and turn them toward a common purpose. As a standard action after she has used her enthralling agitation— but before the enthrall effect wears off—she can target the affected creatures with a plausible suggestion (DC = 10 + 1/2 her rogue level + her Charisma modifier).
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, eidolon evolution hook.

### Replaces: the rogue talent gained at 12th level

- **Archetype feature:** Leadership (Ex)
- **Description:** At 12th level, a Galtan agitator gains Leadership as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a Galtan agitator gains Leadership as a bonus feat. If the Galtan agitator already has the Leadership feat, she doubles her Charisma modifier when calculating her base Leadership score.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Reputation (Ex)
- Ready for Betrayal (Ex)
- Enthralling Agitation (Su)
- Revolutionary’s Cause (Su)
- Leadership (Ex)
- Rogue Talents
- Advanced Rogue Talents

