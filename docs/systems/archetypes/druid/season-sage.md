# Druid - Season Sage

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Season Sage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Season%20Sage
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Season’s Touch (Su); Season’s Veil (Su); Season Mastery (Sp)
- **Replaced / altered class features:** Wild Shape

## Replacement details

### Replaces: wild shape

- **Archetype feature:** Season’s Touch (Su)
- **Description:** At 4th level, a season sage can infuse living things with the essence of a season with a touch, causing them to manifest the changes associated with that season—for example, a touch of winter can make some animals grow a thick winter coat, while a touch of summer can make them shed.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a season sage can infuse living things with the essence of a season with a touch, causing them to manifest the changes associated with that season—for example, a touch of winter can make some animals grow a thick winter coat, while a touch of summer can make them shed. A touch of autumn would make a deciduous tree’s leaves change colors, a touch of winter would make its leaves fall, and a touch of spring would make it put forth new leaves. In addition, a season sage can use the following abilities (in any combination) a total number of times per day equal to 1 + his Wisdom modifier. Vernal Growth : A touched living creature gains the effects of enlarge person (even if it is not a humanoid) for 1 minute per druid level. Summer Might : A touched creature gains a +4 enhancement bonus to Constitution for 1 minute per druid level. Autumn Rot : A touched creature or object made of plant matter takes 1d6 points of acid damage per 2 druid levels.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, wild shape hook.

## Parsed source feature headings

- Season’s Touch (Su)
- Season’s Veil (Su)
- Season Mastery (Sp)

