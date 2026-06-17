# Warrior - Warlord

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Warlord
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Warlord
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Weapon and Armor Proﬁciency; Evasive Dueling (Ex); Battle Bravado (Ex); Weapon Training (Ex); Sun-Bronzed Skin (Ex)
- **Replaced / altered class features:** the ﬁghter’s standard Weapon and Armor Proﬁciency class feature; armor training; armor mastery

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** The warlord gains Acrobatics and Knowledge (nobility) as class skills as replacements for Swim and Knowledge (dungeoneering).
- **Detailed mechanics:**
  - **Rules text to implement:** The warlord gains Acrobatics and Knowledge (nobility) as class skills as replacements for Swim and Knowledge (dungeoneering).
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the ﬁghter’s standard Weapon and Armor Proﬁciency class feature

- **Archetype feature:** Weapon and Armor Proﬁciency
- **Description:** A warlord is proﬁcient with the halberd.
- **Detailed mechanics:**
  - **Rules text to implement:** A warlord is proﬁcient with the halberd. radium pistol*, rapier, radium riﬂe*, longspear, longsword, shortspear, spear, Thark riﬂe*, trident, and whip. Warlords are not proﬁcient with armor or shields.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Evasive Dueling (Ex)
- **Description:** At 1st level, and at every even level thereafter, warlord can add a +1 dodge bonus to his Armor Class instead of taking a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, and at every even level thereafter, warlord can add a +1 dodge bonus to his Armor Class instead of taking a bonus feat. The dodge bonus does not apply when wearing any armor, when using a shield, or when carrying a medium or heavier load. This ability modiﬁes bonus feat.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: armor training

- **Archetype feature:** Battle Bravado (Ex)
- **Description:** At 3rd level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level. the warlord's self conﬁdence and force of will make him more difﬁcult to hit. When unarmored and unencumbered. the warlord adds his Charisma bonus(if any)to his AC and his CMD. In addition, the warlord gains a +1 dodge bonus at 7th, 11th, and 15th levels. He loses these bonuses when he wears any armor, when he carries a shield, or when he carries a medium or heavy load.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon Training (Ex)
- **Description:** A warlord adds the following weapon group to those he can choose from when using weapon training.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A warlord adds the following weapon group to those he can choose from when using weapon training. Barsoomian : Halberd, radium pistol*, rapier, radium riﬂe*, longspear, longsword, shortspear, spear, Thark riﬂe*, trident, whip.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor mastery

- **Archetype feature:** Sun-Bronzed Skin (Ex)
- **Description:** At 19th level, the warlord gains DR 5/- whenever he is not wearing armor or using a shield.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, the warlord gains DR 5/- whenever he is not wearing armor or using a shield. * Rules for radium pistols. radium riﬂes. and Thark riﬂes can be found in the Pathﬁnder Chronicles appendix featured in Pathfinder Worldscape #2.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Weapon and Armor Proﬁciency
- Evasive Dueling (Ex)
- Battle Bravado (Ex)
- Weapon Training (Ex)
- Sun-Bronzed Skin (Ex)
