# Alchemist - Interrogator

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Interrogator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Interrogator
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Injections (Su); Serums (Su)
- **Replaced / altered class features:** bomb; mutagen and persistent mutagen

## Implementation details

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** An interrogator adds Intimidate and Sense Motive to his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** An interrogator adds Intimidate and Sense Motive to his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: bomb

- **Archetype feature:** Injections (Su)
- **Description:** At 1st level, an interrogator uses his skill with alchemy to create injections.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an interrogator uses his skill with alchemy to create injections. Each day, an interrogator can create a number of injections equal to his alchemist level + his Intelligence modifier. It takes 1 hour to create the injections. An injection is inert until the interrogator attempts to use it. Using an injection is a standard action that requires a melee touch attack. If the attack hits, the target of an injection takes a –2 penalty on its Will saving throws for a number of minutes equal to half the interrogator’s class level (minimum 1). If the interrogator is also using a serum with this injection, the penalty on Will saves applies to any save against the serum. If the melee touch attack fails, the injection isn’t delivered but can still be used again—once activated, it remains potent for 1 day. An injection that hasn’t been administered becomes inert if it leaves the interrogator’s possession, reactivating as soon as it returns to his possession. The penalties from multiple injections don’t stack, nor do the penalties from injections stack with penalties from a mesmerist’s stare or a witch’s evil eye hex. Injections are mind-affecting poison effects.
- **Implementation flags:**
  - ki subsystem.
  - hex subsystem.
  - poison subsystem.
  - skill/class-skill modification.

### Replaces: mutagen and persistent mutagen

- **Archetype feature:** Serums (Su)
- **Description:** At 1st level, an interrogator augments his ability to influence others through supplemental serums.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 8, 6, 12.
  - **Rules text to implement:** At 1st level, an interrogator augments his ability to influence others through supplemental serums. An interrogator prepares his serums at the same time as his injections and he can apply them to any injection as a swift action before he makes the attack roll for the injection. An interrogator knows one serum at 1st level and can learn another serum in place of a discovery. The save DCs of serums are equal to 10 + 1/2 the interrogator’s alchemist level + his Intelligence modifier. A creature can be under the effect of only a single serum at a time—with the exception of memory modification serum—with any further serums on the same creature replacing the old serum. Unless otherwise noted, a creature that succeeds on its saving throw against a serum is immune to that serum’s effects for 24 hours. An interrogator can never gain any sort of mutagen or cognatogen, even from a discovery or another class. Charming : The injected creature must succeed at a Will save or treat the interrogator favorably, as if affected by charm person with a caster level equal to the interrogator’s alchemist level. At 8th level, this serum acts as charm monster. Compliance : On a failed Will save, the subject of this injection is affected by a suggestion with a caster level equal to the interrogator’s alchemist level. An alchemist must be at least 8th level to learn this serum. Confusion : On a failed Will save, the injected creature is confused for 1 round per alchemist level the interrogator has. An alchemist must be at least 6th level to learn this serum. Hypnosis : The injected creature must succeed at a Will save or become fascinated for 1 round per alchemist level the interrogator has. Memory Modification : On a failed Will save, the target of this serum is affected by modify memory at a caster level equal to the interrogator’s alchemist level. An alchemist must be at least 12th level to learn this serum. Paralytic : On a failed Will save, the injected creature is affected by hold person with a caster level equal to the interrogator’s alchemist level. An alchemist must be at least 8th level to learn this serum. Truth : A creature injected with a truth serum must succeed at a Will save or be compelled to answer the interrogator’s questions truthfully. The interrogator can ask one question per 2 alchemist levels (minimum 1). Answers might be brief, cryptic, or repetitive, especially if the injected creature is unfriendly, but they aren’t false. If a creature has been subjected to a truth serum within the past week, whether it succeeded at or failed its save, any new serum fails.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Injections (Su)
- Serums (Su)
