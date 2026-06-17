# Paladin - Iomedaen Enforcer

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Iomedaen Enforcer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Iomedaen%20Enforcer
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Detect Chaos (Sp); Smite Chaos (Su); Aura of Order; Armor of Law (Su)
- **Replaced / altered class features:** detect evil; smite evil

## Implementation details

### Replaces: the paladin’s class skills list

- **Archetype feature:** Class Skills
- **Description:** The Iomedaean enforcer's class skills are Craft (Int), Handle Animal (Cha), Heal (Wis), Intimidate (Cha), Knowledge (local) (Int), Knowledge (religion) (Int), Profession (Wis), Ride (Dex), Sense Motive (Wis), and Spellcraft (Int).
- **Detailed mechanics:**
  - **Rules text to implement:** The Iomedaean enforcer's class skills are Craft (Int), Handle Animal (Cha), Heal (Wis), Intimidate (Cha), Knowledge (local) (Int), Knowledge (religion) (Int), Profession (Wis), Ride (Dex), Sense Motive (Wis), and Spellcraft (Int).
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - skill/class-skill modification.

### Replaces: detect evil

- **Archetype feature:** Detect Chaos (Sp)
- **Description:** At will, an Iomedaean enforcer can use detect chaos, as per the spell.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** At will, an Iomedaean enforcer can use detect chaos, as per the spell. The Iomedaean enforcer can, as a move action, concentrate on a single item or individual within 60 feet and determine whether it is chaotic, learning the strength of its aura as if she had studied it for 3 rounds. While focusing on one individual or object, the Iomedaean enforcer can’t use detect chaos on any other object or individual within range.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: smite evil

- **Archetype feature:** Smite Chaos (Su)
- **Description:** This ability functions as the paladin’s smite evil ability, but against chaotic-aligned creatures.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** This ability functions as the paladin’s smite evil ability, but against chaotic-aligned creatures. Smite chaos is twice as effective against chaotic-aligned aberrations, outsiders with the chaotic subtype, and fey.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: aura of faith

- **Archetype feature:** Aura of Order
- **Description:** At 14th level, the paladin’s weapons are treated as lawful-aligned for the purposes of overcoming damage reduction.
- **Detailed mechanics:**
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, the paladin’s weapons are treated as lawful-aligned for the purposes of overcoming damage reduction. Any attack made against an enemy within 10 feet of the Iomedaean enforcer is treated as if it were lawful-aligned for the purpose of overcoming damage reduction.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the aura of righteousness and holy champion class features

- **Archetype feature:** Armor of Law (Su)
- **Description:** When an enforcer gains damage reduction from aura of righteousness, it is DR 5/chaos instead of DR 5/evil.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** When an enforcer gains damage reduction from aura of righteousness, it is DR 5/chaos instead of DR 5/evil. When that DR increases from the holy champion class feature, it increases to DR 10/chaos.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Detect Chaos (Sp)
- Smite Chaos (Su)
- Aura of Order
- Armor of Law (Su)
