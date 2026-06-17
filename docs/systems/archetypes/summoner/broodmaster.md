# Summoner - Broodmaster

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Broodmaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Broodmaster
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Eidolon Brood; Brood Link (Su); Bond Senses (Su); Shield Ally (Ex); Maker’s Call (Su); Transposition (Su); Larger Brood; Greater Shield Ally (Su); Brood Bond (Su); Merge Forms (Su)
- **Replaced / altered class features:** the summoner’s normal eidolon ability; life link; life bond

## Implementation details

### Replaces: the summoner’s normal eidolon ability

- **Archetype feature:** Eidolon Brood
- **Description:** At 2nd level, instead of a single eidolon, a broodmaster summons two Small eidolons to his side, each less powerful than the single eidolon of a standard summoner.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, instead of a single eidolon, a broodmaster summons two Small eidolons to his side, each less powerful than the single eidolon of a standard summoner. Each eidolon has it own base form and associated base statistics and free evolutions. Regardless of the number of eidolons in the brood, each eidolon has the same base attack bonus and base saving throw bonuses, but the rest of the eidolons’ base statistics must be divided between the eidolons, including Hit Dice (minimum 1), skill points, number of feats, armor bonus, Str/Dex bonus, evolution pool (but see below), and maximum number of natural attacks. Individual eidolons in the brood must purchase evolutions separately. Once a broodmaster decides on the forms and abilities of his eidolons, they cannot be changed until the summoner gains a level. Example : A 2nd-level broodmaster can summon two eidolons. Each eidolon has 1 Hit Dice, BAB +2, +3 on its two good saves and +0 on its bad save. The broodmaster decides to give the first eidolon 4 skill points, one feat, a +1 armor bonus, a +1 bonus to Strength, 2 points from the evolution pool, and a maximum of two attacks. The remaining 4 skill points, +1 armor bonus, +1 bonus to Dexterity, and 2 points from the evolution pool go to the second eidolon, but it gains no feats and can have only one natural attack. The broodmaster must dismiss all of his eidolons at one time. Likewise, all of the eidolons in a brood are banished if the broodmaster is unconscious, asleep, or killed. However, each eidolon in the brood is sent back to its home plane individually when its hit points are reduced to a negative number equal to or greater than its Constitution score. The following are new class features of the broodmaster archetype. Those with the same name as the standard summoner class have slightly different rules, but otherwise work as and replace the standard summoner class features of the same name.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - ki subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: life link

- **Archetype feature:** Brood Link (Su)
- **Description:** At 2nd level, a broodmaster forms a close bond with his eidolons.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a broodmaster forms a close bond with his eidolons. This ability works like the standard summoner life link ability, except the broodmaster can only sacrifice hit points to prevent damage to one eidolon in the brood at a time. If two or more eidolons in the brood take enough damage to send them back to their home plane, the broodmaster can only sacrifice hit points to prevent damage to one of them.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bond Senses (Su)
- **Description:** The broodmaster can only share the senses of one eidolon in his brood at a time.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The broodmaster can only share the senses of one eidolon in his brood at a time.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Shield Ally (Ex)
- **Description:** The broodmaster or an ally can only gain the bonuses from these abilities once, regardless of how many eidolons in the brood are within reach.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** The broodmaster or an ally can only gain the bonuses from these abilities once, regardless of how many eidolons in the brood are within reach.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Maker’s Call (Su)
- **Description:** The broodmaster can only call one eidolon in the brood to his side with each use of this ability.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The broodmaster can only call one eidolon in the brood to his side with each use of this ability.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Transposition (Su)
- **Description:** The broodmaster swaps his location with that of one eidolon in the brood with each use of this ability.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The broodmaster swaps his location with that of one eidolon in the brood with each use of this ability.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Larger Brood
- **Description:** At 8th level, the broodmaster can spend 4 evolution points from the evolution pool for the large evolution; unlike with other evolutions, he spends these 4 points before he assigns evolution points to his individual eidolons (for an 8th-level broodmaster with 11 evolution points, this leaves 7 evolution points to distribute among the eidolons).
- **Detailed mechanics:**
  - **Level hooks:** 8, 13.
  - **Rules text to implement:** At 8th level, the broodmaster can spend 4 evolution points from the evolution pool for the large evolution; unlike with other evolutions, he spends these 4 points before he assigns evolution points to his individual eidolons (for an 8th-level broodmaster with 11 evolution points, this leaves 7 evolution points to distribute among the eidolons). This allows him to summon two Medium eidolons, four Small eidolons, or one Medium eidolon and two Small eidolons. At 13th level, if the broodmaster has purchased the large evolution for his brood, he can spend an additional 6 evolution points from the evolution pool for the huge evolution, distributing the remaining points among his eidolons. This allows him to call two Large eidolons, four Medium eidolons, eight Small eidolons, or any similar combination in which two smaller eidolons count as one eidolon of one size larger.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Greater Shield Ally (Su)
- **Description:** The broodmaster or an ally can only gain the bonuses from these abilities once, regardless of how many eidolons in the brood are within reach.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The broodmaster or an ally can only gain the bonuses from these abilities once, regardless of how many eidolons in the brood are within reach.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

### Replaces: life bond

- **Archetype feature:** Brood Bond (Su)
- **Description:** At 14th level, a summoner’s life becomes linked to his brood.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a summoner’s life becomes linked to his brood. This functions as the life bond ability, except the broodmaster can only transfer damage to one eidolon in the brood at a time. If that eidolon takes enough damage to send it back to its home plane, all excess damage remains with the broodmaster, killing him.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - ki subsystem.
  - summoning subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Merge Forms (Su)
- **Description:** The broodmaster can only merge with one eidolon in the brood at a time.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The broodmaster can only merge with one eidolon in the brood at a time. This ability otherwise works like and replaces merge forms. Horders of Summoned Monsters The broodmaster and master summoner archetypes can potentially have 5, 10, or even more summoned creatures in play. This is a deliberate feature of these archetypes, and means that the summoner can potentially be a strong candidate for “solo” adventuring by one player. However, in the hands of an inexperienced or moderately experienced player, dealing with all of those creatures in combat can take a long time, forcing other players to wait extended periods between their turns in the initiative. It is strongly recommended that GMs only allow these archetypes for experienced players, or decide on a way to speed up the summoner's turn (such as by allowing other players to control some of the summoned monsters).
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Eidolon Brood
- Brood Link (Su)
- Bond Senses (Su)
- Shield Ally (Ex)
- Maker’s Call (Su)
- Transposition (Su)
- Larger Brood
- Greater Shield Ally (Su)
- Brood Bond (Su)
- Merge Forms (Su)
