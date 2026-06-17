# Warrior - Cad

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Cad
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Cad
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Skills; Dirty Maneuvers (Ex); Catch Off-Guard; Payback (Ex); Deadly Surprise (Ex); Razor-Sharp Chair Leg (Ex); Craven Combatant (Ex); Sweeping Prank (Ex); Treacherous Blow (Ex); Ultimate Payback (Ex)
- **Replaced / altered class features:** bravery; armor training 1; weapon training 1, 3, and 4; armor training 2; weapon training 2; armor training 3; weapon training 3 and 4; armor training 4; weapon mastery

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A cad is not proficient with medium armor, heavy armor, or tower shields.
- **Detailed mechanics:**
  - **Rules text to implement:** A cad is not proficient with medium armor, heavy armor, or tower shields.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skills
- **Description:** Acrobatics (Dex), Bluff (Cha), Escape Artist (Dex), Sleight of Hand (Dex), and Stealth (Dex) are class skills for a cad.
- **Detailed mechanics:**
  - **Rules text to implement:** Acrobatics (Dex), Bluff (Cha), Escape Artist (Dex), Sleight of Hand (Dex), and Stealth (Dex) are class skills for a cad.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: bravery

- **Archetype feature:** Dirty Maneuvers (Ex)
- **Description:** At 2nd level, a cad becomes skilled at deceiving and discomfiting his opponents.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 18.
  - **Rules text to implement:** At 2nd level, a cad becomes skilled at deceiving and discomfiting his opponents. The cad gains a +1 bonus on disarm, dirty trick, and steal combat maneuver checks. The cad also gains a +1 bonus to CMD when attacked with the disarm, dirty trick, and steal combat maneuvers. These bonuses increase by 1 for every four levels after 2nd (to a maximum of +5 at 18th level).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: armor training 1

- **Archetype feature:** Catch Off-Guard
- **Description:** At 3rd level, the cad gains the Catch Off-Guard feat.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, the cad gains the Catch Off-Guard feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 1, 3, and 4

- **Archetype feature:** Payback (Ex)
- **Description:** At 5th level, a cad gains a +1 bonus on attack and damage rolls against any creature that has attacked the cad since the beginning of his last turn.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 17.
  - **Rules text to implement:** At 5th level, a cad gains a +1 bonus on attack and damage rolls against any creature that has attacked the cad since the beginning of his last turn. This bonus increases by +1 for every four levels beyond 5th (to a maximum of +4 at 17th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 2

- **Archetype feature:** Deadly Surprise (Ex)
- **Description:** At 7th level, when a cad hits an opponent that is denied its Dexterity bonus to AC against him with a weapon or unarmed attack, he may attempt a dirty trick combat maneuver as an immediate action as part of the attack.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, when a cad hits an opponent that is denied its Dexterity bonus to AC against him with a weapon or unarmed attack, he may attempt a dirty trick combat maneuver as an immediate action as part of the attack.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 2

- **Archetype feature:** Razor-Sharp Chair Leg (Ex)
- **Description:** At 9th level, as a swift action, a cad may alter the type of damage dealt by an improvised weapon to bludgeoning, piercing, or slashing damage.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, as a swift action, a cad may alter the type of damage dealt by an improvised weapon to bludgeoning, piercing, or slashing damage. In addition, the cad has a critical threat range of 19–20/×2 with any improvised melee weapon.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: armor training 3

- **Archetype feature:** Craven Combatant (Ex)
- **Description:** At 11th level, when fighting defensively or using Combat Expertise or total defense, a cad cannot be flanked except by a rogue or ninja whose level is four or more higher than the cad’s fighter level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, when fighting defensively or using Combat Expertise or total defense, a cad cannot be flanked except by a rogue or ninja whose level is four or more higher than the cad’s fighter level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3 and 4

- **Archetype feature:** Sweeping Prank (Ex)
- **Description:** At 13th level, as a standard action, a cad can use a dirty trick maneuver against any two adjacent opponents that he can reach, making a separate combat maneuver check against each opponent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13, 17.
  - **Rules text to implement:** At 13th level, as a standard action, a cad can use a dirty trick maneuver against any two adjacent opponents that he can reach, making a separate combat maneuver check against each opponent. He must use the same dirty trick maneuver against each opponent. At 17th level, the cad can use this ability as a full-round action to attempt a dirty trick maneuver against a number of enemies equal to 2 + his Dexterity bonus (if any).
- **Implementation flags:**
  - ki subsystem.

### Replaces: armor training 4

- **Archetype feature:** Treacherous Blow (Ex)
- **Description:** At 15th level, when a cad confirms a critical hit, he can attempt a dirty trick combat maneuver as part of that attack as an immediate action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, when a cad confirms a critical hit, he can attempt a dirty trick combat maneuver as part of that attack as an immediate action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon mastery

- **Archetype feature:** Ultimate Payback (Ex)
- **Description:** At 20th level, any critical threats a cad makes against an opponent that has attacked him since the beginning of his last turn are automatically confirmed.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, any critical threats a cad makes against an opponent that has attacked him since the beginning of his last turn are automatically confirmed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Weapon and Armor Proficiency
- Skills
- Dirty Maneuvers (Ex)
- Catch Off-Guard
- Payback (Ex)
- Deadly Surprise (Ex)
- Razor-Sharp Chair Leg (Ex)
- Craven Combatant (Ex)
- Sweeping Prank (Ex)
- Treacherous Blow (Ex)
- Ultimate Payback (Ex)
