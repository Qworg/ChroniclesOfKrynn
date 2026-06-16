# Warrior - Druman Blackjacket

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Druman Blackjacket
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Druman%20Blackjacket
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bonus Feats; Well-Paid Loyalty (Ex); Blackjacket Tactics (Ex); Amateurs! (Ex); Superior Tactics (Ex); Esprit de Corps (Ex)
- **Replaced / altered class features:** bravery; the bonus feat gained at 4th level; the bonus feat gained at 8th level; the bonus feat gained at 12th level; the bonus feat gained at 16th level

## Replacement details

### Replaces: bravery

- **Archetype feature:** Well-Paid Loyalty (Ex)
- **Description:** At 2nd level, a Druman Blackjacket gains a +1 bonus on Will saves against compulsion spells, spell-like abilities, and effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a Druman Blackjacket gains a +1 bonus on Will saves against compulsion spells, spell-like abilities, and effects. This bonus increases by 1 for every 4 levels the Blackjacket possesses beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook.

### Replaces: the bonus feat gained at 4th level

- **Archetype feature:** Blackjacket Tactics (Ex)
- **Description:** At 4th level, two or more Druman Blackjackets can spend 1 minute discussing strategy, then choose a single teamwork feat ( Advanced Players Guide 150) possessed by at least one of them.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, two or more Druman Blackjackets can spend 1 minute discussing strategy, then choose a single teamwork feat ( Advanced Players Guide 150) possessed by at least one of them. For a number of hours equal to the class level of the highest-level Blackjacket, the participants each gain the benefits of the selected feat even if they do not meet the feat’s prerequisites. If a creature benefiting from this ability moves more than 30 feet away from any other participant, it loses all benefits of this ability until it is again within 30 feet. Creatures that do not have levels in this archetype can’t benefit from this ability, and no creature can benefit from this ability more than once at any given time.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feat gained at 8th level

- **Archetype feature:** Amateurs! (Ex)
- **Description:** At 8th level, when using the Blackjacket tactics ability, a Druman Blackjacket can include one or more creatures without levels in this archetype, but doing so reduces the duration of the effect to a number of minutes equal to the class level of the highest-level Blackjacket instead of a number of hours per level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, when using the Blackjacket tactics ability, a Druman Blackjacket can include one or more creatures without levels in this archetype, but doing so reduces the duration of the effect to a number of minutes equal to the class level of the highest-level Blackjacket instead of a number of hours per level. If only Blackjackets are included in the effect, all Druman Blackjackets affected gain a +1 morale bonus on skill checks and saving throws for the duration of the effect.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the bonus feat gained at 12th level

- **Archetype feature:** Superior Tactics (Ex)
- **Description:** At 12th level, a Druman Blackjacket who uses the Blackjacket tactics ability can allow all affected Blackjackets to gain a second bonus teamwork feat possessed by at least one of the participants.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a Druman Blackjacket who uses the Blackjacket tactics ability can allow all affected Blackjackets to gain a second bonus teamwork feat possessed by at least one of the participants.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feat gained at 16th level

- **Archetype feature:** Esprit de Corps (Ex)
- **Description:** At 16th level, a Druman Blackjacket grants all Blackjackets with whom he is sharing one or more teamwork feats through the Blackjacket tactics ability a +2 morale bonus on attack rolls, ability checks, skill checks, and saving throws.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 16.
  - Mechanics summary: At 16th level, a Druman Blackjacket grants all Blackjackets with whom he is sharing one or more teamwork feats through the Blackjacket tactics ability a +2 morale bonus on attack rolls, ability checks, skill checks, and saving throws. Each affected Blackjacket increases this bonus by 1 if another affected Blackjacket has been reduced to 0 or fewer hit points since the beginning of his last turn.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Bonus Feats
- Well-Paid Loyalty (Ex)
- Blackjacket Tactics (Ex)
- Amateurs! (Ex)
- Superior Tactics (Ex)
- Esprit de Corps (Ex)

