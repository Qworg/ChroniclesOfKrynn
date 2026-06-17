# Bard - Negotiator

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Negotiator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Negotiator
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Hard Bargainer; Bardic Performance; Rogue Talents; Master of Rhetoric (Ex); Advanced Talents
- **Replaced / altered class features:** bardic knowledge; versatile performance; lore master

## Implementation details

### Replaces: bardic knowledge

- **Archetype feature:** Hard Bargainer
- **Description:** A negotiator adds half his class level (minimum 1) on Bluff, Diplomacy, Intimidate, Knowledge (local), and Sense Motive checks.
- **Detailed mechanics:**
  - **Rules text to implement:** A negotiator adds half his class level (minimum 1) on Bluff, Diplomacy, Intimidate, Knowledge (local), and Sense Motive checks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** A negotiator gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 9, 18.
  - **Rules text to implement:** A negotiator gains the following types of bardic performance. Counterargument (Su) : This performance acts as countersong, except a negotiator can use only Perform (act, comedy, oratory, or sing) to perform a counterargument. Fast Talk (Su) : At 1st level, a negotiator can use performance to affect the perceptions of any number of targets that can hear him. While the negotiator performs, these targets take a –1 penalty on saving throws against enchantment (charm) and illusion (figment, glamer, or shadow) effects, as well as a penalty on Appraise checks equal to half the negotiator’s level (minimum –1). A target that fails its Appraise check believes that the object in question is worth 10% more or less (negotiator’s choice) than its actual value. At 5th, 11th, and 17th levels, the saving throw penalty increases by 1 and the shift in an object’s perceived value increases by 10%. Fast talk is a language-dependent, mind-affecting ability that uses audible components. This performance replaces inspire courage. Binding Contract (Sp) : At 9th level, the negotiator can bind another creature’s promise to the negotiator with a geas. This acts as lesser geas, except the creature must have Hit Dice equal to or less than the negotiator’s level. The target can negate this effect with a successful Will save (DC = 10 + 1/2 the negotiator’s level + the negotiator’s Charisma modifier). The geas is discharged if the negotiator breaks his end of the bargain. Using this ability requires 3 rounds of continuous performance, and the target must be able to see and hear the bard throughout the performance. At 18th level, this effect acts as geas/quest (no HD limit, and the target cannot attempt a saving throw). Binding contract is an enchantment (compulsion), mind-affecting, language-dependent ability that relies on audible components. This performance replaces inspire greatness.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: versatile performance

- **Archetype feature:** Rogue Talents
- **Description:** At 2nd level, a negotiator gains a rogue talent, as the rogue class feature of the same name.
- **Detailed mechanics:**
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** At 2nd level, a negotiator gains a rogue talent, as the rogue class feature of the same name. At 6th level and every 4 levels thereafter, the negotiator gains an additional rogue talent. A negotiator cannot select a rogue talent that modifies the sneak attack ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: lore master

- **Archetype feature:** Master of Rhetoric (Ex)
- **Description:** At 5th level, the negotiator can take 10 on any Bluff, Diplomacy, Intimidate, Knowledge (local), or Sense Motive check if he has ranks in that skill.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 11, 17.
  - **Rules text to implement:** At 5th level, the negotiator can take 10 on any Bluff, Diplomacy, Intimidate, Knowledge (local), or Sense Motive check if he has ranks in that skill. A negotiator can choose not to take 10 and can instead roll normally. In addition, the negotiator can take 20 on one of those skill checks (without spending any additional time). The negotiator can do this once per day at 5th level, twice per day at 11th level, and three times per day at 17th level.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** At 10th level and every 4 levels thereafter, a negotiator can select an advanced rogue talent in place of a rogue talent.
- **Detailed mechanics:**
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level and every 4 levels thereafter, a negotiator can select an advanced rogue talent in place of a rogue talent. A negotiator cannot select an advanced talent that modifies the sneak attack ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Hard Bargainer
- Bardic Performance
- Rogue Talents
- Master of Rhetoric (Ex)
- Advanced Talents
