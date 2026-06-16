# Monk - Elemental Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Elemental Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Elemental%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Elemental Strike (Ex); Genie Style (Ex, Sp); Elemental Precision (Ex); Planar Guide (Sp)
- **Replaced / altered class features:** Alignment; Stunning Fist; Bonus Feats; Evasion; Purity of Body; Diamond Body; Ki Pool

## Replacement details

### Replaces: the monk’s alignment requirement

- **Archetype feature:** Alignment
- **Description:** An elemental monk must be true neutral.
- **Mechanics:**
  - Mechanics summary: An elemental monk must be true neutral.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: all of the monk’s bonus feats and stunning fist

- **Archetype feature:** Elemental Strike (Ex)
- **Description:** An elemental monk gains Elemental Fist as a bonus feat, even if she doesn’t meet the prerequisites.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An elemental monk gains Elemental Fist as a bonus feat, even if she doesn’t meet the prerequisites. She does not have to select an element; instead, each time she hits with an Elemental Fist attack, she can choose acid, cold, electricity, or fire for the type of the additional damage granted by that feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: evasion, purity of body, and diamond body

- **Archetype feature:** Genie Style (Ex, Sp)
- **Description:** At 2nd level, as a swift action an elemental monk can gain the benefits of one of the following style feats, based on one of the five types of genies.
- **Mechanics:**
  - Level hooks: 2, 6, 10, 18.
  - Mechanics summary: At 2nd level, as a swift action an elemental monk can gain the benefits of one of the following style feats, based on one of the five types of genies. When she does so, she automatically enters that feat’s stance: Djinni Style, Efreeti Style, Janni Style, Marid Style, or Shaitan Style. These feats, as well as those mentioned below, appear in Chapter 2 of Pathfinder RPG Ultimate Combat, and rules for style feats are on page 78 of that book. At 6th level, while the elemental monk is using a genie style feat, she also gains the benefits of a feat from the following list, as appropriate for that style’s feat path: Djinni Spirit, Efreeti Stance, Janni Tempest, Marid Spirit, and Shaitan Skin. At 10th level, while the elemental monk is using a genie style feat, she also gains the benefits of a feat from the following list, as appropriate for that style’s feat path: Djinni Spin, Efreeti Touch, Janni Rush, Marid Coldsnap, and Shaitan Earthblast. At 18th level, when the elemental monk gains the benefits of Djinni Spirit, Efreeti Stance, Marid Spirit, or Shaitan Skin, her elemental resistance from that feat instead becomes immunity to that element, as long as she is not denied her Dexterity bonus to AC.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Alters: the monk’s ki pool

- **Archetype feature:** Elemental Precision (Ex)
- **Description:** At 10th level, instead of treating her unarmed strikes as lawful for the purpose of overcoming damage reduction, an elemental monk overcomes all damage reduction of creatures with the air, earth, fire, or water subtypes except DR/— and DR/epic.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, instead of treating her unarmed strikes as lawful for the purpose of overcoming damage reduction, an elemental monk overcomes all damage reduction of creatures with the air, earth, fire, or water subtypes except DR/— and DR/epic.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Elemental Strike (Ex)
- Genie Style (Ex, Sp)
- Elemental Precision (Ex)
- Planar Guide (Sp)

