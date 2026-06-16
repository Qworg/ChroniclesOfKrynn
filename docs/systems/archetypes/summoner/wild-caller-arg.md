# Summoner - Wild Caller (ARG)

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Wild Caller (ARG)
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Wild%20Caller%20%28ARG%29
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spells; Eidolon; Summon Nature’s Ally I (Sp)
- **Replaced / altered class features:** Summon Monster; Eidolon

## Replacement details

### Alters: the normal spell list of the summoner

- **Archetype feature:** Spells
- **Description:** A wild caller does not have access to summon monster spells.
- **Mechanics:**
  - Mechanics summary: A wild caller does not have access to summon monster spells. Instead, he swaps out those spells on his spell list with summon nature’s ally spells of the same level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: the normal summoner’s eidolon class feature, but is otherwise identical to that class feature

- **Archetype feature:** Eidolon
- **Description:** The eidolon of a wild caller tends to take more natural and more savage forms than other summoners’ eidolons.
- **Mechanics:**
  - Mechanics summary: The eidolon of a wild caller tends to take more natural and more savage forms than other summoners’ eidolons. A wild caller gains 1/4 his class level as bonus evolution points in his eidolon’s evolution pool, but his eidolon cannot take the following evolutions: 1-point evolutions : basic magic, magic attacks, skilled (while the eidolon can select this evolution, it can only do so with the following skills: Acrobatics, Climb, Escape Artist, Fly, Intimidate, Perception, Survival, and...
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, summoner eidolon hook, eidolon evolution hook, ki/monk hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Summon Monster

## Parsed source feature headings

- Spells
- Eidolon
- Summon Nature’s Ally I (Sp)

