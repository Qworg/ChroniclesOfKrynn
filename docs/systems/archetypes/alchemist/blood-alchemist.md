# Alchemist - Blood Alchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Blood Alchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Blood%20Alchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Lifeblood (Su); Alchemical Circles (Sp, Su); Blood Knowledge (Sp)
- **Replaced / altered class features:** mutagen; bombs

## Replacement details

### Replaces: mutagen

- **Archetype feature:** Lifeblood (Su)
- **Description:** When a blood alchemist performs a coup de grace that kills an intelligent humanoid creature (though, not a summoned intelligent humanoid creature), he can gather its lifeblood into a vial; this is a death effect.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13, 5.
  - Mechanics summary: When a blood alchemist performs a coup de grace that kills an intelligent humanoid creature (though, not a summoned intelligent humanoid creature), he can gather its lifeblood into a vial; this is a death effect. He can use this lifeblood any time within the next 24 hours to create an extract of a spell level he can cast that is no higher than 1/2 the creature’s CR, without spending a daily extract slot. He can use this ability once for each spell level each day (for example, a 13th-level blood alchemist can use lifeblood to gain additional 1st-, 2nd-, 3rd-, 4th-, and 5th level extracts). A blood alchemist can’t take the mutagen or cognatogen discoveries.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, mutagen hook, ki/monk hook.

### Replaces: bombs

- **Archetype feature:** Alchemical Circles (Sp, Su)
- **Description:** A blood alchemist gains a blood pool with a number of points equal to his alchemist level + his Intelligence modifier.
- **Mechanics:**
  - Level hooks: 1, 8, 12, 16.
  - Mechanics summary: A blood alchemist gains a blood pool with a number of points equal to his alchemist level + his Intelligence modifier. He can spend 1 point from his blood pool to draw a complex alchemical circle in blood on the ground or on another permanent fixture in a process that takes 1 minute. Depending on his alchemist level, the alchemical circle can have one of several effects. At 1st level, the blood alchemist can spend an unused extract slot to charge the circle with alchemical energy. He chooses one of the spells listed below of equal or lower level to the extract slot he spent, and until he refreshes his extract slots, as long as his body is in physical contact with the circle, he can produce the effect of the spell he chose as a spell-like ability. If the spell normally has an expensive material component, he must still provide it, either grinding it up and mixing it with the blood used for the circle or placing it in the circle (if the component is also the target).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, alchemist bomb hook.
  - Needs implementation review: occult subsystem.

## Parsed source feature headings

- Lifeblood (Su)
- Alchemical Circles (Sp, Su)
- Blood Knowledge (Sp)

