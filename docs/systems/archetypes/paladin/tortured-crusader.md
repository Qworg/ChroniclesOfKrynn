# Paladin - Tortured Crusader

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Tortured Crusader
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Tortured%20Crusader
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Torment; Self-Sufficient; All is Darkness; Alone in the Dark; Second Chance (Su); Last Stand (Su)
- **Replaced / altered class features:** detect evil and divine grace and alters smite evil; aura of justice

## Replacement details

### Alters: the paladin’s spellcasting, smite evil, and lay on hands

- **Archetype feature:** Torment
- **Description:** A tortured crusader’s great suffering in the face of inevitable horror strengthens her faith and resolve, even as it makes her introverted and far less personable than most paladins.
- **Mechanics:**
  - Mechanics summary: A tortured crusader’s great suffering in the face of inevitable horror strengthens her faith and resolve, even as it makes her introverted and far less personable than most paladins. A tortured crusader uses Wisdom instead of Charisma as her key spellcasting ability score (to determine her spell DCs, bonus spells per day, bonus on concentration checks, and so on), and to determine the effects of lay on hands.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook, smite hook.

### Alters: the paladin’s class skills and skill ranks per level

- **Archetype feature:** Self-Sufficient
- **Description:** A tortured crusader adds Knowledge (arcana), Knowledge (dungeoneering), Knowledge (planes), Perception, Stealth, Survival, and Use Magic Device to her list of class skills, instead of Diplomacy and Handle Animal.
- **Mechanics:**
  - Mechanics summary: A tortured crusader adds Knowledge (arcana), Knowledge (dungeoneering), Knowledge (planes), Perception, Stealth, Survival, and Use Magic Device to her list of class skills, instead of Diplomacy and Handle Animal. She gains a number of skill ranks equal to 4 + her Intelligence modifier at each level, instead of gaining a number of skill ranks equal to 2 + her Intelligence modifier.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: detect evil and divine grace

- **Archetype feature:** All is Darkness
- **Description:** Everything around a tortured crusader is so bleak that detecting evil only reminds her that the odds are always against her.
- **Mechanics:**
  - Level hooks: 1, 2.
  - Mechanics summary: Everything around a tortured crusader is so bleak that detecting evil only reminds her that the odds are always against her. A tortured crusader doesn’t gain the detect evil or divine grace class features. At 1st level, a tortured crusader gains the smite evil ability, but she doesn’t add her Charisma bonus to attack rolls or a deflection bonus equal to her Charisma bonus to her AC against the target of her smite. At 2nd level, she adds a +4 bonus to attack rolls and a +4 deflection bonus to AC against the target of her smite.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, smite hook.

### Replaces: alters smite evil

- **Archetype feature:** All is Darkness
- **Description:** Everything around a tortured crusader is so bleak that detecting evil only reminds her that the odds are always against her.
- **Mechanics:**
  - Level hooks: 1, 2.
  - Mechanics summary: Everything around a tortured crusader is so bleak that detecting evil only reminds her that the odds are always against her. A tortured crusader doesn’t gain the detect evil or divine grace class features. At 1st level, a tortured crusader gains the smite evil ability, but she doesn’t add her Charisma bonus to attack rolls or a deflection bonus equal to her Charisma bonus to her AC against the target of her smite. At 2nd level, she adds a +4 bonus to attack rolls and a +4 deflection bonus to AC against the target of her smite.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, smite hook.

### Alters: lay on hands, channel energy, divine bond, aura of courage, aura of resolve, aura of faith
- **Archetype feature:** Alone in the Dark
- **Description:** Faced with endless foes, a tortured crusader can’t ask others to confront the same horrors she does.
- **Mechanics:**
  - Level hooks: 4.
  - Mechanics summary: Faced with endless foes, a tortured crusader can’t ask others to confront the same horrors she does. She can’t use her lay on hands ability to heal others or to channel energy, though starting at 4th level, she can convert two uses of lay on hands into an additional use of smite evil. When she selects a divine bond, it must be with a weapon, not a mount.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, smite hook.

### Alters: aura of righteousness

- **Archetype feature:** Alone in the Dark
- **Description:** Faced with endless foes, a tortured crusader can’t ask others to confront the same horrors she does.
- **Mechanics:**
  - Level hooks: 4.
  - Mechanics summary: Faced with endless foes, a tortured crusader can’t ask others to confront the same horrors she does. She can’t use her lay on hands ability to heal others or to channel energy, though starting at 4th level, she can convert two uses of lay on hands into an additional use of smite evil. When she selects a divine bond, it must be with a weapon, not a mount.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, smite hook.

### Alters: lay on hands and mercy

- **Archetype feature:** Second Chance (Su)
- **Description:** At 2nd level, once per day, a tortured crusader can spend two uses of lay on hands and choose an unambiguous trigger such as “when I am paralyzed” or “when I am about to fall unconscious from hit point damage,” as well as a mercy she knows starting at 3rd level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 3.
  - Mechanics summary: At 2nd level, once per day, a tortured crusader can spend two uses of lay on hands and choose an unambiguous trigger such as “when I am paralyzed” or “when I am about to fall unconscious from hit point damage,” as well as a mercy she knows starting at 3rd level. When the named trigger occurs, the tortured crusader gains the benefits of a lay on hands with the chosen mercy without spending an action. This healing can prevent her from falling unconscious or dying. If the effect doesn’t trigger, it expires the next time the tortured crusader recovers uses of lay on hands.
- **Implementation flags:**
  - Likely existing hooks: paladin mercy hook.

### Replaces: aura of justice

- **Archetype feature:** Last Stand (Su)
- **Description:** At 11th level, a tortured crusader can spend an additional use of smite evil when declaring a smite to make it a last stand.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a tortured crusader can spend an additional use of smite evil when declaring a smite to make it a last stand. The duration of last stand’s benefits is only 1 minute (rather than 24 hours). However, the bonus damage from smite evil is doubled on every attack (this doesn’t stack with the doubling if the smite’s target is an evil outsider, undead, or evil dragon).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, smite hook.

## Parsed source feature headings

- Torment
- Self-Sufficient
- All is Darkness
- Alone in the Dark
- Second Chance (Su)
- Last Stand (Su)

