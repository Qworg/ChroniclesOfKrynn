# Wizard - Wind Listener

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Wind Listener
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Wind%20Listener
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Arcane School; Spontaneous Divination (Su); Abjuration Sense (Ex); Wispy Form (Ex); Listening to the Wind (Sp)
- **Replaced / altered class features:** arcane bond; the bonus feat gained at 5th level; the bonus feat gained at 10th level; the bonus feat gained at 15th level

## Replacement details

### Alters: wizard class skills

- **Archetype feature:** Class Skills
- **Description:** The wizard becomes more perceptive than the base class.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Add Perception as a class skill.
    - All other wizard class skills stay on the list.
    - The normal class-skill bonus applies once the wizard invests ranks.
  - Scaling: None
  - Interactions: Other wizard class skills remain unchanged.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: class-skill addition.

### Alters: arcane school

- **Archetype feature:** Arcane School
- **Description:** The archetype is locked to divination.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build restriction
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard must specialize in divination.
    - Other specialist-school choices are not available with this archetype.
    - Later replacement powers overwrite divination school abilities rather than stacking beside them.
  - Scaling: None
  - Interactions: Normal divination-school rules still apply except where later features replace them.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: divination school lock.

### Replaces: arcane bond

- **Archetype feature:** Spontaneous Divination (Su)
- **Description:** Any prepared non-cantrip spell can be traded for a known divination spell, but the cast time slows down.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Full-round action minimum; if the target divination already takes longer, keep the longer casting time
  - Duration: Per the substituted divination spell's normal duration
  - Uses: Sacrifice a prepared non-cantrip spell of matching or higher level; no separate daily cap
  - Core function:
    - Expend any prepared non-cantrip spell to cast a divination spell from the wizard's spellbook of equal or lower level.
    - The spontaneous divination takes at least a full-round action.
  - Scaling: None
  - Interactions: The wizard must actually know the target divination spell through spellbook access.
  - Edge cases: Temporary access to a spell through a scroll or similar source does not qualify unless the spell has been copied into the spellbook.
  - Implementation flags:
    - Likely existing hooks: spontaneous-casting substitution restricted to divination school, full-round casting-time floor.

### Replaces: the 5th-level wizard bonus feat

- **Archetype feature:** Abjuration Sense (Ex)
- **Description:** The wind-listener becomes especially good at noticing and identifying abjuration magic.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 5
  - Action/timing: Passive
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Add half wizard level on Perception checks to notice abjuration spells.
    - Add the same half-level bonus on Spellcraft checks to identify abjuration effects, spells, and magic items.
  - Scaling: The bonus rises automatically with wizard level.
  - Interactions: The benefit applies only to abjuration detection and identification.
  - Edge cases: It does not help with saving throws against abjuration effects.
  - Implementation flags:
    - Likely existing hooks: half-level bonus to Perception and Spellcraft conditioned on abjuration content.

### Replaces: the 10th-level wizard bonus feat

- **Archetype feature:** Wispy Form (Ex)
- **Description:** The wizard can become airy, partially insubstantial, and hard to pin down for a limited pool of rounds each day.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 10
  - Action/timing: Standard action to activate; free action to end
  - Duration: Up to wizard level rounds per day, nonconsecutive
  - Uses: Round pool per day equal to wizard level
  - Core function:
    - Gain DR 10/magic while the form is active.
    - Gain greater invisibility while the form is active.
    - Turn the effect on and off until the daily round pool is spent.
  - Scaling: The total available rounds increase with wizard level.
  - Interactions: Greater invisibility follows its normal combat and stealth rules.
  - Edge cases: The form ends immediately if the daily round pool reaches 0.
  - Implementation flags:
    - Likely existing hooks: round-pool activation, DR 10/magic, greater invisibility effect.

### Replaces: the 15th-level wizard bonus feat

- **Archetype feature:** Listening to the Wind (Sp)
- **Description:** Air spirits can be sent to gather lore like legend lore while the wizard continues acting normally.
- **Mechanics:**
  - Type: Sp
  - Level hooks: 15
  - Action/timing: 10 minutes of uninterrupted concentration to begin; afterward the wizard can act freely; dismiss as a standard action
  - Duration: One investigation at a time; return timing matches legend lore's normal information-gathering timetable
  - Uses: 1/week
  - Core function:
    - Invoke air spirits over 10 minutes to research a legendary person, place, or thing as legend lore.
    - Once the spirits are sent, the wizard does not need to keep concentrating.
    - The time before information returns matches whatever legend lore would normally require in that situation.
    - The spirits can be dismissed early as a standard action.
    - Only one such search can be active at a time.
  - Scaling: None
  - Interactions: Use wizard level as caster level for the legend lore effect.
  - Edge cases: Dismissing the spirits early produces no partial result.
  - Implementation flags:
    - Likely existing hooks: legend lore-equivalent with deferred return time, weekly use limit, early-dismissal option.

## Parsed source feature headings

- Class Skills
- Arcane School
- Spontaneous Divination (Su)
- Abjuration Sense (Ex)
- Wispy Form (Ex)
- Listening to the Wind (Sp)
