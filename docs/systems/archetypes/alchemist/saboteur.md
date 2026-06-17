# Alchemist - Saboteur

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Saboteur
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Saboteur
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Chameleon Mutagen (Su); Saboteur Discoveries; Grand Discoveries; Discoveries
- **Replaced / altered class features:** mutagen

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** A saboteur adds Knowledge (engineering) to his list of class skills and removes Knowledge (nature) from his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A saboteur adds Knowledge (engineering) to his list of class skills and removes Knowledge (nature) from his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: mutagen

- **Archetype feature:** Chameleon Mutagen (Su)
- **Description:** At 1st level, a saboteur discovers how to create a special elixir that he can imbibe in order to heighten his ability to move undetected and his mobility at the cost of his physical might.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a saboteur discovers how to create a special elixir that he can imbibe in order to heighten his ability to move undetected and his mobility at the cost of his physical might. When consumed, the elixir causes the saboteur’s skin to change color to match the background and causes his hands and feet to secrete a sticky residue. This grants him a circumstance bonus on Stealth checks equal to half his alchemist level (minimum +1), as well as granting him a climb speed equal to half his base speed, for 10 minutes per saboteur level. In addition, while the chameleon extract is in effect, the saboteur takes a –2 penalty to his Strength. A saboteur who drinks an alchemist’s mutagen is treated as a non-alchemist. All limitations to mutagens apply to chameleon mutagen as if it were the same ability. The infuse mutagen discovery and persistent mutagen class ability apply to the chameleon mutagen.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Saboteur Discoveries
- **Description:** The following new options may be taken as discoveries by a saboteur.
- **Detailed mechanics:**
  - **Level hooks:** 9, 16, 12.
  - **Rules text to implement:** The following new options may be taken as discoveries by a saboteur. Bore Bomb *: When the saboteur creates a bomb, he may choose to make it a bore bomb. If a bore bomb strikes a wall, gate, siege engine, or similar large, solid, inanimate structure, it ignores half the target’s hardness and deals 1 point of damage per saboteur level. If a bore bomb reduces an inanimate target to half its hit points or fewer, it blows a hole 5 feet wide and 5 feet deep in the target. Complex Bomb : When the saboteur creates a bomb, he can choose to have it modified by two different discoveries that modify a bomb’s damage (those discoveries marked with an asterisk). Each discovery modifies half the bomb’s damage dice, rounding down. For example, a concussive/frost bomb from a 9th-level saboteur deals 2d4 points of sonic damage + 2d6 points of frost damage. Creating a complex bomb counts as 2 daily uses of the bomb ability. Grand Chameleon Mutagen : The saboteur’s chameleon mutagen now grants him a circumstance bonus on Stealth checks equal to his alchemist level, as well as granting him a climb speed equal to his normal movement speed. The saboteur must possess the greater chameleon mutagen discovery and be at least 16th level to select this discovery. Greater Chameleon Mutagen : The saboteur’s chameleon mutagen now also grants the saboteur the hide in plain sight ability, as the ranger ability of the same name, but it functions in any terrain. The saboteur must be at least 12th level to select this discovery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Grand Discoveries
- **Description:** A saboteur may select the following grand discovery.
- **Detailed mechanics:**
  - **Rules text to implement:** A saboteur may select the following grand discovery. True Chameleon Mutagen : The saboteur’s chameleon mutagen now acts as if he was under the effects of the greater invisibility and spider climb spells, using his alchemist level as the caster level, for the duration of the mutagen. The saboteur must possess the grand chameleon mutagen discovery to select this grand discovery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the saboteur archetype: acid bomb, concussive bomb, delayed bomb, explosive bomb, fast bombs, inferno bomb, madness bomb, precise bombs, smoke bomb, stink bomb ; explosive missile, immolation bomb, siege bomb; blinding bomb, cognatogen, confusion bomb, tanglefoot bomb.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the saboteur archetype: acid bomb, concussive bomb, delayed bomb, explosive bomb, fast bombs, inferno bomb, madness bomb, precise bombs, smoke bomb, stink bomb ; explosive missile, immolation bomb, siege bomb; blinding bomb, cognatogen, confusion bomb, tanglefoot bomb.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Chameleon Mutagen (Su)
- Saboteur Discoveries
- Grand Discoveries
- Discoveries
