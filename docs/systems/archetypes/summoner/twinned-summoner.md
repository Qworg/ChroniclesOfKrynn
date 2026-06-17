# Summoner - Twinned Summoner

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Twinned Summoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Twinned%20Summoner
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Twinned Eidolon; Teamwork Feats (Ex); Twinned Transposition (Su); Twin Summoner (Su)
- **Replaced / altered class features:** shield ally and greater shield ally; maker’s call and transposition; the merge forms class feature

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Twinned Eidolon
- **Description:** The twinned summoner’s eidolon is restricted to the biped base form.
- **Detailed mechanics:**
  - **Rules text to implement:** The twinned summoner’s eidolon is restricted to the biped base form. An unchained summoner’s eidolon is instead restricted to the twinned eidolon subtype (see below). If the summoner’s natural size is smaller than Medium, the twinned summoner’s eidolon must be Small. This ability may require a different base form or subtype to match the twinned summoner’s natural form, at the GM’s discretion, if the twinned summoner is not a bipedal creature.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: shield ally and greater shield ally

- **Archetype feature:** Teamwork Feats (Ex)
- **Description:** At 4th level and at 12th level, a twinned summoner gains a bonus teamwork feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 12.
  - **Rules text to implement:** At 4th level and at 12th level, a twinned summoner gains a bonus teamwork feat. He must meet the prerequisites of the selected teamwork feat. The twinned summoner automatically grants all of his teamwork feats to his eidolon. The eidolon doesn’t need to meet the prerequisites of these teamwork feats.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: maker’s call and transposition

- **Archetype feature:** Twinned Transposition (Su)
- **Description:** At 6th level, as a standard action, a twinned summoner can swap locations with his eidolon as if each were using dimension door, using the twinned summoner’s caster level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 8.
  - **Rules text to implement:** At 6th level, as a standard action, a twinned summoner can swap locations with his eidolon as if each were using dimension door, using the twinned summoner’s caster level. If the eidolon is out of range, the ability is wasted. If either the twinned summoner or his eidolon occupies more squares than the other, each must occupy one or more squares that were occupied by the other if possible, or as close as possible if not. The twinned summoner can use this ability once per day at 6th level, plus one additional time per day for every 4 levels beyond 6th. At 8th level, he can use this ability as a swift action.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

### Replaces: the merge forms class feature

- **Archetype feature:** Twin Summoner (Su)
- **Description:** At 16th level, a twinned summoner can touch his eidolon as a standard action, enhancing its similarity to the summoner.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 16.
  - **Rules text to implement:** At 16th level, a twinned summoner can touch his eidolon as a standard action, enhancing its similarity to the summoner. The eidolon loses any natural weapons or size increases gained from evolutions, and its Intelligence, Wisdom, and Charisma scores change to match the base scores of the summoner. The eidolon can cast any of the summoner’s spells known using the summoner’s caster level and spell slots. It doesn’t gain the benefit of any of the summoner’s items, feats, or other effects that affect spellcasting. The eidolon can keep this form for a number of minutes per day equal to the summoner’s class level. This duration does not need to be consecutive, but it must be spent in 1-minute increments. The summoner can end this effect as a free action.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Twinned Eidolon
- Teamwork Feats (Ex)
- Twinned Transposition (Su)
- Twin Summoner (Su)
