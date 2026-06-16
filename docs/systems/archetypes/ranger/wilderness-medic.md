# Ranger - Wilderness Medic

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Wilderness Medic
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Wilderness%20Medic
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Herbalist Training (Ex); Herbal Medicine (Ex); Rallying Bond (Sp)
- **Replaced / altered class features:** wild empathy; the endurance and evasion abilities

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Herbalist Training (Ex)
- **Description:** At 1st level, a wilderness medic can attempt Profession (herbalism) checks untrained and the wilderness medic gains a bonus equal to 1/2 his ranger level (minimum +1) on Heal checks and Profession (herbalism) checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a wilderness medic can attempt Profession (herbalism) checks untrained and the wilderness medic gains a bonus equal to 1/2 his ranger level (minimum +1) on Heal checks and Profession (herbalism) checks. When he successfully forages for herbs ( Pathfinder Player Companion: Heroes of the Wild 10 ), he finds twice as many doses of any herb he would normally.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: the endurance and evasion abilities

- **Archetype feature:** Herbal Medicine (Ex)
- **Description:** At 3rd level, a wilderness medic can mimic the effects of stabilize at will in any wilderness area by spending one use of a healer’s kit as long as he can see the target.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 9.
  - Mechanics summary: At 3rd level, a wilderness medic can mimic the effects of stabilize at will in any wilderness area by spending one use of a healer’s kit as long as he can see the target. Additionally, as a standard action a number of times per day equal to 3 + his Wisdom modifier, the wilderness medic can use encouraging words and herbs to lessen the severity of certain conditions affecting a touched target. At 9th level, the wilderness medic can lessen the severity of additional conditions for the target and cure other conditions that the target suffers. The wilderness medic is able to use this ability on a given touched target once every 24 hours.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Alters: hunter’s bond and replaces improved evasion

- **Archetype feature:** Rallying Bond (Sp)
- **Description:** At 4th level, a wilderness medic must choose his companions for his hunter’s bond.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 4, 9, 14.
  - Mechanics summary: At 4th level, a wilderness medic must choose his companions for his hunter’s bond. At 9th level, the wilderness medic can encourage all of his companions when he uses his hunter’s bond to benefit his companions (see the ranger’s hunter’s bond ability on page 66 of the Pathfinder RPG Core Rulebook for more details). As a free action when the wilderness medic uses a move action to grant affected allies half his favored enemy bonus, he can also grant affected allies the benefits of remove fear . The wilderness medic can use this ability a number of times per day equal to his Wisdom modifier. At 14th level, when the wilderness medic uses this ability, he can instead affect all allies that benefit from his hunter’s bond with blessing of fervor APG , using his ranger level as his caster level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook, favored enemy hook.

## Parsed source feature headings

- Herbalist Training (Ex)
- Herbal Medicine (Ex)
- Rallying Bond (Sp)

