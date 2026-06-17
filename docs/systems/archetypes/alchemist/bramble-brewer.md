# Alchemist - Bramble Brewer

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Bramble Brewer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Bramble%20Brewer
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Briar Bombs (Su); Dendrite Mutagen (Su); Grand Discovery (Su); Discoveries
- **Replaced / altered class features:** the 2nd-level discovery class feature

## Implementation details

### Replaces: the 2nd-level discovery class feature

- **Archetype feature:** Briar Bombs (Su)
- **Description:** At 2nd level, a bramble brewer gains the tanglefoot bomb discovery, but the entanglement’s duration persists for a number of rounds equal to the bramble brewer’s Intelligence modifier (minimum 1 round).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a bramble brewer gains the tanglefoot bomb discovery, but the entanglement’s duration persists for a number of rounds equal to the bramble brewer’s Intelligence modifier (minimum 1 round). Additionally, when a bramble brewer throws a tanglefoot bomb, it transforms all squares in its splash radius into difficult terrain that persists for as long as the bomb’s entangling effect. Although these bombs deal no damage, for every 1d6 points of damage the bramble brewer’s regular bombs deal, the briar bomb’s splash radius increases by 5 feet.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Dendrite Mutagen (Su)
- **Description:** At 1st level, a bramble brewer’s mutagen still contains transformative power, but grants a treelike sturdiness rather than the feral power of standard mutagens.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a bramble brewer’s mutagen still contains transformative power, but grants a treelike sturdiness rather than the feral power of standard mutagens. When imbibed, dendrite mutagen grants a +4 natural armor bonus, a +2 alchemical bonus to one physical ability score, and a –2 penalty to the corresponding mental ability score. In addition, the alchemist gains fast healing 1 as long as he is in an area of bright light (such as sunlight or inside the area of a daylight spell). This otherwise works like the standard mutagen class feature and replaces that ability. A bramble brewer who selects the greater mutagen discovery can create a dendrite mutagen that still grants a +4 natural armor bonus, and also grants a +4 alchemical bonus to one physical ability score and a +2 bonus to a second physical ability score. The bramble brewer takes a –2 penalty to both associated mental ability scores as long as the mutagen persists, but his fast healing increases to 3 as long as he is in an area of bright light. This otherwise works like the greater mutagen discovery and replaces that ability. A bramble brewer who selects the grand mutagen discovery can brew a dendrite mutagen that now grants a +6 natural armor bonus, a +6 alchemical bonus to one physical ability score, a +4 alchemical bonus to a second physical ability score, and a +2 alchemical bonus to a third physical ability score. The bramble brewer takes a –2 penalty to his Intelligence, Wisdom, and Charisma scores as long as the mutagen persists. The bramble brewer’s fast healing increases to 5 as long as he is within an area of bright light. This otherwise works like the grand mutagen discovery and replaces that ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Grand Discovery (Su)
- **Description:** At 20th level, a bramble brewer who selects the true mutagen grand discovery can create a dendrite mutagen that grants a +8 natural armor bonus and a +6 alchemical bonus to Strength, Dexterity, and Constitution.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a bramble brewer who selects the true mutagen grand discovery can create a dendrite mutagen that grants a +8 natural armor bonus and a +6 alchemical bonus to Strength, Dexterity, and Constitution. The bramble brewer takes a –2 penalty to his Intelligence, Wisdom, and Charisma scores as long as the mutagen persists. The bramble brewer’s gains fast healing 10, but instead of only gaining fast healing in bright light, this fast healing persists in areas of bright or normal light. A bramble brewer must possess the grand mutagen discovery before selecting this discovery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the bramble brewer archetype: precise bombs; defoliant bomb; lingering spirit, strafe bomb, sunlight bomb.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the bramble brewer archetype: precise bombs; defoliant bomb; lingering spirit, strafe bomb, sunlight bomb.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Briar Bombs (Su)
- Dendrite Mutagen (Su)
- Grand Discovery (Su)
- Discoveries
