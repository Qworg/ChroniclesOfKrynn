# Summoner - Wild Caller (HotW)

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Wild Caller (HotW)
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Wild%20Caller%20%28HotW%29
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Plant Eidolon; Size; Speed; AC; Saves; Attacks; Ability Scores; Free Evolutions; Resist; Attack; Summon Nature’s Ally (Sp); Fey Friend (Ex)
- **Replaced / altered class features:** aspect, which is instead gained at 18th level in place of greater aspect

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Plant Eidolon
- **Description:** When a wild caller summons his eidolon, the eidolon’s body is created from extraplanar plant material and imbued with the intelligence of a being from the First World.
- **Detailed mechanics:**
  - **Rules text to implement:** When a wild caller summons his eidolon, the eidolon’s body is created from extraplanar plant material and imbued with the intelligence of a being from the First World. Its statistics are changed from a standard eidolon as follows. Type : The eidolon has the plant creature type and extraplanar subtype. Unlike other plant creatures, the eidolon is not immune to mind-affecting or polymorph effects, though it does gain immunity to paralysis, poison, sleep effects, and stunning. Base Form : The wild caller chooses one of the base forms listed below for his plant eidolon. When the eidolon is summoned in an environment matching one of these base forms, the wild caller can choose to change the eidolon’s base form to the matching form by sacrificing one daily use of his summon nature’s ally ability as a free action. Plant eidolon base forms are as follows. Cactus (desert) :
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - poison subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Medium;
- **Detailed mechanics:**
  - **Rules text to implement:** Medium;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Speed
- **Description:** 30 ft.;
- **Detailed mechanics:**
  - **Rules text to implement:** 30 ft.;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +2 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +2 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Saves
- **Description:** Fort (good), Ref (good), Will (bad);
- **Detailed mechanics:**
  - **Rules text to implement:** Fort (good), Ref (good), Will (bad);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attacks
- **Description:** slam (1d8), sting (1d4);
- **Detailed mechanics:**
  - **Rules text to implement:** slam (1d8), sting (1d4);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 14, Dex 14, Con 13, Int 7, Wis 10, Cha 11;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 14, Dex 14, Con 13, Int 7, Wis 10, Cha 11;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Free Evolutions
- **Description:** limbs (arms), limbs (legs), sting, tail.
- **Detailed mechanics:**
  - **Rules text to implement:** limbs (arms), limbs (legs), sting, tail. Conifer (forest, mountain) :
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Medium;
- **Detailed mechanics:**
  - **Rules text to implement:** Medium;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Speed
- **Description:** 30 ft.;
- **Detailed mechanics:**
  - **Rules text to implement:** 30 ft.;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +2 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +2 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Saves
- **Description:** Fort (good), Ref (bad), Will (good);
- **Detailed mechanics:**
  - **Rules text to implement:** Fort (good), Ref (bad), Will (good);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attacks
- **Description:** 2 claws (1d4);
- **Detailed mechanics:**
  - **Rules text to implement:** 2 claws (1d4);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 14, Dex 12, Con 15, Int 7, Wis 10, Cha 11;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 14, Dex 12, Con 15, Int 7, Wis 10, Cha 11;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Resist
- **Description:** cold 10;
- **Detailed mechanics:**
  - **Rules text to implement:** cold 10;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Free Evolutions
- **Description:** claws, limbs (arms), limbs (legs), resistance (cold).
- **Detailed mechanics:**
  - **Rules text to implement:** claws, limbs (arms), limbs (legs), resistance (cold). Mushroom (swamp, underground) :
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Medium;
- **Detailed mechanics:**
  - **Rules text to implement:** Medium;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Speed
- **Description:** 20 ft.;
- **Detailed mechanics:**
  - **Rules text to implement:** 20 ft.;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +2 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +2 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Saves
- **Description:** Fort (good), Ref (good), Will (bad);
- **Detailed mechanics:**
  - **Rules text to implement:** Fort (good), Ref (good), Will (bad);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** bite (1d6) plus poison;
- **Detailed mechanics:**
  - **Rules text to implement:** bite (1d6) plus poison;
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 14, Dex 14, Con 13, Int 7, Wis 10, Cha 11;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 14, Dex 14, Con 13, Int 7, Wis 10, Cha 11;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Free Evolutions
- **Description:** bite, limbs (arms), limbs (legs), poison.
- **Detailed mechanics:**
  - **Rules text to implement:** bite, limbs (arms), limbs (legs), poison. Tree ( forest, jungle, swamp) :
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Medium;
- **Detailed mechanics:**
  - **Rules text to implement:** Medium;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Speed
- **Description:** 20 ft.;
- **Detailed mechanics:**
  - **Rules text to implement:** 20 ft.;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** AC
- **Description:** +4 natural armor;
- **Detailed mechanics:**
  - **Rules text to implement:** +4 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Saves
- **Description:** Fort (good), Ref (good), Will (bad);
- **Detailed mechanics:**
  - **Rules text to implement:** Fort (good), Ref (good), Will (bad);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attacks
- **Description:** 2 slams (1d8);
- **Detailed mechanics:**
  - **Rules text to implement:** 2 slams (1d8);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 16, Dex 12, Con 13, Int 7, Wis 10, Cha 11;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 16, Dex 12, Con 13, Int 7, Wis 10, Cha 11;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the summoner’s eidolon

- **Archetype feature:** Free Evolutions
- **Description:** improved natural armor, limbs (arms), limbs (legs), slam ×2.
- **Detailed mechanics:**
  - **Rules text to implement:** improved natural armor, limbs (arms), limbs (legs), slam ×2.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

### Alters: the summon monster ability

- **Archetype feature:** Summon Nature’s Ally (Sp)
- **Description:** A wild caller can cast summon nature’s ally as a spell-like ability a number of times per day equal to 3 + his Charisma modifier.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 19.
  - **Rules text to implement:** A wild caller can cast summon nature’s ally as a spell-like ability a number of times per day equal to 3 + his Charisma modifier. At levels where a regular summoner would gain access to a new level of summon monster as a spell-like ability, the wild caller instead gains the equivalent summon nature’s ally spell; at 19th level, he can use summon nature’s ally IX or gate. When a wild caller gains a summon nature’s ally spell as a spell-like ability, he adds it to his class spell list (though he must still select it as a spell known if he wants to gain the ability to cast it as a normal spell).
- **Implementation flags:**
  - summoning subsystem.
  - spell-like ability support.
  - archetype spell-list override.

### Replaces: aspect, which is instead gained at 18th level in place of greater aspect

- **Archetype feature:** Fey Friend (Ex)
- **Description:** At 10th level, the wild caller gains a +4 bonus on Bluff, Diplomacy, and Sense Motive checks against fey.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10, 18.
  - **Rules text to implement:** At 10th level, the wild caller gains a +4 bonus on Bluff, Diplomacy, and Sense Motive checks against fey.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Plant Eidolon
- Size
- Speed
- AC
- Saves
- Attacks
- Ability Scores
- Free Evolutions
- Size
- Speed
- AC
- Saves
- Attacks
- Ability Scores
- Resist
- Free Evolutions
- Size
- Speed
- AC
- Saves
- Attack
- Ability Scores
- Free Evolutions
- Size
- Speed
- AC
- Saves
- Attacks
- Ability Scores
- Free Evolutions
- Summon Nature’s Ally (Sp)
- Fey Friend (Ex)
