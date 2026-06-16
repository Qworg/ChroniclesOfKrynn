# Bard - Brazen Deceiver

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Brazen Deceiver
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Brazen%20Deceiver
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Deceptive Tale (Su); Shameless Scoundrel (Ex); Blatant Subtlety (Ex); Invoke Vyriavaxus (Ex); Devil’s Tongue (Ex)
- **Replaced / altered class features:** bardic knowledge; well-versed; versatile performance; lore master

## Replacement details

### Replaces: the countersong and distraction bardic performances

- **Archetype feature:** Deceptive Tale (Su)
- **Description:** A brazen deceiver learns the deceptive tale bardic performance, allowing him to weave magic into his lies and imbue the most fantastic claims with the appearance of truth.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 11.
  - Mechanics summary: A brazen deceiver learns the deceptive tale bardic performance, allowing him to weave magic into his lies and imbue the most fantastic claims with the appearance of truth. While the brazen deceiver maintains this performance, he takes half the normal penalty on Bluff checks for unlikely lies (rounding down to –2). At 5th level, this effect also applies to Bluff checks for far-fetched lies, and at 11th level, it applies to Bluff checks for impossible lies.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, bardic performance hook.

### Replaces: bardic knowledge

- **Archetype feature:** Shameless Scoundrel (Ex)
- **Description:** A brazen deceiver adds half his level (minimum +1) on Bluff, Disguise, and Stealth checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A brazen deceiver adds half his level (minimum +1) on Bluff, Disguise, and Stealth checks.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: well-versed

- **Archetype feature:** Blatant Subtlety (Ex)
- **Description:** At 2nd level, a brazen deceiver has mastered the art of using magic without being detected.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a brazen deceiver has mastered the art of using magic without being detected. The brazen deceiver gains Spellsong as a bonus feat. Those specifically looking for abnormal effects must succeed at a Sense Motive check (DC = 10 + half the brazen deceiver’s bard level + the brazen deceiver’s Charisma modifier) to detect his performances.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook, bardic performance hook, ki/monk hook.

### Replaces: versatile performance

- **Archetype feature:** Invoke Vyriavaxus (Ex)
- **Description:** Westcrown suffered under the shadow curse for many years, and a brazen deceiver has a tiny piece of that darkness lodged in his soul; as his skills increase, he learns to command this shadowy power.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 0, 6, 10, 4, 14, 5, 18.
  - Mechanics summary: Westcrown suffered under the shadow curse for many years, and a brazen deceiver has a tiny piece of that darkness lodged in his soul; as his skills increase, he learns to command this shadowy power. A brazen deceiver adds the following spells to his bard spells known at the listed class levels. At 2nd level, the brazen deceiver adds bleed and touch of fatigue to his 0-level bard spells known. At 6th level, the brazen deceiver adds darkness and darkvision to his 2nd-level bard spells known. At 10th level, he adds shadow conjuration and shadow step to his 4th-level bard spells known. At 14th level, he adds shadow evocation and shadow walk to his 5th-level bard spells known.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, ki/monk hook.

### Replaces: lore master

- **Archetype feature:** Devil’s Tongue (Ex)
- **Description:** At 5th level, a brazen deceiver beguiles others with astonishing skill.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a brazen deceiver beguiles others with astonishing skill. This functions as the lore master ability, but its effects apply to Bluff checks instead of Knowledge skill checks.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Deceptive Tale (Su)
- Shameless Scoundrel (Ex)
- Blatant Subtlety (Ex)
- Invoke Vyriavaxus (Ex)
- Devil’s Tongue (Ex)

