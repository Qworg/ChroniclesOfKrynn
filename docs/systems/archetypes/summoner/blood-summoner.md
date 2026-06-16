# Summoner - Blood Summoner

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Blood Summoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Blood%20Summoner
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skills; Blood Offering (Su); Blood Travel (Su); Fiendish Calling (Su); Blood Possession (Su)
- **Replaced / altered class features:** shield ally; transposition; greater shield ally; merge forms

## Replacement details

### Replaces: shield ally

- **Archetype feature:** Blood Offering (Su)
- **Description:** At 4th level, the blood summoner can sacrifice a flask of blood, extracted up to 1 day ago from a living creature or a corpse that’s been dead no longer than 1 minute, to aid and appease an evil outsider within 30 feet as a standard action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, the blood summoner can sacrifice a flask of blood, extracted up to 1 day ago from a living creature or a corpse that’s been dead no longer than 1 minute, to aid and appease an evil outsider within 30 feet as a standard action. This blood can be extracted from a willing or helpless creature as a full-round action that deals 1 point of Constitution damage. The offering grants the outsider a +2 enhancement bonus to the ability score of the blood summoner’s choice and grants the blood summoner a +4 circumstance bonus on Diplomacy checks and Charisma checks to bargain with it. The bonuses last for 10 minutes. The offering cannot be made to the same fiend twice in the same day.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: transposition

- **Archetype feature:** Blood Travel (Su)
- **Description:** At 8th level, a blood summoner can use his maker’s call ability to allow his eidolon to travel through the blood of other creatures instead of bringing it to his side.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a blood summoner can use his maker’s call ability to allow his eidolon to travel through the blood of other creatures instead of bringing it to his side. The eidolon can either emerge from the blood of a living creature within range that has fewer than its maximum hit points remaining, or burst from the corpse of a Small or larger creature within range that has been dead for no longer than 1 minute. If the eidolon emerges from an injured creature, that creature takes 4d6 points of damage, which is halved if the creature succeeds at a Fortitude save (DC = 10 + 1/2 the blood summoner’s level + his Charisma modifier). The eidolon appears in its choice of the nearest unoccupied square to the creature or corpse it emerged from, and is staggered for 1 round.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, summoner eidolon hook.

### Replaces: greater shield ally

- **Archetype feature:** Fiendish Calling (Su)
- **Description:** At 10th level, the blood summoner’s summon monster ability can additionally be used as lesser planar binding as a standard action, but only to call evil outsiders.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10, 13, 16.
  - Mechanics summary: At 10th level, the blood summoner’s summon monster ability can additionally be used as lesser planar binding as a standard action, but only to call evil outsiders. At 13th level, he can instead use it as planar binding . At 16th level, he can instead use it as greater planar binding .
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: merge forms

- **Archetype feature:** Blood Possession (Su)
- **Description:** At 16th level as a full-round action, a blood summoner’s eidolon can enter and control the body of any corporeal creature that has blood.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 16, 18, 20.
  - Mechanics summary: At 16th level as a full-round action, a blood summoner’s eidolon can enter and control the body of any corporeal creature that has blood. This ability functions as marionette possession UM , except that the eidolon’s body also enters the target and the target can be unwilling. A successful Will save (DC = 10 + 1/2 the blood summoner’s level + his Charisma modifier) negates this effect. This ability can be used once per day at 16th level, twice per day at 18th level, and three times per day at 20th level. The eidolon can end this possession at any time as a standard action. If the host body is slain while the eidolon is possessing it, the eidolon is immediately ejected, takes 4d6 points of damage, and is stunned for 1 round.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, summoner eidolon hook.

## Parsed source feature headings

- Skills
- Blood Offering (Su)
- Blood Travel (Su)
- Fiendish Calling (Su)
- Blood Possession (Su)

