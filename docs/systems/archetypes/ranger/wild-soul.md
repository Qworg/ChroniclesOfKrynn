# Ranger - Wild Soul

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Wild Soul
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Wild%20Soul
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Unfettered Soul; Nemesis (Ex); Nemesis Defense (Ex); Break the Interloper (Su); Dizzying Onslaught (Ex); Nemesis Slayer (Ex)
- **Replaced / altered class features:** Code of Conduct; Favored Enemy; Swift Tracker; Quarry; Improved Quarry; Master Hunter

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Unfettered Soul
- **Description:** A wild soul swears to himself never to make use of advanced technology, alchemy, arcane magic, or firearms.
- **Detailed mechanics:**
  - **Rules text to implement:** A wild soul swears to himself never to make use of advanced technology, alchemy, arcane magic, or firearms. He also must oppose their use on his person, refusing to be a willing target and attempting a saving throw if possible (even if the effect is harmless or beneficial). Violating this oath causes a wild soul to lose the abilities granted by this archetype until he atones.
- **Implementation flags:**
  - firearm subsystem.
  - feat grant/prerequisite handling.

### Replaces: favored enemy

- **Archetype feature:** Nemesis (Ex)
- **Description:** A wild soul gains a +2 bonus on Intimidate, Knowledge, Perception, Sense Motive, Spellcraft, and Survival checks against creatures that wield advanced technology, alchemical weapons (including an alchemist’s bombs), or firearms and against those that cast arcane spells (this does not apply to creatures that use spell-like abilities).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 20.
  - **Rules text to implement:** A wild soul gains a +2 bonus on Intimidate, Knowledge, Perception, Sense Motive, Spellcraft, and Survival checks against creatures that wield advanced technology, alchemical weapons (including an alchemist’s bombs), or firearms and against those that cast arcane spells (this does not apply to creatures that use spell-like abilities). Likewise, he gains a +2 bonus on weapon attack and damage rolls against such opponents. The wild soul can attempt Craft (alchemy), Knowledge (arcana), and Spellcraft checks untrained when attempting to identify enemy magic or advanced technology. At 5th level and every 5 levels thereafter, these bonuses increase by 1 (to a maximum of +5 at 20th level).
- **Implementation flags:**
  - firearm subsystem.
  - spell-like ability support.
  - crafting subsystem.

### Replaces: swift tracker

- **Archetype feature:** Nemesis Defense (Ex)
- **Description:** At 8th level, a wild soul adds his nemesis bonus on saving throws against advanced technology, alchemical items (including an alchemist’s bombs and extracts), and arcane spells.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a wild soul adds his nemesis bonus on saving throws against advanced technology, alchemical items (including an alchemist’s bombs and extracts), and arcane spells. He also adds this bonus to his AC against advanced technological items, alchemical items (including alchemist bombs), arcane spells that require attack rolls, and firearms.
- **Implementation flags:**
  - firearm subsystem.

### Replaces: quarry

- **Archetype feature:** Break the Interloper (Su)
- **Description:** At 11th level, when a wild soul hits an arcane spellcaster, a creature with extract slots, or a creature with grit (but not grit-like pools such as panache) with a weapon attack, the target either loses its highest-level available spell or extract slot or loses 1 point of grit, and the wild soul gains 5 temporary hit points.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, when a wild soul hits an arcane spellcaster, a creature with extract slots, or a creature with grit (but not grit-like pools such as panache) with a weapon attack, the target either loses its highest-level available spell or extract slot or loses 1 point of grit, and the wild soul gains 5 temporary hit points. A target of this ability can negate this effect with a successful Fortitude save (DC = 10 + half the ranger’s level + his Wisdom modifier). Regardless of the outcome of the saving throw, the target is immune to this ability for 24 hours.
- **Implementation flags:**
  - panache subsystem.
  - grit/firearm subsystem.

### Replaces: improved quarry

- **Archetype feature:** Dizzying Onslaught (Ex)
- **Description:** At 19th level, a wild soul lands punishing blows that devastate his nemeses’ ability to focus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, a wild soul lands punishing blows that devastate his nemeses’ ability to focus. When he confirms a critical hit against a creature against whom his nemesis bonus applies, for 1 minute the target must succeed at a concentration check (DC = 20 + the wild soul’s Wisdom modifier + twice the spell’s level) to cast an arcane spell, create an extract, or use an alchemist’s bomb, and the target can’t spend or gain grit.
- **Implementation flags:**
  - grit/firearm subsystem.

### Replaces: master hunter

- **Archetype feature:** Nemesis Slayer (Ex)
- **Description:** At 20th level, a wild soul becomes death incarnate to his nemeses.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a wild soul becomes death incarnate to his nemeses. As a standard action, he can make a single attack against a nemesis at his full attack bonus. If the attack hits, the target takes damage normally and must succeed at a Fortitude save (DC = 10 + half the wild soul’s level + his Wisdom modifier) or die. The wild soul can instead deal an amount of nonlethal damage equal to the creature’s current hit points, which the target can negate with a successful save at the same DC. The ranger can use this ability up to five times per day, but he cannot use it against the same creature more than once in a 24-hour period.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Unfettered Soul
- Nemesis (Ex)
- Nemesis Defense (Ex)
- Break the Interloper (Su)
- Dizzying Onslaught (Ex)
- Nemesis Slayer (Ex)
