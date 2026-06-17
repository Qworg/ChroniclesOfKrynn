# Alchemist - Energist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Energist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Energist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Energy Focus; Energist Bombs (Su); Healing Ampoule (Su); Energist Resistance (Su)
- **Replaced / altered class features:** Extracts; Bombs; Poison Immunity; Throw Anything; 2nd-level Discovery; Swift Poisoning; Poison Resistance

## Implementation details

### Alters: extracts

- **Archetype feature:** Energy Focus
- **Description:** An energist chooses whether to pursue the path of positive energy or the path of negative energy.
- **Detailed mechanics:**
  - **Level hooks:** 6.
  - **Rules text to implement:** An energist chooses whether to pursue the path of positive energy or the path of negative energy. Once selected, this choice can’t be changed. If he chooses negative energy, he adds harm as a 6th-level formula and the inflict spells to his alchemist formulae list and removes heal and the cure spells.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: bombs and replaces poison immunity

- **Archetype feature:** Energist Bombs (Su)
- **Description:** An energist’s bombs deal damage based on the energy he chose at 1st level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 10.
  - **Rules text to implement:** An energist’s bombs deal damage based on the energy he chose at 1st level. If he chose positive energy, his bombs damage undead creatures, dealing an amount of positive energy damage equal to his normal bomb damage. If he chose negative energy, his bombs damage the living, dealing 1d4 points of negative energy damage plus 1d4 additional points at every odd-numbered alchemist level beyond 1st (instead of 1d6). He can’t apply discoveries with an asterisk (*) to his bombs. When an energist reaches 10th level, undead damaged by his positive energy bombs must succeed at a Will save or flee for 1 round as if affected by the Turn Undead feat, while living creatures damaged by an energist’s negative energy bombs must succeed at a Fortitude save or be sickened for 1 round. An energist’s bombs don’t heal creatures normally healed by the energist’s chosen energy type.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: throw anything and replaces the discovery gained at 2nd level and swift poisoning

- **Archetype feature:** Healing Ampoule (Su)
- **Description:** At 2nd level, as a standard action, an energist can create and throw a healing ampoule of the same energy type as his bombs up to 30 feet, using two of his daily uses of bombs.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, as a standard action, an energist can create and throw a healing ampoule of the same energy type as his bombs up to 30 feet, using two of his daily uses of bombs. A living creature subject to a direct hit by a healing ampoule of positive energy regains 1d4 hit points plus an additional 1d4 hit points for every even-numbered alchemist level an energist has beyond 2nd, while a direct hit by a negative energy healing ampoule instead restores an equivalent number of hit points to an undead target. In either case, the energist adds his Intelligence modifier to the number of hit points healed, as if the ampoule were a splash weapon benefiting from his throw anything ability. A healing ampoule has no splash effect on adjacent targets unless it misses the target; if it misses, determine where it lands as if it were a splash weapon. Healing ampoules don’t damage creatures normally damaged by the energist’s chosen energy type.
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison resistance

- **Archetype feature:** Energist Resistance (Su)
- **Description:** At 2nd level, an energist gains energy resistance equal to his alchemist level to positive or negative energy, whichever would naturally harm him.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an energist gains energy resistance equal to his alchemist level to positive or negative energy, whichever would naturally harm him. When on a positive-dominant plane such as the Positive Energy Plane, he can apply this resistance to offset the plane’s fast healing.
- **Implementation flags:**
  - poison subsystem.

## Parsed source feature headings

- Energy Focus
- Energist Bombs (Su)
- Healing Ampoule (Su)
- Energist Resistance (Su)
