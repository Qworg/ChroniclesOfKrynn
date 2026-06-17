# Alchemist - Sacrament Alchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Sacrament Alchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Sacrament%20Alchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Faithful; Sacramental Cognatogen (Su); Divinely Inspired Alchemy (Su); Discoveries
- **Replaced / altered class features:** mutagen; swift alchemy

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Faithful
- **Description:** Like a cleric, a sacrament alchemist must worship a deity, and must be within one step of his deity’s alignment.
- **Detailed mechanics:**
  - **Rules text to implement:** Like a cleric, a sacrament alchemist must worship a deity, and must be within one step of his deity’s alignment.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: mutagen

- **Archetype feature:** Sacramental Cognatogen (Su)
- **Description:** A sacrament alchemist can anoint himself as his deity’s servant using his own special version of a mutagen called a sacramental cognatogen.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A sacrament alchemist can anoint himself as his deity’s servant using his own special version of a mutagen called a sacramental cognatogen. This is brewed, imbibed, maintained, and can nauseate non-alchemists in the same way as a mutagen. While a sacramental cognatogen is in effect, the sacrament alchemist takes a –2 penalty to Dexterity. Instead of providing physical benefits, the sacramental cognatogen grants the sacrament alchemist access to the domain powers of one domain or subdomain belonging to his deity as if he were a cleric of his alchemist level. The sacrament alchemist must choose the domain or subdomain when he brews the sacramental cognatogen. A sacrament alchemist can select an alignment domain only if his alignment matches that domain. He treats his alchemist level as his cleric level for purposes of using these domain powers, and treats his Intelligence modifier as his Wisdom modifier for purposes of variable effects. The effects of the sacramental cognatogen last for 10 minutes per alchemist level. A sacrament alchemist doesn’t gain the bonus spells listed for each domain, nor does he gain any bonus spell slots. Levels of classes that normally provide access to domains stack with the sacrament alchemist’s alchemist level for purposes of determining domain powers and abilities, but not for purposes of determining bonus spells. Discoveries, feats, and effects that interact with the mutagen class feature do not affect sacramental cognatogen. A sacrament alchemist cannot take the cognatogen or mutagen discoveries.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Replaces: swift alchemy

- **Archetype feature:** Divinely Inspired Alchemy (Su)
- **Description:** At 3rd level, a sacrament alchemist’s faith inspires him with ideas for novel alchemical achievements, although the mental strain means that he can’t reliably repeat them.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a sacrament alchemist’s faith inspires him with ideas for novel alchemical achievements, although the mental strain means that he can’t reliably repeat them. Once per day while preparing extracts, for a period of 24 hours, a sacrament alchemist can gain an alchemist discovery for which he qualifies. He treats his alchemist level as 2 lower for the purpose of this discovery.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the sacrament alchemist archetype: combine extracts, dilution, infusion, and ranged baptism.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the sacrament alchemist archetype: combine extracts, dilution, infusion, and ranged baptism.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Faithful
- Sacramental Cognatogen (Su)
- Divinely Inspired Alchemy (Su)
- Discoveries
