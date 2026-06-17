# Monk - Elemental Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Elemental Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Elemental%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Elemental Strike (Ex); Genie Style (Ex, Sp); Elemental Precision (Ex); Planar Guide (Sp)
- **Replaced / altered class features:** Alignment; Stunning Fist; Bonus Feats; Evasion; Purity of Body; Diamond Body; Ki Pool

## Implementation details

### Replaces: the monk’s alignment requirement

- **Archetype feature:** Alignment
- **Description:** An elemental monk must be true neutral.
- **Detailed mechanics:**
  - **Rules text to implement:** An elemental monk must be true neutral.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: all of the monk’s bonus feats and stunning fist

- **Archetype feature:** Elemental Strike (Ex)
- **Description:** An elemental monk gains Elemental Fist as a bonus feat, even if she doesn’t meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An elemental monk gains Elemental Fist as a bonus feat, even if she doesn’t meet the prerequisites. She does not have to select an element; instead, each time she hits with an Elemental Fist attack, she can choose acid, cold, electricity, or fire for the type of the additional damage granted by that feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: evasion, purity of body, and diamond body

- **Archetype feature:** Genie Style (Ex, Sp)
- **Description:** At 2nd level, as a swift action an elemental monk can gain the benefits of one of the following style feats, based on one of the five types of genies.
- **Detailed mechanics:**
  - **Level hooks:** 2, 6, 10, 18.
  - **Rules text to implement:** At 2nd level, as a swift action an elemental monk can gain the benefits of one of the following style feats, based on one of the five types of genies. When she does so, she automatically enters that feat’s stance: Djinni Style, Efreeti Style, Janni Style, Marid Style, or Shaitan Style. These feats, as well as those mentioned below, appear in Chapter 2 of Pathfinder RPG Ultimate Combat, and rules for style feats are on page 78 of that book. At 6th level, while the elemental monk is using a genie style feat, she also gains the benefits of a feat from the following list, as appropriate for that style’s feat path: Djinni Spirit, Efreeti Stance, Janni Tempest, Marid Spirit, and Shaitan Skin. At 10th level, while the elemental monk is using a genie style feat, she also gains the benefits of a feat from the following list, as appropriate for that style’s feat path: Djinni Spin, Efreeti Touch, Janni Rush, Marid Coldsnap, and Shaitan Earthblast. At 18th level, when the elemental monk gains the benefits of Djinni Spirit, Efreeti Stance, Marid Spirit, or Shaitan Skin, her elemental resistance from that feat instead becomes immunity to that element, as long as she is not denied her Dexterity bonus to AC. While she is using Janni Style, she gains the effects of enlarge person or reduce person (her choice), even if she is not humanoid. This is a spell-like ability with a caster level equal to the elemental monk’s level.
- **Implementation flags:**
  - ki subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Alters: the monk’s ki pool

- **Archetype feature:** Elemental Precision (Ex)
- **Description:** At 10th level, instead of treating her unarmed strikes as lawful for the purpose of overcoming damage reduction, an elemental monk overcomes all damage reduction of creatures with the air, earth, fire, or water subtypes except DR/— and DR/epic.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, instead of treating her unarmed strikes as lawful for the purpose of overcoming damage reduction, an elemental monk overcomes all damage reduction of creatures with the air, earth, fire, or water subtypes except DR/— and DR/epic.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Planar Guide (Sp)
- **Description:** At 14th level as a standard action, an elemental monk can spend 1 ki point to transport herself and up to seven additional willing creatures, as per the plane shift spell, to one of the four Elemental Planes.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level as a standard action, an elemental monk can spend 1 ki point to transport herself and up to seven additional willing creatures, as per the plane shift spell, to one of the four Elemental Planes. Each additional creature increases the cost by 1 ki point.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Alignment
- Elemental Strike (Ex)
- Genie Style (Ex, Sp)
- Elemental Precision (Ex)
- Planar Guide (Sp)
