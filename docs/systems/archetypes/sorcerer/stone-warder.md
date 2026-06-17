# Sorcerer - Stone Warder

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Stone Warder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Stone%20Warder
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Blood of the Earth; Power of Stone (Su); Rune of Warding (Sp)
- **Replaced / altered class features:** Eschew Materials, the bloodline spell gained at 3rd level, and the bloodline feat gained at 7th level

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Blood of the Earth
- **Description:** Stone warders must have a bloodline with strong ties to earth and rock.
- **Detailed mechanics:**
  - **Rules text to implement:** Stone warders must have a bloodline with strong ties to earth and rock. A stone warder must select the deep earthAPG, draconic (copper dragon only), elemental (earth only), orc ( Pathfinder Player Companion: Orcs of Golarion 14), or shaitan UM bloodline.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Power of Stone (Su)
- **Description:** A stone warder draws power from natural rock, and gains a +1 bonus to her caster level when in hills, mountains, or underground terrain.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** A stone warder draws power from natural rock, and gains a +1 bonus to her caster level when in hills, mountains, or underground terrain. This bonus increases to +2 at 5th level, and by an additional 1 every 5 sorcerer levels thereafter. However, this strong elemental tie prevents a stone warder from casting spells that have the air, cold, electricity, fire, or water descriptor.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: Eschew Materials, the bloodline spell gained at 3rd level, and the bloodline feat gained at 7th level

- **Archetype feature:** Rune of Warding (Sp)
- **Description:** As a standard action, a stone warder can create a warding rune in any adjacent square.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 1, 3, 7.
  - **Rules text to implement:** As a standard action, a stone warder can create a warding rune in any adjacent square. The stone warder selects a sorcerer spell known that is at least 1 level lower than the highest-level spell she can cast, and casts it as part of creating the rune of warding. The spell must have a casting time of 1 standard action or less, and it must target one or more creatures. Rather than have its normal effect, the spell is stored in the rune. The first creature to enter the square triggers the rune of warding, and becomes the target of the selected spell. Regardless of the number of targets the spell can normally affect, it affects only the creature that triggers the rune. The rune is invisible and lasts a number of rounds equal to the stone warder’s level or until discharged. If placed on a solid rock or stone surface, it instead lasts 1 minute per sorcerer level the stone warder has or until discharged. The stone warder cannot create a rune of warding in a square occupied by an existing rune of warding or another creature. The rune counts as a spell of the same level as the spell stored within it for the purposes of dispelling. It is considered a magic trap and can be discovered with a successful Perception check (DC = 25 + the level of the stored spell) and disarmed with a successful Disable Device check (DC = 25 + the level of the stored spell). The stone warder can use this ability a number of times per day equal to 3 + her Charisma modifier.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Blood of the Earth
- Power of Stone (Su)
- Rune of Warding (Sp)
