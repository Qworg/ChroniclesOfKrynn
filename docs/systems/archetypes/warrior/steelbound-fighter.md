# Warrior - Steelbound Fighter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Steelbound Fighter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Steelbound%20Fighter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Steelbound Weapon (Ex); Steelbound Awakening (Su)
- **Replaced / altered class features:** the fighter’s 1st-level bonus feat; weapon training

## Replacement details

### Replaces: the fighter’s 1st-level bonus feat

- **Archetype feature:** Steelbound Weapon (Ex)
- **Description:** At 1st level, a steelbound fighter selects one type of weapon (such as shortswords, longbows, or heavy flails).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a steelbound fighter selects one type of weapon (such as shortswords, longbows, or heavy flails). He gains Weapon Focus with that specific weapon. Whenever he isn’t wielding or carrying at least one weapon of this type (the weapon can be broken but not destroyed), a steelbound fighter takes a –2 penalty to his Wisdom score and can’t benefit from his fighter class abilities (excluding bonus feats gained from fighter levels).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty.

### Replaces: weapon training

- **Archetype feature:** Steelbound Awakening (Su)
- **Description:** At 5th level, one nonintelligent weapon carried by the steelbound fighter becomes possessed by the latent spiritual energies that cling to his soul, transforming that weapon into an intelligent weapon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 1, 9, 13, 17, 20, 3.
  - Mechanics summary: At 5th level, one nonintelligent weapon carried by the steelbound fighter becomes possessed by the latent spiritual energies that cling to his soul, transforming that weapon into an intelligent weapon. The weapon must be of the type the fighter chose at 1st level as his steelbound weapon. The steelbound weapon grants its wielder Alertness as a bonus feat as long as the weapon is wielded. A steelbound fighter gains a +1 bonus on attack rolls and damage rolls with his steelbound weapon. This bonus increases to +2 at 9th level, +3 at 13th level, +4 at 17th level, and +5 at 20th level. A steelbound weapon gains Intelligence, Wisdom, and Charisma scores of 10 when it awakens, and has the same alignment as its wielder.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Steelbound Weapon (Ex)
- Steelbound Awakening (Su)

