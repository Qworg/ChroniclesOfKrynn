# Summoner - Master Summoner

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Master Summoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Master%20Summoner
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Lesser Eidolon; Summoning Mastery (Sp); Augment Summoning
- **Replaced / altered class features:** the summoner’s normal eidolon ability; the summoner’s normal summon monster I ability and shield ally; bond senses

## Replacement details

### Replaces: the summoner’s normal eidolon ability

- **Archetype feature:** Lesser Eidolon
- **Description:** A master summoner’s class level is halved (minimum 1) for the purposes of determining his eidolon’s abilities, Hit Dice, evolution pool, and so on.
- **Mechanics:**
  - Mechanics summary: A master summoner’s class level is halved (minimum 1) for the purposes of determining his eidolon’s abilities, Hit Dice, evolution pool, and so on. The eidolon otherwise functions as normal.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook, eidolon evolution hook.

### Replaces: the summoner’s normal summon monster I ability and shield ally

- **Archetype feature:** Summoning Mastery (Sp)
- **Description:** Starting at 1st level, a master summoner can cast summon monster I as a spell-like ability a number of times per day equal to 5 + his Charisma modifier.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 1.
  - Mechanics summary: Starting at 1st level, a master summoner can cast summon monster I as a spell-like ability a number of times per day equal to 5 + his Charisma modifier. The summoner can use this ability when his eidolon is summoned. Only one summon monster spell may be in effect while the eidolon is summoned. If the summoner’s eidolon is not summoned, the number of creatures that can be summoned with this ability is only limited by its uses per day. Other than these restrictions, there is no limit to how many summon monster or gate spells the summoner can have active at one time.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, summoner eidolon hook.

### Replaces: bond senses

- **Archetype feature:** Augment Summoning
- **Description:** At 2nd level, a master summoner gains Augment Summoning as a bonus feat.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a master summoner gains Augment Summoning as a bonus feat. He does not have to meet any requirements for this feat. Hordes of Summoned Monsters The broodmaster and master summoner archetypes can potentially have 5, 10, or even more summoned creatures in play. This is a deliberate feature of these archetypes, and means that the summoner can potentially be a strong candidate for “solo” adventuring by one player. However, in the hands of an inexperienced or moderately experienced player, dealing with all of those creatures in combat can take a long time, forcing other players to wait extended periods between their turns in the initiative.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Lesser Eidolon
- Summoning Mastery (Sp)
- Augment Summoning

