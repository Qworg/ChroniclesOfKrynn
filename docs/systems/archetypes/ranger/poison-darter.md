# Ranger - Poison Darter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Poison Darter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Poison%20Darter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Debilitating Venom (Ex); Poison Use (Ex); Poison Style (Ex); Precise Dart (Ex)
- **Replaced / altered class features:** favored enemy and master hunter; wild empathy; hunter’s bond

## Replacement details

### Replaces: favored enemy and master hunter

- **Archetype feature:** Debilitating Venom (Ex)
- **Description:** A poison darter can concoct potent toxins that he can apply to his weapons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 10, 15, 20.
  - Mechanics summary: A poison darter can concoct potent toxins that he can apply to his weapons. He can use this ability a number of times per day equal to 1/2 his ranger level + his Wisdom modifier; if he has the toxic skin alternate racial trait ( Pathfinder RPG Advanced Race Guide 190 ), he can expend a daily use of that poison to employ his debilitating venom ability an additional time. The debilitating venom functions only for the poison darter and becomes inert if not used within 1 hour. Creating a debilitating venom is a standard action, and it can be applied to a weapon as a move action. Debilitating Venom —injury; save Fortitude DC = 10 + 1/2 the poison darter’s level + his Wisdom modifier; frequency 1/ round for 4 rounds; effect 1d3 Dexterity damage; cure 1 save. At 5th level, the frequency increases to 6 rounds, and the toxin sickens a creature for 1 round every time it fails its saving throw to resist the poison.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, favored enemy hook, ki/monk hook.

### Replaces: wild empathy

- **Archetype feature:** Poison Use (Ex)
- **Description:** A poison darter is trained in the use of poison and cannot accidentally poison himself when applying poison to a weapon.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A poison darter is trained in the use of poison and cannot accidentally poison himself when applying poison to a weapon.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: combat style feat

- **Archetype feature:** Poison Style (Ex)
- **Description:** At 2nd level, in place of a combat style feat, a poison darter can select any rogue talent that modifies sneak attacks or any alchemist discovery that modifies poisons he creates and applies, using his Wisdom modifier in place of his Intelligence modifier and his ranger level in place of his alchemist or rogue level for the purpose of meeting prerequisites.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, in place of a combat style feat, a poison darter can select any rogue talent that modifies sneak attacks or any alchemist discovery that modifies poisons he creates and applies, using his Wisdom modifier in place of his Intelligence modifier and his ranger level in place of his alchemist or rogue level for the purpose of meeting prerequisites. He can use the sticky poison APG discovery to apply a single dose of poison to two blowgun darts without reducing its potency.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, alchemist discovery hook, sneak attack hook.
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: hunter’s bond

- **Archetype feature:** Precise Dart (Ex)
- **Description:** At 4th level, a poison darter gains a sneak attack identical to the rogue class feature, but only when attacking with a blowgun.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 6.
  - Mechanics summary: At 4th level, a poison darter gains a sneak attack identical to the rogue class feature, but only when attacking with a blowgun. This deals 1d6 extra points of damage, and the damage increases by 1d6 at 6th level and every 2 ranger levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, sneak attack hook, ki/monk hook.
  - Needs implementation review: firearms / gunslinger rules.

## Parsed source feature headings

- Debilitating Venom (Ex)
- Poison Use (Ex)
- Poison Style (Ex)
- Precise Dart (Ex)

