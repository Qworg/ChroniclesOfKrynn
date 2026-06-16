# Alchemist - Sacrament Alchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Sacrament Alchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Sacrament%20Alchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Faithful; Sacramental Cognatogen (Su); Divinely Inspired Alchemy (Su); Discoveries
- **Replaced / altered class features:** mutagen; swift alchemy

## Replacement details

### Replaces: mutagen

- **Archetype feature:** Sacramental Cognatogen (Su)
- **Description:** A sacrament alchemist can anoint himself as his deity’s servant using his own special version of a mutagen called a sacramental cognatogen.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A sacrament alchemist can anoint himself as his deity’s servant using his own special version of a mutagen called a sacramental cognatogen. This is brewed, imbibed, maintained, and can nauseate non-alchemists in the same way as a mutagen. While a sacramental cognatogen is in effect, the sacrament alchemist takes a –2 penalty to Dexterity. Instead of providing physical benefits, the sacramental cognatogen grants the sacrament alchemist access to the domain powers of one domain or subdomain belonging to his deity as if he were a cleric of his alchemist level. The sacrament alchemist must choose the domain or subdomain when he brews the sacramental cognatogen. A sacrament alchemist can select an alignment domain only if his alignment matches that domain.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty, spellcasting/spell-list hook, cleric domain hook, mutagen hook.

### Replaces: swift alchemy

- **Archetype feature:** Divinely Inspired Alchemy (Su)
- **Description:** At 3rd level, a sacrament alchemist’s faith inspires him with ideas for novel alchemical achievements, although the mental strain means that he can’t reliably repeat them.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a sacrament alchemist’s faith inspires him with ideas for novel alchemical achievements, although the mental strain means that he can’t reliably repeat them. Once per day while preparing extracts, for a period of 24 hours, a sacrament alchemist can gain an alchemist discovery for which he qualifies. He treats his alchemist level as 2 lower for the purpose of this discovery.
- **Implementation flags:**
  - Likely existing hooks: alchemist discovery hook.

## Parsed source feature headings

- Faithful
- Sacramental Cognatogen (Su)
- Divinely Inspired Alchemy (Su)
- Discoveries

