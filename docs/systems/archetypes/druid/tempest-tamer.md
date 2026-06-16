# Druid - Tempest Tamer

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Tempest Tamer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Tempest%20Tamer
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Speech of the Sea; Whirlpool Walker (Ex); Tempest Wild Shape (Su)
- **Replaced / altered class features:** resist nature’s lure; wild shape

## Replacement details

### Alters: bonus languages

- **Archetype feature:** Speech of the Sea
- **Description:** A tempest tamer’s bonus language options include Aquan and Auran, in addition to the bonus languages available to the character from her race.
- **Mechanics:**
  - Mechanics summary: A tempest tamer’s bonus language options include Aquan and Auran, in addition to the bonus languages available to the character from her race. However, the tempest tamer does not gain Sylvan as a bonus language option.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: resist nature’s lure

- **Archetype feature:** Whirlpool Walker (Ex)
- **Description:** At 4th level, a tempest tamer can resist winds and the unnatural powers of sea creatures.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a tempest tamer can resist winds and the unnatural powers of sea creatures. The tempest tamer gains a +4 bonus on saving throws against spells with the air or water descriptor and the spell-like and supernatural abilities of creatures with the air, aquatic, or water subtype. This bonus also applies to saving throws to avoid damage from a vortex, whirlpool, or similar effects, as well as to saving throws to prevent being pulled into or moved by such effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: wild shape

- **Archetype feature:** Tempest Wild Shape (Su)
- **Description:** At 4th level, a tempest tamer gains the ability to turn herself into a Small water elemental.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 6, 8, 10, 12, 18, 20.
  - Mechanics summary: At 4th level, a tempest tamer gains the ability to turn herself into a Small water elemental. This ability functions as per the elemental body I spell except as noted here. The effect lasts for 1 hour per druid level or until she changes back. Changing form (to an elemental or back) is a standard action and doesn’t provoke attacks of opportunity. At 6th level, a tempest tamer can use tempest wild shape to change into a Small air elemental. At 8th level, a tempest tamer can use tempest wild shape to change into a Medium air or water elemental, as per elemental body II .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, wild shape hook.

## Parsed source feature headings

- Speech of the Sea
- Whirlpool Walker (Ex)
- Tempest Wild Shape (Su)

