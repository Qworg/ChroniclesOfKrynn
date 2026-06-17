# Druid - Season Sage

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Season Sage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Season%20Sage
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Season’s Touch (Su); Season’s Veil (Su); Season Mastery (Sp)
- **Replaced / altered class features:** Wild Shape

## Implementation details

### Replaces: wild shape

- **Archetype feature:** Season’s Touch (Su)
- **Description:** At 4th level, a season sage can infuse living things with the essence of a season with a touch, causing them to manifest the changes associated with that season—for example, a touch of winter can make some animals grow a thick winter coat, while a touch of summer can make them shed.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a season sage can infuse living things with the essence of a season with a touch, causing them to manifest the changes associated with that season—for example, a touch of winter can make some animals grow a thick winter coat, while a touch of summer can make them shed. A touch of autumn would make a deciduous tree’s leaves change colors, a touch of winter would make its leaves fall, and a touch of spring would make it put forth new leaves. In addition, a season sage can use the following abilities (in any combination) a total number of times per day equal to 1 + his Wisdom modifier. Vernal Growth : A touched living creature gains the effects of enlarge person (even if it is not a humanoid) for 1 minute per druid level. A touched non-creature plant likewise doubles in all dimensions for the same duration. Summer Might : A touched creature gains a +4 enhancement bonus to Constitution for 1 minute per druid level. Autumn Rot : A touched creature or object made of plant matter takes 1d6 points of acid damage per 2 druid levels. Winter Frost : A touched creature or object takes 1d6 points of cold damage per 2 druid levels.
- **Implementation flags:**
  - wild shape subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Season’s Veil (Su)
- **Description:** At 6th level, a season sage can radiate an aura of seasonal power as a standard action once per day.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 8, 10.
  - **Rules text to implement:** At 6th level, a season sage can radiate an aura of seasonal power as a standard action once per day. This affects a 20-foot-radius burst centered on the season sage and lasts in that area for 10 minutes, regardless of where the season sage moves afterward. At 8th level and every 2 levels thereafter, the season sage can use this ability an additional time per day. At 10th level, the radius increases to 40 feet. Vernal Bloom : The area surges with life. Plants form vibrant, heavy undergrowth (see page 426 of the Pathfinder RPG Core Rulebook ) while in the aura. If the area can support plants, a circle of minor plants lingers afterward. At 8th level, the season sage can affect the area with plant growth as a swift action at will, which can linger after the aura passes. Summer Heat : The area of effect is treated as if it were under the effects of extreme heat. At 8th level, as a swift action the season sage can have the area deal 1d6 points of fire damage each round to other creatures in the area. Autumn Squall : The area is filled with fog, rain, and blown leaves. All creatures in the area gain concealment (abilities to specifically see through fog or rain don’t apply). At 8th level, the season sage can affect the area with diminish plants as a swift action at will, which also lingers after the aura passes. Winter Chill : The area of effect is treated as if it were under the effects of extreme cold. At 8th level, as a swift action the season sage can have the area deal 1d6 points of cold damage each round to other creatures in the area.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Season Mastery (Sp)
- **Description:** At 12th level, a season sage can cast control weather as a spell-like ability once per day; his choice of effects is not limited by the season.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a season sage can cast control weather as a spell-like ability once per day; his choice of effects is not limited by the season.
- **Implementation flags:**
  - spell-like ability support.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Season’s Touch (Su)
- Season’s Veil (Su)
- Season Mastery (Sp)
