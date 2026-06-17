# Wizard - Siege Mage

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Siege Mage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Siege%20Mage
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Siege Engineer; Siege Engine Bond (Su); Empower Siege Engine (Su); Siege School
- **Replaced / altered class features:** scribe scroll; arcane bond; cantrips, but the siege mage gains the detect magic and read magic cantrips and places them in his spellbook; arcane school

## Replacement details

### Replaces: Scribe Scroll

- **Archetype feature:** Siege Engineer
- **Description:** The wizard begins with formal siege training instead of scroll crafting.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive feat grant
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain Siege Engineer as a bonus feat at 1st level without meeting its prerequisites.
  - Scaling: None
  - Interactions: The feat applies normally to siege engine operation.
  - Edge cases: None beyond the broader siege subsystem.
  - Implementation flags:
    - Likely existing hooks: bonus feat grant with waived prerequisites.
    - Unsupported / review needed: siege engine subsystem.

### Replaces: arcane bond

- **Archetype feature:** Siege Engine Bond (Su)
- **Description:** The wizard can form a temporary bond with one nearby siege engine and later operate it without a crew.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1, 10
  - Action/timing: Standard action to form the bond; operation uses the bonded siege engine's normal action economy
  - Duration: Bond lasts until ended as a free action
  - Uses: Intelligence modifier times per day, minimum 1; only one active bond at a time
  - Core function:
    - Bond with one siege engine within 30 feet and line of sight as a standard action.
    - While bonded and within 30 feet, remotely aim and fire that siege engine.
    - Reloading still requires a crew until 10th level.
    - At 10th level, the wizard can reload, aim, and fire entirely through the bond without outside crew.
    - Ending the bond is a free action, but each new bond formation expends one daily use.
  - Scaling: The 10th-level upgrade removes the crew requirement.
  - Interactions: The wizard must stay within 30 feet to use the remote operation feature.
  - Edge cases: The daily limit counts the number of bonds formed, not time spent bonded.
  - Implementation flags:
    - Likely existing hooks: range-limited remote siege engine control, daily-use counter, crew-requirement override at 10th level.
    - Unsupported / review needed: siege engine subsystem integration.

### Replaces: cantrips (retains detect magic and read magic)

- **Archetype feature:** Empower Siege Engine (Su)
- **Description:** Prepared spells can be fed into a bonded siege engine to make its next shot more accurate and more destructive.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Swift action declared before the siege engine attack
  - Duration: Applies to the next bonded siege-engine attack before end of turn
  - Uses: Any prepared spell may be sacrificed; no separate daily cap
  - Core function:
    - Sacrifice a prepared spell as a swift action.
    - Add the spell's level to the next attack or targeting roll made through the bonded siege engine that turn.
    - Add three times the spell's level to that attack's damage.
    - Detect magic and read magic remain available and are entered in the spellbook as 1st-level spells.
  - Scaling: Attack and damage bonuses scale directly with the level of the spent spell.
  - Interactions: Requires an active Siege Engine Bond.
  - Edge cases: If no bonded siege-engine attack is made before the turn ends, the spell is wasted.
  - Implementation flags:
    - Likely existing hooks: swift-action spell sacrifice, numeric bonus to siege-engine attack and damage.
    - Unsupported / review needed: siege engine subsystem.

### Replaces: arcane school

- **Archetype feature:** Siege School
- **Description:** The siege mage abandons specialization for a three-school opposition package.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build-time choice
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choose three opposition schools at 1st level.
    - Those choices are permanent.
    - Preparing an opposition-school spell costs two spell slots of the same level.
    - Take a -4 penalty on checks to craft magic items that require an opposition-school spell.
    - Gain no school powers or bonus school spell slots.
  - Scaling: None
  - Interactions: This mirrors other no-school archetypes but with three forbidden schools instead of the more common two.
  - Edge cases: The penalty applies to the crafting check, not to material cost.
  - Implementation flags:
    - Likely existing hooks: opposition-school selection, doubled-slot preparation, crafting skill penalty.

## Parsed source feature headings

- Siege Engineer
- Siege Engine Bond (Su)
- Empower Siege Engine (Su)
- Siege School
