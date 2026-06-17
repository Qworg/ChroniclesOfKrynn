# Rogue - Nameless Shadow

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Nameless Shadow
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Nameless%20Shadow
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Harmless Guise (Ex); Face in the Crowd (Ex)
- **Replaced / altered class features:** Trapfinding; 2nd, 4th, 6th, 8th, 10th, 14th, 18th-level Rogue Talents

## Implementation details

### Replaces: trapfinding and the rogue talents gained at 2nd, 6th, 10th, 14th, and 18th levels

- **Archetype feature:** Harmless Guise (Ex)
- **Description:** A nameless shadow gains the dual identity and seamless guise vigilante class features, with the following restrictions.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6, 8, 14, 18.
  - **Rules text to implement:** A nameless shadow gains the dual identity and seamless guise vigilante class features, with the following restrictions. Her social identity must be that of a mundane and nonthreatening member of society, such as a farmer or a merchant. At 6th level, the nameless shadow gains the many guises vigilante social talent. At 8th level, the nameless shadow gains the quick change vigilante social talent. At 14th level, the nameless shadow gains the everyman vigilante social talent. At 18th level, the nameless shadow gains the any guise vigilante social talent. Additionally, when a nameless shadow attacks a foe while in a social or mundane identity, her target takes a –2 penalty to AC for the purpose of resolving that attack. This use of harmless guise forces the nameless shadow into her vigilante identity after the attack is completed, and the target (if it survives) then becomes aware of the nameless shadow’s secret. This ability cannot be used on targets that are aware of the nameless shadow’s dual identity.
- **Implementation flags:**
  - vigilante identity subsystem.
  - feat grant/prerequisite handling.

### Replaces: the rogue talents gained at 4th and 8th levels

- **Archetype feature:** Face in the Crowd (Ex)
- **Description:** At 4th level, so long as there are at least 10 other nonhostile creatures within 30 feet of her, a nameless shadow can use Bluff or Disguise in place of Stealth to hide or for sniping.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level, so long as there are at least 10 other nonhostile creatures within 30 feet of her, a nameless shadow can use Bluff or Disguise in place of Stealth to hide or for sniping. At 8th level, she can use this ability to hide within a crowd even if she is being observed.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Harmless Guise (Ex)
- Face in the Crowd (Ex)
