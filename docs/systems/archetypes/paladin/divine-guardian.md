# Paladin - Divine Guardian

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Divine Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Divine%20Guardian
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Martial Focus; Divine Troth (Sp); Guarding Hands (Su); Courageous Defense (Ex); Bonus Feat
- **Replaced / altered class features:** detect evil

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Martial Focus
- **Description:** The divine guardian devotes herself to the concerns of the material world, eschewing some divine studies.
- **Detailed mechanics:**
  - **Rules text to implement:** The divine guardian devotes herself to the concerns of the material world, eschewing some divine studies. She does not gain access to divine spellcasting and cannot use spell-completion magic items.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: detect evil

- **Archetype feature:** Divine Troth (Sp)
- **Description:** Once per day the divine guardian pledges her protection to a willing creature for the day.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** Once per day the divine guardian pledges her protection to a willing creature for the day. This is done at the same time she prepares her spells. When the paladin first selects a creature for divine troth, that creature must be present and agree to receive the paladin’s protection, but if the paladin already has a creature selected for divine troth, she can maintain that selection each day without her charge being present. Once per day, the divine guardian can cast locate creature to find the current target of her divine troth.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: lay on hands

- **Archetype feature:** Guarding Hands (Su)
- **Description:** The paladin can use lay on hands to heal herself or her divine troth as a move action, but cannot use lay on hands to heal herself as a swift action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The paladin can use lay on hands to heal herself or her divine troth as a move action, but cannot use lay on hands to heal herself as a swift action. The divine guardian cannot use lay on hands more than once per round.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: aura of courage

- **Archetype feature:** Courageous Defense (Ex)
- **Description:** At 3rd level a divine guardian can intercept attacks directed at the target of her divine troth as if she had the Bodyguard APG and In Harm’s Way APG feats.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level a divine guardian can intercept attacks directed at the target of her divine troth as if she had the Bodyguard APG and In Harm’s Way APG feats. The divine guardian’s aura of courage does not grant a bonus to allies within 10 feet, but still grants her immunity to fear effects.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feat
- **Description:** A divine guardian gains a bonus feat at 7th level, and additional bonus feats at 10th and 13th level.
- **Detailed mechanics:**
  - **Level hooks:** 7, 13.
  - **Rules text to implement:** A divine guardian gains a bonus feat at 7th level, and additional bonus feats at 10th and 13th level. These bonus feats must be chosen from the following list: Diehard, Endurance, Greater Shield Focus, Greater Shield Specialization APG, Heroic Defiance APG, Heroic Recovery APG, Missile Shield APG, Ray Shield APG, Saving Shield APG, Shield Focus, Shield Specialization APG, or Tower Shield Proficiency. She must meet these feats’ prerequisites, but for purposes of meeting the prerequisites of these bonus feats, she treats her paladin level as her fighter level, may use her Charisma score as her Dexterity score, and is considered to have the Spellbreaker feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Martial Focus
- Divine Troth (Sp)
- Guarding Hands (Su)
- Courageous Defense (Ex)
- Bonus Feat
