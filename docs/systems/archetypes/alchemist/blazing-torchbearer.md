# Alchemist - Blazing Torchbearer

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Blazing Torchbearer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Blazing%20Torchbearer
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Everburning Flame (Ex); Intense Light (Ex); Explosive Torch (Ex)
- **Replaced / altered class features:** Brew Potion; poison use; the alchemist’s 4th-level discovery

## Implementation details

### Replaces: Brew Potion

- **Archetype feature:** Everburning Flame (Ex)
- **Description:** Any torch held by a blazing torchbearer is considered to be an everburning torch, although it still sheds heat and can be used as a weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Any torch held by a blazing torchbearer is considered to be an everburning torch, although it still sheds heat and can be used as a weapon. In addition, a blazing torchbearer can cast spark as a spell-like ability at will.
- **Implementation flags:**
  - spell-like ability support.

### Replaces: poison use

- **Archetype feature:** Intense Light (Ex)
- **Description:** At 2nd level, a blazing torchbearer has mastered lighting and holding a torch to the point that it sheds more light than those carried by his peers.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a blazing torchbearer has mastered lighting and holding a torch to the point that it sheds more light than those carried by his peers. The radius of normal and increased illumination of any torch held by a blazing torchbearer increases by 10 feet. Once per day as a standard action, the blazing torchbearer can create a brilliant flash of light that blinds everyone within 10 feet (including the torchbearer) for 1 round.
- **Implementation flags:**
  - poison subsystem.

### Replaces: the alchemist’s 4th-level discovery

- **Archetype feature:** Explosive Torch (Ex)
- **Description:** At 4th level, as a standard action, a blazing torchbearer can drop a special blend of explosive powders onto his torch before using it as a weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, as a standard action, a blazing torchbearer can drop a special blend of explosive powders onto his torch before using it as a weapon. His next successful melee attack with the torch deals an additional 2d6 points of fire damage and sets the target on fire. This attack must be made within 1d4 rounds or the torch prematurely explodes at the end of the blazing torchbearer’s turn, dealing damage to the blazing torchbearer and setting him on fire.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Everburning Flame (Ex)
- Intense Light (Ex)
- Explosive Torch (Ex)
