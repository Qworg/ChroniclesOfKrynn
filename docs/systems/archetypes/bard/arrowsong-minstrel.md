# Bard - Arrowsong Minstrel

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Arrowsong Minstrel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Arrowsong%20Minstrel
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon Proficiency; Diminished Spellcasting; Arcane Archery; Precise Minstrel (Ex); Arrowsong Strike (Su)
- **Replaced / altered class features:** bardic knowledge, dirge of doom, distraction, fascinate, inspire competence, lore master, and soothing performance; the versatile performance gained at 2nd level and well-versed; suggestion and mass suggestion

## Implementation details

### Alters: the bard’s weapon proficiencies

- **Archetype feature:** Weapon Proficiency
- **Description:** An Arrowsong minstrel is proficient with longbows, but not the longsword, rapier, or whip.
- **Detailed mechanics:**
  - **Rules text to implement:** An Arrowsong minstrel is proficient with longbows, but not the longsword, rapier, or whip.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the bard’s spellcasting

- **Archetype feature:** Diminished Spellcasting
- **Description:** An Arrowsong minstrel casts one fewer spell of each level than normal.
- **Detailed mechanics:**
  - **Rules text to implement:** An Arrowsong minstrel casts one fewer spell of each level than normal. If this reduces the number to 0, she can cast spells of that level only if her Charisma score allows bonus spells of that level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: bardic knowledge, dirge of doom, distraction, fascinate, inspire competence, lore master, and soothing performance

- **Archetype feature:** Arcane Archery
- **Description:** An Arrowsong minstrel’s skill at ranged martial arts allows her to learn to cast a number of powerful, offensive spells that would otherwise be unavailable to her.
- **Detailed mechanics:**
  - **Level hooks:** 1, 6, 4.
  - **Rules text to implement:** An Arrowsong minstrel’s skill at ranged martial arts allows her to learn to cast a number of powerful, offensive spells that would otherwise be unavailable to her. At 1st level, she selects a number of spells from the sorcerer/ wizard spell list equal to her Charisma modifier (minimum 1) and adds them to her bard spell list as bard spells of the same level. The spells selected must not already be on the bard spell list, and must be 6th level or lower. At 4th level and every 4 bard levels thereafter, she adds an additional sorcerer/wizard spell to her bard spell list. An Arrowsong minstrel is limited to the following spells when adding spells to her spell list in this manner: acid arrow, arrow eruption, flame arrow, gravity bow, greater magic weapon, longshot, magic weapon, protection from arrows, spectral hand, true strike, and sorcerer/wizard spells of the evocation school. An Arrowsong minstrel must still select these spells as spells known before she can cast them. In addition, for the purpose of meeting the requirements of combat feats and prestige classes, an Arrowsong minstrel treats her bard level as her base attack bonus (in addition to base attack bonuses gained from other classes and Hit Dice). Her skilled blending of archery and arcane magic also allows an Arrowsong minstrel to fulfill a spell’s somatic components even when using a bow in both hands (though not other ranged weapons).
- **Implementation flags:**
  - ki subsystem.
  - archetype spell-list override.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: the versatile performance gained at 2nd level and well-versed

- **Archetype feature:** Precise Minstrel (Ex)
- **Description:** At 2nd level, an Arrowsong minstrel gains Precise Shot as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an Arrowsong minstrel gains Precise Shot as a bonus feat. In addition, any creature that is affected by any of the Arrowsong minstrel’s bardic performance does not provide soft cover to enemies against her ranged attacks with a bow.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Replaces: suggestion and mass suggestion

- **Archetype feature:** Arrowsong Strike (Su)
- **Description:** At 6th level, an Arrowsong minstrel can use spellstrike ( as per the magus class feature ) to cast a single-target ranged touch attack spell and deliver it through a ranged weapon attack.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 18.
  - **Rules text to implement:** At 6th level, an Arrowsong minstrel can use spellstrike ( as per the magus class feature ) to cast a single-target ranged touch attack spell and deliver it through a ranged weapon attack. Even if the spell can normally affect multiple targets, only a single missile, ray, or effect accompanies the attack. She cannot use spellstrike with normal touch attacks or melee attacks. At 18th level, an Arrowsong minstrel using a multiple-target spell with this ability can deliver one ray or line of effect with each attack when using a full-attack action, up to the maximum allowed by the spell (in the case of ray effects). Any effects not used in the round the spell is cast are lost.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon Proficiency
- Diminished Spellcasting
- Arcane Archery
- Precise Minstrel (Ex)
- Arrowsong Strike (Su)
