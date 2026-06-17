# Druid - Tempest Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Tempest Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Tempest%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Armor and Weapon Proficiencies; Spontaneous Domain Casting; Nature Bond (Ex); Sodden Shore Sense (Ex); Electrical Resistance (Ex); Eyes of the Storm (Ex); Bend Bolt (Su)
- **Replaced / altered class features:** nature sense; trackless step; resist nature’s lure; venom immunity

## Implementation details

### Alters: the druid’s alignment

- **Archetype feature:** Alignment
- **Description:** The beliefs held by tempest druids are inherently more chaotic than those held by most druids, and as a result, tempest druids must be chaotic neutral.
- **Detailed mechanics:**
  - **Rules text to implement:** The beliefs held by tempest druids are inherently more chaotic than those held by most druids, and as a result, tempest druids must be chaotic neutral.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the druid’s armor and weapon proficiencies

- **Archetype feature:** Armor and Weapon Proficiencies
- **Description:** A tempest druid is proficient with the trident, in addition to the druid’s normal armor and weapon proficiencies.
- **Detailed mechanics:**
  - **Rules text to implement:** A tempest druid is proficient with the trident, in addition to the druid’s normal armor and weapon proficiencies.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the druid’s normal ability to spontaneously cast summon spells

- **Archetype feature:** Spontaneous Domain Casting
- **Description:** A tempest druid can channel stored spell energy into domain spells that he has not prepared ahead of time.
- **Detailed mechanics:**
  - **Rules text to implement:** A tempest druid can channel stored spell energy into domain spells that he has not prepared ahead of time. He can “lose” a prepared spell to cast any domain spell of the same level or lower.
- **Implementation flags:**
  - domain system.
  - summoning subsystem.

### Alters: nature bond

- **Archetype feature:** Nature Bond (Ex)
- **Description:** As a result of his beliefs, a tempest druid has little connection to the spirituality of animals or plants.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** As a result of his beliefs, a tempest druid has little connection to the spirituality of animals or plants. He can’t choose an animal companion, and must instead select a domain or subdomain from the following list when he gains the nature bond ability: Air, Aquatic UM, Cloud APG, Storm APG, Swamp UM, Weather, or Wind APG.
- **Implementation flags:**
  - animal companion progression.
  - domain system.

### Replaces: nature sense

- **Archetype feature:** Sodden Shore Sense (Ex)
- **Description:** A tempest druid gains a +4 bonus on Knowledge (nature) and Survival checks in coastal or marshy lands.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A tempest druid gains a +4 bonus on Knowledge (nature) and Survival checks in coastal or marshy lands.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Electrical Resistance (Ex)
- **Description:** At 3rd level, a tempest druid gains electricity resistance 5.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a tempest druid gains electricity resistance 5. As a standard action, he can transfer this resistance to another creature for 1 hour, after which time it reverts to him.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Eyes of the Storm (Ex)
- **Description:** At 4th level, a tempest druid can see through 10 feet of magical fog, mist, rain, wind, or similar inclement weather conditions, ignoring any concealment such conditions might grant.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a tempest druid can see through 10 feet of magical fog, mist, rain, wind, or similar inclement weather conditions, ignoring any concealment such conditions might grant. This distance increases by 5 feet for every 4 levels beyond 4th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: venom immunity

- **Archetype feature:** Bend Bolt (Su)
- **Description:** At 9th level, a tempest druid can redirect nearby electrical attacks.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a tempest druid can redirect nearby electrical attacks. As an immediate action, the druid can shift the area or target of an electricity attack by 5 feet in any direction. If the electricity affects an area, the druid selects one square to be unaffected and an adjacent square to be affected. If the adjacent square is already in the area, this has no additional effect in that square. If the electricity affects a target, the druid selects an adjacent target. For example, if he were in the line of a wizard’s lightning bolt, he could have the spell skip his square and instead affect an adjacent square, even if this meant the spell did not form a continuous line. If another druid attacked him with call lightning, he could shift the called bolt to an adjacent square, affecting a creature in that square (if any). He can’t redirect electricity damage conducted to him by physical contact with an object or creature (such as a shocking grasp or a shock weapon). He can use this ability a number of times per day equal to his Wisdom bonus.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Alignment
- Armor and Weapon Proficiencies
- Spontaneous Domain Casting
- Nature Bond (Ex)
- Sodden Shore Sense (Ex)
- Electrical Resistance (Ex)
- Eyes of the Storm (Ex)
- Bend Bolt (Su)
