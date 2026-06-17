# Rogue - Dreamthief

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Dreamthief
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Dreamthief
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skills; Dreamshard Focus (Su); Lucid Dreamer (Ex); Soothe Dreaming (Su); Dream Infiltrator (Sp)
- **Replaced / altered class features:** Class Skills; Sneak Attack; Master Strike; Trap Sense; Uncanny Dodge; Improved Uncanny Dodge; 12th-level Rogue Talent

## Implementation details

### Alters: the rogue’s class skills

- **Archetype feature:** Skills
- **Description:** Knowledge (arcana) and Knowledge (planes) are class skills for a dreamthief.
- **Detailed mechanics:**
  - **Rules text to implement:** Knowledge (arcana) and Knowledge (planes) are class skills for a dreamthief.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: sneak attack and master strike

- **Archetype feature:** Dreamshard Focus (Su)
- **Description:** At 1st level, a dreamthief selects an emotional focus from among those available to a spiritualist’s phantom.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 20.
  - **Rules text to implement:** At 1st level, a dreamthief selects an emotional focus from among those available to a spiritualist’s phantom. She gains the abilities granted by that emotional focus (with the exception of the focus determining her good saving throws—she retains the typical rogue saves). For each of the two skills associated with that emotional focus, a dreamthief gains ranks in that skill equal to her rogue level; this does not allow her ranks in these skills to exceed her Hit Dice. A dreamthief is considered to be both a phantom and a spiritualist for the purpose of emotional focus abilities whose effect references both a phantom and a spiritualist, such as dutiful strike, and she treats her rogue level as both her spiritualist level and her phantom Hit Dice when determining abilities and save DCs. Once per round when a dreamthief makes a melee attack, she can declare that attack to be a dreamstrike. This does not require an action, but a dreamthief must declare a dreamstrike before making the attack roll. A dreamstrike is treated as a slam attack for the purpose of emotional focus abilities that apply to a phantom’s slam attacks, such as miserable strike. At 20th level, any melee attack a dreamthief makes automatically gains this benefit.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: trap sense

- **Archetype feature:** Lucid Dreamer (Ex)
- **Description:** At 3rd level, a dreamthief can control her dreams, and gains Lucid Dreamer as a bonus feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a dreamthief can control her dreams, and gains Lucid Dreamer as a bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: uncanny dodge

- **Archetype feature:** Soothe Dreaming (Su)
- **Description:** At 4th level, a dreamthief can steal negative emotions, freeing allies from harmful conditions.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a dreamthief can steal negative emotions, freeing allies from harmful conditions. This acts as the mesmerist’s touch treatment ability, treating her rogue level as her mesmerist level; a dreamthief can use this ability once per day for every 3 rogue levels she has.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge and the rogue talent gained at 12th level

- **Archetype feature:** Dream Infiltrator (Sp)
- **Description:** A dreamthief can enter dreams, whether to learn secrets or meddle more directly.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 8, 12.
  - **Rules text to implement:** A dreamthief can enter dreams, whether to learn secrets or meddle more directly. At 8th level, a dreamthief can cast dream scan once per day as a spell-like ability. At 12th level, once per day she can cast either dream scan or dream travel as a spell-like ability. The caster level of these spell-like abilities is equal to her rogue level.
- **Implementation flags:**
  - spell-like ability support.

## Parsed source feature headings

- Skills
- Dreamshard Focus (Su)
- Lucid Dreamer (Ex)
- Soothe Dreaming (Su)
- Dream Infiltrator (Sp)
