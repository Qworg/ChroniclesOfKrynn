# Monk - Monk of the Lotus

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Lotus
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Lotus
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Touch of Serenity (Su); Touch of Surrender (Su); Touch of Peace (Su); Learned Master (Ex)
- **Replaced / altered class features:** Stunning Fist; abundant step; quivering palm; tongue of the sun and the moon

## Replacement details

### Replaces: Stunning Fist

- **Archetype feature:** Touch of Serenity (Su)
- **Description:** At 1st level, a monk of the lotus gains Touch of Serenity as a bonus feat, even if he does not meet the prerequisites.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6.
  - Mechanics summary: At 1st level, a monk of the lotus gains Touch of Serenity as a bonus feat, even if he does not meet the prerequisites. At 6th level, and every six levels thereafter, the duration of Touch of Serenity increases by 1 round. Each round on its turn, the target may attempt a new Will save to end the effect.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook.

### Replaces: abundant step

- **Archetype feature:** Touch of Surrender (Su)
- **Description:** At 12th level, a monk of the lotus makes a foe into a friend with a single show of mercy.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a monk of the lotus makes a foe into a friend with a single show of mercy. As an immediate action, when one of his melee attacks would reduce a creature to 0 or fewer hit points, the monk can spend 6 ki points to make the target of that attack surrender. When the target surrenders, it is reduced to 0 hit points, becomes disabled, and is charmed, as if the monk had cast charm monster with a caster level equal to the monk’s level. The target does not get a saving throw against this effect. This charm lasts until its duration expires, until the monk dismisses it or uses it on another creature, or until the target is again reduced to 0 or fewer hit points, whichever happens first. The monk can only have one creature charmed with touch of surrender at a time.
- **Implementation flags:**
  - Likely existing hooks: paladin mercy hook, ki/monk hook.

### Replaces: quivering palm

- **Archetype feature:** Touch of Peace (Su)
- **Description:** At 15th level, a monk of the lotus can set up vibrations within the body of another creature to win over the creature’s mind.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a monk of the lotus can set up vibrations within the body of another creature to win over the creature’s mind. The monk can use touch of peace once per day, and must announce his intent before making his attack roll. On a successful hit, the attack deals no damage, but the target is charmed as if the monk had cast charm monster with a caster level equal to the monk’s level. The target does not get a saving throw against this effect. The creature is charmed for 1 day per level. If the monk or his allies attack the charmed creature, or if the monk asks or commands the charmed creature to take hostile actions, the effect ends.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: tongue of the sun

- **Archetype feature:** Learned Master (Ex)
- **Description:** At 17th level, a monk of the lotus gains all Knowledge skills and the Linguistics skill as class skills.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a monk of the lotus gains all Knowledge skills and the Linguistics skill as class skills. The monk uses Wisdom instead of Intelligence as the key ability for these skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the moon

- **Archetype feature:** Learned Master (Ex)
- **Description:** At 17th level, a monk of the lotus gains all Knowledge skills and the Linguistics skill as class skills.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a monk of the lotus gains all Knowledge skills and the Linguistics skill as class skills. The monk uses Wisdom instead of Intelligence as the key ability for these skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Touch of Serenity (Su)
- Touch of Surrender (Su)
- Touch of Peace (Su)
- Learned Master (Ex)

