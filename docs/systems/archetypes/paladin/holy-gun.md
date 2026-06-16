# Paladin - Holy Gun

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Holy Gun
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Holy%20Gun
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Have Gun; Divine Deed; Divine Bond; Holy Grit (Ex); Holy Slinger (Ex)
- **Replaced / altered class features:** detect evil; smite evil; the standard paladin’s divine bond

## Replacement details

### Replaces: detect evil

- **Archetype feature:** Have Gun
- **Description:** At 1st level, the holy gun gains the Amateur Gunslinger feat and Gunsmithing as a bonus feat.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the holy gun gains the Amateur Gunslinger feat and Gunsmithing as a bonus feat. She also gains a battered gun identical to the one gained by the gunslinger.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: smite evil

- **Archetype feature:** Divine Deed
- **Description:** At 2nd level, the holy gun gains the following deed.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, the holy gun gains the following deed. This deed works and interacts with grit the same way as gunslinger deeds, but only the holy gun can use it. If the holy gun also has levels in gunslinger, she can spend grit points from that class to use this deed. Smiting Shot (Su) : A holy gun can spend 1 grit point to make a smiting shot with a firearm attack as a standard action. If the target is evil, the holy gun adds her Charisma bonus and her paladin level to the damage of the firearm attack. If the target of the smiting shot is an outsider with the evil subtype, an evil-aligned dragon, or an undead creature, the bonus to damage increases to the Charisma modifier plus 2 points of damage per level the paladin possess.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, smite hook.
  - Needs implementation review: firearms / gunslinger rules, grit resource, deed subsystem.

### Replaces: the standard paladin’s divine bond

- **Archetype feature:** Divine Bond
- **Description:** At 5th level, a holy gun forms a bond with her deity.
- **Mechanics:**
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a holy gun forms a bond with her deity. This functions as the paladin’s divine bond ability, except the bond must always take the form of a firearm. In addition to the listed abilities, a holy gun can add the distance , reliable , or seeking special abilities to her weapon, but she cannot add the defending or disruption special abilities.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.
  - Needs implementation review: firearms / gunslinger rules.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Have Gun
- Divine Deed
- Divine Bond
- Holy Grit (Ex)
- Holy Slinger (Ex)

