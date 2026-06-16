# Monk - Monk of the Empty Hand

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Empty Hand
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Empty%20Hand
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Flurry of Blows (Ex); Bonus Feat; Versatile Improvisation (Ex); Ki Pool (Su); Ki Weapons (Su)
- **Replaced / altered class features:** still mind; purity of body and diamond body

## Replacement details

### Replaces: the normal monk weapon proficiencies

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Monks of the empty hand are proficient with the shuriken only.
- **Mechanics:**
  - Mechanics summary: Monks of the empty hand are proficient with the shuriken only. A monk of the empty hand treats normal weapons as improvised weapons with the following equivalencies (substituting all of their statistics for the listed weapon): a light weapon functions as a light hammer, a one-handed weapon functions as a club, and a two-handed weapon functions as a quarterstaff.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: still mind

- **Archetype feature:** Versatile Improvisation (Ex)
- **Description:** At 3rd level, as a swift action, a monk of the empty hand may use an improvised weapon to deal damage as if it were another type (bludgeoning, piercing, or slashing) for 1 round, regardless of the weapon’s normal damage type.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, as a swift action, a monk of the empty hand may use an improvised weapon to deal damage as if it were another type (bludgeoning, piercing, or slashing) for 1 round, regardless of the weapon’s normal damage type.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: purity of body and diamond body

- **Archetype feature:** Ki Weapons (Su)
- **Description:** At 5th level, a monk of the empty hand may spend 1 point from his ki pool as a swift action to deal damage equal to his unarmed strike damage with an improvised weapon for 1 round.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 11, 15.
  - Mechanics summary: At 5th level, a monk of the empty hand may spend 1 point from his ki pool as a swift action to deal damage equal to his unarmed strike damage with an improvised weapon for 1 round. At 11th level, the monk may spend ki to grant an enhancement bonus or magical weapon abilities to an improvised weapon for 1 round, at the rate of 1 point of ki per +1 bonus or its equivalent. The monk may not spend more than 3 points of ki at one time for this purpose. For example, a monk can spend 2 points of ki to give his improvised weapon a +1 enhancement bonus and the ki focus quality, or just the flaming burst quality. At 15th level, the limit increases to 5 ki per round. The monk may use this ability to add magical weapon qualities to improvised weapons that could not normally have such a quality, such as adding the disruption quality to a slashing weapon, or the vorpal quality to a bludgeoning weapon.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Flurry of Blows (Ex)
- Bonus Feat
- Versatile Improvisation (Ex)
- Ki Pool (Su)
- Ki Weapons (Su)

