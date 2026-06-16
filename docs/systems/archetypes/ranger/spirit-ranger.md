# Ranger - Spirit Ranger

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Spirit Ranger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Spirit%20Ranger
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spirit Bond (Ex); Wisdom of the Spirits (Sp)
- **Replaced / altered class features:** camouflage

## Replacement details

### Replaces: hunter’s bond

- **Archetype feature:** Spirit Bond (Ex)
- **Description:** At 4th level, instead of forming a bond with his hunting companions or an animal companion, the spirit ranger forms a bond with the spirits of nature themselves.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 8.
  - Mechanics summary: At 4th level, instead of forming a bond with his hunting companions or an animal companion, the spirit ranger forms a bond with the spirits of nature themselves. Each day, as long as he is within one of his favored terrains, the ranger can cast augury ( Pathfinder RPG Core Rulebook 245) as a spell-like ability with a caster level equal to his ranger level. In addition, he can call upon these spirits to cast any one ranger spell that he is capable of casting, without having to prepare the spell. At 8th level, and every four levels thereafter, he can cast an additional spell in this way.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, animal companion hook, favored terrain hook.

### Replaces: camouflage

- **Archetype feature:** Wisdom of the Spirits (Sp)
- **Description:** At 12th level, the spirit ranger can use his augury spell-like ability even when he is not in one of his favored terrains.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, the spirit ranger can use his augury spell-like ability even when he is not in one of his favored terrains. If he is within one of his favored terrains, the ranger can cast divination ( Pathfinder RPG Core Rulebook 273) instead. Like augury , the caster level of the divination is equal to the ranger’s level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, favored terrain hook.

## Parsed source feature headings

- Spirit Bond (Ex)
- Wisdom of the Spirits (Sp)

