# Rogue - Escapologist

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Escapologist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Escapologist
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Elusive; Unfettered Mind (Su); Impossible Escape (Su)
- **Replaced / altered class features:** trapfinding, but counts as trapfinding for the purposes of prerequisites and abilities that require trapfinding; uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: trapfinding, but counts as trapfinding for the purposes of prerequisites and abilities that require trapfinding

- **Archetype feature:** Elusive
- **Description:** An escapologist adds 1/2 her rogue level (minimum +1) as a bonus on all Disable Device and Escape Artist checks.
- **Detailed mechanics:**
  - **Rules text to implement:** An escapologist adds 1/2 her rogue level (minimum +1) as a bonus on all Disable Device and Escape Artist checks. An escapologist can use Disable Device to disarm magical traps.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge

- **Archetype feature:** Unfettered Mind (Su)
- **Description:** At 3rd level, an escapologist can attempt an Escape Artist check as a full-round action to remove a mind-affecting effect currently affecting her.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, an escapologist can attempt an Escape Artist check as a full-round action to remove a mind-affecting effect currently affecting her. The DC of this check is equal to the effect’s original save DC + 20. She cannot remove effects that do not allow a saving throw. She can attempt to escape even if paralyzed or restrained, as long as she can take purely mental actions. She can attempt this check against a particular effect once per round if the effect is measured in rounds, once per minute if the effect is measured in minutes, once per 10 minutes if the effect is measured in 10-minute intervals, and so on.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Impossible Escape (Su)
- **Description:** At 8th level, as an immediate action, an escapologist can attempt an Escape Artist check at a –10 penalty and apply the result in place of either a failed Reflex save or her AC against an attack that would have hit her.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, as an immediate action, an escapologist can attempt an Escape Artist check at a –10 penalty and apply the result in place of either a failed Reflex save or her AC against an attack that would have hit her. If she succeeds, her contortions let her avoid the attack or effect entirely. Using this ability leaves the escapologist staggered until the end of her next turn. If the escapologist can’t become staggered, she can’t use impossible escape.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Elusive
- Unfettered Mind (Su)
- Impossible Escape (Su)
