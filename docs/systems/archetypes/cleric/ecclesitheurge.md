# Cleric - Ecclesitheurge

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Ecclesitheurge
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Ecclesitheurge
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Ecclesitheurge’s Vow; Blessing of the Faithful (Su); Domain Mastery; Bonded Holy Symbol (Su)
- **Replaced / altered class features:** the increase to channel energy gained at 3rd level

## Implementation details

### Replaces: the cleric’s weapon and armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** An ecclesitheurge is proficient with the club, dagger, heavy crossbow, light crossbow, and quarterstaff, but he’s not proficient with any type of armor or shield.
- **Detailed mechanics:**
  - **Rules text to implement:** An ecclesitheurge is proficient with the club, dagger, heavy crossbow, light crossbow, and quarterstaff, but he’s not proficient with any type of armor or shield.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ecclesitheurge’s Vow
- **Description:** At 1st level, an ecclesitheurge makes a vow to his deity to be protected solely by his faith, not by armor or shields.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an ecclesitheurge makes a vow to his deity to be protected solely by his faith, not by armor or shields. An ecclesitheurge who wears armor or uses a shield is unable to use his blessing of the faithful ability, use cleric domain powers, or cast cleric spells.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Blessing of the Faithful (Su)
- **Description:** As a standard action, the ecclesitheurge can bless one ally within close range (25 ft.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** As a standard action, the ecclesitheurge can bless one ally within close range (25 ft. + 5 ft./2 levels). A blessed ally gains a +2 sacred or profane bonus (depending on whether the ecclesitheurge channels positive or negative energy) on attack rolls, skill checks, ability checks, or saving throws or to AC until the ecclesitheurge’s next turn. The ecclesitheurge can expend 1 use of channel energy when activating this ability to increase the duration to a number of rounds equal to the number of dice of his channel energy.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: the normal domain ability

- **Archetype feature:** Domain Mastery
- **Description:** At 1st level, when an ecclesitheurge chooses his cleric domains, he designates one as his primary domain and the other as his secondary domain.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, when an ecclesitheurge chooses his cleric domains, he designates one as his primary domain and the other as his secondary domain. An ecclesitheurge can use his non-domain spell slots to prepare spells from his primary domain's spell list. Each day when he prepares spells, an ecclesitheurge can select a different domain granted by his deity to gain access to that domain's spell list instead of his secondary domain spell list. He does not lose access to his actual secondary domain's granted powers or gain access to the other domain's granted powers. For example, an ecclesitheurge of Sarenrae with Glory as his primary domain and Good as his secondary domain can choose to gain access to the Healing domain; until the next time he prepares spells, he uses the Healing domain spell list as his secondary domain spell list instead of the Good domain spell list, but still keeps the granted powers of the Good domain and does not gain the granted powers of the Healing domain.
- **Implementation flags:**
  - domain system.
  - archetype spell-list override.

### Replaces: the increase to channel energy gained at 3rd level

- **Archetype feature:** Bonded Holy Symbol (Su)
- **Description:** At 3rd level, an ecclesitheurge forms a powerful bond with a holy symbol of his deity, which functions identically to a wizard’s bonded object except it can be used to cast cleric and domain spells (instead of wizard spells) and the ecclesitheurge can grant his bonded holy symbol only magic abilities appropriate for a holy symbol or a neck slot item.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an ecclesitheurge forms a powerful bond with a holy symbol of his deity, which functions identically to a wizard’s bonded object except it can be used to cast cleric and domain spells (instead of wizard spells) and the ecclesitheurge can grant his bonded holy symbol only magic abilities appropriate for a holy symbol or a neck slot item. As with a wizard’s bonded item, an ecclesitheurge can add additional magic abilities to his bonded holy symbol as if he had the required item creation feat (typically Craft Wondrous Item), provided he meets the feat’s level prerequisites. For example, an ecclesitheurge with a bonded holy symbol who wants to add a wondrous amulet ability, like amulet of natural armor, to his bonded holy symbol must be at least 3rd level to do so. The magic properties of a bonded holy symbol, including any magic abilities the ecclesitheurge added to the object, function for only the ecclesitheurge. If a bonded holy symbol’s owner dies or the item is replaced, the object loses all enhancements the ecclesitheurge added using this ability.
- **Implementation flags:**
  - domain system.
  - crafting subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Ecclesitheurge’s Vow
- Blessing of the Faithful (Su)
- Domain Mastery
- Bonded Holy Symbol (Su)
