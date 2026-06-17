# Alchemist - Cruorchymist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Cruorchymist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Cruorchymist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Blood Familiar (Ex); Blood Treatment (Ex); Blood Augmentation (Ex)
- **Replaced / altered class features:** Poison Use; Poison Resistance; Poison Immunity; Swift Poisoning; Mutagen; Brew Potion

## Implementation details

### Replaces: mutagen

- **Archetype feature:** Blood Familiar (Ex)
- **Description:** A cruorchymist has created a homunculus from basic materials and his own blood.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** A cruorchymist has created a homunculus from basic materials and his own blood. The homunculus takes the shape of a Tiny humanoid. It functions in all ways as a familiar, treating the cruorchymist’s alchemist level as his effective wizard level. If a cruorchymist wishes to replace his blood familiar, he can reduce the cost of the replacement ritual by taking 2 points of Constitution drain for every 100 gp he wishes to forgo. At 3rd level, if the cruorchymist has the infusion discovery, a blood familiar can deliver extracts that have a range of touch for its cruorchymist master. A cruorchymist can never gain the mutagen, cognatogen, or inspired cognatogen ability, even from a discovery or another class.
- **Implementation flags:**
  - ki subsystem.

### Replaces: Brew Potion

- **Archetype feature:** Blood Treatment (Ex)
- **Description:** A cruorchymist can give up some of his blood to restore his blood familiar.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A cruorchymist can give up some of his blood to restore his blood familiar. As a swift or immediate action, a cruorchymist can take a number of points of Constitution drain. His blood familiar heals 1d6 hit points for every 1 point of Constitution drain the cruorchymist inflicts upon himself in this way.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Blood Augmentation (Ex)
- **Description:** At 4th level, a cruorchymist can provide more of his blood to further enhance his blood familiar.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 12.
  - **Rules text to implement:** At 4th level, a cruorchymist can provide more of his blood to further enhance his blood familiar. As a swift action, the cruorchymist can take 1 point of Constitution damage to provide his familiar with an animal aspect for 1 minute, treating his alchemist level as his hunter level. The cruorchymist takes 1 additional point of Constitution damage for every minute he maintains the animal aspect beyond the first. At 12th level, the cruorchymist can select two animal aspects for his blood familiar instead of one, taking 2 points of Constitution damage for every minute that he maintains both animal aspects.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Blood Familiar (Ex)
- Blood Treatment (Ex)
- Blood Augmentation (Ex)
