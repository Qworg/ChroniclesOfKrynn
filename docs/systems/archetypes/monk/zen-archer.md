# Monk - Zen Archer

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Zen Archer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Zen%20Archer
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Flurry of Blows (Ex); Bonus Feats; Perfect Strike (Ex); Way of the Bow (Ex); Zen Archery (Ex); Point Blank Master (Ex); Ki Pool (Su); Ki Arrows (Su); Reflexive Shot (Ex); Trick Shot (Su); Ki Focus Bow (Su)
- **Replaced / altered class features:** Stunning Fist; evasion; maneuver training; still mind; purity of body; improved evasion; diamond body; tongue of the sun and moon

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Zen archers are proficient with longbows, shortbows, composite longbows, and composite shortbows in addition to their normal weapon proficiencies.
- **Detailed mechanics:**
  - **Rules text to implement:** Zen archers are proficient with longbows, shortbows, composite longbows, and composite shortbows in addition to their normal weapon proficiencies.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Flurry of Blows (Ex)
- **Description:** Starting at 1st level, a zen archer can make a flurry of blows as a full-attack action, but only when using a bow (even though it is a ranged weapon).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** Starting at 1st level, a zen archer can make a flurry of blows as a full-attack action, but only when using a bow (even though it is a ranged weapon). He may not make a flurry of blows with his unarmed attacks or any other weapons. A zen archer does not apply his Strength bonus on damage rolls made with flurry of blows unless he is using a composite bow with a Strength rating. A zen archer’s flurry of blows otherwise functions as normal for a monk of his level. A zen archer cannot use Rapid Shot or Manyshot when making a flurry of blows with his bow.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** A zen archer’s bonus feats must be taken from the following list: Combat Reflexes, Deflect Arrows, Dodge, Far Shot, Point-Blank Shot, Precise Shot, and Rapid Shot.
- **Detailed mechanics:**
  - **Level hooks:** 6, 10.
  - **Rules text to implement:** A zen archer’s bonus feats must be taken from the following list: Combat Reflexes, Deflect Arrows, Dodge, Far Shot, Point-Blank Shot, Precise Shot, and Rapid Shot. At 6th level, the following feats are added to the list: Focused Shot, Improved Precise Shot, Manyshot, Mobility, and Parting Shot. At 10th level, the following feats are added to the list: Improved Critical, Pinpoint Targeting, Shot on the Run, and Snatch Arrows. A monk need not have any of the prerequisites normally required for these feats to select them. These feats replace the monk’s normal bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: Stunning Fist

- **Archetype feature:** Perfect Strike (Ex)
- **Description:** At 1st level, a zen archer gains Perfect Strike as a bonus feat, even if he does not meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 10.
  - **Rules text to implement:** At 1st level, a zen archer gains Perfect Strike as a bonus feat, even if he does not meet the prerequisites. A zen archer can use Perfect Strike with any bow. At 10th level, the monk can roll his attack roll three times and take the highest result. If one of these rolls is a critical threat, the monk must choose one of his other two rolls to use as his confirmation roll.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: evasion

- **Archetype feature:** Way of the Bow (Ex)
- **Description:** At 2nd level, a zen archer gains Weapon Focus as a bonus feat with one type of bow.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** At 2nd level, a zen archer gains Weapon Focus as a bonus feat with one type of bow. At 6th level, the monk gains Weapon Specialization with the same weapon as a bonus feat, even if he does not meet the prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: maneuver training

- **Archetype feature:** Zen Archery (Ex)
- **Description:** At 3rd level, a zen archer may use his Wisdom modifier instead of his Dexterity modifier on ranged attack rolls when using a bow.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a zen archer may use his Wisdom modifier instead of his Dexterity modifier on ranged attack rolls when using a bow.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: still mind

- **Archetype feature:** Point Blank Master (Ex)
- **Description:** At 3rd level, a zen archer gains Point-Blank Master as a bonus feat, even if he does not meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a zen archer gains Point-Blank Master as a bonus feat, even if he does not meet the prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ki Pool (Su)
- **Description:** At 4th level, in addition to the normal abilities of his ki pool, a zen archer may spend 1 point from his ki pool to increase the range increment for his bow by 50 feet for 1 round.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, in addition to the normal abilities of his ki pool, a zen archer may spend 1 point from his ki pool to increase the range increment for his bow by 50 feet for 1 round.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: purity of body

- **Archetype feature:** Ki Arrows (Su)
- **Description:** At 5th level, a zen archer may spend 1 point from his ki pool as a swift action to change the damage dice of arrows he shoots to that of his unarmed strikes.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a zen archer may spend 1 point from his ki pool as a swift action to change the damage dice of arrows he shoots to that of his unarmed strikes. This lasts until the start of his next turn. For example, a Medium zen archer’s short bow normally deals 1d6 damage; using this ability, his arrows deal 1d8 damage until the start of his next turn.
- **Implementation flags:**
  - ki subsystem.

### Replaces: improved evasion

- **Archetype feature:** Reflexive Shot (Ex)
- **Description:** At 9th level, a zen archer can make attacks of opportunity with arrows from his bow.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a zen archer can make attacks of opportunity with arrows from his bow. The monk still threatens squares he could reach with unarmed strikes, and can still only make one attack of opportunity per round (unless he has Combat Reflexes ).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: diamond body

- **Archetype feature:** Trick Shot (Su)
- **Description:** At 11th level, a zen archer may hit targets that he might otherwise miss.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a zen archer may hit targets that he might otherwise miss. By spending 1 point from his ki pool as a swift action, the zen archer can ignore concealment. By spending 2 points, he can ignore total concealment or cover. By spending 3 points, he can ignore total cover, even firing arrows around corners. The arrow must still be able to reach the target; a target inside a closed building with no open doors or windows cannot be attacked. These effects last for 1 round.
- **Implementation flags:**
  - ki subsystem.

### Replaces: tongue of the sun and moon

- **Archetype feature:** Ki Focus Bow (Su)
- **Description:** At 17th level, as long as he has at least 1 point of ki in his ki pool, a zen archer may treat arrows fired from his bow as if they were ki focus weapons, allowing him to use his special ki attacks as if his arrows were unarmed attacks.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, as long as he has at least 1 point of ki in his ki pool, a zen archer may treat arrows fired from his bow as if they were ki focus weapons, allowing him to use his special ki attacks as if his arrows were unarmed attacks.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Flurry of Blows (Ex)
- Bonus Feats
- Perfect Strike (Ex)
- Way of the Bow (Ex)
- Zen Archery (Ex)
- Point Blank Master (Ex)
- Ki Pool (Su)
- Ki Arrows (Su)
- Reflexive Shot (Ex)
- Trick Shot (Su)
- Ki Focus Bow (Su)
