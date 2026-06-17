# Rogue - Needler

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Needler
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Needler
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Adroit Poisoner (Ex); Subtle Poisoning (Ex); Needle Poisoner (Ex); Concealed Delivery (Ex)
- **Replaced / altered class features:** Evasion; Uncanny Dodge; 6th-level Rogue Talent; Improved Uncanny Dodge

## Implementation details

### Replaces: evasion

- **Archetype feature:** Adroit Poisoner (Ex)
- **Description:** At 2nd level, a needler gains a +2 bonus on Sleight of Hand checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 8.
  - **Rules text to implement:** At 2nd level, a needler gains a +2 bonus on Sleight of Hand checks. This bonus increases to +4 when the needler uses Sleight of Hand to draw a hidden weapon that is coated in poison. At 8th level, these bonuses increase to +4 and +6, respectively.
- **Implementation flags:**
  - poison subsystem.

### Replaces: uncanny dodge

- **Archetype feature:** Subtle Poisoning (Ex)
- **Description:** At 4th level, a needler can apply a contact or ingested poison to her weapon and deliver it as if it were an injury poison.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a needler can apply a contact or ingested poison to her weapon and deliver it as if it were an injury poison. The poison must be delivered within 1 minute of this application, or it is wasted. The DC of the saving throw to resist the poison decreases by 1 when the needler uses this ability to deliver a contact or ingested poison via injury.
- **Implementation flags:**
  - poison subsystem.

### Replaces: the rogue talent gained at 6th level

- **Archetype feature:** Needle Poisoner (Ex)
- **Description:** At 6th level, a needler can apply a dose of poison to a weapon as a swift action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a needler can apply a dose of poison to a weapon as a swift action. This ability counts as swift poisoning for the purpose of meeting prerequisites.
- **Implementation flags:**
  - poison subsystem.

### Replaces: improved uncanny dodge

- **Archetype feature:** Concealed Delivery (Ex)
- **Description:** At 8th level, a needler learns how to deliver all types of poisons with subtlety.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a needler learns how to deliver all types of poisons with subtlety. As a standard action, she can deliver an ingested or inhaled poison to a creature within reach by placing a dose of poison on the target’s lips, on the target’s neck, or through other similar contact with the target’s skin as if the poison were a contact poison. Delivering poison in this way requires a successful Sleight of Hand check opposed by the target’s Perception check. The poison is not lost on a failed check, but it must be successfully delivered within 1 minute of the first attempt, or it is wasted.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.

## Parsed source feature headings

- Adroit Poisoner (Ex)
- Subtle Poisoning (Ex)
- Needle Poisoner (Ex)
- Concealed Delivery (Ex)
