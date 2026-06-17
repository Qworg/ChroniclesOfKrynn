# Warrior - Armiger

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Armiger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Armiger
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bonus Feats; Hellknight Order; Studious Squire; Ardent (Su)
- **Replaced / altered class features:** Class Skills; Skill Points; 1st, 10th-level Bonus Feats; Bravery

## Implementation details

### Alters: the fighter’s bonus feats

- **Archetype feature:** Bonus Feats
- **Description:** When selecting fighter bonus feats, the armiger can select any feats whose names include the word “Hellknight” (such as those that appear on page 62 of Pathfinder Campaign Setting: Path of the Hellknight ) as though they were combat feats.
- **Detailed mechanics:**
  - **Rules text to implement:** When selecting fighter bonus feats, the armiger can select any feats whose names include the word “Hellknight” (such as those that appear on page 62 of Pathfinder Campaign Setting: Path of the Hellknight ) as though they were combat feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Hellknight Order
- **Description:** At 1st level, an armiger must select which Hellknight order she intends to join.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, an armiger must select which Hellknight order she intends to join. If the armiger later gains levels in a Hellknight prestige class, she must select that same order.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the fighter’s class skills and skill points per level, and replaces the fighter’s bonus feats gained at 1st and 10th levels

- **Archetype feature:** Studious Squire
- **Description:** An armiger gains 2 additional skill ranks at each level.
- **Detailed mechanics:**
  - **Rules text to implement:** An armiger gains 2 additional skill ranks at each level. These ranks must be put into Intimidate and Knowledge (planes). In addition, the armiger treats Knowledge (local) and Knowledge (planes) as class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: bravery

- **Archetype feature:** Ardent (Su)
- **Description:** Armigers are difficult to sway from their beliefs.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** Armigers are difficult to sway from their beliefs. At 2nd level, an armiger gains a +1 bonus on Will saves against charm effects. This bonus increases by 1 for every 4 fighter levels beyond 2nd. Once per day, if an armiger is forced to take an action that is diametrically opposed to her order’s beliefs and values while under the influence of a charm or compulsion effect, she can immediately attempt a Will save against the effect’s DC to resist acting out that order. Success does not remove the existing charm or compulsion effect, but does allow the armiger to resist betraying her beliefs.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Bonus Feats
- Hellknight Order
- Studious Squire
- Ardent (Su)
