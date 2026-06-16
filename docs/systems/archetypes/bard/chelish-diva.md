# Bard - Chelish Diva

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Chelish Diva
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Chelish%20Diva
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Famous; Prima Donna (Ex); Costume Proficiency (Ex); Bardic Performance
- **Replaced / altered class features:** bardic knowledge; well-versed; lore master

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Famous
- **Description:** At 1st level, a Chelish diva may choose a region where she is famous, and within that region, the locals are more likely to react favorably toward her.
- **Mechanics:**
  - Level hooks: 1, 5, 9, 13, 17.
  - Mechanics summary: At 1st level, a Chelish diva may choose a region where she is famous, and within that region, the locals are more likely to react favorably toward her. The bard gains a bonus on Bluff and Intimidate checks in that area and to influence people from that area. At 1st level, this region is a settlement or settlements with a total population of 1,000 or fewer people, and the modifier on Bluff and Intimidate checks is +1. As the diva grows more famous, additional areas learn of her (typically places where she has lived or traveled, or settlements adjacent to those where she is known) and her bonuses apply to even more people. At 5th level, the region is a settlement or settlements with a total population of 5,000 or fewer people, and the modifier on Bluff and Intimidate checks is +2. At 9th level, the region is a settlement or settlements with a total population of up to 25,000 people, and the modifier on Bluff and Intimidate checks is +3.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: well-versed

- **Archetype feature:** Prima Donna (Ex)
- **Description:** At 2nd level, as her efforts to outdo her rivals increase, a Chelish diva can spend additional rounds of bardic performance to augment countersong, deadly performance, fascinate, frightening tune, and scathing tirade (see below).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, as her efforts to outdo her rivals increase, a Chelish diva can spend additional rounds of bardic performance to augment countersong, deadly performance, fascinate, frightening tune, and scathing tirade (see below). When used, this ability gives her a +2 bonus on her Perform check or saving throw DC for those performances. The diva must spend an additional round of bardic performance for every round she uses prima donna to increase her Perform check result or saving throw DC.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, bardic performance hook.

### Replaces: lore master

- **Archetype feature:** Costume Proficiency (Ex)
- **Description:** At 5th level, the Chelish diva has become so used to wearing strange and cumbersome costumes for her performances that she gains medium armor proficiency and can cast bard spells while wearing medium armor without incurring the normal arcane spell failure chance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 11.
  - Mechanics summary: At 5th level, the Chelish diva has become so used to wearing strange and cumbersome costumes for her performances that she gains medium armor proficiency and can cast bard spells while wearing medium armor without incurring the normal arcane spell failure chance. At 11th level, she gains heavy armor proficiency and can cast bard spells while wearing heavy armor without incurring the normal arcane spell failure chance. A multiclassed diva still incurs the normal arcane spell failure chance for arcane spells received from other classes.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Famous
- Prima Donna (Ex)
- Costume Proficiency (Ex)
- Bardic Performance

