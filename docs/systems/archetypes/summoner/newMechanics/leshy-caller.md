# Summoner - Leshy Caller

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Leshy Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Leshy%20Caller
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Leshy Eidolon; Free Evolutions; Summon Nature’s Ally (Sp)
- **Replaced / altered class features:** Eidolon; Summon Monster

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Leshy Eidolon
- **Description:** When a leshy caller summons her eidolon, the eidolon’s body is created from extraplanar plant material and imbued with the intelligence of a leshy spirit.
- **Detailed mechanics:**
  - **Rules text to implement:** When a leshy caller summons her eidolon, the eidolon’s body is created from extraplanar plant material and imbued with the intelligence of a leshy spirit. Its statistics are changed from those of a standard eidolon as follows. An unchained summoner uses the plant eidolon subtype instead of one of the subtypes listed in Pathfinder RPG Pathfinder Unchained.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Type
- **Description:** The eidolon is still an outsider, and its statistics don’t change, but it also counts as a plant.
- **Detailed mechanics:**
  - **Rules text to implement:** The eidolon is still an outsider, and its statistics don’t change, but it also counts as a plant. As it isn’t truly a plant, it doesn’t gain the plant immunities.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Base Form
- **Description:** The leshy caller chooses one of the base forms listed below for her eidolon.
- **Detailed mechanics:**
  - **Rules text to implement:** The leshy caller chooses one of the base forms listed below for her eidolon. When the eidolon is summoned in an environment matching one of these base forms, the leshy caller can change the eidolon’s base form to the matching form by sacrificing one daily use of her summon nature’s ally ability as a free action. Plant eidolon base forms are as follows. Cactus (Desert) :
- **Implementation flags:**
  - eidolon/evolution subsystem.
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

- **Archetype feature:** Attack
- **Description:** sting (1d4);
- **Detailed mechanics:**
  - **Rules text to implement:** sting (1d4);
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
- **Description:** limbs (arms), limbs (legs), sting.
- **Detailed mechanics:**
  - **Rules text to implement:** limbs (arms), limbs (legs), sting. Conifer (Forest, Mountain) :
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

- **Archetype feature:** Attack
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

- **Archetype feature:** Free
- **Description:** Evolutions claws, limbs (arms), limbs (legs).
- **Detailed mechanics:**
  - **Rules text to implement:** Evolutions claws, limbs (arms), limbs (legs). Fungus (Swamp, Underground) :
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
- **Description:** Fort (good), Ref (good), Will (bad);
- **Detailed mechanics:**
  - **Rules text to implement:** Fort (good), Ref (good), Will (bad);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** bite (1d6);
- **Detailed mechanics:**
  - **Rules text to implement:** bite (1d6);
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
- **Description:** bite, limbs (arms), limbs (legs).
- **Detailed mechanics:**
  - **Rules text to implement:** bite, limbs (arms), limbs (legs). Leaf (Forest, Jungle, Swamp) :
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
- **Description:** Fort (good), Ref (good), Will (bad);
- **Detailed mechanics:**
  - **Rules text to implement:** Fort (good), Ref (good), Will (bad);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** slam (1d8);
- **Detailed mechanics:**
  - **Rules text to implement:** slam (1d8);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 16, Dex 12, Con 13, Int 7, Wis 10, Cha 11;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 16, Dex 12, Con 13, Int 7, Wis 10, Cha 11;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Free Evolutions
- **Description:** limbs (arms), limbs (legs), slam.
- **Detailed mechanics:**
  - **Rules text to implement:** limbs (arms), limbs (legs), slam. Seaweed (Aquatic) :
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
- **Description:** 20 ft., swim 40 ft.;
- **Detailed mechanics:**
  - **Rules text to implement:** 20 ft., swim 40 ft.;
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
- **Description:** slam (1d8);
- **Detailed mechanics:**
  - **Rules text to implement:** slam (1d8);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 12, Dex 14, Con 15, Int 7, Wis 10, Cha 11;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 12, Dex 14, Con 15, Int 7, Wis 10, Cha 11;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the summoner’s eidolon

- **Archetype feature:** Free Evolutions
- **Description:** limbs (arms), slam, swim (2).
- **Detailed mechanics:**
  - **Rules text to implement:** limbs (arms), slam, swim (2).
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

### Alters: summon monster

- **Archetype feature:** Summon Nature’s Ally (Sp)
- **Description:** A leshy caller can cast summon nature’s ally as a spell-like ability a number of times per day equal to 3 + her Charisma modifier.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 19.
  - **Rules text to implement:** A leshy caller can cast summon nature’s ally as a spell-like ability a number of times per day equal to 3 + her Charisma modifier. At levels where a regular summoner would gain access to a new level of summon monster as a spell-like ability, the leshy caller instead gains the equivalent summon nature’s ally spell; at 19th level, she can cast summon nature’s ally IX or gate. When a leshy caller gains a summon nature’s ally spell as a spell-like ability, she adds it to her class spell list (though she must still select it as a spell known if she wants to gain the ability to cast it as a normal spell). She adds leaf leshys, gourd leshys, fungus leshys, seaweed leshys, and lotus leshys to her list of creatures for summon nature’s ally I, II, III, IV, and V, respectively.
- **Implementation flags:**
  - summoning subsystem.
  - spell-like ability support.
  - archetype spell-list override.

## Parsed source feature headings

- Leshy Eidolon
- Type
- Base Form
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
- Attack
- Ability Scores
- Free
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
- Attack
- Ability Scores
- Free Evolutions
- Size
- Speed
- AC
- Saves
- Attack
- Ability Scores
- Free Evolutions
- Summon Nature’s Ally (Sp)
