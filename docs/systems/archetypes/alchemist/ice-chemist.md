# Alchemist - Ice Chemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Ice Chemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Ice%20Chemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Icy Bombs (Su); Cold Sweat (Su); Frost Bomb (Su)
- **Replaced / altered class features:** Bomb; Poison Resistance; Poison Immunity; 2nd-level Discovery

## Implementation details

### Alters: the bomb class feature

- **Archetype feature:** Icy Bombs (Su)
- **Description:** An ice chemist’s bombs deal cold damage instead of fire damage.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** An ice chemist’s bombs deal cold damage instead of fire damage. In place of an alchemist discovery, she can learn to create bombs that deal fire damage like normal alchemist bombs do, though she can’t apply discoveries that modify bombs to such fire bombs that she creates. An ice alchemist’s icy bombs can still be poisonous or create thick vapors similar to smoke, but she cannot apply the explosive or inferno bomb discoveries to them.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Replaces: poison resistance and poison immunity

- **Archetype feature:** Cold Sweat (Su)
- **Description:** At 2nd level, an ice chemist channels her affinity for cold energy into her personal space, keeping herself and her gear cool.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an ice chemist channels her affinity for cold energy into her personal space, keeping herself and her gear cool. She gains cold resistance equal to her alchemist level and can survive comfortably in temperatures as low as –50º Fahrenheit.
- **Implementation flags:**
  - poison subsystem.

### Replaces: the discovery that the alchemist normally gains at 2nd level

- **Archetype feature:** Frost Bomb (Su)
- **Description:** At 2nd level, an ice chemist gains the frost bomb discovery.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an ice chemist gains the frost bomb discovery.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Icy Bombs (Su)
- Cold Sweat (Su)
- Frost Bomb (Su)
