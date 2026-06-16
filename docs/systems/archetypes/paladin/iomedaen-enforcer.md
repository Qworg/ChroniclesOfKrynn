# Paladin - Iomedaen Enforcer

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Iomedaen Enforcer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Iomedaen%20Enforcer
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Detect Chaos (Sp); Smite Chaos (Su); Aura of Order; Armor of Law (Su)
- **Replaced / altered class features:** detect evil; smite evil

## Replacement details

### Replaces: the paladin’s class skills list

- **Archetype feature:** Class Skills
- **Description:** The Iomedaean enforcer's class skills are Craft (Int), Handle Animal (Cha), Heal (Wis), Intimidate (Cha), Knowledge (local) (Int), Knowledge (religion) (Int), Profession (Wis), Ride (Dex), Sense Motive (Wis), and Spellcraft (Int).
- **Mechanics:**
  - Mechanics summary: The Iomedaean enforcer's class skills are Craft (Int), Handle Animal (Cha), Heal (Wis), Intimidate (Cha), Knowledge (local) (Int), Knowledge (religion) (Int), Profession (Wis), Ride (Dex), Sense Motive (Wis), and Spellcraft (Int).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, ki/monk hook.

### Replaces: detect evil

- **Archetype feature:** Detect Chaos (Sp)
- **Description:** At will, an Iomedaean enforcer can use detect chaos, as per the spell.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: At will, an Iomedaean enforcer can use detect chaos, as per the spell. The Iomedaean enforcer can, as a move action, concentrate on a single item or individual within 60 feet and determine whether it is chaotic, learning the strength of its aura as if she had studied it for 3 rounds. While focusing on one individual or object, the Iomedaean enforcer can’t use detect chaos on any other object or individual within range.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: smite evil

- **Archetype feature:** Smite Chaos (Su)
- **Description:** This ability functions as the paladin’s smite evil ability, but against chaotic-aligned creatures.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: This ability functions as the paladin’s smite evil ability, but against chaotic-aligned creatures. Smite chaos is twice as effective against chaotic-aligned aberrations, outsiders with the chaotic subtype, and fey.
- **Implementation flags:**
  - Likely existing hooks: smite hook.

### Alters: aura of faith

- **Archetype feature:** Aura of Order
- **Description:** At 14th level, the paladin’s weapons are treated as lawful-aligned for the purposes of overcoming damage reduction.
- **Mechanics:**
  - Level hooks: 14.
  - Mechanics summary: At 14th level, the paladin’s weapons are treated as lawful-aligned for the purposes of overcoming damage reduction. Any attack made against an enemy within 10 feet of the Iomedaean enforcer is treated as if it were lawful-aligned for the purpose of overcoming damage reduction.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the aura of righteousness and holy champion class features

- **Archetype feature:** Armor of Law (Su)
- **Description:** When an enforcer gains damage reduction from aura of righteousness, it is DR 5/chaos instead of DR 5/evil.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: When an enforcer gains damage reduction from aura of righteousness, it is DR 5/chaos instead of DR 5/evil. When that DR increases from the holy champion class feature, it increases to DR 10/chaos.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

## Parsed source feature headings

- Class Skills
- Detect Chaos (Sp)
- Smite Chaos (Su)
- Aura of Order
- Armor of Law (Su)

