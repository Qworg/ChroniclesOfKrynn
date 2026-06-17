# Cleric - Triadic Priest

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Triadic Priest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Triadic%20Priest
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Triadic Bond (Su); Bonded Channeler (Su); Bonded Domain (Su); Domain Spells
- **Replaced / altered class features:** Domains

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Triadic Bond (Su)
- **Description:** A triadic priest can perform a 10-minute ritual with exactly two allies in order to create an enduring bond between them that lasts until the triadic priest either dissolves the bond (a process that takes 1 minute of concentration) or creates a new bond.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A triadic priest can perform a 10-minute ritual with exactly two allies in order to create an enduring bond between them that lasts until the triadic priest either dissolves the bond (a process that takes 1 minute of concentration) or creates a new bond. When performing the bonding ritual, the triadic priest can also include any of her allies’ familiars or spirit animals; these creatures gain the benefits of the bonded channeler ability and the drawbacks of being in the bond, but they are not treated as bonded allies for the purpose of the triadic priest’s bonded domain. Only intelligent and fully independent creatures can serve as her two bonded companions. Animal companions, eidolons, familiars, phantoms, and similar nonsentient or dependent creatures are not suitable. The bonded allies gain numerous benefits and can help empower the triadic priest’s spellcasting, as noted in the abilities below. However, if a bonded ally dies, the other members of the bond must each succeed at a Fortitude save (DC = 10 + the triadic priest’s class level) or gain 1 permanent negative level.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonded Channeler (Su)
- **Description:** When a triadic priest uses her channel energy ability, she must choose to affect either only her bonded allies or everyone except her bonded allies.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** When a triadic priest uses her channel energy ability, she must choose to affect either only her bonded allies or everyone except her bonded allies.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the domains class feature

- **Archetype feature:** Bonded Domain (Su)
- **Description:** A triadic priest selects only one domain granted by her deity.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** A triadic priest selects only one domain granted by her deity. However, while she is within 10 feet of least one of her bonded allies, she gains the following benefits. Bonded Power (Su) : A triadic priest gains either a witch’s coven hex or the Allied Spellcaster feat as a bonus feat. Bonded Unity (Su) : As a move action, a triadic priest can share one teamwork feat she has with up to two bonded companions that are within 10 feet of her. Her bonded companions do not need to meet the feat’s prerequisites and gain the benefits of the feat for 1 round plus 1 additional round for every 5 class levels the triadic priest has. A bonded companion can gain only one teamwork feat in this way at a time. The triadic priest can use this ability a number of times per day equal to 3 + her Wisdom modifier. Bonded Ritual : A triadic priest can prepare any of the spells below as though they were domain spells, though she can cast these domain spells only while she is within 10 feet of one of her bonded allies. At 8th level, once per day while within 10 feet of both her bonded allies, a triadic priest can cast any one of her domain spells of a spell level she can cast, whether she has prepared the spell or not, without expending a spell slot. If one of these domain spells has a casting time of more than one standard action, the triadic priest must succeed at a concentration check (DC = 20 + double the spell’s level) or lose the spell if at any point during the casting she does not have a bonded ally within 10 feet.
- **Implementation flags:**
  - domain system.
  - hex subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Domain Spells
- **Description:** 1st— ill omen, 2nd— blindness/deafness, 3rd— bestow curse, 4th— charm monster, 5th— baleful polymorph, 6th— control weather, 7th— forcecage, 8th— mind blank, 9th— astral projection.
- **Detailed mechanics:**
  - **Rules text to implement:** 1st— ill omen, 2nd— blindness/deafness, 3rd— bestow curse, 4th— charm monster, 5th— baleful polymorph, 6th— control weather, 7th— forcecage, 8th— mind blank, 9th— astral projection.
- **Implementation flags:**
  - domain system.
  - curse subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Triadic Bond (Su)
- Bonded Channeler (Su)
- Bonded Domain (Su)
- Domain Spells
