# Ranger - Wild Soul

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Wild Soul
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Wild%20Soul
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Unfettered Soul; Nemesis (Ex); Nemesis Defense (Ex); Break the Interloper (Su); Dizzying Onslaught (Ex); Nemesis Slayer (Ex)
- **Replaced / altered class features:** Code of Conduct; Favored Enemy; Swift Tracker; Quarry; Improved Quarry; Master Hunter

## Replacement details

### Replaces: favored enemy

- **Archetype feature:** Nemesis (Ex)
- **Description:** A wild soul gains a +2 bonus on Intimidate, Knowledge, Perception, Sense Motive, Spellcraft, and Survival checks against creatures that wield advanced technology, alchemical weapons (including an alchemist’s bombs), or firearms and against those that cast arcane spells (this does not apply to creatures that use spell-like abilities).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 20.
  - Mechanics summary: A wild soul gains a +2 bonus on Intimidate, Knowledge, Perception, Sense Motive, Spellcraft, and Survival checks against creatures that wield advanced technology, alchemical weapons (including an alchemist’s bombs), or firearms and against those that cast arcane spells (this does not apply to creatures that use spell-like abilities). Likewise, he gains a +2 bonus on weapon attack and damage rolls against such opponents. The wild soul can attempt Craft (alchemy), Knowledge (arcana), and Spellcraft checks untrained when attempting to identify enemy magic or advanced technology. At 5th level and every 5 levels thereafter, these bonuses increase by 1 (to a maximum of +5 at 20th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, alchemist bomb hook, favored enemy hook.
  - Needs implementation review: firearms / gunslinger rules, technology rules.

### Replaces: swift tracker

- **Archetype feature:** Nemesis Defense (Ex)
- **Description:** At 8th level, a wild soul adds his nemesis bonus on saving throws against advanced technology, alchemical items (including an alchemist’s bombs and extracts), and arcane spells.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a wild soul adds his nemesis bonus on saving throws against advanced technology, alchemical items (including an alchemist’s bombs and extracts), and arcane spells. He also adds this bonus to his AC against advanced technological items, alchemical items (including alchemist bombs), arcane spells that require attack rolls, and firearms.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, alchemist bomb hook.
  - Needs implementation review: firearms / gunslinger rules, technology rules.

### Replaces: quarry

- **Archetype feature:** Break the Interloper (Su)
- **Description:** At 11th level, when a wild soul hits an arcane spellcaster, a creature with extract slots, or a creature with grit (but not grit-like pools such as panache) with a weapon attack, the target either loses its highest-level available spell or extract slot or loses 1 point of grit, and the wild soul gains 5 temporary hit points.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, when a wild soul hits an arcane spellcaster, a creature with extract slots, or a creature with grit (but not grit-like pools such as panache) with a weapon attack, the target either loses its highest-level available spell or extract slot or loses 1 point of grit, and the wild soul gains 5 temporary hit points. A target of this ability can negate this effect with a successful Fortitude save (DC = 10 + half the ranger’s level + his Wisdom modifier). Regardless of the outcome of the saving throw, the target is immune to this ability for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook.
  - Needs implementation review: grit resource, panache resource.

### Replaces: improved quarry

- **Archetype feature:** Dizzying Onslaught (Ex)
- **Description:** At 19th level, a wild soul lands punishing blows that devastate his nemeses’ ability to focus.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a wild soul lands punishing blows that devastate his nemeses’ ability to focus. When he confirms a critical hit against a creature against whom his nemesis bonus applies, for 1 minute the target must succeed at a concentration check (DC = 20 + the wild soul’s Wisdom modifier + twice the spell’s level) to cast an arcane spell, create an extract, or use an alchemist’s bomb, and the target can’t spend or gain grit.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook, alchemist bomb hook.
  - Needs implementation review: grit resource.

### Replaces: master hunter

- **Archetype feature:** Nemesis Slayer (Ex)
- **Description:** At 20th level, a wild soul becomes death incarnate to his nemeses.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a wild soul becomes death incarnate to his nemeses. As a standard action, he can make a single attack against a nemesis at his full attack bonus. If the attack hits, the target takes damage normally and must succeed at a Fortitude save (DC = 10 + half the wild soul’s level + his Wisdom modifier) or die. The wild soul can instead deal an amount of nonlethal damage equal to the creature’s current hit points, which the target can negate with a successful save at the same DC. The ranger can use this ability up to five times per day, but he cannot use it against the same creature more than once in a 24-hour period.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Code of Conduct

## Parsed source feature headings

- Unfettered Soul
- Nemesis (Ex)
- Nemesis Defense (Ex)
- Break the Interloper (Su)
- Dizzying Onslaught (Ex)
- Nemesis Slayer (Ex)

