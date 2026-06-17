# Alchemist - Mnemostiller

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Mnemostiller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Mnemostiller
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Mental Ambix; Rasugen (Su); Anguish Bomb (Su); Brewed Memories; Natural Empath (Ex); Mind-Delver (Su)
- **Replaced / altered class features:** Key Ability Score; Alchemy; Throw Anything; Mutagen; Bombs; Poison Resistance; Poison Use

## Implementation details

### Alters: alchemy and replaces throw anything

- **Archetype feature:** Mental Ambix
- **Description:** A mnemostiller’s alchemy relies on force of personality, using his own mind as an alchemy lab to draw and purify the mnemos collected from others.
- **Detailed mechanics:**
  - **Rules text to implement:** A mnemostiller’s alchemy relies on force of personality, using his own mind as an alchemy lab to draw and purify the mnemos collected from others. A mnemostiller uses his Charisma score in place of his Intelligence score for the purpose of extracts and bonus extracts. A mnemostiller still uses his Intelligence score to learn new formulae. The mnemostiller can cast detect thoughts as a spell-like ability a number of times per day equal to his Charisma modifier (minimum 1).
- **Implementation flags:**
  - spell-like ability support.

### Replaces: mutagen

- **Archetype feature:** Rasugen (Su)
- **Description:** A mnemostiller learns to brew a unique type of mutagen, called a rasugen, that suppresses his mind to enter a state of sublime purity.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A mnemostiller learns to brew a unique type of mutagen, called a rasugen, that suppresses his mind to enter a state of sublime purity. In this state, a mnemostiller becomes incredibly resilient, but cannot perform complex skills. Once imbibed, a rasugen grants a +2 alchemical bonus on all saving throws and 2 temporary hit points per alchemist level for 10 minutes per alchemist level. In addition, while the rasugen is in effect, a mnemostiller takes a –2 penalty to his Intelligence score and can’t attempt checks using Appraise, Craft, Disable Device, Heal, Knowledge (any), Profession, Sleight of Hand, or Spellcraft. This acts in all other ways like a mutagen. A mnemostiller can never gain the mutagen, cognatogen, or inspiring cognatogen ability, even from a discovery or another class.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - skill/class-skill modification.

### Replaces: bombs

- **Archetype feature:** Anguish Bomb (Su)
- **Description:** A mnemostiller crafts his bombs from mnemos of pain and discomfort, inflicting psychic damage.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A mnemostiller crafts his bombs from mnemos of pain and discomfort, inflicting psychic damage. An anguish bomb is identical to a bomb except that it deals nonlethal damage, it deals no damage to inanimate objects and creatures immune to mental effects, and creatures caught in the anguish bomb’s splash can attempt a Will save for half damage. A mnemostiller uses his Charisma score in place of his Intelligence score to determine the bonus damage of his anguish bomb and the save DC of the anguish bomb’s splash damage. He still uses his Intelligence score to determine his number of bombs per day. If the mnemostiller has taken any hit point damage in the past 24 hours, his anguish bombs inflict 1 additional point of nonlethal damage for every 2 alchemist levels he has.
- **Implementation flags:**
  - crafting subsystem.

### Replaces: poison resistance

- **Archetype feature:** Brewed Memories
- **Description:** A mnemostiller can create several unique extracts from the mnemos he pulls from the minds of others.
- **Detailed mechanics:**
  - **Level hooks:** 2, 1, 5, 8, 3.
  - **Rules text to implement:** A mnemostiller can create several unique extracts from the mnemos he pulls from the minds of others. At 2nd level, he adds mindlink, placebo effect, and thought echo to his formula book as 1st-level extracts. At 5th level, he adds aura alteration, detect mindscape, and mindscape door to his formula book as 2nd-level extracts. At 8th level, he adds mindwipe and thoughtsense to his formula book as 3rd-level extracts; the range for a mindwipe extract becomes creature touched, and it can be applied only to a helpless or willing creature.
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison use

- **Archetype feature:** Natural Empath (Ex)
- **Description:** A mnemostiller’s studies naturally focus on others.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** A mnemostiller’s studies naturally focus on others. He gains infusion as a bonus discovery at 2nd level.
- **Implementation flags:**
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Mind-Delver (Su)
- **Description:** At 10th level, a mnemostiller can use mind probe as a spell-like ability a number of times per day equal to his Charisma modifier (minimum 1).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, a mnemostiller can use mind probe as a spell-like ability a number of times per day equal to his Charisma modifier (minimum 1). Mnemostil First developed to help heal souls who had experienced undeath for a time, the art of mnemostil involves a practitioner carefully extracting or returning memories as an oily vapor—mnemos—which allows tortured souls to confront their past horrors one at a time while finding closure. In a city largely dedicated to waiting out eternity and cultivating absent passion, however, there are abundant souls eager to feel anything, good or bad. Black-market mnemostillers pay handsomely to extract memories from remarkable souls, even traveling to other planes to build up their stock before returning to Spire’s Edge to sell their wares. While there is some crossover with information brokers, mnemostillers typically sell experiences and emotions rather than secrets. Petitioners searching for purpose buy what memories they can to try and shape themselves toward one Outer Plane destination or another, often trading in their genuine memories as payment, until little of the original individual remains. Some criminal syndicates target visiting souls and outsiders to extract their memories by force. Mnemostil has also created a unique faith in Spire’s Edge: amnesia cults. Many petitioners succumb to the expectation that they grow—that who they were in life is somehow not enough—and so render themselves into temporary or permanent blank slates to dwell in inert bliss. Others cannot reconcile their own actions and so wipe themselves clean to live in ignorance. Pruning the development of the soul is anathema to the purpose of Spire’s Edge, and the city’s psychopomps aggressively hunt both mnemostillers and amnesia cultists, with punishment for the crime invariably being exile into the Astral Plane.
- **Implementation flags:**
  - spell-like ability support.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Mental Ambix
- Rasugen (Su)
- Anguish Bomb (Su)
- Brewed Memories
- Natural Empath (Ex)
- Mind-Delver (Su)
