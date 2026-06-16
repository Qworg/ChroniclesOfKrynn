# Alchemist - Mnemostiller

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Mnemostiller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Mnemostiller
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Mental Ambix; Rasugen (Su); Anguish Bomb (Su); Brewed Memories; Natural Empath (Ex); Mind-Delver (Su)
- **Replaced / altered class features:** Key Ability Score; Alchemy; Throw Anything; Mutagen; Bombs; Poison Resistance; Poison Use

## Replacement details

### Alters: alchemy and replaces throw anything

- **Archetype feature:** Mental Ambix
- **Description:** A mnemostiller’s alchemy relies on force of personality, using his own mind as an alchemy lab to draw and purify the mnemos collected from others.
- **Mechanics:**
  - Mechanics summary: A mnemostiller’s alchemy relies on force of personality, using his own mind as an alchemy lab to draw and purify the mnemos collected from others. A mnemostiller uses his Charisma score in place of his Intelligence score for the purpose of extracts and bonus extracts. A mnemostiller still uses his Intelligence score to learn new formulae. The mnemostiller can cast detect thoughts as a spell-like ability a number of times per day equal to his Charisma modifier (minimum 1).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: mutagen

- **Archetype feature:** Rasugen (Su)
- **Description:** A mnemostiller learns to brew a unique type of mutagen, called a rasugen, that suppresses his mind to enter a state of sublime purity.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A mnemostiller learns to brew a unique type of mutagen, called a rasugen, that suppresses his mind to enter a state of sublime purity. In this state, a mnemostiller becomes incredibly resilient, but cannot perform complex skills. Once imbibed, a rasugen grants a +2 alchemical bonus on all saving throws and 2 temporary hit points per alchemist level for 10 minutes per alchemist level. In addition, while the rasugen is in effect, a mnemostiller takes a –2 penalty to his Intelligence score and can’t attempt checks using Appraise, Craft, Disable Device, Heal, Knowledge (any), Profession, Sleight of Hand, or Spellcraft. A mnemostiller can never gain the mutagen, cognatogen, or inspiring cognatogen ability, even from a discovery or another class.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, numeric penalty, spellcasting/spell-list hook, mutagen hook, alchemist discovery hook, ki/monk hook.

### Replaces: bombs

- **Archetype feature:** Anguish Bomb (Su)
- **Description:** A mnemostiller crafts his bombs from mnemos of pain and discomfort, inflicting psychic damage.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A mnemostiller crafts his bombs from mnemos of pain and discomfort, inflicting psychic damage. An anguish bomb is identical to a bomb except that it deals nonlethal damage, it deals no damage to inanimate objects and creatures immune to mental effects, and creatures caught in the anguish bomb’s splash can attempt a Will save for half damage. A mnemostiller uses his Charisma score in place of his Intelligence score to determine the bonus damage of his anguish bomb and the save DC of the anguish bomb’s splash damage. He still uses his Intelligence score to determine his number of bombs per day. If the mnemostiller has taken any hit point damage in the past 24 hours, his anguish bombs inflict 1 additional point of nonlethal damage for every 2 alchemist levels he has.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, alchemist bomb hook.
  - Needs implementation review: occult/psychic casting.

### Replaces: poison resistance

- **Archetype feature:** Brewed Memories
- **Description:** A mnemostiller can create several unique extracts from the mnemos he pulls from the minds of others.
- **Mechanics:**
  - Level hooks: 2, 1, 5, 8, 3.
  - Mechanics summary: A mnemostiller can create several unique extracts from the mnemos he pulls from the minds of others. At 2nd level, he adds mindlink , placebo effect , and thought echo to his formula book as 1st-level extracts. At 5th level, he adds aura alteration , detect mindscape , and mindscape door to his formula book as 2nd-level extracts. At 8th level, he adds mindwipe and thoughtsense to his formula book as 3rd-level extracts; the range for a mindwipe extract becomes creature touched, and it can be applied only to a helpless or willing creature.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: poison use

- **Archetype feature:** Natural Empath (Ex)
- **Description:** A mnemostiller’s studies naturally focus on others.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: A mnemostiller’s studies naturally focus on others. He gains infusion as a bonus discovery at 2nd level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, alchemist discovery hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Key Ability Score

## Parsed source feature headings

- Mental Ambix
- Rasugen (Su)
- Anguish Bomb (Su)
- Brewed Memories
- Natural Empath (Ex)
- Mind-Delver (Su)

