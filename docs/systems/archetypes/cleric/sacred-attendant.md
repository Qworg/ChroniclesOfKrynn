# Cleric - Sacred Attendant

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Sacred Attendant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Sacred%20Attendant
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Channel Beauty (Su); Domains; Nimble (Ex); Nurture Grace (Su); Inspiring Camaraderie (Sp)
- **Replaced / altered class features:** the cleric’s proficiency with light and medium armor

## Implementation details

### Alters: channel energy

- **Archetype feature:** Channel Beauty (Su)
- **Description:** Whenever a sacred attendant channels energy to heal, she can opt to reduce the number of dice she rolls by 1 or more.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** Whenever a sacred attendant channels energy to heal, she can opt to reduce the number of dice she rolls by 1 or more. For every die the sacred attendant subtracts, each of the targets of the channeled energy is healed of 1 point of Charisma damage.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: domains

- **Archetype feature:** Domains
- **Description:** The sacred attendant can choose only one domain from those belonging to her deity.
- **Detailed mechanics:**
  - **Rules text to implement:** The sacred attendant can choose only one domain from those belonging to her deity.
- **Implementation flags:**
  - domain system.

### Replaces: the cleric’s proficiency with light and medium armor

- **Archetype feature:** Nimble (Ex)
- **Description:** The sacred attendant gains a +1 dodge bonus to AC and CMD when unarmored, unencumbered, and not denied her Dexterity bonus to AC (regardless of whether she has a Dexterity bonus).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 18.
  - **Rules text to implement:** The sacred attendant gains a +1 dodge bonus to AC and CMD when unarmored, unencumbered, and not denied her Dexterity bonus to AC (regardless of whether she has a Dexterity bonus). At 2nd level and every 4 cleric levels thereafter, the dodge bonus increases by 1 (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Nurture Grace (Su)
- **Description:** The sacred attendant can coax forth the charm and beauty within a willing, touched creature as a standard action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** The sacred attendant can coax forth the charm and beauty within a willing, touched creature as a standard action. For 1 round, the subject gains an enhancement bonus equal to 1/2 the sacred attendant’s cleric level (minimum +1) on Charisma checks and Charismabased skill checks. The sacred attendant can spend two uses of this ability to instead counsel a subject for 10 minutes; in this case, the ability’s duration lasts for 1 day. The sacred attendant can use this ability a number of times per day equal to 3 + her Wisdom modifier.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Inspiring Camaraderie (Sp)
- **Description:** At 8th level, as a swift action whenever a sacred attendant casts a cure spell (a spell with “cure” in its name) that targets a single ally, the sacred attendant can infuse that ally with inspired vigor.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, as a swift action whenever a sacred attendant casts a cure spell (a spell with “cure” in its name) that targets a single ally, the sacred attendant can infuse that ally with inspired vigor. For a number of rounds equal to 1/2 the sacred attendant’s cleric level, the ally’s attack rolls gain a competence bonus equal to the sacred attendant’s cleric level. These rounds begin as soon as the sacred attendant uses this ability and elapse consecutively. The sacred attendant can use this ability once per day at 8th level, and an additional time per day for every 4 cleric levels beyond 8th.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Channel Beauty (Su)
- Domains
- Nimble (Ex)
- Nurture Grace (Su)
- Inspiring Camaraderie (Sp)
