# Bard - Luring Piper

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Luring Piper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Luring%20Piper
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Fey Secrets; Luring Presentation (Ex); Bardic Performance; Piper’s Attention (Ex)
- **Replaced / altered class features:** bardic knowledge; well-versed

## Implementation details

### Alters: the bard’s class skills

- **Archetype feature:** Class Skills
- **Description:** A luring piper gains Survival as a class skill.
- **Detailed mechanics:**
  - **Rules text to implement:** A luring piper gains Survival as a class skill.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: bardic knowledge

- **Archetype feature:** Fey Secrets
- **Description:** A luring piper adds half his class level (minimum 1) on Bluff, Knowledge (nature), Perception, Sense Motive, and Survival checks when interacting with fey.
- **Detailed mechanics:**
  - **Rules text to implement:** A luring piper adds half his class level (minimum 1) on Bluff, Knowledge (nature), Perception, Sense Motive, and Survival checks when interacting with fey.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: bardic performance

- **Archetype feature:** Luring Presentation (Ex)
- **Description:** Creatures that have the animal or fey type take a –2 penalty on saving throws imposed by a luring piper’s bardic performances.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Creatures that have the animal or fey type take a –2 penalty on saving throws imposed by a luring piper’s bardic performances. Creatures with any other type gain a +2 bonus on saving throws against a luring piper’s bardic performances.
- **Implementation flags:**
  - bardic performance subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** The luring piper gains the following types of bardic performances that can only be made when using Perform (wind instruments) and a when employing a wind instrument.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8, 12.
  - **Rules text to implement:** The luring piper gains the following types of bardic performances that can only be made when using Perform (wind instruments) and a when employing a wind instrument. Charming Melody (Su) While using the fascinate bardic performance, the luring piper can play a song that compels animals and fey to follow him wherever he goes. Instead of sitting peacefully and merely observing the luring piper, creatures with the animal or fey type instead quietly and calmly walk toward the luring piper, stopping once they are adjacent to the luring piper and following him if he moves. This performance modifies fascinate. Deadly Lure (Sp) At 8th level, the luring piper can use his suggestion bardic performance on targeted animals and fey to make them take actions that result in their own injury or death, such as leaping off a cliff or into a river. The targeted creature is allowed a second saving throw to shake off the effect before completing any self-harming actions. This performance replaces the bard’s dirge of doom. Fey-Wounding Song (Sp) At 12th level as a full-round action, the luring piper can expend 3 rounds of bardic performance to play a song that causes fey tremendous pain. Treat this as equivalent to mass inflict serious wounds, but affecting only fey targets and using the lurid piper’s bard level as his caster level. This performance replaces soothing performance.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Replaces: well-versed

- **Archetype feature:** Piper’s Attention (Ex)
- **Description:** Starting at 2nd level, whenever a luring piper is actively using Perform (wind instruments) as part of a bardic performance, he gains a +4 bonus on saving throws against language-dependent, mind-affecting, and sonic effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** Starting at 2nd level, whenever a luring piper is actively using Perform (wind instruments) as part of a bardic performance, he gains a +4 bonus on saving throws against language-dependent, mind-affecting, and sonic effects. If this effect is caused by a fey creature, the luring piper can also roll the saving throw twice and take the better result.
- **Implementation flags:**
  - bardic performance subsystem.

## Parsed source feature headings

- Class Skills
- Fey Secrets
- Luring Presentation (Ex)
- Bardic Performance
- Piper’s Attention (Ex)
