# Cleric - Divine Paragon

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Divine Paragon
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Divine%20Paragon
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Devoted Domain; Divine Brand (Ex)
- **Replaced / altered class features:** Domain; Aura

## Implementation details

### Alters: domains

- **Archetype feature:** Devoted Domain
- **Description:** A divine paragon is intensely devoted to a single deity, and her alignment must be identical to her deity’s alignment.
- **Detailed mechanics:**
  - **Level hooks:** 5, 11, 14.
  - **Rules text to implement:** A divine paragon is intensely devoted to a single deity, and her alignment must be identical to her deity’s alignment. She gains Deific Obedience ISG as a bonus feat, even if she doesn’t meet the feat’s prerequisites. She gains access to her boons at an accelerated rate (see below) rather than the standard HD-based rate granted by Deific Obedience (and as such cannot benefit from the accelerated rate granted by the Diverse Obedience feat). When the divine paragon selects her domains, she must designate one of the two domains she gains as her devoted domain. She gains all of this domain’s granted powers and domain spells normally. For her other domain, she gains only its domain spells—she does not gain any of the granted powers of that domain. Instead, she must choose from the evangelist, exalted, or sentinel boons granted by her deity (as detailed in Pathfinder Campaign Setting: Inner Sea Gods ). At 5th level, she gains access to the first boon granted by her deity. At 11th level, she gains access to the second boon. At 14th level, she gains access to the third boon. In order to retain access to her domain spells, the domain powers of her devoted domain, and the boons granted by Deific Obedience, the divine paragon must perform her obedience daily. If she fails to do so, she loses access to these abilities until she next performs her obedience (but she can still cast spells, channel energy, and perform other abilities granted by her cleric levels).
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: aura

- **Archetype feature:** Divine Brand (Ex)
- **Description:** At 1st level, a mark appears somewhere on the divine paragon’s body.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a mark appears somewhere on the divine paragon’s body. The mark’s location varies by individual and faith, but takes the form of the deity’s holy symbol and generally appears in a location easy to display, such as on the hand, forearm, chest, or face. An uncovered divine brand functions as a holy (or unholy) symbol and as a divine focus for spellcasting. The divine paragon’s aura is even more powerful than a typical cleric’s as a result of her devotion, and her cleric level is treated as 1 higher for the purpose of determining the strength of her aura when it is viewed by spells like detect good.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Devoted Domain
- Divine Brand (Ex)
