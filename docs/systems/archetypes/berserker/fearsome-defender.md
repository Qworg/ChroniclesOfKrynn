# Berserker - Fearsome Defender

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Fearsome Defender
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Fearsome%20Defender
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Intractable (Ex); Off the Leash (Ex); Silent Threat (Ex); Bloodlust (Ex)
- **Replaced / altered class features:** fast movement; uncanny dodge; trap sense; improved uncanny dodge

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Intractable (Ex)
- **Description:** A combination of brainwashing and loyalty helps a fearsome defender resist pain and torture, enduring grueling combat or questioning without betraying her dark lord.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A combination of brainwashing and loyalty helps a fearsome defender resist pain and torture, enduring grueling combat or questioning without betraying her dark lord. A fearsome defender gains a +2 bonus on saving throws against painUM effects, and the DCs of checks to coerce her or demoralize her with Diplomacy or Intimidate increase by 2. Both the bonus and the increase to DCs increase by 2 when she gains greater rage and again by 2 when she gains mighty rage.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, rage/rage-power hook.

### Replaces: uncanny dodge

- **Archetype feature:** Off the Leash (Ex)
- **Description:** Beginning at 2nd level, a fearsome defender simmers on the edge of bloody combat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: Beginning at 2nd level, a fearsome defender simmers on the edge of bloody combat. Whenever she begins a rage, she can also draw an unconcealed weapon as part of the free action to begin raging.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: trap sense

- **Archetype feature:** Silent Threat (Ex)
- **Description:** At 3rd level, a fearsome defender exudes hostility, creating a threatening atmosphere in her presence.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6.
  - Mechanics summary: At 3rd level, a fearsome defender exudes hostility, creating a threatening atmosphere in her presence. The fearsome defender gains a +1 bonus on Intimidate checks, and the DCs of Intimidate checks to demoralize her allies within 30 feet increase by 1. Both the bonus and the increase to DCs increase by 1 at 6th level and every 3 barbarian levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation.

### Replaces: improved uncanny dodge

- **Archetype feature:** Bloodlust (Ex)
- **Description:** At 5th level, a fearsome defender’s eagerness for bloodshed makes her quicker to act in a fight.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a fearsome defender’s eagerness for bloodshed makes her quicker to act in a fight. She adds her Charisma modifier to initiative checks and always acts during the surprise round. If the fearsome defender is surprised during the surprise round, she acts last in that round and then determines initiative order normally for the remainder of combat.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Intractable (Ex)
- Off the Leash (Ex)
- Silent Threat (Ex)
- Bloodlust (Ex)

