# Bard - Argent Voice

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Argent Voice
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Argent%20Voice
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Dedicated Performance (Ex)
- **Replaced / altered class features:** Fascinate; Dirge of Doom; Frightening Tune; Versatile Performance

## Implementation details

### Replaces: fascinate

- **Archetype feature:** Bardic Performance
- **Description:** An argent voice gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 4, 20, 6, 18, 8, 14.
  - **Rules text to implement:** An argent voice gains the following bardic performances. The argent voice must use Perform (sing) with these performances. Limning Verse (Su) : At 1st level, the argent voice can sing a song that causes fiends to glow with an aura of silvery light. Outsiders with the evil subtype within 10 feet of the argent voice are affected as per faerie fire. At 4th level and every 4 levels thereafter, the range of this ability increases by 10 feet, to a maximum of 60 feet at 20th level. Any defense that prevents the detection of alignment or evil also prevents limning verse from outlining a creature. Shattering Crescendo (Sp) : At 6th level, the argent voice learns to sing at frequencies capable of shattering magical effects. As a full-round action, an argent voice can use 2 rounds of bardic performance to attempt to dispel a single evil spell or enchantment spell cast by an evil creature. This functions as per dispel magic, using the bard’s level as his caster level. At 18th level, this ability can be used on effects that can be removed by the spell break enchantment. Devilbane Refrain (Su) : At 8th level, the argent voice learns how to mimic aspects of the magical “Song of Silver” with his performance, enhancing his allies’ ability to combat devils and similar fiends. To be affected, a creature must be able to hear the argent voice’s singing and be within 30 feet of him. Natural and manufactured weapons wielded by affected allies are treated as though they were silver for the purpose of bypassing damage reduction. At 14th level, allies’ natural and manufactured weapons also gain the benefit of the evil outsider bane weapon special ability.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: suggestion and mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** An argent voice gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 4, 20, 6, 18, 8, 14.
  - **Rules text to implement:** An argent voice gains the following bardic performances. The argent voice must use Perform (sing) with these performances. Limning Verse (Su) : At 1st level, the argent voice can sing a song that causes fiends to glow with an aura of silvery light. Outsiders with the evil subtype within 10 feet of the argent voice are affected as per faerie fire. At 4th level and every 4 levels thereafter, the range of this ability increases by 10 feet, to a maximum of 60 feet at 20th level. Any defense that prevents the detection of alignment or evil also prevents limning verse from outlining a creature. Shattering Crescendo (Sp) : At 6th level, the argent voice learns to sing at frequencies capable of shattering magical effects. As a full-round action, an argent voice can use 2 rounds of bardic performance to attempt to dispel a single evil spell or enchantment spell cast by an evil creature. This functions as per dispel magic, using the bard’s level as his caster level. At 18th level, this ability can be used on effects that can be removed by the spell break enchantment. Devilbane Refrain (Su) : At 8th level, the argent voice learns how to mimic aspects of the magical “Song of Silver” with his performance, enhancing his allies’ ability to combat devils and similar fiends. To be affected, a creature must be able to hear the argent voice’s singing and be within 30 feet of him. Natural and manufactured weapons wielded by affected allies are treated as though they were silver for the purpose of bypassing damage reduction. At 14th level, allies’ natural and manufactured weapons also gain the benefit of the evil outsider bane weapon special ability.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: dirge of doom and frightening tune

- **Archetype feature:** Bardic Performance
- **Description:** An argent voice gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 4, 20, 6, 18, 8, 14.
  - **Rules text to implement:** An argent voice gains the following bardic performances. The argent voice must use Perform (sing) with these performances. Limning Verse (Su) : At 1st level, the argent voice can sing a song that causes fiends to glow with an aura of silvery light. Outsiders with the evil subtype within 10 feet of the argent voice are affected as per faerie fire. At 4th level and every 4 levels thereafter, the range of this ability increases by 10 feet, to a maximum of 60 feet at 20th level. Any defense that prevents the detection of alignment or evil also prevents limning verse from outlining a creature. Shattering Crescendo (Sp) : At 6th level, the argent voice learns to sing at frequencies capable of shattering magical effects. As a full-round action, an argent voice can use 2 rounds of bardic performance to attempt to dispel a single evil spell or enchantment spell cast by an evil creature. This functions as per dispel magic, using the bard’s level as his caster level. At 18th level, this ability can be used on effects that can be removed by the spell break enchantment. Devilbane Refrain (Su) : At 8th level, the argent voice learns how to mimic aspects of the magical “Song of Silver” with his performance, enhancing his allies’ ability to combat devils and similar fiends. To be affected, a creature must be able to hear the argent voice’s singing and be within 30 feet of him. Natural and manufactured weapons wielded by affected allies are treated as though they were silver for the purpose of bypassing damage reduction. At 14th level, allies’ natural and manufactured weapons also gain the benefit of the evil outsider bane weapon special ability.
- **Implementation flags:**
  - bardic performance subsystem.

### Alters: versatile performance

- **Archetype feature:** Dedicated Performance (Ex)
- **Description:** An argent voice can call upon the training of the Chelish opera to influence and scrutinize his foes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6, 10, 18.
  - **Rules text to implement:** An argent voice can call upon the training of the Chelish opera to influence and scrutinize his foes. At 2nd level, an argent voice must choose Perform (sing) as his versatile performance skill. At 6th level, the argent voice gains a bonus on Perform (sing) checks made as part of a versatile performance equal to the number of additional Perform skills in which he has the maximum number of ranks possible at his level. This bonus increases by 1 per maximized Perform skill at 10th level and every four levels thereafter, to a maximum of a +4 bonus per fully ranked Perform skill other than Perform (sing) at 18th level.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

## Parsed source feature headings

- Bardic Performance
- Dedicated Performance (Ex)
