# Inquisitor - Kinslayer

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Kinslayer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Kinslayer
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Judgment (Su); Greater Brand (Su); Undead Sense (Sp)
- **Replaced / altered class features:** the destruction judgment; detect alignment

## Implementation details

### Replaces: the destruction judgment

- **Archetype feature:** Judgment (Su)
- **Description:** At 1st level, a kinslayer gains the following judgment.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a kinslayer gains the following judgment. Slayer’s Brand (Su) : When using this judgment, the kinslayer gains the ability to brand undead creatures with positive energy. To do so, she must make a successful melee touch attack against the undead creature. This attack deals an amount of positive energy damage equal to 1d6 + the kinslayer’s Charisma modifier, and burns her personal symbol into the undead creature’s flesh, bone, or even its incorporeal form. From that point onward, the kinslayer can sense the existence of the branded creature as if it were the target of a locate creature spell (caster level equal to 1/2 the kinslayer’s inquisitor level). A slayer’s brand lasts until the undead creature is destroyed or until the kinslayer uses this ability on another creature.
- **Implementation flags:**
  - judgment subsystem.
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Greater Brand (Su)
- **Description:** A 1st level, a kinslayer learns to modify her slayer’s brand judgment as she gains levels.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 6.
  - **Rules text to implement:** A 1st level, a kinslayer learns to modify her slayer’s brand judgment as she gains levels. Whenever she gains the ability to learn a teamwork feat, she can instead opt to learn one of the following modifications to her slayer’s brand judgment. Branding Ray : The slayer’s brand judgment can be used as a ranged touch attack with a range of 20 feet. A kinslayer can take this modification more than once. Whenever she does, she increases the range of her brand by 20 feet. Debilitating Brand : A creature currently affected by the slayer’s brand judgment takes a –2 penalty on attack rolls against the kinslayer who placed the brand. Devastating Brand : When the kinslayer attacks a creature that she has branded with her slayer’s brand, she threatens a critical hit on a roll of 19–20. If the kinslayer is good, she also gains a +2 sacred bonus on all rolls to confirm critical hits on a branded creature. Dual Brand : The kinslayer can have up to two creatures branded at a time. Holy Brand : The kinslayer can use her brand on creatures with the evil subtype as well as undead. Searing Brand : The kinslayer’s slayer’s brand deals an additional 1d6 points of damage for every five inquisitor levels she has. If the creature hit with the slayer’s brand is particularly vulnerable to bright light, the damage dice of her slayer’s brand increases to d8s. A kinslayer must be at least 6th level to take this modification. Silver Brand : The kinslayer can use her brand on lycanthropes and creatures with vulnerability to silver as well as undead. Each time the kinslayer opts to take a greater brand, it replaces her ability to gain a teamwork feat at that level.
- **Implementation flags:**
  - judgment subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: detect alignment

- **Archetype feature:** Undead Sense (Sp)
- **Description:** At 2nd level, a kinslayer gains the ability to use detect undead as a spell-like ability (caster level equal to the kinslayer’s inquisitor level) at will.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a kinslayer gains the ability to use detect undead as a spell-like ability (caster level equal to the kinslayer’s inquisitor level) at will. If she detects the presence of undead, she can use her monster lore ability to attempt to determine the type of undead detected as well as to reveal any strengths or weaknesses the undead might have. If any of the detected undead are vampires, she gains a bonus on the check equal to her inquisitor level to immediately identify them as such.
- **Implementation flags:**
  - ki subsystem.
  - spell-like ability support.

## Parsed source feature headings

- Judgment (Su)
- Greater Brand (Su)
- Undead Sense (Sp)
