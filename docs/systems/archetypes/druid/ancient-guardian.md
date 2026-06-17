# Druid - Ancient Guardian

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Ancient Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Ancient%20Guardian
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Ancient Arms; Community Bond (Ex); Patience of Nature (Ex); Ancient Ways (Ex); Dispel Hostility (Su); Unimpeachable (Ex); Undo Artifice (Sp)
- **Replaced / altered class features:** wild empathy; trackless step and woodland stride; spontaneous casting; resist nature’s lure; a thousand faces

## Implementation details

### Alters: the druid’s normal weapon proficiencies

- **Archetype feature:** Ancient Arms
- **Description:** An ancient guardian can’t wield weapons made primarily of metal.
- **Detailed mechanics:**
  - **Rules text to implement:** An ancient guardian can’t wield weapons made primarily of metal. She is proficient with only the club, dart, quarterstaff, shortspear, sling, and spear. She is also proficient with all natural attacks (claw, bite, and so forth) of any form she assumes with wild shape. Using a prohibited weapon renders her unable to cast druid spells or use any of her druid supernatural or spell-like class abilities while wielding the weapon and for 24 hours after ceasing to wield it.
- **Implementation flags:**
  - wild shape subsystem.
  - spell-like ability support.

### Alters: nature bond

- **Archetype feature:** Community Bond (Ex)
- **Description:** At 1st level, an ancient guardian must choose the domain nature bond ability and select from the following domains: Community, Healing, Knowledge, Protection, or Repose.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an ancient guardian must choose the domain nature bond ability and select from the following domains: Community, Healing, Knowledge, Protection, or Repose.
- **Implementation flags:**
  - domain system.

### Replaces: wild empathy

- **Archetype feature:** Patience of Nature (Ex)
- **Description:** An ancient guardian does not gain wild empathy at 1st level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 2.
  - **Rules text to implement:** An ancient guardian does not gain wild empathy at 1st level. Instead, at 2nd level, an ancient guardian adds Diplomacy, Perform (oratory), and Sense Motive to her list of class skills and gains an insight bonus equal to half her druid level on such checks.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trackless step and woodland stride

- **Archetype feature:** Ancient Ways (Ex)
- **Description:** At 3rd level, an ancient guardian increases any climb, fly, or swim speeds she has or gains via her wild shape ability by 10 feet.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an ancient guardian increases any climb, fly, or swim speeds she has or gains via her wild shape ability by 10 feet.
- **Implementation flags:**
  - wild shape subsystem.
  - flight/movement mode support.

### Replaces: spontaneous casting

- **Archetype feature:** Dispel Hostility (Su)
- **Description:** An ancient guardian doesn’t gain spontaneous casting at 1st level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 3.
  - **Rules text to implement:** An ancient guardian doesn’t gain spontaneous casting at 1st level. Instead, at 3rd level, she can channel stored spell energy into a spell capable of dispelling hostile thoughts and strong emotions. She can “lose” a prepared spell in order to cast calm emotions. Instead of the normal Will saving throw for that spell, the DC of a calm emotions spell cast with this ability is 10 + 1/2 the ancient guardian’s druid level + her Wisdom modifier.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Unimpeachable (Ex)
- **Description:** At 4th level, an ancient guardian gains a +4 bonus on saves against enchantments.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an ancient guardian gains a +4 bonus on saves against enchantments.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: a thousand faces

- **Archetype feature:** Undo Artifice (Sp)
- **Description:** At 13th level, an ancient guardian gains the ability to reduce a nonliving item to its component raw materials.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, an ancient guardian gains the ability to reduce a nonliving item to its component raw materials. This acts as the spell polymorph any object, but works on magical or nonmagical nonliving objects. The duration is always permanent. Unlike polymorph any object, this ability can’t be used to mimic the effects of other spells. Items subject to this effect receive a Fortitude saving throw to negate the effect (DC = 10 + 1/2 the ancient guardian’s druid level + her Wisdom modifier). Magic items receive a circumstance bonus on this save equal to +1 for every 5,000 gp of the item’s value. An ancient guardian can use undo artifice a number of times per day equal to her Wisdom modifier.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Ancient Arms
- Community Bond (Ex)
- Patience of Nature (Ex)
- Ancient Ways (Ex)
- Dispel Hostility (Su)
- Unimpeachable (Ex)
- Undo Artifice (Sp)
