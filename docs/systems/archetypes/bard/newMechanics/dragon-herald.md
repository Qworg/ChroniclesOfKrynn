# Bard - Dragon Herald

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Dragon Herald
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Dragon%20Herald
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Dragon Patron (Ex); Coat of Arms (Ex); Dragon Voice (Ex); Bardic Performance; Master of Persuasion (Ex); Extol Glory (Su)
- **Replaced / altered class features:** bardic knowledge; lore master; jack-of-all-trades

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** The dragon herald is proficient with simple weapons and light armor, but not with shields.
- **Detailed mechanics:**
  - **Rules text to implement:** The dragon herald is proficient with simple weapons and light armor, but not with shields. Dragon heralds are messengers, not warriors. Like other bards, dragon heralds don’t incur the normal arcane spell failure chance from wearing light armor.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Dragon Patron (Ex)
- **Description:** A dragon herald must choose a particular true dragon species whose glory to extol.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dragon herald must choose a particular true dragon species whose glory to extol. In most cases, this is a dragon with whom the herald is familiar, but it could be a dragon deity, a long-dead dragon hero, or even an entire dragon lineage. The energy type associated with her dragon patron (as shown on the draconic sorcerer bloodline ) determines the energy type used by several of her abilities. She must also designate a sacred space relevant to her dragon choice—usually the lair of a patron dragon or a shrine or holy place associated with a dragon type.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Coat of Arms (Ex)
- **Description:** A dragon herald gains energy resistance equal to her dragon herald level against the energy type associated with her dragon patron.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dragon herald gains energy resistance equal to her dragon herald level against the energy type associated with her dragon patron. This resistance stacks with any inherent racial resistances, but not with magical or temporary resistances.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: bardic knowledge

- **Archetype feature:** Dragon Voice (Ex)
- **Description:** A dragon herald gains a bonus equal to half her level on Intimidate and Diplomacy checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A dragon herald gains a bonus equal to half her level on Intimidate and Diplomacy checks. She gains Draconic as a bonus language.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** A dragon herald gains the following types of bardic performance: Diplomatic Immunity (Su) : A dragon herald can use bardic performance to generate a sanctuary effect upon herself.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 12, 15.
  - **Rules text to implement:** A dragon herald gains the following types of bardic performance: Diplomatic Immunity (Su) : A dragon herald can use bardic performance to generate a sanctuary effect upon herself. Most use this to deliver the word of their patron or to safely complete Diplomacy or Intimidate checks in the presence of hostile foes. The effect persists for as long as the dragon herald performs and for 1 round after. This performance replaces countersong and fascinate. Diplomatic Protection (Su) : At 3rd level, the dragon herald can use bardic performance to wrap a single ally in the colors and scales of her patron. The dragon herald must be able to see her ally, and that ally must be able to perceive her performance. While the herald performs, the target gains resistance equal to twice the dragon herald’s level to the energy type associated with the dragon herald’s patron, and an enhancement bonus to natural armor equal to 1/2 the dragon herald’s level. This performance replaces inspire competence. Rebuke Foes (Su) : At 12th level, the dragon herald gains the ability to rain down her patron’s wrath on her enemies, dealing energy damage of the appropriate type equal to twice her dragon herald level (Reflex save for half ). She can target one enemy within 50 feet for every 4 dragon herald levels she has. This effect occurs once per round for as long as she continues her performance. This performance replaces soothing performance. Retreat to Lair (Sp) : At 15th level, the dragon herald can spend 5 daily uses of performance as a full-round action to teleport herself, or a willing target touched, to her sacred place. This performance replaces inspire heroics.
- **Implementation flags:**
  - bardic performance subsystem.
  - teleport/positioning subsystem.
  - feat grant/prerequisite handling.

### Replaces: lore master

- **Archetype feature:** Master of Persuasion (Ex)
- **Description:** At 5th level, the dragon herald becomes so sure in her craft that she can take 10 on any Diplomacy or Intimidate check, even when rushed or threatened.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 17.
  - **Rules text to implement:** At 5th level, the dragon herald becomes so sure in her craft that she can take 10 on any Diplomacy or Intimidate check, even when rushed or threatened. Once per day, she may attempt either a Diplomacy or Intimidate check as a full-round action, instead of spending a full minute. She can use this ability one additional time per day at 11th and 17th level.
- **Implementation flags:**
  - crafting subsystem.

### Replaces: jack-of-all-trades

- **Archetype feature:** Extol Glory (Su)
- **Description:** At 10th level, the dragon herald gains the ability to spread her patron’s glory to all intelligent creatures.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, the dragon herald gains the ability to spread her patron’s glory to all intelligent creatures. When she speaks Draconic, any intelligent creature that hears her and knows any language can understand her words. This ability does not allow the dragon herald to understand languages with which she is not familiar.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Weapon and Armor Proficiency
- Dragon Patron (Ex)
- Coat of Arms (Ex)
- Dragon Voice (Ex)
- Bardic Performance
- Master of Persuasion (Ex)
- Extol Glory (Su)
