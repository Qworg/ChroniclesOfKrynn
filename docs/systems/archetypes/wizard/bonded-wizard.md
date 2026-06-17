# Wizard - Bonded Wizard

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Bonded Wizard
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Bonded%20Wizard
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Arcane Bond (Ex); Hidden Bond (Sp); Bonded Force (Su); Reshape Bond (Sp)
- **Replaced / altered class features:** Scribe Scroll; a wizard’s bonus feats normally gained at 5th and 15th level

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Arcane Bond (Ex)
- **Description:** The archetype keeps the standard bonded item but removes the familiar option.
- **Mechanics:**
  - Type: Ex
  - Level hooks: 1
  - Action/timing: Passive bond formed at character creation
  - Duration: Permanent
  - Uses: Normal bonded-item rules
  - Core function:
    - Gain the normal wizard arcane bond as a bonded item.
    - A familiar cannot be chosen.
  - Scaling: None beyond the usual bonded-item progression.
  - Interactions: All later bonded wizard features require the item to be worn or wielded.
  - Edge cases: Standard bonded-item loss and replacement rules still apply.
  - Implementation flags:
    - Likely existing hooks: object-only bond restriction.

### Replaces: Scribe Scroll

- **Archetype feature:** Hidden Bond (Sp)
- **Description:** The bonded item can be disguised or masked magically at will.
- **Mechanics:**
  - Type: Sp
  - Level hooks: 1
  - Action/timing: At-will activation
  - Duration: Sustained at will
  - Uses: At will
  - Core function:
    - Alter the bonded item's appearance as an item-limited version of disguise self.
    - Alter the bonded item's magical aura as an item-limited version of magic aura.
    - For the disguise effect, the item's category such as weapon or ring is treated like its creature type equivalent.
    - The appearance change and aura masking can be used independently.
  - Scaling: None
  - Interactions: These effects change only the bonded item, not the wizard.
  - Edge cases: If the item is not on the wizard's person, table adjudication may be needed on whether remote at-will use is allowed.
  - Implementation flags:
    - Likely existing hooks: item-targeted appearance glamour, item-targeted aura suppression, at-will activation.

### Replaces: bonus feats at 5th and 15th level

- **Archetype feature:** Bonded Force (Su)
- **Description:** The bonded object powers a reusable force-point pool that produces defensive or weapon-like force effects.
- **Mechanics:**
  - Type: Su
  - Level hooks: 5, 9, 13, 17
  - Action/timing: Standard action to activate each effect mode
  - Duration: Mage armor 1 hour; shield 1 minute; spiritual weapon 1 round per wizard level
  - Uses: Force-point pool equal to half wizard level; each activation costs 1 point; pool refreshes on rest
  - Core function:
    - While wearing or wielding the bonded object, spend 1 force point to produce mage armor, shield, or spiritual weapon.
    - Spiritual weapon uses Intelligence instead of Wisdom for its attack bonus.
    - At 9th level, mage armor and shield each improve by +1, and spiritual weapon gains a +1 enhancement bonus to attack and damage.
    - Those improvements each increase by another +1 at 13th level and again at 17th level.
    - For spiritual weapon, 1 point of enhancement can be traded for keen; for mage armor or shield, 1 point of bonus can be traded for light fortification.
  - Scaling: All three modes improve by +1 at 9th, 13th, and 17th level.
  - Interactions: The wizard must be wearing or wielding the bonded item to spend force points, and trade-off options are declared on activation.
  - Edge cases: The pool is separate from spell slots, and no effects can be activated if the bonded item is unavailable.
  - Implementation flags:
    - Likely existing hooks: resource pool with three effect modes, scaling enhancement bonuses, light fortification and keen property grants.

### Replaces: the wizard bonus feat at 10th level

- **Archetype feature:** Reshape Bond (Sp)
- **Description:** The wizard can repair or permanently restyle the bonded item once per day.
- **Mechanics:**
  - Type: Sp
  - Level hooks: 10
  - Action/timing: Full-round action
  - Duration: Permanent for transformation; instantaneous for repair
  - Uses: 1/day shared between both modes
  - Core function:
    - Transform the bonded item into another object as a polymorph any object-style effect without changing its magic properties or item slot.
    - Repair the bonded item as make whole.
    - Sacrifice a prepared spell to repair an additional 1d6 hit points per spell level.
  - Scaling: Bonus repair scales with the level of the sacrificed spell.
  - Interactions: The 1/day limit covers both reshaping and repairing.
  - Edge cases: The transformation changes form but not slot, enchantments, or other magic identity.
  - Implementation flags:
    - Likely existing hooks: once-per-day item transformation and repair, spell-sacrifice bonus repair hit points.

## Parsed source feature headings

- Arcane Bond (Ex)
- Hidden Bond (Sp)
- Bonded Force (Su)
- Reshape Bond (Sp)
