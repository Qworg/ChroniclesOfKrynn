# Rogue - Phantom Thief

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Phantom Thief
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Phantom%20Thief
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Refined Education (Ex); Broad Education (Ex); Social Sense (Ex); Master of All (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trap sense; master strike

## Replacement details

### Alters: the rogue’s class skills and replaces sneak attack and trapfinding

- **Archetype feature:** Refined Education (Ex)
- **Description:** A phantom thief adds Handle Animal, Heal, Ride, Spellcraft, Survival, and all Knowledge skills to her list of class skills.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 4, 7.
  - Mechanics summary: A phantom thief adds Handle Animal, Heal, Ride, Spellcraft, Survival, and all Knowledge skills to her list of class skills. Furthermore, she selects one of her rogue class skills and adds half her rogue level on all skill checks using that skill. At 3rd level and every 2 rogue levels thereafter, she selects an additional rogue class skill and adds half her rogue level on all skill checks using that skill as well. Starting at 4th level, if the phantom thief is an unchained rogue, she gains rogue’s edge skill unlocks with each of these skills rather than selecting one skill every 5 levels, and she adds half her rogue level to her number of ranks to determine when she receives a skill unlock (so a 7th level rogue (phantom thief ) with 7 ranks in a chosen skill would count as having 10 r...
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, sneak attack hook, ki/monk hook.
  - Needs implementation review: spiritualist phantom mechanics.

### Alters: rogue talent

- **Archetype feature:** Broad Education (Ex)
- **Description:** A phantom thief ’s broad studies with expensive tutors keep her up to speed in both martial and magical knowledge, as well as in her skills.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A phantom thief ’s broad studies with expensive tutors keep her up to speed in both martial and magical knowledge, as well as in her skills. She can select the combat trick, minor magic, and major magic rogue talents as many times as she likes, and she can select the Skill Focus feat as a rogue talent, also as many times as she likes. Finally, she can select a vigilante social talent instead of a rogue talent, except for social grace and vigilante social talents that would require her to be a craftsman or professional.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, ki/monk hook.
  - Needs implementation review: spiritualist phantom mechanics, vigilante identity/social-talent mechanics.

### Replaces: trap sense

- **Archetype feature:** Social Sense (Ex)
- **Description:** At 3rd level, a phantom thief ’s social sixth sense allows her to avoid danger in social situations and to act first when it breaks out.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a phantom thief ’s social sixth sense allows her to avoid danger in social situations and to act first when it breaks out. She receives a +1 bonus on Sense Motive checks to avoid being surprised by a foe, on Bluff checks to surprise a foe, and on initiative checks for surprise rounds that involved Bluff and Sense Motive checks to determine surprise. This bonus increases by 1 at 3rd level and every 3 rogue levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.
  - Needs implementation review: spiritualist phantom mechanics.

### Replaces: master strike

- **Archetype feature:** Master of All (Ex)
- **Description:** At 20th level, a phantom thief can reroll any skill check as long as it is a class skill in which she is trained.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a phantom thief can reroll any skill check as long as it is a class skill in which she is trained. She must take the second result, even if it is worse. She can use this ability no more than once per minute.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.
  - Needs implementation review: spiritualist phantom mechanics.

## Parsed source feature headings

- Refined Education (Ex)
- Broad Education (Ex)
- Social Sense (Ex)
- Master of All (Ex)
- Rogue Talents
- Advanced Talents

