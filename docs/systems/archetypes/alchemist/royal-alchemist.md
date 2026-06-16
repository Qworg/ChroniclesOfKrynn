# Alchemist - Royal Alchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Royal Alchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Royal%20Alchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Alchemical Antidote
- **Replaced / altered class features:** the alchemist’s poison use and swift poisoning

## Replacement details

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** A royal alchemist adds Diplomacy and Knowledge (nobility) to his list of class skills instead of Knowledge (nature) and Survival.
- **Mechanics:**
  - Mechanics summary: A royal alchemist adds Diplomacy and Knowledge (nobility) to his list of class skills instead of Knowledge (nature) and Survival.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the alchemist’s poison use and swift poisoning

- **Archetype feature:** Alchemical Antidote
- **Description:** At 2nd level, a royal alchemist can blend special mixes of antitoxin, medicine, and other remedies into alchemical antidotes that can be imbibed by anyone.
- **Mechanics:**
  - Level hooks: 2, 6.
  - Mechanics summary: At 2nd level, a royal alchemist can blend special mixes of antitoxin, medicine, and other remedies into alchemical antidotes that can be imbibed by anyone. The royal alchemist creates his alchemical antidotes when he prepares his extracts for the day; they remain potent for 1 day before losing their properties, and the cost of the materials used to make them is insignificant. An alchemical antidote does not qualify as an extract or an infusion for the purpose of feats or discoveries. The royal alchemist has a pool of points equal to 1/2 his alchemist level + his Intelligence bonus that he can divide among any number of alchemical antidotes, though the maximum number of points he can spend on a single antidote is equal to 1/2 his alchemist level (minimum 1). Each point grants the imbiber of the alchemical antidote a +1 alchemical bonus on saving throws against poison for a number of hours equal to the royal alchemist’s Intelligence bonus (minimum 1). The royal alchemist can also create an antidote that protects against diseases.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Class Skills
- Alchemical Antidote

