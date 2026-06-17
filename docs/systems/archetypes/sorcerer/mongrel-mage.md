# Sorcerer - Mongrel Mage

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Mongrel Mage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Mongrel%20Mage
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Mongrel Reservoir (Su); Bloodline Spells
- **Replaced / altered class features:** the bloodline feats gained at 7th, 13th, and 19th level

## Implementation details

### Alters: the bloodline class feature, bloodline powers, and bloodline spells

- **Archetype feature:** Mongrel Reservoir (Su)
- **Description:** At 1st level, a mongrel mage has an innate pool of magical energy, known as her mongrel reservoir, that she can draw upon to activate her weakened bloodline.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 3, 7, 20.
  - **Rules text to implement:** At 1st level, a mongrel mage has an innate pool of magical energy, known as her mongrel reservoir, that she can draw upon to activate her weakened bloodline. Her mongrel reservoir can hold an amount of magical energy equal to 3 + her sorcerer level. Each day when refreshing her spell slots, her mongrel reservoir is restored to full. The mongrel reservoir can never hold more points that the total mentioned above; points gained in excess of this maximum are lost. Each day when she refreshes her spell slots, the mongrel mage selects one sorcerer bloodline. She must select an ordinary bloodline with this ability, not one altered by the wildblooded archetype or any other archetype. She gains this bloodline’s 1st-level bloodline power for that day, using it as if she were only a 1st-level sorcerer. (If this ability is used to gain an arcane bond and the bonded item is selected, she can use the item only to cast a 1st-level spell known, as she counts as only a 1st-level sorcerer.) A mongrel mage can have only one bloodline selected at a time. As a swift action, she can expend 1 point from her mongrel reservoir to activate that bloodline, allowing her to use its 1st-level bloodline powers as well as its bloodline arcana at her full sorcerer level, including using a bonded item from an arcane bond. This lasts for a number of rounds equal to her Charisma modifier (minimum 1). At 3rd level, when activating her selected bloodline, a mongrel mage can instead spend 2 points from her mongrel reservoir to allow her to use the bloodline’s 1st- and 3rd-level powers as well as its bloodline arcana at her full sorcerer level for a number of rounds equal to her Charisma modifier (minimum 1). At 7th level, when a mongrel mage is activating her selected bloodline, the mongrel mage can instead spend 3 points from her mongrel reservoir, allowing her to use the bloodline’s 1st-, 3rd-, and 7th-level powers as well as its bloodline arcana at her full sorcerer level for a number of rounds equal to her Charisma bonus. At 20th level, when activating her selected bloodline, a mongrel mage can instead spend 5 points from her mongrel reservoir, allowing her to use all of the bloodline’s powers as well as its bloodline arcana at her full sorcerer level for a number of rounds equal to her Charisma modifier (minimum 1).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the bloodline feats gained at 7th, 13th, and 19th level

- **Archetype feature:** Bloodline Spells
- **Description:** At 7th level, each day when she selects her bloodline, a mongrel mage adds the 1st-, 2nd-, and 3rdlevel spells from her selected bloodline to her current list of spells known.
- **Detailed mechanics:**
  - **Level hooks:** 7, 13, 6, 19, 9.
  - **Rules text to implement:** At 7th level, each day when she selects her bloodline, a mongrel mage adds the 1st-, 2nd-, and 3rdlevel spells from her selected bloodline to her current list of spells known. At 13th level, each day when she selects her bloodline, a mongrel mage adds the 4th-, 5th-, and 6th-level spells from her selected bloodline to her current list of spells known. At 19th level, each day when she selects her bloodline, a mongrel mage adds the 7th-, 8th-, and 9th-level spells from her selected bloodline to her current list of spells known.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Mongrel Reservoir (Su)
- Bloodline Spells
