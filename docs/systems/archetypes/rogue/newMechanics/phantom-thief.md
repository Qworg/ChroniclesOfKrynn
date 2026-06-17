# Rogue - Phantom Thief

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Phantom Thief
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Phantom%20Thief
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Refined Education (Ex); Broad Education (Ex); Social Sense (Ex); Master of All (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trap sense; master strike

## Implementation details

### Alters: the rogue’s class skills and replaces sneak attack and trapfinding

- **Archetype feature:** Refined Education (Ex)
- **Description:** A phantom thief adds Handle Animal, Heal, Ride, Spellcraft, Survival, and all Knowledge skills to her list of class skills.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 4, 7.
  - **Rules text to implement:** A phantom thief adds Handle Animal, Heal, Ride, Spellcraft, Survival, and all Knowledge skills to her list of class skills. Furthermore, she selects one of her rogue class skills and adds half her rogue level on all skill checks using that skill. At 3rd level and every 2 rogue levels thereafter, she selects an additional rogue class skill and adds half her rogue level on all skill checks using that skill as well. Starting at 4th level, if the phantom thief is an unchained rogue, she gains rogue’s edge skill unlocks with each of these skills rather than selecting one skill every 5 levels, and she adds half her rogue level to her number of ranks to determine when she receives a skill unlock (so a 7th level rogue (phantom thief ) with 7 ranks in a chosen skill would count as having 10 ranks and receive the second skill unlock). For an unchained rogue, it also alters rogue’s edge and replaces debilitating injury.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - skill/class-skill modification.

### Alters: rogue talent

- **Archetype feature:** Broad Education (Ex)
- **Description:** A phantom thief ’s broad studies with expensive tutors keep her up to speed in both martial and magical knowledge, as well as in her skills.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A phantom thief ’s broad studies with expensive tutors keep her up to speed in both martial and magical knowledge, as well as in her skills. She can select the combat trick, minor magic, and major magic rogue talents as many times as she likes, and she can select the Skill Focus feat as a rogue talent, also as many times as she likes. Finally, she can select a vigilante social talent instead of a rogue talent, except for social grace and vigilante social talents that would require her to be a craftsman or professional. For the purpose of vigilante social talents, a phantom thief does not have a vigilante identity and is always considered to be in her social identity.
- **Implementation flags:**
  - ki subsystem.
  - vigilante identity subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: trap sense

- **Archetype feature:** Social Sense (Ex)
- **Description:** At 3rd level, a phantom thief ’s social sixth sense allows her to avoid danger in social situations and to act first when it breaks out.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a phantom thief ’s social sixth sense allows her to avoid danger in social situations and to act first when it breaks out. She receives a +1 bonus on Sense Motive checks to avoid being surprised by a foe, on Bluff checks to surprise a foe, and on initiative checks for surprise rounds that involved Bluff and Sense Motive checks to determine surprise. This bonus increases by 1 at 3rd level and every 3 rogue levels thereafter.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: master strike

- **Archetype feature:** Master of All (Ex)
- **Description:** At 20th level, a phantom thief can reroll any skill check as long as it is a class skill in which she is trained.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a phantom thief can reroll any skill check as long as it is a class skill in which she is trained. She must take the second result, even if it is worse. She can use this ability no more than once per minute.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the phantom thief archetype: combat trick, major magic, minor magic (as well as certainty for an unchained rogue).
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the phantom thief archetype: combat trick, major magic, minor magic (as well as certainty for an unchained rogue).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the phantom thief archetype: feat, hidden mind, rumormonger UC, and skill mastery (as well as cutting edge for an unchained rogue).
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the phantom thief archetype: feat, hidden mind, rumormonger UC, and skill mastery (as well as cutting edge for an unchained rogue).
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Refined Education (Ex)
- Broad Education (Ex)
- Social Sense (Ex)
- Master of All (Ex)
- Rogue Talents
- Advanced Talents
