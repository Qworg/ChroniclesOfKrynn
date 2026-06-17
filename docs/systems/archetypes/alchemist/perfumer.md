# Alchemist - Perfumer

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Perfumer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Perfumer
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Atomized Extracts (Su); Effervescent Bombs (Su); Pheromones (Su); Persistent Pheromones
- **Replaced / altered class features:** Extracts; Brew Potion; Bomb; Mutagen; Persistent Mutagen

## Implementation details

### Alters: extracts and replaces brew potion

- **Archetype feature:** Atomized Extracts (Su)
- **Description:** A perfumer’s extracts are stored in atomizers, rather than bottles or vials, allowing him to spray them at himself or an adjacent ally.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A perfumer’s extracts are stored in atomizers, rather than bottles or vials, allowing him to spray them at himself or an adjacent ally. The target is considered the imbiber, as if she had drunk an extract prepared with the infusion discovery. As the contents of an atomizer are inhaled, the target must be able to breathe. Atomized extracts are considered extracts for purposes of other abilities, and become inert when not in the alchemist’s possession.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: bomb

- **Archetype feature:** Effervescent Bombs (Su)
- **Description:** Rather than deal direct damage, a perfumer’s bombs create an effervescent puddle in a 5-foot radius for a number of rounds equal to the alchemist’s intelligence bonus (minimum 1).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** Rather than deal direct damage, a perfumer’s bombs create an effervescent puddle in a 5-foot radius for a number of rounds equal to the alchemist’s intelligence bonus (minimum 1). Each creature within this area takes 1d4 points of fire damage immediately and again each round it remains within or enters the puddle. A creature caught in the puddle when it is first created can attempt a Reflex save (DC = 10 + half the perfumer’s level + the perfumer’s Intelligence modifier) for half damage. The effervescent bombs’ damage increases by 1d4 at 3rd level and every odd level thereafter. Effervescent bombs otherwise functions as bombs, and discoveries that apply to bombs apply to effervescent bombs.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: mutagen

- **Archetype feature:** Pheromones (Su)
- **Description:** A perfumer can spend 1 hour to distill a special mixture of exotic pheromones and alchemical reagents and store it in an atomizer.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A perfumer can spend 1 hour to distill a special mixture of exotic pheromones and alchemical reagents and store it in an atomizer. The mixture remains potent until used or until the perfumer distills another pheromone mixture, at which point the first becomes inert and the duration of its effects immediately end. Spraying this mixture on a willing creature as a standard action grants the target a +4 alchemical bonus to Charisma and a –2 penalty to Constitution for 10 minutes per alchemist level. Additionally, the target creature gains a +2 alchemical bonus on Diplomacy and Bluff checks. A perfumer can never gain the mutagen, cognatogen, or inspired cognatogen ability, even from a discovery or another class.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: persistent mutagen

- **Archetype feature:** Persistent Pheromones
- **Description:** At 14th level, the alchemist gains the ability to distill extremely potent pheromones.
- **Detailed mechanics:**
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, the alchemist gains the ability to distill extremely potent pheromones. His pheromone atomizers can be sprayed on up to four different targets before becoming fully used. This allows a perfumer to affect multiple targets with a single atomizer.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Atomized Extracts (Su)
- Effervescent Bombs (Su)
- Pheromones (Su)
- Persistent Pheromones
