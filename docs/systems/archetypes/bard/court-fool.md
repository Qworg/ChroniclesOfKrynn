# Bard - Court Fool

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Court Fool
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Court%20Fool
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Buffoonery (Ex); Bardic Performance; Caper and Jeer (Ex)
- **Replaced / altered class features:** lore master

## Implementation details

### Replaces: bardic knowledge

- **Archetype feature:** Buffoonery (Ex)
- **Description:** A court fool gains a bonus equal to 1/2 his bard level on Acrobatics, Bluff, Climb, and Disguise checks (minimum +1).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A court fool gains a bonus equal to 1/2 his bard level on Acrobatics, Bluff, Climb, and Disguise checks (minimum +1).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** A court fool gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 3, 7.
  - **Rules text to implement:** A court fool gains the following types of bardic performance. Distracting Motley (Su) : At 1st level, a court fool can startle his allies back to their senses with erratic capering or by fluttering multicolored clothing. Each round, he attempts an Acrobatics check. Any ally (including the court fool) within 30 feet can use this check in place of her own saving throw against confusion and fascination effects. Those already under a confusion or fascination effect can attempt a new save each round using the court fool’s Acrobatics check. A court fool wearing an entertainer’s outfit gains a +2 bonus on these Acrobatics checks. Distracting motley doesn’t work on effects that don’t allow saves. This is a mind-affecting effect that uses visual components. This performance replaces countersong. Defuse Tension (Su) : At 3rd level, a court fool can use a silly performance to comfort a beleaguered ally. That ally must be within 30 feet and be able to see the court fool. The ally ignores the fatigued and shaken conditions (but not more extreme conditions, such as exhausted or frightened) as long as she continues to see the court fool’s performance. This performance affects one additional creature at 7th level and every 4 bard levels thereafter. A court fool can’t use defuse tension on himself. Defuse tension relies on visual components. This performance replaces inspire competence.
- **Implementation flags:**
  - bardic performance subsystem.
  - feat grant/prerequisite handling.

### Replaces: lore master

- **Archetype feature:** Caper and Jeer (Ex)
- **Description:** At 5th level, a court fool can take 10 on Acrobatics and Bluff checks, even when in danger or distracted, and can use Bluff to create a diversion to hide (as per the Stealth skill) as a swift action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a court fool can take 10 on Acrobatics and Bluff checks, even when in danger or distracted, and can use Bluff to create a diversion to hide (as per the Stealth skill) as a swift action. He can take 20 on an Acrobatics or Bluff check once per day, plus one time per 6 levels beyond 5th, even when in danger or distracted.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

## Parsed source feature headings

- Buffoonery (Ex)
- Bardic Performance
- Caper and Jeer (Ex)
