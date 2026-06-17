# Ranger - Beast Master

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Beast Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Beast%20Master
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Animal Companion (Ex); Improved Empathic Link (Su); Strong Bond (Ex)
- **Replaced / altered class features:** hunter’s bond; camouflage

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A beast master’s class skills are Acrobatics (Dex), Climb (Str), Craft (Int), Escape Artist (Dex), Handle Animal (Cha), Heal (Wis), Intimidate (Cha), Knowledge (nature) (Int), Perception (Wis), Ride (Dex), Stealth (Dex), Survival (Wis), and Swim (Wis).
- **Detailed mechanics:**
  - **Rules text to implement:** A beast master’s class skills are Acrobatics (Dex), Climb (Str), Craft (Int), Escape Artist (Dex), Handle Animal (Cha), Heal (Wis), Intimidate (Cha), Knowledge (nature) (Int), Perception (Wis), Ride (Dex), Stealth (Dex), Survival (Wis), and Swim (Wis). These replace the standard ranger class skills.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: hunter’s bond

- **Archetype feature:** Animal Companion (Ex)
- **Description:** A beast master forms a close bond with an animal companion.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 2, 1, 3.
  - **Rules text to implement:** A beast master forms a close bond with an animal companion. This ability functions like the druid animal companion ability except that the ranger’s effective druid level is equal to his ranger level – 3. The ranger gains a +2 bonus on wild empathy and Handle Animal checks made regarding his animal companion. Unlike a normal ranger, a beast master’s choice of animal companion is not limited to a subset of all possible animal companion choices—he may choose freely among all animal companion choices, just as a druid can. The beast master may have more than one animal companion, but he must divide up his effective druid level between his companions to determine the abilities of each companion. For example, a beast master with an effective druid level of 4 can have one 4th-level companion, two 2nd-level companions, or one 1st-level and one 3rd-level companion. Each time a beast master’s effective druid level increases, he must decide how to allocate the increase among his animal companions (including the option of adding a new 1st-level companion). Once an effective druid level is allocated to a particular companion, it cannot be redistributed while that companion is in the ranger’s service (he must release a companion or wait until a companion dies to allocate its levels to another companion). The share spells animal companion ability does not give the ranger the ability to cast a single spell so that it affects all of his animal companions.
- **Implementation flags:**
  - animal companion progression.

### Replaces: the 6th-level combat style feat

- **Archetype feature:** Improved Empathic Link (Su)
- **Description:** The beast master gains an empathic link with all of his animal companions.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** The beast master gains an empathic link with all of his animal companions. This functions like an empathic link with a familiar, except the ranger can also see through a companion’s eyes as a swift action, maintaining this connection as long as he likes (as long as the companion is within 1 mile) and ending it as a free action. The ranger can only see through the eyes of one companion at a time, and is blinded while maintaining this connection.
- **Implementation flags:**
  - animal companion progression.
  - feat grant/prerequisite handling.

### Replaces: camouflage

- **Archetype feature:** Strong Bond (Ex)
- **Description:** At 12th level, the ranger strengthens his bond with his animal companions.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, the ranger strengthens his bond with his animal companions. The ranger’s effective druid level for his animal companions is now equal to his ranger level; he may immediately allocate these additional levels to his companions as he sees fit.
- **Implementation flags:**
  - animal companion progression.

## Parsed source feature headings

- Class Skills
- Animal Companion (Ex)
- Improved Empathic Link (Su)
- Strong Bond (Ex)
