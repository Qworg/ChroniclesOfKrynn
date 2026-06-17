# Wizard - Arcane Warden

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Arcane Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Arcane%20Warden
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Universal Magic; Class Skills; Ready for Anything (Ex); Generous Touch (Su); Restorative Shelter (Su)
- **Replaced / altered class features:** Arcane School; Class Skills; Scribe Scroll; Bonus Feats; Hand of the Apprentice; Metamagic Mastery

## Replacement details

### Alters: arcane school

- **Archetype feature:** Universal Magic
- **Description:** Every arcane warden is locked into the universalist chassis.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build restriction
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard must be a universalist and cannot specialize in any other school.
    - The archetype never grants a specialist-school choice during creation or retraining.
    - All altered school powers plug into the universalist progression instead.
  - Scaling: None
  - Interactions: The archetype's replacement powers take the place of the normal universalist school abilities.
  - Edge cases: Retraining into a specialist school is incompatible with this archetype.
  - Implementation flags:
    - Likely existing hooks: universalist lock.

### Alters: wizard class skills

- **Archetype feature:** Class Skills
- **Description:** The archetype trades scholarly skills for rugged field utility skills.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Add Climb, Heal, Survival, and Swim as class skills.
    - Remove Appraise, Fly, Knowledge (nobility), and Linguistics from the wizard class-skill list.
  - Scaling: None
  - Interactions: Skill ranks still work normally after the list swap.
  - Edge cases: Removed skills remain usable, but they no longer receive the class-skill bonus from wizard levels.
  - Implementation flags:
    - Likely existing hooks: class-skill set modification.

### Replaces: Scribe Scroll and bonus feats at 5th, 10th, 15th, and 20th level

- **Archetype feature:** Ready for Anything (Ex)
- **Description:** The arcane warden gets a narrow set of survival-oriented feats instead of the wizard's usual flexible feat track.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1, 5, 10, 15, 20
  - Action/timing: Passive feat grant
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain one bonus feat at 1st level and another at 5th, 10th, 15th, and 20th level.
    - Each feat must come from this restricted list: Alertness, Endurance, Great Fortitude, Improved Great Fortitude, Leadership, Self-Sufficient, Skill Focus (Survival), Toughness, or any teamwork feat.
    - All normal prerequisites for the chosen feat still apply.
  - Scaling: One additional feat is granted at each listed milestone.
  - Interactions: This fully replaces the wizard's normal bonus-feat flexibility at those levels.
  - Edge cases: Teamwork feats are granted normally; this feature does not waive prerequisites or grant partner exceptions.
  - Implementation flags:
    - Likely existing hooks: restricted bonus-feat grant at five milestone levels.

### Replaces: hand of the apprentice (universalist school ability)

- **Archetype feature:** Generous Touch (Su)
- **Description:** Helpful touch spells cast on allies last longer, but the extension is tightly limited.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Passive trigger when casting a qualifying touch spell on a willing ally other than the wizard
  - Duration: Base spell duration plus Intelligence modifier units, minimum 1
  - Uses: No daily cap
  - Core function:
    - When casting a spell with range "creature touched" on a willing target other than the wizard, extend the duration if it matches one of two exact patterns.
    - Spells lasting 1 round per level gain extra rounds equal to the wizard's Intelligence modifier, minimum 1.
    - Spells lasting 1 minute per level gain extra minutes equal to the wizard's Intelligence modifier, minimum 1.
    - Only one spell per creature can benefit from this extension at a time.
  - Scaling: The extension grows as the wizard's Intelligence modifier increases.
  - Interactions: Does not function on self-targeted casts or on unwilling targets.
  - Edge cases: Applying a new extended spell to the same creature ends the previous extended effect from this ability.
  - Implementation flags:
    - Likely existing hooks: touch-spell duration extension conditioned on willing ally target and duration template.

### Replaces: metamagic mastery (universalist school ability)

- **Archetype feature:** Restorative Shelter (Su)
- **Description:** Shelter spells are always on hand, harder to dispel, and reward a full night's rest.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Passive spellbook addition; each spell is still cast using its normal action
  - Duration: Per each shelter spell's own duration; the rest bonus lasts 24 hours
  - Uses: No daily cap beyond normal spell-slot expenditure
  - Core function:
    - Automatically learn mage's magnificent mansion, rope trick, secure shelter, and tiny hut.
    - These four spells do not consume spellbook pages and can be prepared even without the spellbook present.
    - Treat caster level as 2 higher for duration and dispel-check purposes when casting those spells.
    - Any creature that completes at least 8 hours of rest in one of those shelters gains a bonus on saves against disease and poison for 24 hours equal to the spell's level.
  - Scaling: The save bonus depends on which shelter spell was used.
  - Interactions: The +2 caster-level adjustment applies only to the four named shelter spells.
  - Edge cases: The save bonus starts after the rest finishes, not when the creature first enters the shelter.
  - Implementation flags:
    - Likely existing hooks: auto-add spells to known list without spellbook cost, localized caster-level override for named spells, rest-triggered save bonus.

## Parsed source feature headings

- Universal Magic
- Class Skills
- Ready for Anything (Ex)
- Generous Touch (Su)
- Restorative Shelter (Su)
