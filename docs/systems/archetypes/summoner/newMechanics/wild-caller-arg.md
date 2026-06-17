# Summoner - Wild Caller (ARG)

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Wild Caller (ARG)
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Wild%20Caller%20%28ARG%29
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Spells; Eidolon; Summon Nature’s Ally I (Sp)
- **Replaced / altered class features:** Summon Monster; Eidolon

## Implementation details

### Alters: the normal spell list of the summoner

- **Archetype feature:** Spells
- **Description:** A wild caller does not have access to summon monster spells.
- **Detailed mechanics:**
  - **Rules text to implement:** A wild caller does not have access to summon monster spells. Instead, he swaps out those spells on his spell list with summon nature’s ally spells of the same level.
- **Implementation flags:**
  - summoning subsystem.
  - archetype spell-list override.

### Alters: the normal summoner’s eidolon class feature, but is otherwise identical to that class feature

- **Archetype feature:** Eidolon
- **Description:** The eidolon of a wild caller tends to take more natural and more savage forms than other summoners’ eidolons.
- **Detailed mechanics:**
  - **Rules text to implement:** The eidolon of a wild caller tends to take more natural and more savage forms than other summoners’ eidolons. A wild caller gains 1/4 his class level as bonus evolution points in his eidolon’s evolution pool, but his eidolon cannot take the following evolutions: 1-point evolutions : basic magic, magic attacks, skilled (while the eidolon can select this evolution, it can only do so with the following skills: Acrobatics, Climb, Escape Artist, Fly, Intimidate, Perception, Survival, and Swim), unnatural aura; 2-point evolutions : energy attacks, immunity, weapon training, channel resistance, head, minor magic, undead appearance; 3-point evolutions : damage reduction, frightful presence, major magic; 4-point evolutions : breath weapon, spell resistance, dimension door, incorporeal form, lifesense, no breath, ultimate magic.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - ki subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Summon Nature’s Ally I (Sp)
- **Description:** Starting at 1st level, a wild caller can cast summon nature’s ally a number of times per day equal to 3 + his Charisma modifier.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 1, 3, 17, 19.
  - **Rules text to implement:** Starting at 1st level, a wild caller can cast summon nature’s ally a number of times per day equal to 3 + his Charisma modifier. At 3rd level and every 2 levels thereafter, the power of this ability increases by one spell level, allowing him to summon more powerful creatures (to a maximum of summon nature’s ally IX at 17th level). Furthermore, at 19th level, the wild caller cannot use gate as a spell-like ability, but can use either summon elder worm or summon froghemoth instead. This ability otherwise functions like the standard summoner’s summon monster I ability and replaces that ability.
- **Implementation flags:**
  - summoning subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Spells
- Eidolon
- Summon Nature’s Ally I (Sp)
