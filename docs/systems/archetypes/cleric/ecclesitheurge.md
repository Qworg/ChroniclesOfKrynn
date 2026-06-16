# Cleric - Ecclesitheurge

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Ecclesitheurge
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Ecclesitheurge
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Ecclesitheurge’s Vow; Blessing of the Faithful (Su); Domain Mastery; Bonded Holy Symbol (Su)
- **Replaced / altered class features:** the increase to channel energy gained at 3rd level

## Replacement details

### Replaces: the cleric’s weapon

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** An ecclesitheurge is proficient with the club, dagger, heavy crossbow, light crossbow, and quarterstaff, but he’s not proficient with any type of armor or shield.
- **Mechanics:**
  - Mechanics summary: An ecclesitheurge is proficient with the club, dagger, heavy crossbow, light crossbow, and quarterstaff, but he’s not proficient with any type of armor or shield.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** An ecclesitheurge is proficient with the club, dagger, heavy crossbow, light crossbow, and quarterstaff, but he’s not proficient with any type of armor or shield.
- **Mechanics:**
  - Mechanics summary: An ecclesitheurge is proficient with the club, dagger, heavy crossbow, light crossbow, and quarterstaff, but he’s not proficient with any type of armor or shield.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the normal domain ability

- **Archetype feature:** Domain Mastery
- **Description:** At 1st level, when an ecclesitheurge chooses his cleric domains, he designates one as his primary domain and the other as his secondary domain.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, when an ecclesitheurge chooses his cleric domains, he designates one as his primary domain and the other as his secondary domain. An ecclesitheurge can use his non-domain spell slots to prepare spells from his primary domain's spell list. Each day when he prepares spells, an ecclesitheurge can select a different domain granted by his deity to gain access to that domain's spell list instead of his secondary domain spell list. He does not lose access to his actual secondary domain's granted powers or gain access to the other domain's granted powers. For example, an ecclesitheurge of Sarenrae with Glory as his primary domain and Good as his secondary domain can choose to gain access to the Healing domain; until the next time he prepares spells, he uses the Healing domain spell list as his secondary domain spell list instead of the Good domain spell list, but still keeps the granted powers of the Good domain and does not...
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook.

### Replaces: the increase to channel energy gained at 3rd level

- **Archetype feature:** Bonded Holy Symbol (Su)
- **Description:** At 3rd level, an ecclesitheurge forms a powerful bond with a holy symbol of his deity, which functions identically to a wizard’s bonded object except it can be used to cast cleric and domain spells (instead of wizard spells) and the ecclesitheurge can grant his bonded holy symbol only magic abilities appropriate for a holy symbol or a neck slot item.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, an ecclesitheurge forms a powerful bond with a holy symbol of his deity, which functions identically to a wizard’s bonded object except it can be used to cast cleric and domain spells (instead of wizard spells) and the ecclesitheurge can grant his bonded holy symbol only magic abilities appropriate for a holy symbol or a neck slot item. As with a wizard’s bonded item, an ecclesitheurge can add additional magic abilities to his bonded holy symbol as if he had the required item creation feat (typically Craft Wondrous Item), provided he meets the feat’s level prerequisites. For example, an ecclesitheurge with a bonded holy symbol who wants to add a wondrous amulet ability, like amulet of natural armor , to his bonded holy symbol must be at least 3rd level to do so.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, cleric domain hook, AC/natural armor bonus.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Ecclesitheurge’s Vow
- Blessing of the Faithful (Su)
- Domain Mastery
- Bonded Holy Symbol (Su)

