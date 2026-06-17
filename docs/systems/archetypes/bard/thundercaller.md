# Bard - Thundercaller

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Thundercaller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Thundercaller
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bound to the Land (Ex); Bardic Performance
- **Replaced / altered class features:** Bardic Knowledge; Inspire Competence; Suggestion; Mass Suggestion; Dirge of Doom; Frightening Tune

## Implementation details

### Replaces: bardic knowledge

- **Archetype feature:** Bound to the Land (Ex)
- **Description:** A thundercaller gains a bonus equal to half her level on Handle Animal checks, Knowledge (nature) checks, and Survival checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A thundercaller gains a bonus equal to half her level on Handle Animal checks, Knowledge (nature) checks, and Survival checks.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: suggestion and mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** A thundercaller gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 7, 11, 6, 8, 14.
  - **Rules text to implement:** A thundercaller gains the following types of bardic performance. Thunder Call (Su) : At 3rd level, the thundercaller can start a performance to unleash a deafening peal of thunder. This allows the thundercaller to spend a round of performance to create an effect similar to the spell sound burst (having the same range and area and allowing the same saving throw). At 7th level, the sonic damage dealt by this blast of sound increases to 3d8. This damage further increases by 2d8 at 11th level, and every 4 levels thereafter. A creature that succeeds at its saving throw against thunder call is immune to the stunning effect but still takes sonic damage. Beginning this performance is always a standard action. This performance replaces inspire competence. Incite Rage (Su) : At 6th level, the thundercaller can induce a furious rage in one creature within 30 feet. This effect functions as the rage spell and lasts as long as the target can hear the thundercaller’s performance. Any unwilling creature targeted is affected if it fails a Will saving throw (DC = 10 + half the thundercaller’s level + the thundercaller’s Charisma modifier). A target that succeeds at its saving throw is immune to this power for 24 hours. The thundercaller cannot target herself with this ability. If the target has the rage class feature, it can instead immediately rage and stay in this rage without consuming rounds of rage per day as long as the thundercaller continues performing. This performance is a mind-affecting effect and relies on audible components. Call Lightning (Su) : At 8th level, the thundercaller can use her performance to summon bolts of lightning, as per the spell call lightning. The lightning storm lasts for as long as she continues her performance, calling down one bolt of lightning per round as a standard action. The damage of these lightning bolts can be increased in stormy areas or can be limited as call lightning describes. This performance replaces dirge of doom. Call Lightning Storm (Su) : At 14th level, the thundercaller can use her performance to summon bolts of lightning, as per the spell call lightning storm. The lightning storm lasts for as long as she continues her performance, calling down one bolt of lightning per round as a standard action. The damage of these lightning bolts can be increased in stormy areas or can be limited as call lightning describes. This performance replaces frightening tune.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bound to the Land (Ex)
- Bardic Performance
