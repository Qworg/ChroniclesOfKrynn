# Alchemist - Perfumer

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Perfumer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Perfumer
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Atomized Extracts (Su); Effervescent Bombs (Su); Pheromones (Su); Persistent Pheromones
- **Replaced / altered class features:** Extracts; Brew Potion; Bomb; Mutagen; Persistent Mutagen

## Replacement details

### Alters: extracts and replaces brew potion

- **Archetype feature:** Atomized Extracts (Su)
- **Description:** A perfumer’s extracts are stored in atomizers, rather than bottles or vials, allowing him to spray them at himself or an adjacent ally.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A perfumer’s extracts are stored in atomizers, rather than bottles or vials, allowing him to spray them at himself or an adjacent ally. The target is considered the imbiber, as if she had drunk an extract prepared with the infusion discovery. As the contents of an atomizer are inhaled, the target must be able to breathe.
- **Implementation flags:**
  - Likely existing hooks: alchemist discovery hook.

### Alters: bomb

- **Archetype feature:** Effervescent Bombs (Su)
- **Description:** Rather than deal direct damage, a perfumer’s bombs create an effervescent puddle in a 5-foot radius for a number of rounds equal to the alchemist’s intelligence bonus (minimum 1).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: Rather than deal direct damage, a perfumer’s bombs create an effervescent puddle in a 5-foot radius for a number of rounds equal to the alchemist’s intelligence bonus (minimum 1). Each creature within this area takes 1d4 points of fire damage immediately and again each round it remains within or enters the puddle. A creature caught in the puddle when it is first created can attempt a Reflex save (DC = 10 + half the perfumer’s level + the perfumer’s Intelligence modifier) for half damage. The effervescent bombs’ damage increases by 1d4 at 3rd level and every odd level thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, alchemist bomb hook.

### Replaces: mutagen

- **Archetype feature:** Pheromones (Su)
- **Description:** A perfumer can spend 1 hour to distill a special mixture of exotic pheromones and alchemical reagents and store it in an atomizer.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A perfumer can spend 1 hour to distill a special mixture of exotic pheromones and alchemical reagents and store it in an atomizer. The mixture remains potent until used or until the perfumer distills another pheromone mixture, at which point the first becomes inert and the duration of its effects immediately end. Spraying this mixture on a willing creature as a standard action grants the target a +4 alchemical bonus to Charisma and a –2 penalty to Constitution for 10 minutes per alchemist level. Additionally, the target creature gains a +2 alchemical bonus on Diplomacy and Bluff checks. A perfumer can never gain the mutagen, cognatogen, or inspired cognatogen ability, even from a discovery or another class.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, mutagen hook, alchemist discovery hook.

### Replaces: persistent mutagen

- **Archetype feature:** Persistent Pheromones
- **Description:** At 14th level, the alchemist gains the ability to distill extremely potent pheromones.
- **Mechanics:**
  - Level hooks: 14.
  - Mechanics summary: At 14th level, the alchemist gains the ability to distill extremely potent pheromones. His pheromone atomizers can be sprayed on up to four different targets before becoming fully used.
- **Implementation flags:**
  - Likely existing hooks: mutagen hook.

## Parsed source feature headings

- Atomized Extracts (Su)
- Effervescent Bombs (Su)
- Pheromones (Su)
- Persistent Pheromones

