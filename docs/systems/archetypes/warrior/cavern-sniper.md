# Warrior - Cavern Sniper

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Cavern Sniper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Cavern%20Sniper
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Imbued Shot (Su); Silent Shooter (Ex); Quick and Deadly (Ex); Sniper Training (Ex); Greater Imbued Shot (Su); Weapon Mastery (Ex)
- **Replaced / altered class features:** the 1st-level fighter bonus feat; bravery; the 4th-level fighter bonus feat; weapon training 1, 3, and 4; weapon training 2

## Replacement details

### Replaces: the 1st-level fighter bonus feat

- **Archetype feature:** Imbued Shot (Su)
- **Description:** At 1st level, the cavern sniper gains the ability to imbue his arrows or bolts with the effect of one of his drow faerie fire , darkness , or deeper darkness spell-like abilities (provided he has access to the ability) as a swift action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the cavern sniper gains the ability to imbue his arrows or bolts with the effect of one of his drow faerie fire , darkness , or deeper darkness spell-like abilities (provided he has access to the ability) as a swift action. When such an arrow or bolt is fired, the spell’s area is centered where the arrow or bolt lands. If the target of the attack has a space larger than 5 feet, the cavern sniper can choose which square of the creature’s space is the center of the spell-like ability’s effect, as long as that square is within line of sight of the cavern sniper. The cavern sniper can instead choose to target a single square within line of sight with an imbued arrow or bolt, and uses that square as the center of the spell-like ability’s area of effect on a hit (AC 5). The arrow must be fired during the round it was imbued, or the spell-like ability is wasted. If the arrow or bolt misses, the use of the spell-like ability is wasted.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: bravery

- **Archetype feature:** Silent Shooter (Ex)
- **Description:** At 2nd level, a cavern sniper gains a +2 bonus on Stealth checks made when loading a bow or crossbow, poisoning ammunition, and making sniping attempts.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a cavern sniper gains a +2 bonus on Stealth checks made when loading a bow or crossbow, poisoning ammunition, and making sniping attempts. This bonus increases by +2 for every four levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: the 4th-level fighter bonus feat

- **Archetype feature:** Quick and Deadly (Ex)
- **Description:** At 4th level, the cavern sniper can move at full speed while using Stealth at no penalty and can apply poison to a single arrow or crossbow bolt as a swift action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, the cavern sniper can move at full speed while using Stealth at no penalty and can apply poison to a single arrow or crossbow bolt as a swift action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty.

### Replaces: weapon training 1, 3
- **Archetype feature:** Sniper Training (Ex)
- **Description:** At 5th level, the cavern sniper chooses the bow or crossbow weapon group and gains a +2 bonus on attack rolls and damage rolls.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, the cavern sniper chooses the bow or crossbow weapon group and gains a +2 bonus on attack rolls and damage rolls. This bonus increases by +1 for every four levels beyond 5th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: 4

- **Archetype feature:** Sniper Training (Ex)
- **Description:** At 5th level, the cavern sniper chooses the bow or crossbow weapon group and gains a +2 bonus on attack rolls and damage rolls.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, the cavern sniper chooses the bow or crossbow weapon group and gains a +2 bonus on attack rolls and damage rolls. This bonus increases by +1 for every four levels beyond 5th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: weapon training 2

- **Archetype feature:** Greater Imbued Shot (Su)
- **Description:** At 9th level, the cavern sniper gains two extra uses of both his faerie fire and darkness spell-like abilities, but can only use these extra uses to imbue arrows and bolts with the imbued shot class feature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, the cavern sniper gains two extra uses of both his faerie fire and darkness spell-like abilities, but can only use these extra uses to imbue arrows and bolts with the imbued shot class feature.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

## Parsed source feature headings

- Class Skills
- Imbued Shot (Su)
- Silent Shooter (Ex)
- Quick and Deadly (Ex)
- Sniper Training (Ex)
- Greater Imbued Shot (Su)
- Weapon Mastery (Ex)

