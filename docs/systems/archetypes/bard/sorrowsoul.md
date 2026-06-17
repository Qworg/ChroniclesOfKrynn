# Bard - Sorrowsoul

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Sorrowsoul
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Sorrowsoul
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Lyric Sorrow (Su); Darkness Denied (Ex); Spurn Harm (Su)
- **Replaced / altered class features:** well-versed; lore master

## Implementation details

### Alters: bardic performance and replaces soothing performance and versatile performance

- **Archetype feature:** Lyric Sorrow (Su)
- **Description:** A sorrowsoul draws upon grief, rage, and tragedy to fuel his bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 5, 17, 12, 15.
  - **Rules text to implement:** A sorrowsoul draws upon grief, rage, and tragedy to fuel his bardic performances. When a sorrowsoul begins a bardic performance, he can choose to alter its effects with lyric sorrow. If he does so, he uses twice the number of rounds of his bardic performance ability as normal, and even if the sorrowsoul has the Lingering Performance feat, the performance’s effects do not last for any additional rounds. At 1st level, a sorrowsoul can use his lyric sorrow in conjunction with inspire courage. When he chooses to do so, he increases his bonuses on saving throws and on weapon attack and damage rolls from +1 to +2, but his other allies receive no benefit. His bonuses when using lyric sorrow with inspire courage increase by 2 at 5th level and every 6 bard levels thereafter, to a maximum of +8 at 17th level. At 12th level, a sorrowsoul can use his lyric sorrow ability in conjunction with inspire greatness to grant himself 3 bonus Hit Dice, a +3 competence bonus on attack rolls, and a +2 competence bonus on Fortitude saves; if he does so, inspire greatness only affects him, not any other allies. At 15th level, a sorrowsoul can use his lyric sorrow ability in conjunction with the inspire heroics bardic performance. When using the lyric sorrow version of this performance, a sorrowsoul gains fast healing 5 and benefits from a 50% miss chance, as if under the effects of displacement, in addition to the standard bonuses conferred by this bardic performance, but if he does so, inspire heroics only affects him, not any other allies.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: well-versed

- **Archetype feature:** Darkness Denied (Ex)
- **Description:** At 2nd level, a sorrowsoul gains a +4 bonus on saving throws against negative energy and death effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a sorrowsoul gains a +4 bonus on saving throws against negative energy and death effects.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: lore master

- **Archetype feature:** Spurn Harm (Su)
- **Description:** A sorrowsoul can funnel his bardic powers to persevere in the face of seemingly certain death.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 11, 17.
  - **Rules text to implement:** A sorrowsoul can funnel his bardic powers to persevere in the face of seemingly certain death. At 5th level, a sorrowsoul can spend 3 rounds of his daily bardic performance as an immediate action to gain a +2 insight bonus on all saving throws for 1 round. At 11th level, a sorrowsoul also gains spell resistance equal to 11 + his bard level when using this ability. At 17th level, a sorrowsoul also gains DR 10/— when using this ability.
- **Implementation flags:**
  - bardic performance subsystem.

## Parsed source feature headings

- Lyric Sorrow (Su)
- Darkness Denied (Ex)
- Spurn Harm (Su)
