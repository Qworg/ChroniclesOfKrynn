# Paladin - Holy Gun

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Holy Gun
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Holy%20Gun
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Have Gun; Divine Deed; Divine Bond; Holy Grit (Ex); Holy Slinger (Ex)
- **Replaced / altered class features:** detect evil; smite evil; the standard paladin’s divine bond

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Holy guns are proficient with all simple and martial weapons, firearms, and light armor.
- **Detailed mechanics:**
  - **Rules text to implement:** Holy guns are proficient with all simple and martial weapons, firearms, and light armor.
- **Implementation flags:**
  - firearm subsystem.
  - feat grant/prerequisite handling.

### Replaces: detect evil

- **Archetype feature:** Have Gun
- **Description:** At 1st level, the holy gun gains the Amateur Gunslinger feat and Gunsmithing as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, the holy gun gains the Amateur Gunslinger feat and Gunsmithing as a bonus feat. She also gains a battered gun identical to the one gained by the gunslinger.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: smite evil

- **Archetype feature:** Divine Deed
- **Description:** At 2nd level, the holy gun gains the following deed.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, the holy gun gains the following deed. This deed works and interacts with grit the same way as gunslinger deeds, but only the holy gun can use it. If the holy gun also has levels in gunslinger, she can spend grit points from that class to use this deed. Smiting Shot (Su) : A holy gun can spend 1 grit point to make a smiting shot with a firearm attack as a standard action. If the target is evil, the holy gun adds her Charisma bonus and her paladin level to the damage of the firearm attack. If the target of the smiting shot is an outsider with the evil subtype, an evil-aligned dragon, or an undead creature, the bonus to damage increases to the Charisma modifier plus 2 points of damage per level the paladin possess. Regardless of the target, smiting shot automatically bypasses any DR the creature might have.
- **Implementation flags:**
  - grit/firearm subsystem.
  - firearm subsystem.

### Replaces: the standard paladin’s divine bond

- **Archetype feature:** Divine Bond
- **Description:** At 5th level, a holy gun forms a bond with her deity.
- **Detailed mechanics:**
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a holy gun forms a bond with her deity. This functions as the paladin’s divine bond ability, except the bond must always take the form of a firearm. In addition to the listed abilities, a holy gun can add the distance, reliable, or seeking special abilities to her weapon, but she cannot add the defending or disruption special abilities.
- **Implementation flags:**
  - ki subsystem.
  - firearm subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Holy Grit (Ex)
- **Description:** At 11th level, a holy gun gains a number of grit points equal to her Charisma modifier (minimum 1) and gains the use of a single gunslinger deed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11, 14.
  - **Rules text to implement:** At 11th level, a holy gun gains a number of grit points equal to her Charisma modifier (minimum 1) and gains the use of a single gunslinger deed. She can select any deed that a gunslinger of her paladin level –4 could use. At 14th level, and every three levels beyond 14th, the holy gun gains another point of grit and another gunslinger deed that a gunslinger of her level –4 could use. If she already has levels in gunslinger, she gains a bonus to the maximum amount of grit she can have each day, equal to her Charisma bonus (if any) but gains no extra grit as the start of each day.
- **Implementation flags:**
  - grit/firearm subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Holy Slinger (Ex)
- **Description:** This ability function like the holy champion paladin class feature, but the banishment occurs when she hits an evil outsider with the smiting shot deed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** This ability function like the holy champion paladin class feature, but the banishment occurs when she hits an evil outsider with the smiting shot deed.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Have Gun
- Divine Deed
- Divine Bond
- Holy Grit (Ex)
- Holy Slinger (Ex)
