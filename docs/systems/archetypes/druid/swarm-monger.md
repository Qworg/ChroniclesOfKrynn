# Druid - Swarm Monger

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Swarm Monger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Swarm%20Monger
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fecund Familiar (Ex); Low Friends (Ex); Shadowy Opportunist (Ex); Child of Pollution (Su); Swarm Shape (Su)
- **Replaced / altered class features:** nature bond; woodland stride; nature sense; resist nature’s lure; the normal wild shape options gained at 12th level

## Replacement details

### Replaces: nature bond

- **Archetype feature:** Fecund Familiar (Ex)
- **Description:** A swarm monger bonds with an urban familiar, treating her druid level as her wizard level for the purposes of determining her familiar’s abilities.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 5, 12.
  - Mechanics summary: A swarm monger bonds with an urban familiar, treating her druid level as her wizard level for the purposes of determining her familiar’s abilities. The swarm monger must select her familiar from the following options: cat, house centipede UM , rat, raven, or scarlet spider UM . The fecund familiar gains the benefits of its master’s child of pollution, shadowy opportunist, and venom immunity class abilities. As a standard action, a swarm monger can cause her familiar to burst forth into a full swarm of identical creatures, filling four contiguous 5-foot squares and gaining temporary hit points equal to half its master’s maximum hit points. While in swarm form, the familiar loses the improved evasion, share spells, deliver touch attack, and scry on familiar special abilities. It uses its normal AC, saving throws, and skill bonuses, and it gains the swarm subtype and the ability to make swarm attacks (dealing 1d6 points of damage at 1st level and using the swarm monger’s druid level as the swarm’s Hit Dice to determine damage increases as per the swarm subtype).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook, ki/monk hook.

### Replaces: woodland stride

- **Archetype feature:** Low Friends (Ex)
- **Description:** At 2nd level, a swarm monger gains Vermin Heart APG as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a swarm monger gains Vermin Heart APG as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: nature sense

- **Archetype feature:** Shadowy Opportunist (Ex)
- **Description:** A swarm monger gains a +2 bonus on Knowledge (local) and Stealth checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A swarm monger gains a +2 bonus on Knowledge (local) and Stealth checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: resist nature’s lure

- **Archetype feature:** Child of Pollution (Su)
- **Description:** Starting at 4th level, a swarm monger gains a +4 bonus on saving throws against disease and poisons, and she can eat spoiled or rotting food and drink without ill effect.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: Starting at 4th level, a swarm monger gains a +4 bonus on saving throws against disease and poisons, and she can eat spoiled or rotting food and drink without ill effect. Once per day for every 4 druid levels she has, a swarm monger can devour a handful of rotting food as a standard action to gain a number of temporary hit points equal to 1d8 + her druid level that last for 1 hour.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the normal wild shape options gained at 12th level

- **Archetype feature:** Swarm Shape (Su)
- **Description:** At 12th level, a swarm monger can use wild shape to transform into a swarm of vermin, functioning as swarm skin APG , but not allowing her to split into more than one contiguous swarm.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a swarm monger can use wild shape to transform into a swarm of vermin, functioning as swarm skin APG , but not allowing her to split into more than one contiguous swarm. She doesn’t leave her gear behind when she uses this ability, and she can revert to her mundane form normally.
- **Implementation flags:**
  - Likely existing hooks: wild shape hook, ki/monk hook.

## Parsed source feature headings

- Fecund Familiar (Ex)
- Low Friends (Ex)
- Shadowy Opportunist (Ex)
- Child of Pollution (Su)
- Swarm Shape (Su)

