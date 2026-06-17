# Druid - Pack Lord

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Pack Lord
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Pack%20Lord
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Pack Bond (Ex); Improved Empathic Link (Su)
- **Replaced / altered class features:** nature bond; the 6th-level additional use of wild shape

## Implementation details

### Replaces: nature bond

- **Archetype feature:** Pack Bond (Ex)
- **Description:** A pack lord druid may not select a domain and must choose an animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 2, 1, 3.
  - **Rules text to implement:** A pack lord druid may not select a domain and must choose an animal companion. The druid gains a +2 bonus on wild empathy and Handle Animal checks made regarding her animal companion. The pack lord may have more than one animal companion, but she must divide up her effective druid level between her companions to determine the abilities of each companion. For example, a 4th-level pack lord can have one 4th-level companion, two 2nd-level companions, or one 1st-level and one 3rd-level companion. Each time a pack lord’s druid level increases, she must decide how to allocate the increase among her animal companions (including the option of adding a new 1st-level companion). Once a druid level is allocated to a particular companion, it cannot be redistributed while that companion is in the pack lord’s service (she must release the companion or wait until the companion dies to allocate its levels to another companion, which she can do the next time she prepares spells). The share spells animal companion ability only applies to one animal companion at a time—the pack lord cannot use it to cast a one-target spell and have it affect all of her animal companions.
- **Implementation flags:**
  - animal companion progression.
  - domain system.

### Replaces: the 6th-level additional use of wild shape

- **Archetype feature:** Improved Empathic Link (Su)
- **Description:** The pack lord gains an empathic link with all of her animal companions.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** The pack lord gains an empathic link with all of her animal companions. This functions like an empathic link with a familiar. In addition, as a swift action the pack lord can shift her perception to one of her companions, allowing her to experience what it sees, hears, and so on. She can maintain this connection as long as she likes (as long as the companion is within 1 mile) and end it as a free action. The druid can only use this ability on one companion at a time, and cannot see, hear, or smell with her own body while maintaining this connection.
- **Implementation flags:**
  - animal companion progression.
  - wild shape subsystem.

## Parsed source feature headings

- Pack Bond (Ex)
- Improved Empathic Link (Su)
