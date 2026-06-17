# Berserker - Fearsome Defender

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Fearsome Defender
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Fearsome%20Defender
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Intractable (Ex); Off the Leash (Ex); Silent Threat (Ex); Bloodlust (Ex)
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense; improved uncanny dodge

## Implementation details

### Replaces: fast movement

- **Archetype feature:** Intractable (Ex)
- **Description:** A combination of brainwashing and loyalty helps a fearsome defender resist pain and torture, enduring grueling combat or questioning without betraying her dark lord.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A combination of brainwashing and loyalty helps a fearsome defender resist pain and torture, enduring grueling combat or questioning without betraying her dark lord. A fearsome defender gains a +2 bonus on saving throws against painUM effects, and the DCs of checks to coerce her or demoralize her with Diplomacy or Intimidate increase by 2. Both the bonus and the increase to DCs increase by 2 when she gains greater rage and again by 2 when she gains mighty rage.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: uncanny dodge

- **Archetype feature:** Off the Leash (Ex)
- **Description:** Beginning at 2nd level, a fearsome defender simmers on the edge of bloody combat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** Beginning at 2nd level, a fearsome defender simmers on the edge of bloody combat. Whenever she begins a rage, she can also draw an unconcealed weapon as part of the free action to begin raging.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: trap sense

- **Archetype feature:** Silent Threat (Ex)
- **Description:** At 3rd level, a fearsome defender exudes hostility, creating a threatening atmosphere in her presence.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 6.
  - **Rules text to implement:** At 3rd level, a fearsome defender exudes hostility, creating a threatening atmosphere in her presence. The fearsome defender gains a +1 bonus on Intimidate checks, and the DCs of Intimidate checks to demoralize her allies within 30 feet increase by 1. Both the bonus and the increase to DCs increase by 1 at 6th level and every 3 barbarian levels thereafter.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Bloodlust (Ex)
- **Description:** At 5th level, a fearsome defender’s eagerness for bloodshed makes her quicker to act in a fight.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a fearsome defender’s eagerness for bloodshed makes her quicker to act in a fight. She adds her Charisma modifier to initiative checks and always acts during the surprise round. If the fearsome defender is surprised during the surprise round, she acts last in that round and then determines initiative order normally for the remainder of combat.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Intractable (Ex)
- Off the Leash (Ex)
- Silent Threat (Ex)
- Bloodlust (Ex)
