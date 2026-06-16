# Alchemist - Ragechemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Ragechemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Ragechemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Rage Mutagen; Sturdy Rage; Lumbering Rage; Discoveries
- **Replaced / altered class features:** poison use; swift poisoning; poison immunity

## Replacement details

### Replaces: poison use

- **Archetype feature:** Rage Mutagen
- **Description:** At 2nd level, whenever a ragechemist creates a mutagen that improves his Strength, that mutagen's bonus to Strength increases by +2 and penalizes the alchemist's Intelligence score.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, whenever a ragechemist creates a mutagen that improves his Strength, that mutagen's bonus to Strength increases by +2 and penalizes the alchemist's Intelligence score. Furthermore, while under the effects of this mutagen, whenever the alchemist takes damage, his rage grows, with detrimental effects. At the end of each turn that he takes hit point damage, the ragechemist must succeed at a Will saving throw (DC 15, or DC 20 if any of the damage came from a critical hit that turn) or take a –2 penalty on Will saving throws and to Intelligence. These penalties end 1 hour after the mutagen ends and stack with themselves. If the penalty lowers the ragechemist’s Intelligence score to 0, the ragechemist is comatose until 1 hour after the mutagen expires.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, save DC calculation, rage/rage-power hook, mutagen hook.

### Replaces: swift poisoning

- **Archetype feature:** Sturdy Rage
- **Description:** At 6th level, whenever a ragechemist uses his rage mutagen, he also gains a +4 bonus to natural armor, but the penalty on Will saving throws and to Intelligence for taking damage increases to –4.
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: At 6th level, whenever a ragechemist uses his rage mutagen, he also gains a +4 bonus to natural armor, but the penalty on Will saving throws and to Intelligence for taking damage increases to –4.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, rage/rage-power hook, mutagen hook, ki/monk hook, AC/natural armor bonus.

### Replaces: poison immunity

- **Archetype feature:** Lumbering Rage
- **Description:** At 10th level, whenever a ragechemist uses his rage mutagen ability, he may have the mutagen also give him a +2 morale bonus to Constitution, but when he takes a penalty on Will saving throws and to Intelligence, he also takes a –1 penalty to Dexterity.
- **Mechanics:**
  - Level hooks: 10.
  - Mechanics summary: At 10th level, whenever a ragechemist uses his rage mutagen ability, he may have the mutagen also give him a +2 morale bonus to Constitution, but when he takes a penalty on Will saving throws and to Intelligence, he also takes a –1 penalty to Dexterity.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, rage/rage-power hook, mutagen hook.

## Parsed source feature headings

- Rage Mutagen
- Sturdy Rage
- Lumbering Rage
- Discoveries

