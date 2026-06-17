# Warrior - Unbreakable

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Unbreakable
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Unbreakable
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Tough as Nails; Unflinching (Ex); Heroic Recovery (Ex); Heroic Defiance (Ex); Quick Recovery (Ex); Stalwart (Ex); Unlimited Endurance (Ex); Miraculous Recovery (Ex); Unbreakable Mind (Ex)
- **Replaced / altered class features:** the fighter’s 1st-level bonus feat; bravery; weapon training 1; weapon training 2; armor training 3; weapon training 3; armor training 4; weapon training 4; weapon mastery

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** An unbreakable is not proficient with tower shields.
- **Detailed mechanics:**
  - **Rules text to implement:** An unbreakable is not proficient with tower shields.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the fighter’s 1st-level bonus feat

- **Archetype feature:** Tough as Nails
- **Description:** An unbreakable gains Endurance and Die Hard as bonus feats.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** An unbreakable gains Endurance and Die Hard as bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: bravery

- **Archetype feature:** Unflinching (Ex)
- **Description:** At 2nd level, an unbreakable gains a +1 bonus on Will saves against mind-affecting effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 18.
  - **Rules text to implement:** At 2nd level, an unbreakable gains a +1 bonus on Will saves against mind-affecting effects. This bonus increases by +1 for every four levels after 2nd level (to a maximum of +5 at 18th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 1

- **Archetype feature:** Heroic Recovery (Ex)
- **Description:** At 5th level, an unbreakable gains the Heroic Recovery feat as a bonus feat, if he does not have it already.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 17.
  - **Rules text to implement:** At 5th level, an unbreakable gains the Heroic Recovery feat as a bonus feat, if he does not have it already. If he already has this feat, the unbreakable can choose any combat feat instead. In addition, he may use this feat one additional time per day for every four levels after 5th (to a maximum of 4 times per day at 17th level).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: weapon training 2

- **Archetype feature:** Heroic Defiance (Ex)
- **Description:** At 9th level, an unbreakable gains the Heroic Defiance feat as a bonus feat, if he does not have it already.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9, 19.
  - **Rules text to implement:** At 9th level, an unbreakable gains the Heroic Defiance feat as a bonus feat, if he does not have it already. If he already has this feat, the unbreakable can choose any combat feat instead. In addition, he may use this feat one additional time per day for every four levels after 9th (to a maximum of 3 times per day at 19th level).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training 3

- **Archetype feature:** Quick Recovery (Ex)
- **Description:** At 11th level, an unbreakable needs only 15 minutes of rest or to be subject to a healing spell or effect to recover from the fatigued condition.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, an unbreakable needs only 15 minutes of rest or to be subject to a healing spell or effect to recover from the fatigued condition.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 3

- **Archetype feature:** Stalwart (Ex)
- **Description:** At 13th level, when an unbreakable succeeds on a Fortitude or Will save against a spell or spell-like ability that has a partial effect even on a successful save, he is completely unaffected by it.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, when an unbreakable succeeds on a Fortitude or Will save against a spell or spell-like ability that has a partial effect even on a successful save, he is completely unaffected by it.
- **Implementation flags:**
  - spell-like ability support.

### Replaces: armor training 4

- **Archetype feature:** Unlimited Endurance (Ex)
- **Description:** At 15th level, when an unbreakable is exhausted, he only suffers the effects of the fatigued condition instead, but does require 1 hour of rest to reduce this condition to the actual fatigued condition.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 15.
  - **Rules text to implement:** At 15th level, when an unbreakable is exhausted, he only suffers the effects of the fatigued condition instead, but does require 1 hour of rest to reduce this condition to the actual fatigued condition.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon training 4

- **Archetype feature:** Miraculous Recovery (Ex)
- **Description:** At 17th level, when an unbreakable makes a saving throw to recover from an ongoing effect, he may roll twice and choose the better roll.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, when an unbreakable makes a saving throw to recover from an ongoing effect, he may roll twice and choose the better roll.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: weapon mastery

- **Archetype feature:** Unbreakable Mind (Ex)
- **Description:** At 20th level, an unbreakable becomes nearly impossible to sway with honeyed words or magic.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, an unbreakable becomes nearly impossible to sway with honeyed words or magic. He gains immunity to mind-affecting effects.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Weapon and Armor Proficiency
- Tough as Nails
- Unflinching (Ex)
- Heroic Recovery (Ex)
- Heroic Defiance (Ex)
- Quick Recovery (Ex)
- Stalwart (Ex)
- Unlimited Endurance (Ex)
- Miraculous Recovery (Ex)
- Unbreakable Mind (Ex)
