# Alchemist - Interrogator

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Interrogator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Interrogator
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Injections (Su); Serums (Su)
- **Replaced / altered class features:** bomb; mutagen and persistent mutagen

## Replacement details

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** An interrogator adds Intimidate and Sense Motive to his list of class skills.
- **Mechanics:**
  - Mechanics summary: An interrogator adds Intimidate and Sense Motive to his list of class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: bomb

- **Archetype feature:** Injections (Su)
- **Description:** At 1st level, an interrogator uses his skill with alchemy to create injections.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, an interrogator uses his skill with alchemy to create injections. Each day, an interrogator can create a number of injections equal to his alchemist level + his Intelligence modifier. It takes 1 hour to create the injections. Using an injection is a standard action that requires a melee touch attack. If the attack hits, the target of an injection takes a –2 penalty on its Will saving throws for a number of minutes equal to half the interrogator’s class level (minimum 1). If the interrogator is also using a serum with this injection, the penalty on Will saves applies to any save against the serum.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, saving throw hook, alchemist bomb hook, ki/monk hook.
  - Needs implementation review: witch/shaman hex mechanics.

### Replaces: mutagen and persistent mutagen

- **Archetype feature:** Serums (Su)
- **Description:** At 1st level, an interrogator augments his ability to influence others through supplemental serums.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 8, 6, 12.
  - Mechanics summary: At 1st level, an interrogator augments his ability to influence others through supplemental serums. An interrogator prepares his serums at the same time as his injections and he can apply them to any injection as a swift action before he makes the attack roll for the injection. An interrogator knows one serum at 1st level and can learn another serum in place of a discovery. The save DCs of serums are equal to 10 + 1/2 the interrogator’s alchemist level + his Intelligence modifier. A creature can be under the effect of only a single serum at a time—with the exception of memory modification serum—with any further serums on the same creature replacing the old serum. Unless otherwise noted, a creature that succeeds on its saving throw against a serum is immune to that serum’s effects for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, mutagen hook, alchemist discovery hook.

## Parsed source feature headings

- Class Skills
- Injections (Su)
- Serums (Su)

