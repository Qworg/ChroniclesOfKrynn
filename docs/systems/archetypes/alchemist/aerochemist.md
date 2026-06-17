# Alchemist - Aerochemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Aerochemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Aerochemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Aeromantic Concoction (Su); Bombs Away (Ex); Aerodynamic Prowess (Su)
- **Replaced / altered class features:** Mutagen, Swift Poisoning; Persistent Mutagen; Poison Use; Swift Alchemy; Poison Resistance

## Implementation details

### Replaces: mutagen, swift poisoning, and persistent mutagen

- **Archetype feature:** Aeromantic Concoction (Su)
- **Description:** An aerochemist learns to craft a special alchemical concoction.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 10, 14.
  - **Rules text to implement:** An aerochemist learns to craft a special alchemical concoction. It takes 10 minutes to brew a dose of this concoction, and once brewed, it remains potent until used. An aerochemist can maintain only 1 dose of this concoction at a time—if he brews a second dose, any existing concoction becomes inert. As with an extract or bomb, an aeromantic concoction that is not in the aerochemist’s possession becomes inert until he picks it up again. Anyone other than the aerochemist who attempts to drink his aeromantic concoction is affected in the same fashion as is a non-alchemist who drinks an alchemist’s mutagen. When consumed, an aerochemist’s aeromantic concoction makes his body become incredibly buoyant for 10 minutes per alchemist level. The concoction grants the aerochemist a +5 bonus on Acrobatics checks to attempt high jumps or long jumps, and he is always treated as having a running start when attempting long jumps. In addition, the aerochemist gains the benefits of feather fall for the concoction’s duration. At 6th level, the aerochemist gains the benefits of fly for the concoction’s duration. At 10th level, the aerochemist can choose to gain the benefits of air walk instead of fly for the concoction’s duration. At 14th level, the duration of the concoction increases to 1 hour per alchemist level. An aerochemist with the infusion discovery can instead create a shared alchemical concoction intended for his allies. This shared concoction grants the same benefits as the normal aeromantic concoction, except the duration is only 1 minute per alchemist level its creator has. At 14th level, the duration increases to 10 minutes per alchemist level. An aerochemist can have only a standard concoction or shared concoction in effect, not both. An aeromantic alchemist can never gain the mutagen, cognatogen, or inspired cognatogen ability, even from a discovery or another class.
- **Implementation flags:**
  - poison subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - flight/movement mode support.
  - air walk spell effect.
  - feather fall spell effect.

### Replaces: poison use and swift alchemy

- **Archetype feature:** Bombs Away (Ex)
- **Description:** At 2nd level, an aerochemist becomes an expert at attacking from above.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6, 18.
  - **Rules text to implement:** At 2nd level, an aerochemist becomes an expert at attacking from above. He gains a +1 bonus on attack rolls made with thrown weapons against targets that are at least 10 feet below him. This bonus increases to +2 at 6th level, and increases by an additional 1 every 4 levels thereafter, to a maximum bonus of +5 at 18th level.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.

### Replaces: poison resistance

- **Archetype feature:** Aerodynamic Prowess (Su)
- **Description:** At 2nd level, an aerochemist gains a +2 bonus on Fly checks.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 5, 8.
  - **Rules text to implement:** At 2nd level, an aerochemist gains a +2 bonus on Fly checks. This bonus increases to +4 at 5th level, and +6 at 8th level.
- **Implementation flags:**
  - poison subsystem.
  - flight/movement mode support.

## Parsed source feature headings

- Aeromantic Concoction (Su)
- Bombs Away (Ex)
- Aerodynamic Prowess (Su)
