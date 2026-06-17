# Bard - Chelish Diva

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Chelish Diva
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Chelish%20Diva
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Famous; Prima Donna (Ex); Costume Proficiency (Ex); Bardic Performance
- **Replaced / altered class features:** bardic knowledge; well-versed; lore master

## Implementation details

### Replaces: bardic knowledge

- **Archetype feature:** Famous
- **Description:** At 1st level, a Chelish diva may choose a region where she is famous, and within that region, the locals are more likely to react favorably toward her.
- **Detailed mechanics:**
  - **Level hooks:** 1, 5, 9, 13, 17.
  - **Rules text to implement:** At 1st level, a Chelish diva may choose a region where she is famous, and within that region, the locals are more likely to react favorably toward her. The bard gains a bonus on Bluff and Intimidate checks in that area and to influence people from that area. At 1st level, this region is a settlement or settlements with a total population of 1,000 or fewer people, and the modifier on Bluff and Intimidate checks is +1. As the diva grows more famous, additional areas learn of her (typically places where she has lived or traveled, or settlements adjacent to those where she is known) and her bonuses apply to even more people. At 5th level, the region is a settlement or settlements with a total population of 5,000 or fewer people, and the modifier on Bluff and Intimidate checks is +2. At 9th level, the region is a settlement or settlements with a total population of up to 25,000 people, and the modifier on Bluff and Intimidate checks is +3. At 13th level, the region is a settlement or settlements with a total population of up to 100,000 people, and the modifier to Bluff and Intimidate is +4. At 17th level and above, the diva’s renown has spread far, and most civilized folk know of her (GM’s discretion); the diva’s modifier on Diplomacy and Intimidate checks is +5.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: well-versed

- **Archetype feature:** Prima Donna (Ex)
- **Description:** At 2nd level, as her efforts to outdo her rivals increase, a Chelish diva can spend additional rounds of bardic performance to augment countersong, deadly performance, fascinate, frightening tune, and scathing tirade (see below).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, as her efforts to outdo her rivals increase, a Chelish diva can spend additional rounds of bardic performance to augment countersong, deadly performance, fascinate, frightening tune, and scathing tirade (see below). When used, this ability gives her a +2 bonus on her Perform check or saving throw DC for those performances. The diva must spend an additional round of bardic performance for every round she uses prima donna to increase her Perform check result or saving throw DC.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: lore master

- **Archetype feature:** Costume Proficiency (Ex)
- **Description:** At 5th level, the Chelish diva has become so used to wearing strange and cumbersome costumes for her performances that she gains medium armor proficiency and can cast bard spells while wearing medium armor without incurring the normal arcane spell failure chance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5, 11.
  - **Rules text to implement:** At 5th level, the Chelish diva has become so used to wearing strange and cumbersome costumes for her performances that she gains medium armor proficiency and can cast bard spells while wearing medium armor without incurring the normal arcane spell failure chance. At 11th level, she gains heavy armor proficiency and can cast bard spells while wearing heavy armor without incurring the normal arcane spell failure chance. A multiclassed diva still incurs the normal arcane spell failure chance for arcane spells received from other classes.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** A Chelish diva gains the following bardic performances.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 8.
  - **Rules text to implement:** A Chelish diva gains the following bardic performances. This can never be performed more quickly than a standard action. Devastating Aria (Su) : At 3rd level, the Chelish diva can spend 1 round of bardic performance as a standard action to direct a burst of sonically charged words at a creature or object. This performance deals 1d4 points of damage + the diva’s level to an object, or half this damage to a living creature. This performance replaces inspire competence. Scathing Tirade (Su) : A Chelish diva of 8th level or higher can use her performance to verbally lash out at another creature, causing it to become frightened. To be affected, the target enemy must be within 30 feet and be able to see and hear the diva’s performance. The effect persists for as long as the enemy is within 30 feet and the diva continues her performance, plus 1d4 rounds. Although the diva can only direct the effect at one creature at a time, its effects persist for as long as she continues the performance, even if directed at a different creature. For example, she could direct her tirade at an innkeeper, who becomes frightened, then focus her wrath on the captain of the guard, and the innkeeper remains frightened for 1d4 more rounds even though her attention is no longer directed at him. This performance cannot cause a creature to become panicked, even if the target is already frightened from another effect. Scathing tirade is a mind-affecting fear effect, and it relies on audible and visual components. This performance replaces dirge of doom.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Famous
- Prima Donna (Ex)
- Costume Proficiency (Ex)
- Bardic Performance
