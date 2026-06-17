# Cleric - Stoic Caregiver

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Stoic Caregiver
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Stoic%20Caregiver
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Positive Channeler (Su); Domains; Midwife Training (Su); Fated Cures (Su); Three-Aspect Channel (Su)
- **Replaced / altered class features:** Channel Energy; Domains;

## Implementation details

### Alters: channel energy

- **Archetype feature:** Positive Channeler (Su)
- **Description:** A stoic caregiver must choose to channel positive energy, even if she worships a deity who is neutral or if she is not devoted to a particular deity.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A stoic caregiver must choose to channel positive energy, even if she worships a deity who is neutral or if she is not devoted to a particular deity. A stoic caregiver cannot worship a deity who is evil.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: domains

- **Archetype feature:** Domains
- **Description:** A stoic caregiver chooses only one domain.
- **Detailed mechanics:**
  - **Rules text to implement:** A stoic caregiver chooses only one domain.
- **Implementation flags:**
  - domain system.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Midwife Training (Su)
- **Description:** A stoic caregiver is an expert at caring for lives that are in the process of being formed as well as the bodies of those who expect to usher new life into the world.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A stoic caregiver is an expert at caring for lives that are in the process of being formed as well as the bodies of those who expect to usher new life into the world. The stoic caregiver gains a +2 bonus on Heal checks to treat expectant mothers and children. Any Heal check by the stoic caregiver that deals damage to the patient always deals the minimum amount of damage. Whenever a stoic caregiver stops bleeding with the Heal skill or magical healing, or restores hit points with a healing spell or channeled positive energy, the healed creature gains partial resistance to bleed damage and negative energy for a number of minutes equal to 1/2 the stoic caregiver’s cleric level. Any bleed damage a target takes during that time is halved. Additionally, when protected creatures take negative energy damage (such as from an evil cleric’s or an antipaladin’s negative channeled energy, or spells such as inflict light wounds), the amount of that damage is reduced by 5.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Fated Cures (Su)
- **Description:** Creatures must roll twice and take the lower result when they make any saving throws against a stoic caregiver’s spells of the healing subschool.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** Creatures must roll twice and take the lower result when they make any saving throws against a stoic caregiver’s spells of the healing subschool.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Three-Aspect Channel (Su)
- **Description:** At 6th level, a stoic caregiver can channel positive energy to heal and harm simultaneously.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a stoic caregiver can channel positive energy to heal and harm simultaneously. When she does so, she restores only 1/2 the usual amount of hit points and deals only 1/2 the usual number of points of damage (or 1/4 on a successful saving throw).
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Positive Channeler (Su)
- Domains
- Midwife Training (Su)
- Fated Cures (Su)
- Three-Aspect Channel (Su)
