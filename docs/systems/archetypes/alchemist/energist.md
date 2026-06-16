# Alchemist - Energist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Energist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Energist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Energy Focus; Energist Bombs (Su); Healing Ampoule (Su); Energist Resistance (Su)
- **Replaced / altered class features:** Extracts; Bombs; Poison Immunity; Throw Anything; 2nd-level Discovery; Swift Poisoning; Poison Resistance

## Replacement details

### Alters: extracts

- **Archetype feature:** Energy Focus
- **Description:** An energist chooses whether to pursue the path of positive energy or the path of negative energy.
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: An energist chooses whether to pursue the path of positive energy or the path of negative energy. Once selected, this choice can’t be changed. If he chooses negative energy, he adds harm as a 6th-level formula and the inflict spells to his alchemist formulae list and removes heal and the cure spells.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: bombs and replaces poison immunity

- **Archetype feature:** Energist Bombs (Su)
- **Description:** An energist’s bombs deal damage based on the energy he chose at 1st level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 10.
  - Mechanics summary: An energist’s bombs deal damage based on the energy he chose at 1st level. If he chose positive energy, his bombs damage undead creatures, dealing an amount of positive energy damage equal to his normal bomb damage. If he chose negative energy, his bombs damage the living, dealing 1d4 points of negative energy damage plus 1d4 additional points at every odd-numbered alchemist level beyond 1st (instead of 1d6). He can’t apply discoveries with an asterisk (*) to his bombs. When an energist reaches 10th level, undead damaged by his positive energy bombs must succeed at a Will save or flee for 1 round as if affected by the Turn Undead feat, while living creatures damaged by an energist’s negative energy bombs must succeed at a Fortitude save or be sickened for 1 round.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, saving throw hook, alchemist bomb hook.

### Alters: throw anything and replaces the discovery gained at 2nd level and swift poisoning

- **Archetype feature:** Healing Ampoule (Su)
- **Description:** At 2nd level, as a standard action, an energist can create and throw a healing ampoule of the same energy type as his bombs up to 30 feet, using two of his daily uses of bombs.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, as a standard action, an energist can create and throw a healing ampoule of the same energy type as his bombs up to 30 feet, using two of his daily uses of bombs. A living creature subject to a direct hit by a healing ampoule of positive energy regains 1d4 hit points plus an additional 1d4 hit points for every even-numbered alchemist level an energist has beyond 2nd, while a direct hit by a negative energy healing ampoule instead restores an equivalent number of hit points to an undead target. In either case, the energist adds his Intelligence modifier to the number of hit points healed, as if the ampoule were a splash weapon benefiting from his throw anything ability. Healing ampoules don’t damage creatures normally damaged by the energist’s chosen energy type.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, alchemist discovery hook.

### Replaces: poison resistance

- **Archetype feature:** Energist Resistance (Su)
- **Description:** At 2nd level, an energist gains energy resistance equal to his alchemist level to positive or negative energy, whichever would naturally harm him.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an energist gains energy resistance equal to his alchemist level to positive or negative energy, whichever would naturally harm him. When on a positive-dominant plane such as the Positive Energy Plane, he can apply this resistance to offset the plane’s fast healing.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 2nd-level Discovery

## Parsed source feature headings

- Energy Focus
- Energist Bombs (Su)
- Healing Ampoule (Su)
- Energist Resistance (Su)

