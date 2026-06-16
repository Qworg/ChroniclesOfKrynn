# Ranger - Beast Master

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Beast Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Beast%20Master
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Animal Companion (Ex); Improved Empathic Link (Su); Strong Bond (Ex)
- **Replaced / altered class features:** hunter’s bond; camouflage

## Replacement details

### Replaces: hunter’s bond

- **Archetype feature:** Animal Companion (Ex)
- **Description:** A beast master forms a close bond with an animal companion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 2, 1, 3.
  - Mechanics summary: A beast master forms a close bond with an animal companion. This ability functions like the druid animal companion ability except that the ranger’s effective druid level is equal to his ranger level – 3. The ranger gains a +2 bonus on wild empathy and Handle Animal checks made regarding his animal companion. Unlike a normal ranger, a beast master’s choice of animal companion is not limited to a subset of all possible animal companion choices—he may choose freely among all animal companion choices, just as a druid can. The beast master may have more than one animal companion, but he must divide up his effective druid level between his companions to determine the abilities of each companion. For example, a beast master with an effective druid level of 4 can have one 4th-level companion, two 2nd-level companions, or one 1st-level and one 3rd-level companion.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, animal companion hook.

### Replaces: the 6th-level combat style feat

- **Archetype feature:** Improved Empathic Link (Su)
- **Description:** The beast master gains an empathic link with all of his animal companions.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: The beast master gains an empathic link with all of his animal companions. This functions like an empathic link with a familiar, except the ranger can also see through a companion’s eyes as a swift action, maintaining this connection as long as he likes (as long as the companion is within 1 mile) and ending it as a free action. The ranger can only see through the eyes of one companion at a time, and is blinded while maintaining this connection.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, animal companion hook.

### Replaces: camouflage

- **Archetype feature:** Strong Bond (Ex)
- **Description:** At 12th level, the ranger strengthens his bond with his animal companions.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, the ranger strengthens his bond with his animal companions. The ranger’s effective druid level for his animal companions is now equal to his ranger level; he may immediately allocate these additional levels to his companions as he sees fit.
- **Implementation flags:**
  - Likely existing hooks: animal companion hook.

## Parsed source feature headings

- Class Skills
- Animal Companion (Ex)
- Improved Empathic Link (Su)
- Strong Bond (Ex)

