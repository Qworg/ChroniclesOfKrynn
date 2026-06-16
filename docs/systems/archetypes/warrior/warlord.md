# Warrior - Warlord

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Warlord
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Warlord
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Weapon and Armor Proﬁciency; Evasive Dueling (Ex); Battle Bravado (Ex); Weapon Training (Ex); Sun-Bronzed Skin (Ex)
- **Replaced / altered class features:** the ﬁghter’s standard Weapon and Armor Proﬁciency class feature; armor training; armor mastery

## Replacement details

### Replaces: the ﬁghter’s standard Weapon and Armor Proﬁciency class feature

- **Archetype feature:** Weapon and Armor Proﬁciency
- **Description:** A warlord is proﬁcient with the halberd.
- **Mechanics:**
  - Mechanics summary: A warlord is proﬁcient with the halberd. radium pistol*, rapier, radium riﬂe*, longspear, longsword, shortspear, spear, Thark riﬂe*, trident, and whip.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: armor training

- **Archetype feature:** Battle Bravado (Ex)
- **Description:** At 3rd level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level. the warlord's self conﬁdence and force of will make him more difﬁcult to hit. the warlord adds his Charisma bonus(if any)to his AC and his CMD. In addition, the warlord gains a +1 dodge bonus at 7th, 11th, and 15th levels. He loses these bonuses when he wears any armor, when he carries a shield, or when he carries a medium or heavy load.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor mastery

- **Archetype feature:** Sun-Bronzed Skin (Ex)
- **Description:** At 19th level, the warlord gains DR 5/- whenever he is not wearing armor or using a shield.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, the warlord gains DR 5/- whenever he is not wearing armor or using a shield. * Rules for radium pistols. and Thark riﬂes can be found in the Pathﬁnder Chronicles appendix featured in Pathfinder Worldscape #2 .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Weapon and Armor Proﬁciency
- Evasive Dueling (Ex)
- Battle Bravado (Ex)
- Weapon Training (Ex)
- Sun-Bronzed Skin (Ex)

