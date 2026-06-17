# Berserker - Feral Gnasher

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Feral Gnasher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Feral%20Gnasher
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Savage Bite (Ex); Impromptu Armament (Ex); Lockjaw (Ex); Improvised Weapon Mastery (Ex); Improved Lockjaw (Ex); Greater Lockjaw (Ex); Wicked Improvisation (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; trap sense +2; trap sense +3 and trap sense +5; trap sense +4

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A feral gnasher loses all martial weapon proficiencies except for greatclub and loses proficiency with medium armor.
- **Detailed mechanics:**
  - **Rules text to implement:** A feral gnasher loses all martial weapon proficiencies except for greatclub and loses proficiency with medium armor.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: fast movement

- **Archetype feature:** Savage Bite (Ex)
- **Description:** At 1st level, a feral gnasher gains a savage bite attack.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 10.
  - **Rules text to implement:** At 1st level, a feral gnasher gains a savage bite attack. This is a primary natural attack that deals 1d4 points of damage. If the goblin already has the hard head, big teeth racial trait, the damage increases to 1d6. At 10th level, the damage from a feral gnasher’s bite increases to 1d6 (or 1d8 if the goblin has the hard head, big teeth racial trait) and deals ×3 damage on a critical hit.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the rage power gained at second level

- **Archetype feature:** Impromptu Armament (Ex)
- **Description:** At 2nd level, a feral gnasher gains Throw Anything as a bonus feat and can pick up an unattended object that can be wielded in one hand as a free action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a feral gnasher gains Throw Anything as a bonus feat and can pick up an unattended object that can be wielded in one hand as a free action. Additionally, the feral gnasher can take Catch Off-Guard in place of a rage power.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: trap sense +1

- **Archetype feature:** Lockjaw (Ex)
- **Description:** At 3rd level, a feral gnasher gains the grab ability with her bite attack.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a feral gnasher gains the grab ability with her bite attack. A feral gnasher can use this ability on a creature up to one size category larger than she is.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Improvised Weapon Mastery (Ex)
- **Description:** At 5th level, a feral gnasher gains Improvised Weapon Mastery as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a feral gnasher gains Improvised Weapon Mastery as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: trap sense +2

- **Archetype feature:** Improved Lockjaw (Ex)
- **Description:** At 6th level, as long as a feral gnasher is controlling the grapple with her lockjaw attack, she does not gain the grappled condition, but is unable to move or use her mouth for anything other than grappling.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, as long as a feral gnasher is controlling the grapple with her lockjaw attack, she does not gain the grappled condition, but is unable to move or use her mouth for anything other than grappling.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense +3 and trap sense +5

- **Archetype feature:** Greater Lockjaw (Ex)
- **Description:** At 9th level and again at 15th level, the size of a creature a feral gnasher is able to use her lockjaw’s grab ability on increases by one size increment.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9, 15.
  - **Rules text to implement:** At 9th level and again at 15th level, the size of a creature a feral gnasher is able to use her lockjaw’s grab ability on increases by one size increment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense +4

- **Archetype feature:** Wicked Improvisation (Ex)
- **Description:** At 12th level, a feral gnasher becomes more capable with improvised weapons and natural attacks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12, 14.
  - **Rules text to implement:** At 12th level, a feral gnasher becomes more capable with improvised weapons and natural attacks. The feral gnasher gains a +1 competence bonus on damage rolls when using natural attacks or improvised weapons while raging. At 14th level and every two levels thereafter, the damage bonus increases by +1. This increase is not precision damage and is thus multiplied on a critical hit.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rage Powers
- **Description:** The following rage powers complement the feral gnasher archetype: increased damage reduction, scent, superstition ; beast totem, beast totem (greater), beast totem (lesser) eater of magic, ghost rager.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rage powers complement the feral gnasher archetype: increased damage reduction, scent, superstition ; beast totem, beast totem (greater), beast totem (lesser) eater of magic, ghost rager.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Savage Bite (Ex)
- Impromptu Armament (Ex)
- Lockjaw (Ex)
- Improvised Weapon Mastery (Ex)
- Improved Lockjaw (Ex)
- Greater Lockjaw (Ex)
- Wicked Improvisation (Ex)
- Rage Powers
