# Sorcerer - Mongrel Mage

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Mongrel Mage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Mongrel%20Mage
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Mongrel Reservoir (Su); Bloodline Spells
- **Replaced / altered class features:** the bloodline feats gained at 7th, 13th, and 19th level

## Replacement details

### Alters: the bloodline class feature, bloodline powers, and bloodline spells

- **Archetype feature:** Mongrel Reservoir (Su)
- **Description:** At 1st level, a mongrel mage has an innate pool of magical energy, known as her mongrel reservoir, that she can draw upon to activate her weakened bloodline.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3, 7, 20.
  - Mechanics summary: At 1st level, a mongrel mage has an innate pool of magical energy, known as her mongrel reservoir, that she can draw upon to activate her weakened bloodline. Her mongrel reservoir can hold an amount of magical energy equal to 3 + her sorcerer level. Each day when refreshing her spell slots, her mongrel reservoir is restored to full. The mongrel reservoir can never hold more points that the total mentioned above; points gained in excess of this maximum are lost. Each day when she refreshes her spell slots, the mongrel mage selects one sorcerer bloodline. She must select an ordinary bloodline with this ability, not one altered by the wildblooded archetype or any other archetype.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the bloodline feats gained at 7th, 13th
- **Archetype feature:** Bloodline Spells
- **Description:** At 7th level, each day when she selects her bloodline, a mongrel mage adds the 1st-, 2nd-, and 3rdlevel spells from her selected bloodline to her current list of spells known.
- **Mechanics:**
  - Level hooks: 7, 13, 6, 19, 9.
  - Mechanics summary: At 7th level, each day when she selects her bloodline, a mongrel mage adds the 1st-, 2nd-, and 3rdlevel spells from her selected bloodline to her current list of spells known. At 13th level, each day when she selects her bloodline, a mongrel mage adds the 4th-, 5th-, and 6th-level spells from her selected bloodline to her current list of spells known. At 19th level, each day when she selects her bloodline, a mongrel mage adds the 7th-, 8th-, and 9th-level spells from her selected bloodline to her current list of spells known.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: 19th level

- **Archetype feature:** Bloodline Spells
- **Description:** At 7th level, each day when she selects her bloodline, a mongrel mage adds the 1st-, 2nd-, and 3rdlevel spells from her selected bloodline to her current list of spells known.
- **Mechanics:**
  - Level hooks: 7, 13, 6, 19, 9.
  - Mechanics summary: At 7th level, each day when she selects her bloodline, a mongrel mage adds the 1st-, 2nd-, and 3rdlevel spells from her selected bloodline to her current list of spells known. At 13th level, each day when she selects her bloodline, a mongrel mage adds the 4th-, 5th-, and 6th-level spells from her selected bloodline to her current list of spells known. At 19th level, each day when she selects her bloodline, a mongrel mage adds the 7th-, 8th-, and 9th-level spells from her selected bloodline to her current list of spells known.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, sorcerer bloodline hook.

## Parsed source feature headings

- Mongrel Reservoir (Su)
- Bloodline Spells

