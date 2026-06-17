# Warrior - Steelbound Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Steelbound Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Steelbound%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Steelbound Weapon (Ex); Steelbound Awakening (Su)
- **Replaced / altered class features:** the fighter’s 1st-level bonus feat; weapon training

## Implementation details

### Replaces: the fighter’s 1st-level bonus feat

- **Archetype feature:** Steelbound Weapon (Ex)
- **Description:** At 1st level, a steelbound fighter selects one type of weapon (such as shortswords, longbows, or heavy flails).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a steelbound fighter selects one type of weapon (such as shortswords, longbows, or heavy flails). He gains Weapon Focus with that specific weapon. Whenever he isn’t wielding or carrying at least one weapon of this type (the weapon can be broken but not destroyed), a steelbound fighter takes a –2 penalty to his Wisdom score and can’t benefit from his fighter class abilities (excluding bonus feats gained from fighter levels). Once the steelbound fighter’s weapon awakens (see steelbound awakening below), these penalties apply whenever the fighter isn’t carrying or wielding that particular weapon.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training

- **Archetype feature:** Steelbound Awakening (Su)
- **Description:** At 5th level, one nonintelligent weapon carried by the steelbound fighter becomes possessed by the latent spiritual energies that cling to his soul, transforming that weapon into an intelligent weapon.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 1, 9, 13, 17, 20, 3.
  - **Rules text to implement:** At 5th level, one nonintelligent weapon carried by the steelbound fighter becomes possessed by the latent spiritual energies that cling to his soul, transforming that weapon into an intelligent weapon. The weapon must be of the type the fighter chose at 1st level as his steelbound weapon. The steelbound weapon grants its wielder Alertness as a bonus feat as long as the weapon is wielded. A steelbound fighter gains a +1 bonus on attack rolls and damage rolls with his steelbound weapon. This bonus increases to +2 at 9th level, +3 at 13th level, +4 at 17th level, and +5 at 20th level. A steelbound weapon gains Intelligence, Wisdom, and Charisma scores of 10 when it awakens, and has the same alignment as its wielder. It communicates via empathy, and has senses that extend 30 feet. It has 5 ranks in a skill of the steelbound fighter’s choice. At 9th level, the steelbound weapon’s ability scores increase to 12 and it gains the ability to speak in its wielder’s native tongue. The weapon gains the ability to cast a 3rd-level spell once per day (the choice of the spell is made by the steelbound fighter, but is subject to GM approval, and once chosen, it can’t be changed), with a caster level equal to the steelbound fighter’s level. The spell’s save DC is based off of the item’s Charisma. At 13th level, the steelbound weapon’s ability scores increase to 14 and its senses extend to 120 feet. The weapon gains a special purpose of the steelbound fighter’s choice (subject to GM approval). At 17th level, the steelbound weapon’s ability scores increase to 16 and it gains telepathy as well as darkvision with a range of 60 feet. The weapon can now use its spelllike ability three times a day, and can select a second 3rdlevel spell that it can use once per day. A steelbound fighter transfers the effects of his steelbound awakening to a new weapon of the proper type automatically after carrying that weapon on his person for 24 hours, but can have only one weapon under the effects of steelbound awakening at any given time.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Steelbound Weapon (Ex)
- Steelbound Awakening (Su)
