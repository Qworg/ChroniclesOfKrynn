# Summoner - Twinned Summoner

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Twinned Summoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Twinned%20Summoner
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Twinned Eidolon; Teamwork Feats (Ex); Twinned Transposition (Su); Twin Summoner (Su)
- **Replaced / altered class features:** shield ally and greater shield ally; maker’s call and transposition; the merge forms class feature

## Replacement details

### Replaces: shield ally and greater shield ally

- **Archetype feature:** Teamwork Feats (Ex)
- **Description:** At 4th level and at 12th level, a twinned summoner gains a bonus teamwork feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 12.
  - Mechanics summary: At 4th level and at 12th level, a twinned summoner gains a bonus teamwork feat. He must meet the prerequisites of the selected teamwork feat. The twinned summoner automatically grants all of his teamwork feats to his eidolon. The eidolon doesn’t need to meet the prerequisites of these teamwork feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, summoner eidolon hook.

### Replaces: maker’s call and transposition

- **Archetype feature:** Twinned Transposition (Su)
- **Description:** At 6th level, as a standard action, a twinned summoner can swap locations with his eidolon as if each were using dimension door , using the twinned summoner’s caster level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 8.
  - Mechanics summary: At 6th level, as a standard action, a twinned summoner can swap locations with his eidolon as if each were using dimension door , using the twinned summoner’s caster level. If the eidolon is out of range, the ability is wasted. If either the twinned summoner or his eidolon occupies more squares than the other, each must occupy one or more squares that were occupied by the other if possible, or as close as possible if not. The twinned summoner can use this ability once per day at 6th level, plus one additional time per day for every 4 levels beyond 6th. At 8th level, he can use this ability as a swift action.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook.

### Replaces: the merge forms class feature

- **Archetype feature:** Twin Summoner (Su)
- **Description:** At 16th level, a twinned summoner can touch his eidolon as a standard action, enhancing its similarity to the summoner.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 16.
  - Mechanics summary: At 16th level, a twinned summoner can touch his eidolon as a standard action, enhancing its similarity to the summoner. The eidolon loses any natural weapons or size increases gained from evolutions, and its Intelligence, Wisdom, and Charisma scores change to match the base scores of the summoner. The eidolon can cast any of the summoner’s spells known using the summoner’s caster level and spell slots. It doesn’t gain the benefit of any of the summoner’s items, feats, or other effects that affect spellcasting. The eidolon can keep this form for a number of minutes per day equal to the summoner’s class level. This duration does not need to be consecutive, but it must be spent in 1-minute increments.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, summoner eidolon hook, eidolon evolution hook.

## Parsed source feature headings

- Twinned Eidolon
- Teamwork Feats (Ex)
- Twinned Transposition (Su)
- Twin Summoner (Su)

