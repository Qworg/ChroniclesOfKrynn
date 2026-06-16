# Monk - Far Strike Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Far Strike Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Far%20Strike%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Flurry of Blows (Ex); Bonus Feats; Fast Thrower; Invisible Blade (Ex); Ki Pool (Su); Ki Missile (Su); Trick Throw (Su)
- **Replaced / altered class features:** Stunning Fist; still mind; purity of body; diamond body

## Replacement details

### Alters: flurry of blows

- **Archetype feature:** Flurry of Blows (Ex)
- **Description:** A far strike monk can make a flurry of blows as a full-attack action as long as he’s attacking with thrown weapons.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A far strike monk can make a flurry of blows as a full-attack action as long as he’s attacking with thrown weapons. He can’t make a flurry of blows with his unarmed attacks or any other weapons. A far strike monk’s flurry of blows otherwise functions as the standard monk class feature. A far strike monk can’t use Rapid Shot when making a flurry of blows with a thrown weapon.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, ki/monk hook.

### Replaces: Stunning Fist

- **Archetype feature:** Fast Thrower
- **Description:** At 1st level, a far strike monk gains Quick Draw as a bonus feat, even if he doesn’t meet the prerequisites.
- **Mechanics:**
  - Level hooks: 1, 4, 8, 15.
  - Mechanics summary: At 1st level, a far strike monk gains Quick Draw as a bonus feat, even if he doesn’t meet the prerequisites. At 4th level, he gains Shot on the Run as a bonus feat, even if he doesn’t meet the prerequisites. At 8th level, when using the Shot on the Run feat, he can make a second ranged attack with a –5 penalty at any point during his movement. At 15th level, he can make a third ranged attack with a –10 penalty at any point during his movement.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty.

### Replaces: still mind

- **Archetype feature:** Invisible Blade (Ex)
- **Description:** At 3rd level, when a far strike monk uses the Stealth skill to maintain his obscured location after sniping, he takes a –10 penalty on his Stealth check instead of –20.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, when a far strike monk uses the Stealth skill to maintain his obscured location after sniping, he takes a –10 penalty on his Stealth check instead of –20.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, ki/monk hook.

### Replaces: purity of body

- **Archetype feature:** Ki Missile (Su)
- **Description:** At 5th level, a far strike monk can spend 1 point from his ki pool as a swift action to change the base damage dice of thrown weapons to that of his unarmed strikes.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a far strike monk can spend 1 point from his ki pool as a swift action to change the base damage dice of thrown weapons to that of his unarmed strikes. These weapons are also treated as ki focus weapons, allowing the monk to apply his special ki attacks to his thrown weapons as if they were unarmed strikes.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: diamond body

- **Archetype feature:** Trick Throw (Su)
- **Description:** At 11th level, a far strike monk can infuse his thrown weapons with ki to hit targets that he might otherwise miss.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a far strike monk can infuse his thrown weapons with ki to hit targets that he might otherwise miss. By spending 1 point from his ki pool as a swift action, the far strike monk can ignore concealment. By spending 2 points, he can ignore total concealment or cover. By spending 3 points, he can ignore total cover, even throwing weapons around corners. The weapon must still be able to reach the target; for instance, a target inside a closed building with no open doors or windows cannot be attacked using Trick Throw. These effects last for 1 round.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Flurry of Blows (Ex)
- Bonus Feats
- Fast Thrower
- Invisible Blade (Ex)
- Ki Pool (Su)
- Ki Missile (Su)
- Trick Throw (Su)

