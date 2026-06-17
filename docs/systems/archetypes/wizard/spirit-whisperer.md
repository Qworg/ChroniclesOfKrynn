# Wizard - Spirit Whisperer

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Spirit Whisperer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Spirit%20Whisperer
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Arcane Bond (Ex); Spirit Link (Su); Spirit Hex
- **Replaced / altered class features:** arcane school and the bonus feat gained at 20th level

## Replacement details

### Alters: arcane bond and replaces spellbook

- **Archetype feature:** Arcane Bond (Ex)
- **Description:** The archetype uses a familiar-only bond and stores spells in that familiar as though it were a witch's familiar.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1
  - Action/timing: Passive bond choice at character creation
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard must choose a familiar for arcane bond.
    - That familiar gains the spirit animal ability tied to the spirit chosen through Spirit Link.
    - The wizard does not use a spellbook.
    - Spells are stored in and prepared from the familiar using witch familiar rules.
  - Scaling: None
  - Interactions: Losing the familiar also means losing access to stored spells under the witch-style storage model.
  - Edge cases: Replacing the familiar should follow witch replacement costs and procedures where applicable.
  - Implementation flags:
    - Likely existing hooks: familiar-only bond, spellbook suppression with familiar-based storage, spirit-animal ability attachment.

### Replaces: arcane school and the 20th-level bonus feat

- **Archetype feature:** Spirit Link (Su)
- **Description:** The wizard bonds to one shaman spirit and gains that spirit's major progression abilities using wizard-based scaling.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1, 8, 20
  - Action/timing: Passive unlock at each listed level
  - Duration: Permanent
  - Uses: Per each granted spirit ability's own rules
  - Core function:
    - At 1st level, choose one spirit from the shaman spirit list and gain its 1st-level spirit ability.
    - At 8th level, gain the chosen spirit's greater spirit ability.
    - At 20th level, gain the chosen spirit's manifestation ability.
    - Use wizard level in place of shaman level for all effects and save DCs.
  - Scaling: Additional spirit abilities unlock at 8th and 20th level.
  - Interactions: Where a granted spirit or hex would normally use Wisdom, this archetype uses Intelligence instead.
  - Edge cases: The 8th-level unlock effectively replaces the higher-level school ability slot, while the manifestation ability takes the place of the 20th-level bonus feat.
  - Implementation flags:
    - Likely existing hooks: shaman spirit ability attachment to wizard, level substitution.
    - Unsupported / review needed: shaman spirit mechanics implementation.

### Alters: bonus feats at 5th, 10th, and 15th level

- **Archetype feature:** Spirit Hex
- **Description:** Instead of bonus feats, the wizard learns hexes tied to the chosen spirit.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 5, 10, 15
  - Action/timing: Per the selected hex's normal rules
  - Duration: Per the selected hex's normal rules
  - Uses: Per the selected hex's normal rules
  - Core function:
    - At 5th level, choose one hex from the list associated with the selected spirit.
    - Choose one additional spirit hex at 10th level and another at 15th level.
    - Each chosen hex uses wizard level in place of shaman level.
    - Use Intelligence modifier instead of Wisdom modifier for those hexes.
  - Scaling: One additional hex is gained at each later listed milestone.
  - Interactions: Hex selection is restricted to the chosen spirit's hex list.
  - Edge cases: The Intelligence substitution applies only to these spirit hexes, not to unrelated class abilities.
  - Implementation flags:
    - Likely existing hooks: restricted hex selection from spirit list, Intelligence-for-Wisdom substitution.
    - Unsupported / review needed: shaman hex mechanics.

## Parsed source feature headings

- Arcane Bond (Ex)
- Spirit Link (Su)
- Spirit Hex
