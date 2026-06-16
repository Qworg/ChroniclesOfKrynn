# Summoner - Story Summoner

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Story Summoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Story%20Summoner
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Storykin Eidolon; Summon Arcana; Evolve Base Form (Su)
- **Replaced / altered class features:** bond senses; transposition

## Replacement details

### Replaces: bond senses

- **Archetype feature:** Summon Arcana
- **Description:** At 2nd level, a story summoner can use a complete harrow deck he owns as an additional focus component for his summon monster spell-like ability.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a story summoner can use a complete harrow deck he owns as an additional focus component for his summon monster spell-like ability. When he does so, the summoner draws a random card from the deck and applies a simple template to the summoned monster based on the card’s alignment: celestial (any good), fiendish (any evil), resolute (any lawful), or entropic (any chaotic). If a card has more than one alignment—such as a lawful evil or chaotic good card—the summoner can choose which template to apply to the summoned creature.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.
  - Needs implementation review: harrow deck/cards.

### Replaces: transposition

- **Archetype feature:** Evolve Base Form (Su)
- **Description:** Starting at 8th level, whenever he gains a level, the story summoner can change his eidolon’s base form to a new base form.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: Starting at 8th level, whenever he gains a level, the story summoner can change his eidolon’s base form to a new base form. Once chosen, this base form is set until the story summoner gains another summoner level.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook.

## Parsed source feature headings

- Storykin Eidolon
- Summon Arcana
- Evolve Base Form (Su)

