# Wizard - Qadira: Mage of the Veil

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Qadira: Mage of the Veil
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Qadira%20%20Mage%20of%20the%20Veil
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Associated School; Requirements; Class Skills; Replacement Powers; Face in the Crowd (Sp); Master of the Veil (Sp)
- **Replaced / altered class features:** Blinding Ray, Invisibility Field

## Replacement details

### Alters: school package, starting spell requirement, and class skills

- **Archetype feature:** Associated School
- **Description:** The archetype is built around illusion magic.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build restriction
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard's associated school is illusion.
    - The archetype is locked into illusion rather than permitting another specialist school.
    - Its replacement powers overwrite illusion school abilities instead of adding parallel powers.
  - Scaling: None
  - Interactions: Replacement powers in this archetype swap out illusion school abilities.
  - Edge cases: None beyond normal school-selection rules.
  - Implementation flags:
    - Likely existing hooks: school lock.

- **Archetype feature:** Requirements
- **Description:** The mage of the veil must begin play with a specific disguise spell already learned.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive starting-spell requirement
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Disguise self must be selected as one of the wizard's starting spells at 1st level.
    - This requirement applies during initial spellbook setup, not as a later bonus spell.
    - The archetype assumes that early infiltration play starts with this spell already available.
  - Scaling: None
  - Interactions: This is an archetype entry/build rule, not a separate castable feature.
  - Edge cases: Retraining out of the spell later should not invalidate the archetype retroactively unless a table rule says otherwise.
  - Implementation flags:
    - Likely existing hooks: starting spellbook validation.

- **Archetype feature:** Class Skills
- **Description:** The archetype adds social infiltration skills to the wizard list.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain Bluff, Disguise, and Stealth as class skills.
    - These additions sit on top of the normal wizard class-skill list.
    - Standard class-skill bonuses apply once ranks are invested.
  - Scaling: None
  - Interactions: Other wizard class skills remain unchanged.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: class-skill set modification.

- **Archetype feature:** Replacement Powers
- **Description:** The archetype substitutes custom illusion powers for the usual illusion-school replacements.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1, 8
  - Action/timing: Passive feature mapping
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Face in the Crowd replaces blinding ray.
    - Master of the Veil replaces invisibility field.
    - No other illusion school powers are changed by this mapping block.
  - Scaling: None
  - Interactions: This block exists to map the swapped school abilities rather than add independent mechanics.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: school-power replacement mapping.

### Replaces: blinding ray

- **Archetype feature:** Face in the Crowd (Sp)
- **Description:** The wizard can make herself seem like an expected, forgettable part of the local scene rather than turning invisible.
- **Mechanics:**
  - Type: Sp
  - Level hooks: 1
  - Action/timing: Standard action
  - Duration: Up to wizard level minutes per day, spent in 1-minute increments; each activation lasts until ended, dispelled, or the pool runs out
  - Uses: Minute pool per day equal to wizard level
  - Core function:
    - Creatures within 30 feet treat the wizard as though she belongs in the area and usually ignore her presence.
    - Creatures outside that radius may still notice that she looks out of place, but entering the 30-foot radius subjects them to the same illusion.
    - If the wizard directly interacts with an affected creature, that creature receives a Will save to disbelieve.
    - The save DC is 10 + half wizard level + Intelligence modifier.
    - The effect is a mind-affecting phantasm rather than true invisibility.
  - Scaling: The daily minute pool increases with wizard level.
  - Interactions: The ability does not make foes flat-footed and can be combined with mundane or magical disguise to better match a broad role or species.
  - Edge cases: The illusion does not let the wizard pass as a specific individual or seamlessly join a highly uniform group without a separate disguise.
  - Implementation flags:
    - Likely existing hooks: limited daily duration pool, crowd-blending status effect, Will-disbelief trigger on interaction, mind-affecting phantasm tag.

### Replaces: invisibility field

- **Archetype feature:** Master of the Veil (Sp)
- **Description:** The wizard can cloak a nearby group in a veil-style illusion for a limited number of rounds each day.
- **Mechanics:**
  - Type: Sp
  - Level hooks: 8
  - Action/timing: Standard action
  - Duration: Up to wizard level rounds per day, nonconsecutive
  - Uses: Round pool per day equal to wizard level
  - Core function:
    - Create an illusion affecting the wizard and any number of allies within 30 feet.
    - The effect otherwise functions like veil.
    - The daily round pool can be split across multiple activations.
  - Scaling: The available rounds increase with wizard level.
  - Interactions: Uses the wizard's own caster statistics for the veil-like effect.
  - Edge cases: Targets must be within 30 feet when the ability is activated; later movement uses the underlying veil rules.
  - Implementation flags:
    - Likely existing hooks: veil-style group illusion, shared round pool, 30-foot ally targeting.

## Parsed source feature headings

- Associated School
- Requirements
- Class Skills
- Replacement Powers
- Face in the Crowd (Sp)
- Master of the Veil (Sp)
