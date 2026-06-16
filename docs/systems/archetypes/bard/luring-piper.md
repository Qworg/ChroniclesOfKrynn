# Bard - Luring Piper

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Luring Piper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Luring%20Piper
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Fey Secrets; Luring Presentation (Ex); Bardic Performance; Piper’s Attention (Ex)
- **Replaced / altered class features:** bardic knowledge; well-versed

## Replacement details

### Alters: the bard’s class skills

- **Archetype feature:** Class Skills
- **Description:** A luring piper gains Survival as a class skill.
- **Mechanics:**
  - Mechanics summary: A luring piper gains Survival as a class skill.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: bardic knowledge

- **Archetype feature:** Fey Secrets
- **Description:** A luring piper adds half his class level (minimum 1) on Bluff, Knowledge (nature), Perception, Sense Motive, and Survival checks when interacting with fey.
- **Mechanics:**
  - Mechanics summary: A luring piper adds half his class level (minimum 1) on Bluff, Knowledge (nature), Perception, Sense Motive, and Survival checks when interacting with fey.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: bardic performance

- **Archetype feature:** Luring Presentation (Ex)
- **Description:** Creatures that have the animal or fey type take a –2 penalty on saving throws imposed by a luring piper’s bardic performances.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Creatures that have the animal or fey type take a –2 penalty on saving throws imposed by a luring piper’s bardic performances. Creatures with any other type gain a +2 bonus on saving throws against a luring piper’s bardic performances.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, bardic performance hook.

### Replaces: well-versed

- **Archetype feature:** Piper’s Attention (Ex)
- **Description:** Starting at 2nd level, whenever a luring piper is actively using Perform (wind instruments) as part of a bardic performance, he gains a +4 bonus on saving throws against language-dependent, mind-affecting, and sonic effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: Starting at 2nd level, whenever a luring piper is actively using Perform (wind instruments) as part of a bardic performance, he gains a +4 bonus on saving throws against language-dependent, mind-affecting, and sonic effects. If this effect is caused by a fey creature, the luring piper can also roll the saving throw twice and take the better result.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, bardic performance hook.

## Parsed source feature headings

- Class Skills
- Fey Secrets
- Luring Presentation (Ex)
- Bardic Performance
- Piper’s Attention (Ex)

