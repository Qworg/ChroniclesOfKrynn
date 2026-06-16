# Bard - Fey Prankster

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Fey Prankster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Fey%20Prankster
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Mischievous Talent (Ex); Bardic Performance; Embarrassing Satire (Su); Dirty Trickster (Ex); Master of Mischief (Ex)
- **Replaced / altered class features:** bardic knowledge; countersong; inspire courage; dirge of doom; well-versed; lore master

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Mischievous Talent (Ex)
- **Description:** A fey prankster adds half her class level (minimum 1) on Bluff, Disguise, Sleight of Hand, and Stealth skill checks, and can attempt Sleight of Hand checks untrained.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A fey prankster adds half her class level (minimum 1) on Bluff, Disguise, Sleight of Hand, and Stealth skill checks, and can attempt Sleight of Hand checks untrained.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: countersong

- **Archetype feature:** Bardic Performance
- **Description:** A fey prankster gains the following types of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A fey prankster gains the following types of bardic performance. Song of Clumsiness (Su) : A fey prankster can use this performance to cause enemies within 30 feet that can hear her to suffer seemingly random mishaps. Any enemy in this area that draws a weapon or retrieves an item from a backpack or similar container immediately drops it, and falls prone the first time it enters a square of difficult terrain during its turn. A creature can negate a specific effect with a successful Reflex saving throw (DC = 10 + half the fey prankster’s bard level + her Charisma modifier), but an enemy must attempt a separate save for each potential effect during the song of clumsiness (for example, if it draws multiple weapons). Incite Unreliability (Su) : A fey prankster can use her performance to manipulate a single target into fighting erratically or haphazardly, as though affected by lesser confusion . To be affected, the target must be within 30 feet and able to hear the fey prankster’s performance.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, rage/rage-power hook, bardic performance hook.

### Replaces: inspire courage

- **Archetype feature:** Bardic Performance
- **Description:** A fey prankster gains the following types of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A fey prankster gains the following types of bardic performance. Song of Clumsiness (Su) : A fey prankster can use this performance to cause enemies within 30 feet that can hear her to suffer seemingly random mishaps. Any enemy in this area that draws a weapon or retrieves an item from a backpack or similar container immediately drops it, and falls prone the first time it enters a square of difficult terrain during its turn. A creature can negate a specific effect with a successful Reflex saving throw (DC = 10 + half the fey prankster’s bard level + her Charisma modifier), but an enemy must attempt a separate save for each potential effect during the song of clumsiness (for example, if it draws multiple weapons). Incite Unreliability (Su) : A fey prankster can use her performance to manipulate a single target into fighting erratically or haphazardly, as though affected by lesser confusion . To be affected, the target must be within 30 feet and able to hear the fey prankster’s performance.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, rage/rage-power hook, bardic performance hook.

### Replaces: dirge of doom

- **Archetype feature:** Embarrassing Satire (Su)
- **Description:** At 8th level, a fey prankster’s powerful satire raises painful blisters and ugly boils on the face of her target.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a fey prankster’s powerful satire raises painful blisters and ugly boils on the face of her target. The fey prankster selects one target within 30 feet to become sickened from the uncomfortable facial boils.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: well-versed

- **Archetype feature:** Dirty Trickster (Ex)
- **Description:** At 2nd level, a fey prankster gains Improved Dirty Trick as a bonus feat and counts as having Combat Expertise for the purpose of meeting the prerequisites of feats that have Improved Dirty Trick as a prerequisite.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a fey prankster gains Improved Dirty Trick as a bonus feat and counts as having Combat Expertise for the purpose of meeting the prerequisites of feats that have Improved Dirty Trick as a prerequisite.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: lore master

- **Archetype feature:** Master of Mischief (Ex)
- **Description:** At 5th level, a fey prankster can take 10 on a Bluff, Disguise, Sleight of Hand, or Stealth skill check (if she has ranks in that skill), even if distracted or endangered.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 17.
  - Mechanics summary: At 5th level, a fey prankster can take 10 on a Bluff, Disguise, Sleight of Hand, or Stealth skill check (if she has ranks in that skill), even if distracted or endangered. In addition, once per day, the fey prankster can take 20 on one these skill checks (if she has ranks in that skill). She can use this ability one additional time per day for every 6 bard levels she has beyond 5th, to a maximum of three times per day at 17th level.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Mischievous Talent (Ex)
- Bardic Performance
- Embarrassing Satire (Su)
- Dirty Trickster (Ex)
- Master of Mischief (Ex)

