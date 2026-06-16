# Monk - Monk of the Healing Hand

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Healing Hand
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Healing%20Hand
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Ancient Healing Hand (Su); Ki Sacrifice (Su); True Sacrifice (Su)
- **Replaced / altered class features:** wholeness of body; both diamond body and quivering palm; perfect self

## Replacement details

### Replaces: wholeness of body

- **Archetype feature:** Ancient Healing Hand (Su)
- **Description:** At 7th level, a monk of the healing hand can heal another creature’s wounds with a touch.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a monk of the healing hand can heal another creature’s wounds with a touch. As a full-round action, the monk can spend 2 ki points to heal a number of hit points equal to the monk’s level. He needs at least one hand free to use this ability, and cannot heal himself. If the action is interrupted, the subject heals no hit points, and the ki points are lost.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: both diamond body and quivering palm

- **Archetype feature:** Ki Sacrifice (Su)
- **Description:** At 11th level, a monk of the healing hand can use his entire ki pool to bring a person back to life.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11, 15.
  - Mechanics summary: At 11th level, a monk of the healing hand can use his entire ki pool to bring a person back to life. It takes 1 hour to perform this ritual. At the end of the ritual, the monk sacrifices all of his ki in order to cast raise dead (as the spell) with a caster level equal to his monk level. The ritual uses all of the ki in the monk’s ki pool; the monk must have at least 6 points of ki in his ki pool to use this ability. At 15th level, the monk may sacrifice his ki to cast resurrection. The monk must have at least 8 points of ki in his ki pool to use this ability.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Replaces: perfect self

- **Archetype feature:** True Sacrifice (Su)
- **Description:** At 20th level, in a final selfless act, a monk of the healing hand can draw in his entire ki, which then explodes outward in a 50-foot-radius emanation.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, in a final selfless act, a monk of the healing hand can draw in his entire ki, which then explodes outward in a 50-foot-radius emanation. All dead allies within the emanation are brought back to life, as if they were the subject of a true resurrection spell with a caster level equal to the monk’s level. A monk destroyed in this way can never come back to life, not even by way of a wish or miracle spell or by the power of a deity. Furthermore, the monk’s name can never be spoken or written down again.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Ancient Healing Hand (Su)
- Ki Sacrifice (Su)
- True Sacrifice (Su)

