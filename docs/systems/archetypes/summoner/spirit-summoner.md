# Summoner - Spirit Summoner

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Spirit Summoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Spirit%20Summoner
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spirit (Su); Eidolon; Hex
- **Replaced / altered class features:** summon monster; aspect, maker’s call, merge forms, and transposition

## Replacement details

### Replaces: summon monster

- **Archetype feature:** Spirit (Su)
- **Description:** A spirit summoner forms a mystical bond with one spirit from the shaman class (see page 37).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 9, 17.
  - Mechanics summary: A spirit summoner forms a mystical bond with one spirit from the shaman class (see page 37). He gains the spirit ability of that spirit and uses his summoner level as his shaman level for determining its effects. The spirit summoner can select spells granted by that spirit as summoner spells known, using the shaman level of the spell as the summoner spell level. The summoner cannot select spirit spells that are above 6th level. At 9th level, the summoner gains the abilities listed in the greater version of his selected spirit. At 17th level, the summoner gains the abilities listed for the true version of his selected spirit.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.
  - Needs implementation review: shaman spirit/hex mechanics.

### Alters: the eidolon class feature

- **Archetype feature:** Eidolon
- **Description:** At 1st level, a spirit summoner begins play with a powerful outsider called an eidolon.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a spirit summoner begins play with a powerful outsider called an eidolon. The eidolon’s form and abilities must be appropriate to his chosen spirit, at the GM’s discretion—for example, a summoner with the flame spirit cannot have an eidolon with ice or water abilities, a summoner with a heavens spirit cannot have a fiend-like eidolon, and so on. The summoner can use temporary effects (such as evolution surge APG ) to alter the eidolon into an inappropriate form, but cannot use permanent effects (such as transmogrify APG ) to do so.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, summoner eidolon hook, eidolon evolution hook.

### Replaces: aspect, maker’s call, merge forms, and transposition

- **Archetype feature:** Hex
- **Description:** At 6th level, a spirit summoner can select a shaman hex that is appropriate to his spirit, chosen from the general list of shaman hexes or the specific hexes allowed by his spirit.
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a spirit summoner can select a shaman hex that is appropriate to his spirit, chosen from the general list of shaman hexes or the specific hexes allowed by his spirit. This otherwise functions as a shaman’s hex, and uses his summoner level as his shaman level. Like a shaman, a spirit summoner uses his Wisdom modifier to determine hex DCs. At 8th, 10th, and 16th levels, the summoner can select another hex.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.
  - Needs implementation review: shaman spirit/hex mechanics, witch/shaman hex mechanics.

## Parsed source feature headings

- Spirit (Su)
- Eidolon
- Hex

