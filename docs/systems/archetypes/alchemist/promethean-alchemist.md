# Alchemist - Promethean Alchemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Promethean Alchemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Promethean%20Alchemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Craft Construct; Homunculus Companion (Ex); Discoveries; Level; HD; BAB; Saves; Skills; Feats; Str/Dex Bonus; Special; Size; Speed; Attack; Ability Scores; Special Qualities; Languages; Special Attacks
- **Replaced / altered class features:** Brew Potion and Throw Anything; bombs and mutagen

## Replacement details

### Replaces: Brew Potion and Throw Anything

- **Archetype feature:** Craft Construct
- **Description:** At 1st level, a promethean alchemist gains the promethean disciple discovery.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a promethean alchemist gains the promethean disciple discovery.
- **Implementation flags:**
  - Likely existing hooks: alchemist discovery hook.

### Replaces: bombs and mutagen

- **Archetype feature:** Homunculus Companion (Ex)
- **Description:** At 1st level, a promethean alchemist gains the service of a homunculus companion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a promethean alchemist gains the service of a homunculus companion. The means for creating this special homunculus are more exotic than normal and require investiture of the promethean alchemist’s own life essence into the homunculus. A homunculus companion can be of any alignment, even one that is different from its master’s. A destroyed homunculus companion can be restored to life by performing a ritual with its corpse that requires 1 pint of its creator’s blood per Hit Die of the homunculus and rare materials worth 100 gp per Hit Die of the homunculus. Performing this ritual takes 1 hour (though it may take some time to gather enough blood at higher levels, so many promethean alchemists keep chilled blood samples in storage just in case). A promethean alchemist can’t take the mutagen or cognatogen discoveries.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook, alchemist bomb hook, mutagen hook.

## Parsed source feature headings

- Craft Construct
- Homunculus Companion (Ex)
- Discoveries
- Level
- HD
- BAB
- Saves
- Skills
- Feats
- Str/Dex Bonus
- Special
- Level
- HD
- BAB
- Saves
- Skills
- Feats
- Str/Dex Bonus
- Special
- Size
- Speed
- Attack
- Ability Scores
- Special Qualities
- Languages
- Size
- Speed
- Attack
- Ability Scores
- Special Attacks

