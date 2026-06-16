# Warrior - Aerial Assaulter

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Aerial Assaulter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Aerial%20Assaulter
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Aerial Expertise (Ex); Take the High Ground (Ex); Aerial Dodge (Ex); High Ground Mastery (Ex)
- **Replaced / altered class features:** Class Skills; Bravery; 2nd, 12th-level Bonus Feat, Armor Mastery, Weapon Mastery

## Replacement details

### Alters: the fighter’s skills

- **Archetype feature:** Class Skills
- **Description:** An aerial assaulter gains Acrobatics and Fly as class skills.
- **Mechanics:**
  - Mechanics summary: An aerial assaulter gains Acrobatics and Fly as class skills. Knowledge (dungeoneering), Ride, and Swim are not class skills for an aerial assaulter.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: bravery

- **Archetype feature:** Aerial Expertise (Ex)
- **Description:** At 2nd level, an aerial assaulter gains a +2 bonus on Fly checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6, 18.
  - Mechanics summary: At 2nd level, an aerial assaulter gains a +2 bonus on Fly checks. Additionally, whenever he is affected by a spell or ability that grants him a fly speed, he treats that spell or ability as though its caster level were 2 higher for the purposes of determining its effects. At 6th level and every 4 levels thereafter, this bonus on Fly checks increases by an additional 2, to a maximum of +10 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the bonus feats gained at 2nd

- **Archetype feature:** Take the High Ground (Ex)
- **Description:** At 2nd level, an aerial assaulter can leap above his foes to gain an advantage in combat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 4, 20, 12.
  - Mechanics summary: At 2nd level, an aerial assaulter can leap above his foes to gain an advantage in combat. As a move action, he can attempt an Acrobatics check with the DC equal to the CMD of an adjacent enemy. If he succeeds, the aerial assaulter is treated as if he had higher ground against that enemy until the beginning of his next turn. At 4th level and every 4 levels thereafter, an aerial assaulter increases his bonus from higher ground by 1, to a total of a +6 bonus at 20th level. At 12th level, an aerial assaulter can use this ability as a swift action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation.

### Replaces: 12th level

- **Archetype feature:** Take the High Ground (Ex)
- **Description:** At 2nd level, an aerial assaulter can leap above his foes to gain an advantage in combat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 4, 20, 12.
  - Mechanics summary: At 2nd level, an aerial assaulter can leap above his foes to gain an advantage in combat. As a move action, he can attempt an Acrobatics check with the DC equal to the CMD of an adjacent enemy. If he succeeds, the aerial assaulter is treated as if he had higher ground against that enemy until the beginning of his next turn. At 4th level and every 4 levels thereafter, an aerial assaulter increases his bonus from higher ground by 1, to a total of a +6 bonus at 20th level. At 12th level, an aerial assaulter can use this ability as a swift action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation.

### Replaces: armor mastery

- **Archetype feature:** Aerial Dodge (Ex)
- **Description:** At 19th level, an aerial assaulter can perform an aerial dodge that allows him to evade attacks while flying.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, an aerial assaulter can perform an aerial dodge that allows him to evade attacks while flying. As an immediate action, when an opponent attempts an attack against the aerial assaulter, he can attempt a Fly check with a DC equal to the result of the attacker’s attack roll. If he succeeds, he can take a 5-foot step and gain a dodge bonus to his AC equal to his Dexterity modifier. This movement doesn’t negate the attack if the aerial assaulter remains in range of the attacking enemy’s reach at the end of the 5-foot step. If the Fly check fails, the aerial assaulter does not move, does not gain an AC bonus, and provokes an attack of opportunity from each creature that threatens him, including the initial attacker. The aerial assaulter must be flying to use this ability.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, ki/monk hook.

### Replaces: weapon mastery

- **Archetype feature:** High Ground Mastery (Ex)
- **Description:** At 20th level, whenever an aerial assaulter threatens a critical hit with an attack made from higher ground, he automatically confirms the critical hit, and the weapon’s damage multiplier is increased by 1.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, whenever an aerial assaulter threatens a critical hit with an attack made from higher ground, he automatically confirms the critical hit, and the weapon’s damage multiplier is increased by 1. In addition, all bull rush, dirty trick, drag, grapple, reposition, and trip combat maneuver checks against the aerial assaulter fail when attempted by opponents on lower ground than he is.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Class Skills

## Parsed source feature headings

- Class Skills
- Aerial Expertise (Ex)
- Take the High Ground (Ex)
- Aerial Dodge (Ex)
- High Ground Mastery (Ex)

