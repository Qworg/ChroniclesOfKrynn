# Druid - Pack Lord

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Pack Lord
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Pack%20Lord
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Pack Bond (Ex); Improved Empathic Link (Su)
- **Replaced / altered class features:** nature bond; the 6th-level additional use of wild shape

## Replacement details

### Replaces: nature bond

- **Archetype feature:** Pack Bond (Ex)
- **Description:** A pack lord druid may not select a domain and must choose an animal companion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 2, 1, 3.
  - Mechanics summary: A pack lord druid may not select a domain and must choose an animal companion. The druid gains a +2 bonus on wild empathy and Handle Animal checks made regarding her animal companion. The pack lord may have more than one animal companion, but she must divide up her effective druid level between her companions to determine the abilities of each companion. For example, a 4th-level pack lord can have one 4th-level companion, two 2nd-level companions, or one 1st-level and one 3rd-level companion. Each time a pack lord’s druid level increases, she must decide how to allocate the increase among her animal companions (including the option of adding a new 1st-level companion). Once a druid level is allocated to a particular companion, it cannot be redistributed while that companion is in the pack lord’s service (she must release the companion or wait until the companion dies to allocate its levels to another companion, which she can do the next time she prepares spells).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, cleric domain hook, animal companion hook.

### Replaces: the 6th-level additional use of wild shape

- **Archetype feature:** Improved Empathic Link (Su)
- **Description:** The pack lord gains an empathic link with all of her animal companions.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: The pack lord gains an empathic link with all of her animal companions. This functions like an empathic link with a familiar. In addition, as a swift action the pack lord can shift her perception to one of her companions, allowing her to experience what it sees, hears, and so on. She can maintain this connection as long as she likes (as long as the companion is within 1 mile) and end it as a free action. The druid can only use this ability on one companion at a time, and cannot see, hear, or smell with her own body while maintaining this connection.
- **Implementation flags:**
  - Likely existing hooks: animal companion hook, wild shape hook.

## Parsed source feature headings

- Pack Bond (Ex)
- Improved Empathic Link (Su)

