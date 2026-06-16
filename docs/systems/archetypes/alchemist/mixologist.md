# Alchemist - Mixologist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Mixologist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Mixologist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Alcoholic Alchemy (Su); Alcoholic Bombs (Su); Alcoholic Resistance (Ex); Mixologist Master (Su)
- **Replaced / altered class features:** Alchemy; Brew Potion; Mutagen; 2nd-level Discovery; POison Resistance; Persistent Mutagen

## Replacement details

### Alters: alchemy and brew potion and replaces mutagen

- **Archetype feature:** Alcoholic Alchemy (Su)
- **Description:** A mixologist can infuse potions and extracts he creates with alcohol, increasing their potency.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A mixologist can infuse potions and extracts he creates with alcohol, increasing their potency. When a mixologist brews a potion, he can spend an additional 10 gp in raw materials to increase his caster level by 1 for the purpose of the potion’s effects, but the potion counts as a strong alcoholic drink (see the sidebar on page 55). When a mixologist creates his extracts, he can spend 1 extra minute doing so to increase his caster level by 1 for the purpose of that extract’s effects, but the extract counts as a strong alcoholic drink. A mixologist can prepare one alcoholic extract for each level of extracts he can prepare. A mixologist can’t ever gain a mutagen or discoveries that alter mutagens.
- **Implementation flags:**
  - Likely existing hooks: mutagen hook.

### Replaces: the discovery gained at 2nd level

- **Archetype feature:** Alcoholic Bombs (Su)
- **Description:** When the mixologist creates a bomb, he can cause the detonation to produce intoxicating fumes.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: When the mixologist creates a bomb, he can cause the detonation to produce intoxicating fumes. A creature that takes a direct hit from an alcoholic bomb becomes tipsy (see page 54) if it fails a Fortitude saving throw. A soused creature that fails its Fortitude saving throw passes out for 1d3 hours and wakes up with a hangover. This ability counts as a discovery that modifies bombs, so it doesn’t stack with other discoveries that modify bombs.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, alchemist discovery hook.

### Alters: poison resistance

- **Archetype feature:** Alcoholic Resistance (Ex)
- **Description:** At 2nd level, a mixologist’s bonus on saving throws against poison also applies on saving throws to become less drunk and to avoid passing out.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a mixologist’s bonus on saving throws against poison also applies on saving throws to become less drunk and to avoid passing out. This doesn’t allow a mixologist to become immune to alcohol.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: persistent mutagen

- **Archetype feature:** Mixologist Master (Su)
- **Description:** At 14th level, a mixologist can have up to two alcoholic extracts for each level of extracts he can prepare as long as he can prepare at least two extracts of that level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a mixologist can have up to two alcoholic extracts for each level of extracts he can prepare as long as he can prepare at least two extracts of that level.
- **Implementation flags:**
  - Likely existing hooks: mutagen hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 2nd-level Discovery

## Parsed source feature headings

- Alcoholic Alchemy (Su)
- Alcoholic Bombs (Su)
- Alcoholic Resistance (Ex)
- Mixologist Master (Su)

