# Alchemist - Mindchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Mindchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Mindchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Cognatogen; Perfect Recall; Bonus Feats; Languages; Discoveries
- **Replaced / altered class features:** the mutagen class ability (a mindchemist cannot create mutagens unless he selects mutagen* as a discovery); poison use

## Replacement details

### Replaces: the mutagen class ability (a mindchemist cannot create mutagens unless he selects mutagen* as a discovery)

- **Archetype feature:** Cognatogen
- **Description:** At 1st level, a mindchemist learns how to create a cognatogen, as per the cognatogen discovery.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a mindchemist learns how to create a cognatogen, as per the cognatogen discovery.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, mutagen hook, alchemist discovery hook.

### Replaces: poison use

- **Archetype feature:** Perfect Recall
- **Description:** At 2nd level, a mindchemist has honed his memory.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a mindchemist has honed his memory. When making a Knowledge check, he may add his Intelligence bonus on the check a second time. Thus, a mindchemist with 5 ranks in Knowledge (history) and a +2 Intelligence bonus has a total skill bonus of +9 (5 + 2 + 2) using this ability. The mindchemist can also use this ability when making an Intelligence check to remember something.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, save DC calculation, ki/monk hook.

## Parsed source feature headings

- Cognatogen
- Perfect Recall
- Bonus Feats
- Languages
- Discoveries

