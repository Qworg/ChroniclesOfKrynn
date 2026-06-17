# Bard - Wit

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Wit
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Wit
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Way with Words (Ex); Counterargument; Bardic Performance; Quick Witted (Ex); On the Ball (Ex); Duel Master (Ex)
- **Replaced / altered class features:** bardic knowledge; inspire competence, dirge of doom, and frightening tune; versatile performance; lore master; jack-of-all-trades

## Implementation details

### Replaces: bardic knowledge

- **Archetype feature:** Way with Words (Ex)
- **Description:** A wit gains a +1 bonus on Bluff, Diplomacy, Intimidate, Linguistics, and Sense Motive checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 20.
  - **Rules text to implement:** A wit gains a +1 bonus on Bluff, Diplomacy, Intimidate, Linguistics, and Sense Motive checks. At 4th level, and every 4 bard levels thereafter, this bonus increases by 1, to a maximum of +6 at 20th level. He also gains a number of edges at the beginning of any verbal duel equal to this bonus.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: countersong

- **Archetype feature:** Counterargument
- **Description:** A wit can use only Perform (act, comedy, or oratory) to perform a countersong.
- **Detailed mechanics:**
  - **Rules text to implement:** A wit can use only Perform (act, comedy, or oratory) to perform a countersong.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: inspire competence, dirge of doom, and frightening tune

- **Archetype feature:** Bardic Performance
- **Description:** A wit gains the following bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 8, 14.
  - **Rules text to implement:** A wit gains the following bardic performance. Cutting Remark (Su) : At 3rd level, a wit can wound with his words. The wit can spend 1 round of bardic performance as a standard action to deal 1d4 points of nonlethal damage + the wit’s bard level to a creature within 30 feet. Damage reduction applies to this damage. At 8th level, a target who takes damage from cutting remark is also sickened for as long as it remains within 30 feet of the wit and for 1 round thereafter. Additionally, the nonlethal damage counts as magic for purposes such as overcoming damage reduction. At 14th level, a target who takes damage from cutting remark must also succeed at a Will save (DC = 10 + 1/2 the wit’s bard level + his Charisma modifier) or be dazed for 1 round. A creature that makes a successful save is immune to the dazing effect of the wit’s cutting remark for 24 hours. Cutting remark is a mind-affecting, language-dependent effect, and relies on audible components.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: versatile performance

- **Archetype feature:** Quick Witted (Ex)
- **Description:** At 2nd level, a wit can always act in a surprise round (though he remains flat-footed until he acts).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a wit can always act in a surprise round (though he remains flat-footed until he acts). In addition, the wit adds half his bard level on initiative checks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: lore master

- **Archetype feature:** On the Ball (Ex)
- **Description:** At 5th level, rather than roll for initiative, the wit can treat his roll as if it was a 10 (adding any modifiers as usual).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 20.
  - **Rules text to implement:** At 5th level, rather than roll for initiative, the wit can treat his roll as if it was a 10 (adding any modifiers as usual). The wit can use this ability once per day at 5th level, and an additional time per day for every 6 bard levels thereafter. At 20th level, when the wit uses this ability, he can instead treat his roll as if it was a 20.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: jack-of-all-trades

- **Archetype feature:** Duel Master (Ex)
- **Description:** At 10th level, the wit does not lose any edges for being at an extreme disadvantage in a verbal duel and can either ask about one additional bias when successfully using Sense Motive to determine an audience’s biases or automatically seed one of the biases that he discovered.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, the wit does not lose any edges for being at an extreme disadvantage in a verbal duel and can either ask about one additional bias when successfully using Sense Motive to determine an audience’s biases or automatically seed one of the biases that he discovered. Once during a verbal duel, he can reassign an appropriate skill from one tactic to another tactic in which he didn’t assign any skills. The original tactic is treated as being unprepared for the rest of the duel.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

## Parsed source feature headings

- Way with Words (Ex)
- Counterargument
- Bardic Performance
- Quick Witted (Ex)
- On the Ball (Ex)
- Duel Master (Ex)
