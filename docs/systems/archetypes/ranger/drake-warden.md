# Ranger - Drake Warden

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Drake Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Drake%20Warden
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Young Drake
- **Replaced / altered class features:** hunter’s bond, 2nd favored enemy, and swift tracker

## Implementation details

### Replaces: hunter’s bond, 2nd favored enemy, and swift tracker

- **Archetype feature:** Young Drake
- **Description:** At 4th level, a drake warden gains a drake companion instead of an animal companion, but his effective charge’s level is equal to his ranger level - 3.
- **Detailed mechanics:**
  - **Level hooks:** 4, 15, 5, 17.
  - **Rules text to implement:** At 4th level, a drake warden gains a drake companion instead of an animal companion, but his effective charge’s level is equal to his ranger level - 3. The young drake gains drake powers only when its charge reaches 3rd and 7th levels (not 11th or 15th level) and increases in size only when its charge reaches 5th level (not 9th, 13th, or 17th level).
- **Implementation flags:**
  - animal companion progression.

## Parsed source feature headings

- Young Drake
