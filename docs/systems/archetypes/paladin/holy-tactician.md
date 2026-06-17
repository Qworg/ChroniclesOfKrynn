# Paladin - Holy Tactician

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Holy Tactician
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Holy%20Tactician
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weal’s Champion (Su); Tactical Acumen (Ex); Battlefield Presence (Su); Guide the Battle (Ex); Weal’s Wrath (Su); Masterful Presence (Su)
- **Replaced / altered class features:** smite evil; divine health and divine bond; aura of courage; aura of resolve; aura of justice; holy champion

## Implementation details

### Replaces: smite evil

- **Archetype feature:** Weal’s Champion (Su)
- **Description:** Once per day as swift action, a holy tactician can call on the powers of good to aid her against evil.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20, 4, 19.
  - **Rules text to implement:** Once per day as swift action, a holy tactician can call on the powers of good to aid her against evil. Against evil targets, the holy tactician gains her Charisma bonus (if any) on her attack rolls against evil creatures, and if she hits, she adds 1/2 her paladin level on her weapon damage rolls as well. These bonuses last for 1 round for every two paladin levels the holy tactician has attained (minimum 1 round). In addition, for 1 round after the holy tactician successfully strikes an evil creature, all non-evil allies within 30 feet of her gain a competence bonus on attack rolls equal to 1/2 her Charisma bonus against that creature as well as a +1 competence bonus on damage rolls. The bonus on damage rolls increases by +1 for every five levels the holy tactician attains (to a maximum of +5 at 20th level). She can grant this bonus against more than one creature at a time. To gain this benefit, the holy tactician’s allies must be able to see or hear her, and she must be conscious. At 4th level, and every three levels thereafter, the holy tactician may use weal’s champion one additional time per day (to a maximum of seven times per day at 19th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: divine health and divine bond

- **Archetype feature:** Tactical Acumen (Ex)
- **Description:** At 3rd level, a holy tactician gains a teamwork feat as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 19.
  - **Rules text to implement:** At 3rd level, a holy tactician gains a teamwork feat as a bonus feat. She must meet the prerequisites for this feat. She gains an additional bonus feat for every four levels attained after 3rd, to a maximum of five bonus feats at 19th level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of courage

- **Archetype feature:** Battlefield Presence (Su)
- **Description:** At 3rd level, a tactician can direct her allies in battle, granting each ally within 30 feet one teamwork feat she possesses as a bonus feat as a standard action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a tactician can direct her allies in battle, granting each ally within 30 feet one teamwork feat she possesses as a bonus feat as a standard action. All allies must receive the same feat, but do not need to meet the prerequisites of this bonus feat. This ability does not function if the paladin is flat-footed or unconscious. Allies must be able to see and hear the holy tactician in order to gain this benefit. Changing the bonus feat granted is a swift action.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: aura of resolve

- **Archetype feature:** Guide the Battle (Ex)
- **Description:** At 8th level, the paladin can direct her allies into an advantageous position once per round as a move action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8, 15.
  - **Rules text to implement:** At 8th level, the paladin can direct her allies into an advantageous position once per round as a move action. Each ally (if physically able to) can move 5 feet without expending an action. This movement does not provoke attacks of opportunity. The allies must be able to see or hear the paladin in order to make this movement and cannot be flat-footed. At 15th level, her allies can make this 5-foot move and ignore difficult terrain.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of justice

- **Archetype feature:** Weal’s Wrath (Su)
- **Description:** At 11th level, a tactician can expend two uses of her weal’s champion ability at once to enhance its effects.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a tactician can expend two uses of her weal’s champion ability at once to enhance its effects. This functions as weal’s champion, except the bonus she provides to her allies lasts until each creature she strikes is slain, her weal’s champion ability expires, or the paladin herself is slain or knocked unconscious, whichever happens first.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: holy champion

- **Archetype feature:** Masterful Presence (Su)
- **Description:** At 20th level, a tactician gains the ability to grant a different bonus feat to each ally affected by her battlefield presence.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a tactician gains the ability to grant a different bonus feat to each ally affected by her battlefield presence. In addition, all critical threats made by her and her allies against creatures affected by her weal’s champion ability are automatically confirmed (no confirmation roll is needed).
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weal’s Champion (Su)
- Tactical Acumen (Ex)
- Battlefield Presence (Su)
- Guide the Battle (Ex)
- Weal’s Wrath (Su)
- Masterful Presence (Su)
