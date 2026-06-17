# Cleric - Angelfire Apostle

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Angelfire Apostle
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Angelfire%20Apostle
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Armor Proficiency; Diminished Spellcasting; Extra Channel; Channel Angelfire (Su); Versatile Healing Channel (Sp); Cleansing Flames (Su)
- **Replaced / altered class features:** Armor Proficiency; Spellcasting; Alignment; Channel Energy

## Implementation details

### Alters: the cleric’s armor proficiency

- **Archetype feature:** Armor Proficiency
- **Description:** Angelfire apostles are not proficient with medium armor.
- **Detailed mechanics:**
  - **Rules text to implement:** Angelfire apostles are not proficient with medium armor.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the cleric’s spellcasting

- **Archetype feature:** Diminished Spellcasting
- **Description:** An angelfire apostle is less concerned with the traditional divine magic that many religious adherents receive.
- **Detailed mechanics:**
  - **Rules text to implement:** An angelfire apostle is less concerned with the traditional divine magic that many religious adherents receive. The angelfire apostle receives one fewer spell slot at each spell level. When an angelfire apostle gets no spells per day at a spell level, he can cast domain spells of that level normally, but can only cast nondomain spells of that level if he gets them as bonus spells.
- **Implementation flags:**
  - domain system.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Extra Channel
- **Description:** At 1st level, the angelfire apostle gains Extra Channel as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, the angelfire apostle gains Extra Channel as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: channel energy

- **Archetype feature:** Channel Angelfire (Su)
- **Description:** An angelfire apostle must be of good or neutral alignment and must choose to channel positive energy, even if his deity is neutral or if he is not devoted to a particular deity.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** An angelfire apostle must be of good or neutral alignment and must choose to channel positive energy, even if his deity is neutral or if he is not devoted to a particular deity. When an angelfire apostle channels positive energy, affected nongood creatures are dazzled for 1 round, with no saving throw for this effect, in addition to experiencing the normal effects of channel energy.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Versatile Healing Channel (Sp)
- **Description:** At 5th level, the angelfire apostle can spend two uses of his channel energy ability to cast remove blindness/deafness or lesser restoration as a spell-like ability.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 5, 7, 9, 11, 13, 15, 17, 19.
  - **Rules text to implement:** At 5th level, the angelfire apostle can spend two uses of his channel energy ability to cast remove blindness/deafness or lesser restoration as a spell-like ability. At 7th level, he can choose remove disease or remove paralysis. At 9th level, he can choose neutralize poison. At 11th level, he can choose breath of life. At 13th level, he can choose heal. At 15th level, he can choose regenerate. At 17th level, he can choose restoration but cannot affect permanent negative levels. At 19th level, he can choose resurrection but can affect only a target that has been dead no more than 1 round per his cleric level.
- **Implementation flags:**
  - poison subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Cleansing Flames (Su)
- **Description:** At 9th level, the angelfire apostle becomes a direct conduit for the righteous power of his deity.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, the angelfire apostle becomes a direct conduit for the righteous power of his deity. Whenever the angelfire apostle casts a spell that belongs to the healing subschool that is a lower spell level than the highest spell he can cast, he can unleash a blast of flames as a swift action by expending one use of his channel energy ability. The flames last for 1 round and fill a contiguous area equal to one 10-foot cube per level of the healing spell cast (at least one side of the cube must be adjacent to the angelfire apostle’s space). The flames deal 1d4 points of damage per spell level. Half of the damage is fire damage, and half is raw divine power not subject to fire resistance or immunity. Any creature in the area can halve the damage with a successful Reflex saving throw against the spell’s DC. The angelfire apostle can use this ability a number of times per day equal to his Charisma modifier.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Armor Proficiency
- Diminished Spellcasting
- Extra Channel
- Channel Angelfire (Su)
- Versatile Healing Channel (Sp)
- Cleansing Flames (Su)
