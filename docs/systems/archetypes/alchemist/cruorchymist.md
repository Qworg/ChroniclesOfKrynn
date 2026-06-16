# Alchemist - Cruorchymist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Cruorchymist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Cruorchymist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Blood Familiar (Ex); Blood Treatment (Ex); Blood Augmentation (Ex)
- **Replaced / altered class features:** Poison Use; Poison Resistance; Poison Immunity; Swift Poisoning; Mutagen; Brew Potion

## Replacement details

### Replaces: mutagen

- **Archetype feature:** Blood Familiar (Ex)
- **Description:** A cruorchymist has created a homunculus from basic materials and his own blood.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: A cruorchymist has created a homunculus from basic materials and his own blood. The homunculus takes the shape of a Tiny humanoid. It functions in all ways as a familiar , treating the cruorchymist’s alchemist level as his effective wizard level. If a cruorchymist wishes to replace his blood familiar, he can reduce the cost of the replacement ritual by taking 2 points of Constitution drain for every 100 gp he wishes to forgo. At 3rd level, if the cruorchymist has the infusion discovery, a blood familiar can deliver extracts that have a range of touch for its cruorchymist master. A cruorchymist can never gain the mutagen, cognatogen, or inspired cognatogen ability, even from a discovery or another class.
- **Implementation flags:**
  - Likely existing hooks: mutagen hook, alchemist discovery hook, ki/monk hook.

### Replaces: Brew Potion

- **Archetype feature:** Blood Treatment (Ex)
- **Description:** A cruorchymist can give up some of his blood to restore his blood familiar.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A cruorchymist can give up some of his blood to restore his blood familiar. As a swift or immediate action, a cruorchymist can take a number of points of Constitution drain.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Poison Use
- Poison Resistance
- Poison Immunity
- Swift Poisoning

## Parsed source feature headings

- Blood Familiar (Ex)
- Blood Treatment (Ex)
- Blood Augmentation (Ex)

