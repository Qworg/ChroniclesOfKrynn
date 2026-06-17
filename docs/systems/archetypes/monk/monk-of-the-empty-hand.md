# Monk - Monk of the Empty Hand

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Empty Hand
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Empty%20Hand
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Flurry of Blows (Ex); Bonus Feat; Versatile Improvisation (Ex); Ki Pool (Su); Ki Weapons (Su)
- **Replaced / altered class features:** still mind; purity of body and diamond body

## Implementation details

### Replaces: the normal monk weapon proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Monks of the empty hand are proficient with the shuriken only.
- **Detailed mechanics:**
  - **Rules text to implement:** Monks of the empty hand are proficient with the shuriken only. A monk of the empty hand treats normal weapons as improvised weapons with the following equivalencies (substituting all of their statistics for the listed weapon): a light weapon functions as a light hammer, a one-handed weapon functions as a club, and a two-handed weapon functions as a quarterstaff.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Flurry of Blows (Ex)
- **Description:** Starting at 1st level, a monk of the empty hand can make a flurry of blows using any combination of unarmed strikes or attacks with an improvised weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** Starting at 1st level, a monk of the empty hand can make a flurry of blows using any combination of unarmed strikes or attacks with an improvised weapon. He may not make a flurry of blows with any other weapons, including special monk weapons. A monk of the empty hand’s flurry of blows otherwise functions as normal for a monk of his level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feat
- **Description:** A monk of the empty hand adds the following feats to his list of bonus feats at 6th level: Improved Dirty Trick*, Improved Steal*, and Improvised Weapon Mastery.
- **Detailed mechanics:**
  - **Level hooks:** 6.
  - **Rules text to implement:** A monk of the empty hand adds the following feats to his list of bonus feats at 6th level: Improved Dirty Trick*, Improved Steal*, and Improvised Weapon Mastery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: still mind

- **Archetype feature:** Versatile Improvisation (Ex)
- **Description:** At 3rd level, as a swift action, a monk of the empty hand may use an improvised weapon to deal damage as if it were another type (bludgeoning, piercing, or slashing) for 1 round, regardless of the weapon’s normal damage type.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, as a swift action, a monk of the empty hand may use an improvised weapon to deal damage as if it were another type (bludgeoning, piercing, or slashing) for 1 round, regardless of the weapon’s normal damage type.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ki Pool (Su)
- **Description:** At 4th level, in addition to the normal abilities of his ki pool, a monk of the empty hand may spend 1 point from his ki pool to increase the range increment for an improvised thrown weapon or shuriken by 20 feet for 1 round.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, in addition to the normal abilities of his ki pool, a monk of the empty hand may spend 1 point from his ki pool to increase the range increment for an improvised thrown weapon or shuriken by 20 feet for 1 round.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: purity of body and diamond body

- **Archetype feature:** Ki Weapons (Su)
- **Description:** At 5th level, a monk of the empty hand may spend 1 point from his ki pool as a swift action to deal damage equal to his unarmed strike damage with an improvised weapon for 1 round.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 11, 15.
  - **Rules text to implement:** At 5th level, a monk of the empty hand may spend 1 point from his ki pool as a swift action to deal damage equal to his unarmed strike damage with an improvised weapon for 1 round. At 11th level, the monk may spend ki to grant an enhancement bonus or magical weapon abilities to an improvised weapon for 1 round, at the rate of 1 point of ki per +1 bonus or its equivalent. The monk may not spend more than 3 points of ki at one time for this purpose. For example, a monk can spend 2 points of ki to give his improvised weapon a +1 enhancement bonus and the ki focus quality, or just the flaming burst quality. At 15th level, the limit increases to 5 ki per round. The monk may use this ability to add magical weapon qualities to improvised weapons that could not normally have such a quality, such as adding the disruption quality to a slashing weapon, or the vorpal quality to a bludgeoning weapon.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Flurry of Blows (Ex)
- Bonus Feat
- Versatile Improvisation (Ex)
- Ki Pool (Su)
- Ki Weapons (Su)
