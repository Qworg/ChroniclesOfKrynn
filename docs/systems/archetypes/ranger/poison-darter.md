# Ranger - Poison Darter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Poison Darter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Poison%20Darter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Debilitating Venom (Ex); Poison Use (Ex); Poison Style (Ex); Precise Dart (Ex)
- **Replaced / altered class features:** favored enemy and master hunter; wild empathy; hunter’s bond

## Implementation details

### Replaces: favored enemy and master hunter

- **Archetype feature:** Debilitating Venom (Ex)
- **Description:** A poison darter can concoct potent toxins that he can apply to his weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 10, 15, 20.
  - **Rules text to implement:** A poison darter can concoct potent toxins that he can apply to his weapons. He can use this ability a number of times per day equal to 1/2 his ranger level + his Wisdom modifier; if he has the toxic skin alternate racial trait ( Pathfinder RPG Advanced Race Guide 190 ), he can expend a daily use of that poison to employ his debilitating venom ability an additional time. The debilitating venom functions only for the poison darter and becomes inert if not used within 1 hour. Creating a debilitating venom is a standard action, and it can be applied to a weapon as a move action. Debilitating Venom —injury; save Fortitude DC = 10 + 1/2 the poison darter’s level + his Wisdom modifier; frequency 1/ round for 4 rounds; effect 1d3 Dexterity damage; cure 1 save. At 5th level, the frequency increases to 6 rounds, and the toxin sickens a creature for 1 round every time it fails its saving throw to resist the poison. At 10th level, the poison’s Dexterity damage increases to 1d4, and two successful saving throws are needed to cure the poison. At 15th level, the poison dart can choose to deal Strength, Dexterity, or Constitution damage with the debilitating venom, selected when he creates the toxin. At 20th level, the poison’s damage die increases to 1d6.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.

### Replaces: wild empathy

- **Archetype feature:** Poison Use (Ex)
- **Description:** A poison darter is trained in the use of poison and cannot accidentally poison himself when applying poison to a weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A poison darter is trained in the use of poison and cannot accidentally poison himself when applying poison to a weapon.
- **Implementation flags:**
  - poison subsystem.

### Alters: combat style feat

- **Archetype feature:** Poison Style (Ex)
- **Description:** At 2nd level, in place of a combat style feat, a poison darter can select any rogue talent that modifies sneak attacks or any alchemist discovery that modifies poisons he creates and applies, using his Wisdom modifier in place of his Intelligence modifier and his ranger level in place of his alchemist or rogue level for the purpose of meeting prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, in place of a combat style feat, a poison darter can select any rogue talent that modifies sneak attacks or any alchemist discovery that modifies poisons he creates and applies, using his Wisdom modifier in place of his Intelligence modifier and his ranger level in place of his alchemist or rogue level for the purpose of meeting prerequisites. He can use the sticky poison APG discovery to apply a single dose of poison to two blowgun darts without reducing its potency.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Replaces: hunter’s bond

- **Archetype feature:** Precise Dart (Ex)
- **Description:** At 4th level, a poison darter gains a sneak attack identical to the rogue class feature, but only when attacking with a blowgun.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 6.
  - **Rules text to implement:** At 4th level, a poison darter gains a sneak attack identical to the rogue class feature, but only when attacking with a blowgun. This deals 1d6 extra points of damage, and the damage increases by 1d6 at 6th level and every 2 ranger levels thereafter.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Debilitating Venom (Ex)
- Poison Use (Ex)
- Poison Style (Ex)
- Precise Dart (Ex)
