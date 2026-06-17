# Inquisitor - Sanctified Slayer

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Sanctified Slayer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Sanctified%20Slayer
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Studied Target (Ex); Sneak Attack (Ex); Talented Slayer (Ex)
- **Replaced / altered class features:** judgment 1/day; the later iterations of the judgment ability; second judgment, third judgment, slayer, and true judgment

## Implementation details

### Replaces: judgment 1/day

- **Archetype feature:** Studied Target (Ex)
- **Description:** At 1st level, a sanctified slayer gains the slayer’s studied target class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a sanctified slayer gains the slayer’s studied target class feature. She uses her inquisitor level as her effective slayer level to determine the effects of studied target.
- **Implementation flags:**
  - judgment subsystem.
  - feat grant/prerequisite handling.

### Replaces: the later iterations of the judgment ability

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** At 4th level, if a sanctified slayer catches an opponent unable to defend itself effectively from her attack, she can strike a vital spot to deal extra damage.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, if a sanctified slayer catches an opponent unable to defend itself effectively from her attack, she can strike a vital spot to deal extra damage. The sanctified slayer’s attack deals additional damage anytime her target would be denied a Dexterity bonus to AC (whether or not the target actually has a Dexterity bonus), or when the sanctified slayer flanks her target. This additional damage is 1d6 at 4th level, and increases by 1d6 every 3 levels thereafter. Should a sanctified slayer score a critical hit with the sneak attack, this extra damage is not multiplied. Ranged attacks can count as sneak attacks only if the target is within 30 feet. With a weapon that deals nonlethal damage (such as a sap, whip, or an unarmed strike), a sanctified slayer can make a sneak attack that deals nonlethal damage instead of lethal damage. She cannot use a weapon that deals lethal damage to deal nonlethal damage in a sneak attack, even with the usual –4 penalty. A sanctified slayer must be able to see the target well enough to pick out a vital spot and must be able to reach such a spot. A sanctified slayer cannot use sneak attack while striking a creature with concealment.
- **Implementation flags:**
  - judgment subsystem.
  - ki subsystem.

### Replaces: second judgment, third judgment, slayer, and true judgment

- **Archetype feature:** Talented Slayer (Ex)
- **Description:** At 8th, 16th, 17th, and 20th levels, a sanctified slayer can gain a single slayer talent, including those from the list of rogue talents that a slayer can take, but not an advanced slayer talent.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** At 8th, 16th, 17th, and 20th levels, a sanctified slayer can gain a single slayer talent, including those from the list of rogue talents that a slayer can take, but not an advanced slayer talent.
- **Implementation flags:**
  - judgment subsystem.

## Parsed source feature headings

- Studied Target (Ex)
- Sneak Attack (Ex)
- Talented Slayer (Ex)
