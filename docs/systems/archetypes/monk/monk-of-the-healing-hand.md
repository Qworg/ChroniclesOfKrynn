# Monk - Monk of the Healing Hand

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Healing Hand
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Healing%20Hand
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Ancient Healing Hand (Su); Ki Sacrifice (Su); True Sacrifice (Su)
- **Replaced / altered class features:** wholeness of body; both diamond body and quivering palm; perfect self

## Implementation details

### Replaces: wholeness of body

- **Archetype feature:** Ancient Healing Hand (Su)
- **Description:** At 7th level, a monk of the healing hand can heal another creature’s wounds with a touch.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, a monk of the healing hand can heal another creature’s wounds with a touch. As a full-round action, the monk can spend 2 ki points to heal a number of hit points equal to the monk’s level. He needs at least one hand free to use this ability, and cannot heal himself. If the action is interrupted, the subject heals no hit points, and the ki points are lost.
- **Implementation flags:**
  - ki subsystem.

### Replaces: both diamond body and quivering palm

- **Archetype feature:** Ki Sacrifice (Su)
- **Description:** At 11th level, a monk of the healing hand can use his entire ki pool to bring a person back to life.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11, 15.
  - **Rules text to implement:** At 11th level, a monk of the healing hand can use his entire ki pool to bring a person back to life. It takes 1 hour to perform this ritual. At the end of the ritual, the monk sacrifices all of his ki in order to cast raise dead (as the spell) with a caster level equal to his monk level. The ritual uses all of the ki in the monk’s ki pool; the monk must have at least 6 points of ki in his ki pool to use this ability. At 15th level, the monk may sacrifice his ki to cast resurrection. The monk must have at least 8 points of ki in his ki pool to use this ability. These rituals do not require material components. When this ability is used, the monk’s ki pool is not replenished until 24 hours have passed.
- **Implementation flags:**
  - ki subsystem.

### Replaces: perfect self

- **Archetype feature:** True Sacrifice (Su)
- **Description:** At 20th level, in a final selfless act, a monk of the healing hand can draw in his entire ki, which then explodes outward in a 50-foot-radius emanation.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, in a final selfless act, a monk of the healing hand can draw in his entire ki, which then explodes outward in a 50-foot-radius emanation. All dead allies within the emanation are brought back to life, as if they were the subject of a true resurrection spell with a caster level equal to the monk’s level. When the monk does this, he is truly and utterly destroyed. A monk destroyed in this way can never come back to life, not even by way of a wish or miracle spell or by the power of a deity. Furthermore, the monk’s name can never be spoken or written down again. All written mentions of his name become nothing more than a blank space.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Ancient Healing Hand (Su)
- Ki Sacrifice (Su)
- True Sacrifice (Su)
