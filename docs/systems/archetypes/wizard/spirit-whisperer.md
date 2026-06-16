# Wizard - Spirit Whisperer

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Spirit Whisperer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Spirit%20Whisperer
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Arcane Bond (Ex); Spirit Link (Su); Spirit Hex
- **Replaced / altered class features:** arcane school and the bonus feat gained at 20th level

## Replacement details

### Alters: arcane bond and replaces the spellbooks class feature

- **Archetype feature:** Arcane Bond (Ex)
- **Description:** When a spirit whisperer chooses an arcane bond, he must choose the familiar arcane bond, and the familiar gains the spirit animal ability of his selected spirit (see spirit link, below).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: When a spirit whisperer chooses an arcane bond, he must choose the familiar arcane bond, and the familiar gains the spirit animal ability of his selected spirit (see spirit link, below). The spirit whisperer does not need a spellbook, but instead stores and prepares his spell by communing with the familiar as the witch’s familiar class feature ( Advanced Player’s Guide 67).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

### Replaces: arcane school

- **Archetype feature:** Spirit Link (Su)
- **Description:** At 1st level, a spirit whisperer forms a mystical bond with a spirit.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 8, 20.
  - Mechanics summary: At 1st level, a spirit whisperer forms a mystical bond with a spirit. The spirit whisperer picks a spirit from the shaman’s list of spirits (see page 37). At 1st level, he gains a spirit ability granted by that spirit. At 8th level, he gains the greater spirit ability granted by that spirit. At 20th level, the spirit whisperer gains the manifestation ability granted by the spirit. He uses his wizard level as his shaman level for determining the effects and DCs of abilities granted by the spirit.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook.
  - Needs implementation review: shaman spirit/hex mechanics, witch/shaman hex mechanics.

### Replaces: the bonus feat gained at 20th level

- **Archetype feature:** Spirit Link (Su)
- **Description:** At 1st level, a spirit whisperer forms a mystical bond with a spirit.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 8, 20.
  - Mechanics summary: At 1st level, a spirit whisperer forms a mystical bond with a spirit. The spirit whisperer picks a spirit from the shaman’s list of spirits (see page 37). At 1st level, he gains a spirit ability granted by that spirit. At 8th level, he gains the greater spirit ability granted by that spirit. At 20th level, the spirit whisperer gains the manifestation ability granted by the spirit. He uses his wizard level as his shaman level for determining the effects and DCs of abilities granted by the spirit.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook.
  - Needs implementation review: shaman spirit/hex mechanics, witch/shaman hex mechanics.

### Alters: bonus feats

- **Archetype feature:** Spirit Hex
- **Description:** At 5th level, a spirit whisperer can select one hex from the list of those granted by his chosen spirit.
- **Mechanics:**
  - Level hooks: 5, 15.
  - Mechanics summary: At 5th level, a spirit whisperer can select one hex from the list of those granted by his chosen spirit. He uses his wizard level as his shaman level when determining the effects and DC of this hex. In addition, he uses his Intelligence modifier in place of his Wisdom modifier for these hexes. At 10th and 15th level, he can select another hex from those granted by his spirit. Each hex selected in this way replaces the bonus feat gained at that level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation.
  - Needs implementation review: shaman spirit/hex mechanics, witch/shaman hex mechanics.

## Parsed source feature headings

- Arcane Bond (Ex)
- Spirit Link (Su)
- Spirit Hex

