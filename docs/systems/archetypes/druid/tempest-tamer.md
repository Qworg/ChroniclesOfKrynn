# Druid - Tempest Tamer

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Tempest Tamer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Tempest%20Tamer
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Speech of the Sea; Whirlpool Walker (Ex); Tempest Wild Shape (Su)
- **Replaced / altered class features:** resist nature’s lure; wild shape

## Implementation details

### Alters: bonus languages

- **Archetype feature:** Speech of the Sea
- **Description:** A tempest tamer’s bonus language options include Aquan and Auran, in addition to the bonus languages available to the character from her race.
- **Detailed mechanics:**
  - **Rules text to implement:** A tempest tamer’s bonus language options include Aquan and Auran, in addition to the bonus languages available to the character from her race. However, the tempest tamer does not gain Sylvan as a bonus language option.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Whirlpool Walker (Ex)
- **Description:** At 4th level, a tempest tamer can resist winds and the unnatural powers of sea creatures.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a tempest tamer can resist winds and the unnatural powers of sea creatures. The tempest tamer gains a +4 bonus on saving throws against spells with the air or water descriptor and the spell-like and supernatural abilities of creatures with the air, aquatic, or water subtype. This bonus also applies to saving throws to avoid damage from a vortex, whirlpool, or similar effects, as well as to saving throws to prevent being pulled into or moved by such effects.
- **Implementation flags:**
  - spell-like ability support.

### Replaces: wild shape

- **Archetype feature:** Tempest Wild Shape (Su)
- **Description:** At 4th level, a tempest tamer gains the ability to turn herself into a Small water elemental.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 6, 8, 10, 12, 18, 20.
  - **Rules text to implement:** At 4th level, a tempest tamer gains the ability to turn herself into a Small water elemental. This ability functions as per the elemental body I spell except as noted here. The effect lasts for 1 hour per druid level or until she changes back. Changing form (to an elemental or back) is a standard action and doesn’t provoke attacks of opportunity. At 6th level, a tempest tamer can use tempest wild shape to change into a Small air elemental. At 8th level, a tempest tamer can use tempest wild shape to change into a Medium air or water elemental, as per elemental body II. At 10th level, a tempest tamer can use tempest wild shape to change into a Large air or water elemental, as per elemental body III. At 12th level, a tempest tamer can use tempest wild shape to change into a Huge air or water elemental, as per elemental body IV. A tempest tamer can use this ability once per day plus an additional time per day at 6th level and every 2 levels thereafter (up to a total of eight times at 18th level). At 20th level, she can use tempest wild shape at will.
- **Implementation flags:**
  - wild shape subsystem.

## Parsed source feature headings

- Speech of the Sea
- Whirlpool Walker (Ex)
- Tempest Wild Shape (Su)
