# Druid - Restorer

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Restorer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Restorer
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Healing Touch (Ex); Natural Medic; Enemy of Blight (Ex); Guide across Lifetimes (Sp)
- **Replaced / altered class features:** nature sense; spontaneous casting; resist nature’s lure; a thousand faces

## Implementation details

### Replaces: nature sense

- **Archetype feature:** Healing Touch (Ex)
- **Description:** A restorer gains a +2 bonus on Heal checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A restorer gains a +2 bonus on Heal checks. When a restorer uses Heal to provide first aid, the bonus increases to +3.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: spontaneous casting

- **Archetype feature:** Natural Medic
- **Description:** A restorer can channel stored spell energy into healing spells that she did not prepare ahead of time.
- **Detailed mechanics:**
  - **Rules text to implement:** A restorer can channel stored spell energy into healing spells that she did not prepare ahead of time. The restorer can “lose” any prepared spell in order to cast any cure spell she can cast of the same spell level or lower (a cure spell is any spell with “cure” in its name).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Enemy of Blight (Ex)
- **Description:** At 4th level, a restorer can ignore the effects of an overgrown area that has been magically manipulated to impede motion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a restorer can ignore the effects of an overgrown area that has been magically manipulated to impede motion. She can ignore these effects for a number of rounds per day equal to double her Wisdom bonus. These rounds don’t have to be used consecutively.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: a thousand faces

- **Archetype feature:** Guide across Lifetimes (Sp)
- **Description:** At 13th level, once per day as a full-round action, a restorer can cast reincarnate without a material component.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, once per day as a full-round action, a restorer can cast reincarnate without a material component.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Healing Touch (Ex)
- Natural Medic
- Enemy of Blight (Ex)
- Guide across Lifetimes (Sp)
