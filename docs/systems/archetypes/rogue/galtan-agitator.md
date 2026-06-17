# Rogue - Galtan Agitator

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Galtan Agitator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Galtan%20Agitator
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Reputation (Ex); Ready for Betrayal (Ex); Enthralling Agitation (Su); Revolutionary’s Cause (Su); Leadership (Ex); Rogue Talents; Advanced Rogue Talents
- **Replaced / altered class features:** trapfinding; trap sense; the rogue talent gained at 8th level

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Reputation (Ex)
- **Description:** This ability functions as the renown vigilante social talent ( Pathfinder RPG Ultimate Intrigue 12 ).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** This ability functions as the renown vigilante social talent ( Pathfinder RPG Ultimate Intrigue 12 ). In addition to improving attitudes, it also improves the Galtan agitator’s starting influence ( Ultimate Intrigue 102 ) and reputation with contacts ( Pathfinder RPG Ultimate Campaign 148 ) in the area by one level or step. For the purpose of vigilante social talents, the Galtan agitator does not have a vigilante identity and is always considered to be in her social identity, unless she has another identity (such as from the vigilante class). If the Galtan agitator has another identity, she does not gain any benefits from renown while in that identity unless she has the renown social talent or a similar ability.
- **Implementation flags:**
  - vigilante identity subsystem.

### Replaces: trap sense

- **Archetype feature:** Ready for Betrayal (Ex)
- **Description:** At 3rd level, a Galtan agitator gains a +1 bonus on Perception checks to recognize disguises and notice hiding creatures and on Sense Motive checks to disbelieve lies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, a Galtan agitator gains a +1 bonus on Perception checks to recognize disguises and notice hiding creatures and on Sense Motive checks to disbelieve lies. These bonuses increase by 1 every 3 rogue levels thereafter (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talent gained at 4th level

- **Archetype feature:** Enthralling Agitation (Su)
- **Description:** At 4th level, a Galtan agitator can captivate a crowd once per day, as per the spell enthrall.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a Galtan agitator can captivate a crowd once per day, as per the spell enthrall. (DC = 10 + 1/2 the Galtan agitator’s rogue level + her Charisma modifier). During the spell’s effect, the Galtan agitator can attempt a DC 15 Charisma check to increase her individual or organizational influence with the members of the crowd by 1 rank or step. Or, if the crowd members’ attitudes toward the Galtan agitator are indifferent or worse, this check can improve their attitudes by 1 step. The Galtan agitator can never use this ability to increase her individual or organization influence or improve the crowd’s attitude by more than 2 ranks or steps.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talent gained at 8th level

- **Archetype feature:** Revolutionary’s Cause (Su)
- **Description:** At 8th level, the Galtan agitator can lift an enthralled crowd’s emotions and turn them toward a common purpose.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, the Galtan agitator can lift an enthralled crowd’s emotions and turn them toward a common purpose. As a standard action after she has used her enthralling agitation— but before the enthrall effect wears off—she can target the affected creatures with a plausible suggestion (DC = 10 + 1/2 her rogue level + her Charisma modifier). that has a duration of up to 1 day.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rogue talent gained at 12th level

- **Archetype feature:** Leadership (Ex)
- **Description:** At 12th level, a Galtan agitator gains Leadership as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a Galtan agitator gains Leadership as a bonus feat. If the Galtan agitator already has the Leadership feat, she doubles her Charisma modifier when calculating her base Leadership score.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the Galtan agitator archetype canny observer APG, coax information APG, follow clues APG, hard to fool APG, and strong impression APG.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the Galtan agitator archetype canny observer APG, coax information APG, follow clues APG, hard to fool APG, and strong impression APG.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Rogue Talents
- **Description:** The following advanced rogue talents complement the Galtan agitator archetype: feat, thoughtful reexamining APG, and skill mastery.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the Galtan agitator archetype: feat, thoughtful reexamining APG, and skill mastery.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Reputation (Ex)
- Ready for Betrayal (Ex)
- Enthralling Agitation (Su)
- Revolutionary’s Cause (Su)
- Leadership (Ex)
- Rogue Talents
- Advanced Rogue Talents
