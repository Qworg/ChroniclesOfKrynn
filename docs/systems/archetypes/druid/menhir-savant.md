# Druid - Menhir Savant

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Menhir Savant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Menhir%20Savant
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spirit Sense (Sp); Place Magic (Su); Walk the Lines (Su); Empty Body (Su)
- **Replaced / altered class features:** nature sense and wild empathy; woodland stride and trackless step; a thousand faces

## Replacement details

### Replaces: nature sense and wild empathy

- **Archetype feature:** Spirit Sense (Sp)
- **Description:** At 1st level, a menhir savant can detect the presence of undead; fey; outsiders; and astral, ethereal, or incorporeal creatures.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a menhir savant can detect the presence of undead; fey; outsiders; and astral, ethereal, or incorporeal creatures. This ability functions like detect undead , and the druid detects all of these creatures rather than trying to detect one kind.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: woodland stride and trackless step

- **Archetype feature:** Place Magic (Su)
- **Description:** At 2nd level, a menhir savant learns to identify and tap into ley lines in different types of terrain.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a menhir savant learns to identify and tap into ley lines in different types of terrain. As a free action, she can tap into the magic of a nearby ley line and increase her caster level by +1 for 1 round. She can use this ability a number of times per day equal to 3 + her Wisdom bonus.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: a thousand faces

- **Archetype feature:** Empty Body (Su)
- **Description:** At 13th level, a menhir savant can become ethereal as a standard action, as if using ethereal jaunt.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a menhir savant can become ethereal as a standard action, as if using ethereal jaunt . She can remain ethereal for a number of rounds per day equal to her druid level. These rounds do not need to be consecutive.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Spirit Sense (Sp)
- Place Magic (Su)
- Walk the Lines (Su)
- Empty Body (Su)

