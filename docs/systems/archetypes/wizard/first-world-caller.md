# Wizard - First World Caller

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** First World Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20First%20World%20Caller
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Fey Familiar; Fey Summoner; Warp Reality (Su)
- **Replaced / altered class features:** Arcane Bond; Arcane School; Scribe Scroll; 10th, 15th-level Bonus Feats

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Fey Familiar
- **Description:** The archetype's familiar is recast as a fey-touched companion with reduced baseline defenses and later flight.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1, 10
  - Action/timing: Passive bond formed at character creation; wing upgrade applies automatically at 10th level
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard must choose a familiar for arcane bond.
    - The familiar counts as both animal and fey for type-dependent effects.
    - It gains only half the normal familiar natural-armor bonus from wizard level, rounded down and never below 0.
    - It no longer grants its special familiar ability to the wizard.
    - Instead, it gains the fey-touched creature template.
    - At 10th level, it gains gossamer wings and a fly speed equal to its land speed with average maneuverability.
  - Scaling: Flight is added at 10th level.
  - Interactions: The template alters the familiar's stat block, while normal familiar systems still apply unless the template says otherwise.
  - Edge cases: Halve the natural-armor table before applying the result; at 1st level that often means +0 armor.
  - Implementation flags:
    - Likely existing hooks: familiar-type override, halved natural-armor table, special-ability-to-master suppression, template attachment, flight addition at 10th level.

### Replaces: arcane school and Scribe Scroll

- **Archetype feature:** Fey Summoner
- **Description:** The wizard gains Augment Summoning and expands summon monster with fey creatures for personal casts.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive list expansion whenever the wizard personally casts summon monster
  - Duration: Per each summon monster spell's duration
  - Uses: Normal summon monster spell slots or other personal summon monster effects
  - Core function:
    - Gain Augment Summoning as a bonus feat at 1st level.
    - Add fey creatures to the summon monster list at matching spell tiers, including grimple, mite, and sprite at 1st level; atomie, fuath, and nixie at 2nd; leprechaun, nuglub, and pooka at 3rd; kelpie, korred, and twigjack at 4th; lampad, lurker in light, and swan maiden at 5th; cold rider, oceanid, and sangoi at 6th; alp at 7th; and any other creatures specified by the archetype source.
    - The expanded list applies when the wizard personally casts summon monster or triggers that spell through the wizard's own effects.
    - Magic items created by the wizard do not pass this expanded list to other users.
  - Scaling: New summon options come online with each summon monster tier as the wizard gains access to those spell levels.
  - Interactions: Augment Summoning and other summon-boosting effects apply normally to the added fey creatures.
  - Edge cases: If another creature uses a summon monster scroll or wand created by the wizard, it uses the ordinary list rather than the expanded fey list.
  - Implementation flags:
    - Likely existing hooks: bonus feat grant, extended summon monster creature list, personal-casting limitation on list expansion.

### Replaces: bonus feats at 10th and 15th level

- **Archetype feature:** Warp Reality (Su)
- **Description:** High-level spell slots can briefly impose First World-style planar traits on a nearby area.
- **Mechanics:**
  - Type: Su
  - Level hooks: 10, 15
  - Action/timing: Standard action
  - Duration: 2d4 minutes
  - Uses: No daily cap; each use consumes a qualifying spell slot and requires a Charisma check
  - Core function:
    - At 10th level, expend a 5th-level or higher spell slot and succeed at a DC 15 Charisma check to impose one planar trait in a 60-foot radius.
    - The 10th-level trait menu includes normal gravity, heavy gravity, light gravity, mildly aligned chaos, mildly aligned evil, mildly aligned good, mildly aligned law, enhanced magic, and impeded magic.
    - At 15th level, expend a 7th-level or higher spell slot and succeed at a DC 20 Charisma check to impose either two traits from the basic list or one stronger trait.
    - The stronger 15th-level options are no gravity, subjective directional gravity, erratic time, fire-dominant, water-dominant, negative-dominant, positive-dominant, and wild magic.
  - Scaling: Access expands at 15th level from one basic trait to either two basic traits or one advanced trait.
  - Interactions: The spell slot is spent even if the Charisma check fails unless a broader engine rule says otherwise.
  - Edge cases: Campaign-specific bans on certain planar traits, such as erratic time, should be treated as table rules rather than core archetype logic.
  - Implementation flags:
    - Likely existing hooks: spell-slot sacrifice, area planar-trait override, duration timer, Charisma ability check.
    - Unsupported / review needed: planar-trait subsystem, especially gravity, time, and magic-trait area effects.

## Parsed source feature headings

- Fey Familiar
- Fey Summoner
- Warp Reality (Su)
