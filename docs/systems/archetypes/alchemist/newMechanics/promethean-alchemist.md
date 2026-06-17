# Alchemist - Promethean Alchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Promethean Alchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Promethean%20Alchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Craft Construct; Homunculus Companion (Ex); Discoveries; Level; HD; BAB; Saves; Skills; Feats; Str/Dex Bonus; Special; Size; Speed; Attack; Ability Scores; Special Qualities; Languages; Special Attacks
- **Replaced / altered class features:** Brew Potion and Throw Anything; bombs and mutagen

## Implementation details

### Replaces: Brew Potion and Throw Anything

- **Archetype feature:** Craft Construct
- **Description:** At 1st level, a promethean alchemist gains the promethean disciple discovery.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a promethean alchemist gains the promethean disciple discovery.
- **Implementation flags:**
  - crafting subsystem.

### Replaces: bombs and mutagen

- **Archetype feature:** Homunculus Companion (Ex)
- **Description:** At 1st level, a promethean alchemist gains the service of a homunculus companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a promethean alchemist gains the service of a homunculus companion. The means for creating this special homunculus are more exotic than normal and require investiture of the promethean alchemist’s own life essence into the homunculus. This construct generally resembles a small humanoid or child when first created; the specific appearance is up to its creator, though a homunculus is always humanoid in shape and obviously unnatural on close inspection. While every homunculus companion is absolutely devoted to its master, some homunculi’s loyalty borders on the unsettling; such companions jealously protect their masters from threats or construct strange shrines in their masters’ honor. A homunculus companion can be of any alignment, even one that is different from its master’s. A destroyed homunculus companion can be restored to life by performing a ritual with its corpse that requires 1 pint of its creator’s blood per Hit Die of the homunculus and rare materials worth 100 gp per Hit Die of the homunculus. Performing this ritual takes 1 hour (though it may take some time to gather enough blood at higher levels, so many promethean alchemists keep chilled blood samples in storage just in case). A promethean alchemist can’t take the mutagen or cognatogen discoveries.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement this archetype: alchemical simulacrum, doppelganger simulacrum, and greater alchemical simulacrum.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement this archetype: alchemical simulacrum, doppelganger simulacrum, and greater alchemical simulacrum. Homunculus Companion Base Statistics A homunculus companion has the following features, as described on Table 2-2 on page 114.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special
- **Description:** 1st 1 +1 +0 2 1 +0 Darkvision, low-light vision, sympathetic alchemy, telepathic link, weapon and armor proficiency 2nd 2 +2 +0 4 1 +0 - 3rd 3 +3 +1 8 2 +1 Evasion 4th 3 +3 +1 8 2 +1 - 5th 4 +4 +1 10 2 +1 Ability score increase 6th 5 +5 +1 12 3 +2 Speech 7th 6 +6 +2 14 3 +2 - 8th 6 +6 +2 14 3 +2 - 9th 7 +7 +2 16 4 +3 Spell resistance 10th 8 +8 +2 18 4 +3 Ability score increase 11th 9 +9 +3 20 5 +3 - 12th 9 +9 +3 20 5 +4 - 13th 10 +10 +3 22 5 +4 - 14th 11 +11 +3 24 6 +4 - 15th 12 +12 +4 26 6 +5 Ability score increase, improved evasion 16th 12 +12 +4 26 6 +5 - 17th 13 +13 +4 28 7 +5 - 18th 14 +14 +4 30 7 +6 - 19th 15 +15 +5 32 8 +6 - 20th 15 +15 +5 32 8 +6 Ability score increase
- **Detailed mechanics:**
  - **Rules text to implement:** 1st 1 +1 +0 2 1 +0 Darkvision, low-light vision, sympathetic alchemy, telepathic link, weapon and armor proficiency 2nd 2 +2 +0 4 1 +0 - 3rd 3 +3 +1 8 2 +1 Evasion 4th 3 +3 +1 8 2 +1 - 5th 4 +4 +1 10 2 +1 Ability score increase 6th 5 +5 +1 12 3 +2 Speech 7th 6 +6 +2 14 3 +2 - 8th 6 +6 +2 14 3 +2 - 9th 7 +7 +2 16 4 +3 Spell resistance 10th 8 +8 +2 18 4 +3 Ability score increase 11th 9 +9 +3 20 5 +3 - 12th 9 +9 +3 20 5 +4 - 13th 10 +10 +3 22 5 +4 - 14th 11 +11 +3 24 6 +4 - 15th 12 +12 +4 26 6 +5 Ability score increase, improved evasion 16th 12 +12 +4 26 6 +5 - 17th 13 +13 +4 28 7 +5 - 18th 14 +14 +4 30 7 +6 - 19th 15 +15 +5 32 8 +6 - 20th 15 +15 +5 32 8 +6 Ability score increase
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Level
- **Description:** This is the homunculus’s master’s alchemist level.
- **Detailed mechanics:**
  - **Rules text to implement:** This is the homunculus’s master’s alchemist level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** HD
- **Description:** This is the homunculus’s total number of 10-sided (d10) Hit Dice.
- **Detailed mechanics:**
  - **Rules text to implement:** This is the homunculus’s total number of 10-sided (d10) Hit Dice. The homunculus doesn’t have a Constitution score, but it gains bonus hit points based on its size.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** BAB
- **Description:** This is the base attack bonus of the homunculus, which is equal to its number of Hit Dice.
- **Detailed mechanics:**
  - **Rules text to implement:** This is the base attack bonus of the homunculus, which is equal to its number of Hit Dice.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Saves
- **Description:** These are the base saving throw bonuses of the homunculus.
- **Detailed mechanics:**
  - **Rules text to implement:** These are the base saving throw bonuses of the homunculus.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skills
- **Description:** This entry lists the homunculus’s total number of skill ranks.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** This entry lists the homunculus’s total number of skill ranks. A homunculus with a high Intelligence score modifies these totals as normal (the homunculus gains a number of skill ranks equal to 2 + its Intelligence modifier per HD). A homunculus can’t have more ranks in a skill than it has Hit Dice. Homunculus Class Skills : The following skills are class skills for a homunculus: Bluff (Cha), Craft (Int), Fly (Dex), Knowledge (arcana) (Int), Perception (Wis), Sense Motive (Wis), and Stealth (Dex). In addition, at 1st level, a promethean alchemist can choose two additional skills to be class skills for his homunculus.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Feats
- **Description:** This is the total number of feats the homunculus has.
- **Detailed mechanics:**
  - **Rules text to implement:** This is the total number of feats the homunculus has. A homunculus can select any feats it qualifies for, but must possess the appropriate appendages in order to use some feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Str/Dex Bonus
- **Description:** Add this modifier to the homunculus’s Strength and Dexterity.
- **Detailed mechanics:**
  - **Rules text to implement:** Add this modifier to the homunculus’s Strength and Dexterity.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special
- **Description:** As the homunculus increases in power, it gains the special abilities described below.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 5, 6, 9, 15.
  - **Rules text to implement:** As the homunculus increases in power, it gains the special abilities described below. Darkvision (Ex) : The homunculus has darkvision out to a range of 60 feet. Low-Light Vision (Ex) : Homunculi see twice as far as humans in dim light. Sympathetic Alchemy (Su) : The bond between a promethean alchemist and his homunculus is so close that the alchemist’s extracts function for the homunculus as if it were the alchemist, allowing the homunculus companion to benefit from extracts without the alchemist needing the infusion discovery. The homunculus is treated as a humanoid or a construct-whichever is more beneficial-for the purposes of what extracts can affect it. Additionally, the homunculus can prepare its master’s extracts from his formula book for him each day, as long as it’s within the range of its telepathic link. Telepathic Link (Su) : A homunculus can’t initially speak, but shares a telepathic link with its creator. It knows what its master knows and can convey to him everything it sees and hears, out to a range of 1,500 feet. Weapon and Armor Proficiency (Ex) : A homunculus is proficient with simple weapons, but not armor or shields. Evasion (Ex) : At 3rd level, if a homunculus is subjected to an attack that normally allows a Reflex save for half damage, it takes no damage if it succeeds at its saving throw. Ability Score Increase (Ex) : The homunculus adds 1 to one of its ability scores at 5th level and every 5 levels thereafter. Speech (Ex) : At 6th level, the homunculus gains the ability to speak any languages it knows. Spell Resistance (Su) : At 9th level, the homunculus gains spell resistance equal to 11 + its master’s alchemist level. Improved Evasion (Ex) : At 15th level, when subjected to an attack that allows a Reflex save for half damage, the homunculus takes no damage if it succeeds at the saving throw and only half damage if it fails the saving throw. Homunculus Starting Statistics
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Size
- **Description:** Small;
- **Detailed mechanics:**
  - **Rules text to implement:** Small;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Speed
- **Description:** 20 ft., fly 30 ft.
- **Detailed mechanics:**
  - **Rules text to implement:** 20 ft., fly 30 ft. (poor); AC +2 natural armor;
- **Implementation flags:**
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** bite (1d4);
- **Detailed mechanics:**
  - **Rules text to implement:** bite (1d4);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str 10, Dex 15, Con -, Int 10, Wis 12, Cha 7;
- **Detailed mechanics:**
  - **Rules text to implement:** Str 10, Dex 15, Con -, Int 10, Wis 12, Cha 7;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special Qualities
- **Description:** darkvision, low-light vision;
- **Detailed mechanics:**
  - **Rules text to implement:** darkvision, low-light vision;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Languages
- **Description:** Common (can’t speak).
- **Detailed mechanics:**
  - **Rules text to implement:** Common (can’t speak). 4th-Level Advancement
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
- **Description:** 30 ft., fly 40 ft.
- **Detailed mechanics:**
  - **Rules text to implement:** 30 ft., fly 40 ft. (average);
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Attack
- **Description:** bite (1d6 plus poison), 2 claws (1d6);
- **Detailed mechanics:**
  - **Rules text to implement:** bite (1d6 plus poison), 2 claws (1d6);
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ability Scores
- **Description:** Str +4, Dex -2;
- **Detailed mechanics:**
  - **Rules text to implement:** Str +4, Dex -2;
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Special Attacks
- **Description:** poison (bite-injury frequency 1/minute for 60 minutes, effect sleep for 1 minute, cure 1 save, Con-based DC with a +2 racial bonus).
- **Detailed mechanics:**
  - **Rules text to implement:** poison (bite-injury frequency 1/minute for 60 minutes, effect sleep for 1 minute, cure 1 save, Con-based DC with a +2 racial bonus).
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Craft Construct
- Homunculus Companion (Ex)
- Discoveries
- Special
- Level
- HD
- BAB
- Saves
- Skills
- Feats
- Str/Dex Bonus
- Special
- Size
- Speed
- Attack
- Ability Scores
- Special Qualities
- Languages
- Size
- Speed
- Attack
- Ability Scores
- Special Attacks
