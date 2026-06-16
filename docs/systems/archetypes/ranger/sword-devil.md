# Ranger - Sword-Devil

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Sword-Devil
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Sword-Devil
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Death Vow (Ex); Slashing Fury (Ex); Inspiring Example (Ex); Untouchable (Ex); Second Combat Style (Ex); Seething Fury (Ex); Avatar of Vengeance (Su)
- **Replaced / altered class features:** favored enemy; favored terrain; hunter's bond; spells; quarry; improved quarry; master hunter

## Replacement details

### Replaces: favored enemy

- **Archetype feature:** Death Vow (Ex)
- **Description:** At 1st level, a sword-devil may, as a swift action, focus all her fury and determination on a single foe she swears to slay.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 4.
  - Mechanics summary: At 1st level, a sword-devil may, as a swift action, focus all her fury and determination on a single foe she swears to slay. She may do this once per day, plus one additional time per day at 4th level and every 3 levels thereafter (7th, 10th, etc). The sword-devil gains a bonus on weapon attack and damage rolls against her sworn target equal to half her sword-devil level (minimum +1). The death vow effect remains until the target of the death vow is dead, or the next time the sword-devil rests and regains use of this ability.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

### Replaces: favored terrain

- **Archetype feature:** Slashing Fury (Ex)
- **Description:** Beginning at 3rd level, the sword-devil can use her Charisma score in place of her Intelligence score as a prerequisite for combat feats.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8.
  - Mechanics summary: Beginning at 3rd level, the sword-devil can use her Charisma score in place of her Intelligence score as a prerequisite for combat feats. Additionally, she selects one type of light or one- handed slashing melee weapon. When using this weapon, she may use her Dexterity modiﬁer instead of her Strength modiﬁer on melee attack rolls. At 8th level and every 5 levels thereafter (13th and 18th). the sword-devil may select an additional type of light or one-handed slashing weapon she may use with this ability. This ability counts as having the Weapon Finesse feat for the purpose of meeting feat prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored terrain hook.

### Replaces: hunter's bond

- **Archetype feature:** Inspiring Example (Ex)
- **Description:** At 4th level, the sword-devil forms a bond with her companions, inspiring them to greater zeal in combat by the example of her weaponcraft.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, the sword-devil forms a bond with her companions, inspiring them to greater zeal in combat by the example of her weaponcraft. As a standard action, the sword-devil may grant half her death vow bonus against a single victim of her death vow to all allies within 30 feet who can see and hear her. This bonus lasts for a number of rounds equal to the sword-devil's Charisma modiﬁer (minimum 1). This bonus does not stack with any death vow bonuses possessed by the sword-devil‘s allies; they use whichever bonus is higher.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: spells

- **Archetype feature:** Untouchable (Ex)
- **Description:** At 4th level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 6.
  - Mechanics summary: At 4th level. the sword-devil's conﬁdence and personality distract her foes in combat, making her more difficult to hit. the sword-devil may add her Charisma bonus (ifany) to her AC and her CMD. In addition, the sword-devil gains a +1 dodge bonus to AC at 6th level, and every three sword-devil levels thereafter (9th, 12th, 15th, and 18th). She loses these bonuses when she wears any armor, when she carries a shield, or when she carriers a medium or heavy load.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Replaces: quarry

- **Archetype feature:** Second Combat Style (Ex)
- **Description:** At 11th level, the sword-devil chooses a second ranger combat style.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, the sword-devil chooses a second ranger combat style. When she recieves a bonus combat feat, she may select any feat from either combat style's list.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: improved quarry

- **Archetype feature:** Seething Fury (Ex)
- **Description:** At 19th level, the sword-devil's countless battles harden her soul and make her lose touch with her humanity.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, the sword-devil's countless battles harden her soul and make her lose touch with her humanity. Her growing lack of control over her wrath fuels the potency of her death vow. She adds her Charisma bonus on weapon attack and damage rolls against targets of her death vow, and automatically conﬁrms threatened critical hits against them.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: master hunter

- **Archetype feature:** Avatar of Vengeance (Su)
- **Description:** A sword-devil of 20th level becomes a living avatar of vengeance, infused with supernatural powers that push her beyond the mortal.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: A sword-devil of 20th level becomes a living avatar of vengeance, infused with supernatural powers that push her beyond the mortal. Recognized for her battle prowess and unparalleled skill at killing by a potent otherworldly entity. As a standard action, the sword-devil allows herself to be infused with this killing spirit. She gains a fly speed of 60-feet (perfect), a +6 morale bonus to AC, and ﬁre resistance 30- This ability can be used for 10 minutes per day. but it must be used in 1-minute increments.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Death Vow (Ex)
- Slashing Fury (Ex)
- Inspiring Example (Ex)
- Untouchable (Ex)
- Second Combat Style (Ex)
- Seething Fury (Ex)
- Avatar of Vengeance (Su)

