# Inquisitor - Relic Hunter

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Relic Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Relic%20Hunter
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spells; Relics (Su); Deific Focus (Su)
- **Replaced / altered class features:** judgment; domain, bane, greater bane, second judgment, and third judgment

## Replacement details

### Alters: the inquisitor’s spellcasting

- **Archetype feature:** Spells
- **Description:** A relic hunter casts divine spells drawn from the inquisitor spell list, but her chosen relic schools (see Relics below) limit her to schools she knows, similar in function to an occultist’s implements.
- **Mechanics:**
  - Mechanics summary: A relic hunter casts divine spells drawn from the inquisitor spell list, but her chosen relic schools (see Relics below) limit her to schools she knows, similar in function to an occultist’s implements. Any spell or orison gained by the relic hunter has a relic component (see Relics below), and is not considered to be on the relic hunter’s spell list until she selects its school though the relics alternate class feature. Once she chooses a school, all spells and orisons of that school are considered to be on the relic hunter’s class spell list, allowing her to use spell trigger and spell completion magic items of those spells. A relic hunter’s spells per day, daily spell allotment, Difficulty Class, and minimum Wisdom score requirements remain unchanged from the inquisitor’s normal spellcasting class feature.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.
  - Needs implementation review: occult subsystem.

### Replaces: judgment

- **Archetype feature:** Relics (Su)
- **Description:** At 1st level, a relic hunter gains the occultist’s implements class feature (see page 47) and learns to use two occultist implement schools as relic schools.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 4.
  - Mechanics summary: At 1st level, a relic hunter gains the occultist’s implements class feature (see page 47) and learns to use two occultist implement schools as relic schools. At 4th level and every 3 levels thereafter, the relic hunter learns to use one additional relic school drawn from the same source, gaining access to that school’s resonant power and base focus power and opening up that school’s focus powers for her to select. Like an occultist, a relic hunter can select the same school twice, but it is far less useful for her to do so. Relics that are not magic items are often of some religious significance to the relic hunter or her church, such as the battered shield of a saint, a bishop’s robe, or the finger bone of a church martyr.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.
  - Needs implementation review: occult subsystem.

### Replaces: domain, bane, greater bane, second judgment, and third judgment

- **Archetype feature:** Deific Focus (Su)
- **Description:** At 1st level, a relic hunter learns to invest divine power into her chosen relics.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 4.
  - Mechanics summary: At 1st level, a relic hunter learns to invest divine power into her chosen relics. This acts like the occultist’s focus powers and mental focus class features (see pages 47 and 48, respectively), with the following adjustments. Each day, a relic hunter has a number of points of deific focus equal to her inquisitor level + her Wisdom modifier, and she must spend 1 hour in prayer with her relics to invest them with divine power. At 1st level, the relic hunter learns the two base focus powers from her chosen relic schools and can select one more focus power from the list of those made available by her chosen schools. Whenever she gains a new relic school, she gains the base focus power of that school. In addition, at 4th level and every 4 levels thereafter, she learns a new focus power selected from all of the powers granted by all of the relic schools she knows.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, save DC calculation, cleric domain hook.
  - Needs implementation review: occult subsystem.

## Parsed source feature headings

- Spells
- Relics (Su)
- Deific Focus (Su)

