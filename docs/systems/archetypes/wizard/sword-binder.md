# Wizard - Sword Binder

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Sword Binder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Sword%20Binder
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Arcane Bond; Sword of the Mage (Su); Telekinetic Sword (Sp)
- **Replaced / altered class features:** arcane school and bonus school spell slots; the 10th level bonus feat

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Arcane Bond
- **Description:** The wizard's bond must be a sword, and the archetype grants proficiency with it.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive bond choice at character creation
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The bonded item must be a sword.
    - Gain proficiency with that bonded sword.
  - Scaling: None
  - Interactions: Later class features function only with this bonded sword.
  - Edge cases: Non-sword bladed weapons do not qualify.
  - Implementation flags:
    - Likely existing hooks: sword-only item bond restriction, proficiency grant.

### Replaces: arcane school and bonus school spell slots

- **Archetype feature:** Sword of the Mage (Su)
- **Description:** The wizard repurposes universalist sword-throwing into a bonded-blade combat package with touch-spell delivery.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1, 5
  - Action/timing: Standard action for hand-of-the-apprentice throws; touch-spell delivery occurs as part of casting
  - Duration: Per hand of the apprentice for thrown attacks; instantaneous for touch delivery
  - Uses: 3 + Intelligence modifier + half wizard level per day
  - Core function:
    - Gain the universalist hand of the apprentice ability, but it works only with the bonded sword.
    - The throw uses close range instead of the normal range.
    - Daily uses equal 3 + Intelligence modifier + half wizard level.
    - At 5th level, the bonded sword can deliver touch spells from the wizard spell list.
    - Spending a hand-of-the-apprentice use allows that touch delivery to happen at range.
    - The delivery attack benefits from the sword's attack bonuses and related feats, but not from its damage or extra weapon effects.
  - Scaling: Daily uses rise with level, and ranged touch-spell delivery unlocks at 5th level.
  - Interactions: Ranged touch delivery is part of the same action used to cast the spell.
  - Edge cases: Only attack modifiers carry over on spell delivery; weapon damage dice and special on-hit weapon effects do not.
  - Implementation flags:
    - Likely existing hooks: hand of the apprentice restricted to bonded sword, close-range override, expanded daily pool, touch-spell sword delivery at 5th level.

### Replaces: the 10th-level wizard bonus feat

- **Archetype feature:** Telekinetic Sword (Sp)
- **Description:** The bonded sword can fly under telekinetic control, and the wizard can briefly see and hear around it.
- **Mechanics:**
  - Type: Sp
  - Level hooks: 10, 15, 20
  - Action/timing: Uses telekinesis-style sustained force; remote sensing is a swift action while the sword is active
  - Duration: 2 rounds per wizard level per day, nonconsecutive
  - Uses: 1/day at 10th level; 2/day at 15th; 3/day at 20th
  - Core function:
    - Control the bonded sword as though using telekinesis with the sustained force option.
    - While the sword is already in flight, use a swift action to observe the area around it as with clairaudience/clairvoyance.
    - The total flight time available each day is 2 rounds per wizard level and can be split across activations.
  - Scaling: Daily activation count increases at 15th and 20th level, and total rounds scale with wizard level.
  - Interactions: Remote sensing requires an already active telekinetic sword effect.
  - Edge cases: Ending one activation early does not forfeit the rest of the daily round pool.
  - Implementation flags:
    - Likely existing hooks: telekinesis sustained-force mode for bonded sword, swift-action remote sensing attachment, separate tracking for uses per day and rounds per day.

## Parsed source feature headings

- Arcane Bond
- Sword of the Mage (Su)
- Telekinetic Sword (Sp)
