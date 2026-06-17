# Summoner - Story Summoner

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Story Summoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Story%20Summoner
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Storykin Eidolon; Summon Arcana; Evolve Base Form (Su)
- **Replaced / altered class features:** bond senses; transposition

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Storykin Eidolon
- **Description:** Unlike most eidolons, a story summoner’s eidolon cannot touch or attack creatures warded by protection from evil and similar effects that prevent contact with summoned creatures.
- **Detailed mechanics:**
  - **Rules text to implement:** Unlike most eidolons, a story summoner’s eidolon cannot touch or attack creatures warded by protection from evil and similar effects that prevent contact with summoned creatures. As a standard action while his eidolon is summoned, the story summoner can draw a random card from a complete harrow deck he owns. For a number of rounds equal to 1/2 the summoner’s class level (minimum 1), the eidolon’s alignment changes to match that of the harrow card drawn, and the eidolon gains a +4 enhancement bonus on the ability score linked to the drawn card’s suit. The eidolon continues to follow its summoner’s orders regardless of its alignment. The story summoner can use this ability a number of times per day equal to 3 + his Charisma modifier.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - ki subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: bond senses

- **Archetype feature:** Summon Arcana
- **Description:** At 2nd level, a story summoner can use a complete harrow deck he owns as an additional focus component for his summon monster spell-like ability.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a story summoner can use a complete harrow deck he owns as an additional focus component for his summon monster spell-like ability. When he does so, the summoner draws a random card from the deck and applies a simple template to the summoned monster based on the card’s alignment: celestial (any good), fiendish (any evil), resolute (any lawful), or entropic (any chaotic). If a card has more than one alignment—such as a lawful evil or chaotic good card—the summoner can choose which template to apply to the summoned creature. This ability allows a story summoner to summon and command creatures normally prohibited by their alignment.
- **Implementation flags:**
  - summoning subsystem.
  - spell-like ability support.

### Replaces: transposition

- **Archetype feature:** Evolve Base Form (Su)
- **Description:** Starting at 8th level, whenever he gains a level, the story summoner can change his eidolon’s base form to a new base form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** Starting at 8th level, whenever he gains a level, the story summoner can change his eidolon’s base form to a new base form. Once chosen, this base form is set until the story summoner gains another summoner level.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

## Parsed source feature headings

- Storykin Eidolon
- Summon Arcana
- Evolve Base Form (Su)
