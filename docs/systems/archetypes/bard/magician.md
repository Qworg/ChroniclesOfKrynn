# Bard - Magician

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Magician
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Magician
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Magical Talent (Ex); Improved Counterspell; Extended Performance (Su); Expanded Repertoire (Ex); Arcane Bond (Ex); Wand Mastery (Ex)
- **Replaced / altered class features:** bardic knowledge; countersong; well-versed; versatile performance; lore master; jack of all trades

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** A magician gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 8, 14.
  - **Rules text to implement:** A magician gains the following types of bardic performance. Dweomercraft (Su) : A magician can use performance to manipulate magical energies. Allies of the magician gain a +1 bonus on caster level checks, concentration checks, and attack rolls with spells and spell-like abilities. This bonus increases by +1 at 5th level and every six levels thereafter. This ability relies on visual and audible components. It replaces inspire courage. Spell Suppression (Su) : A 8th level, a magician can use performance to counter the spells of his foes. Once the bard begins using this performance, he tracks the number of rounds it has been in use. While performing, as an immediate action, he can attempt to counter any spell that he can identify using Spellcraft, so long as that spell’s level is equal or less than the total number of rounds he has been performing spell suppression. The attempt to counter the spell is made as if using dispel magic, using the bard’s level as the caster level. If successful, the bardic performance immediately ends. This ability requires audible components. This performance replaces dirge of doom. Metamagic Mastery (Ex) : At 14th level, a magician can use performance to apply a metamagic feat to a spell he is about to cast without increasing the casting time. The bard must still expend a higher-level slot to cast this spell. This causes the performance to immediately end. This ability requires audible components. This performance replaces frightening tune.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - spell-like ability support.
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Replaces: bardic knowledge

- **Archetype feature:** Magical Talent (Ex)
- **Description:** A magician gains a bonus equal to half his level on Knowledge (arcana), Spellcraft, and Use Magic Device checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A magician gains a bonus equal to half his level on Knowledge (arcana), Spellcraft, and Use Magic Device checks.
- **Implementation flags:**
  - crafting subsystem.

### Replaces: countersong

- **Archetype feature:** Improved Counterspell
- **Description:** A magician gains Improved Counterspell as a bonus feat.
- **Detailed mechanics:**
  - **Rules text to implement:** A magician gains Improved Counterspell as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: well-versed

- **Archetype feature:** Extended Performance (Su)
- **Description:** At 2nd level, a magician can extend the duration of bardic performance after he stops concentrating by sacrificing a spell slot as a swift action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a magician can extend the duration of bardic performance after he stops concentrating by sacrificing a spell slot as a swift action. The performance effect lingers for 1 extra round per level of the spell. Only one spell may be sacrificed per performance, and performance types that take affect after a specific number of rounds cannot be extended.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: versatile performance

- **Archetype feature:** Expanded Repertoire (Ex)
- **Description:** At 2nd level and every four levels thereafter, a magician can add one spell to his spells known from the spell list of any arcane spellcasting class.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level and every four levels thereafter, a magician can add one spell to his spells known from the spell list of any arcane spellcasting class. The spell must be of a level he can cast.
- **Implementation flags:**
  - archetype spell-list override.

### Replaces: lore master

- **Archetype feature:** Arcane Bond (Ex)
- **Description:** At 5th level, a magician gains the arcane bond ability as a wizard.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a magician gains the arcane bond ability as a wizard. He may not choose a familiar or a weapon as a bonded item.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: jack of all trades

- **Archetype feature:** Wand Mastery (Ex)
- **Description:** At 10th level, when a magician uses a wand containing a spell on his spell list, he uses his Charisma bonus to set the wand’s save DC.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10, 16.
  - **Rules text to implement:** At 10th level, when a magician uses a wand containing a spell on his spell list, he uses his Charisma bonus to set the wand’s save DC. At 16th level, when using such a wand, he uses his caster level in place of the wand’s caster level.
- **Implementation flags:**
  - archetype spell-list override.

## Parsed source feature headings

- Bardic Performance
- Magical Talent (Ex)
- Improved Counterspell
- Extended Performance (Su)
- Expanded Repertoire (Ex)
- Arcane Bond (Ex)
- Wand Mastery (Ex)
