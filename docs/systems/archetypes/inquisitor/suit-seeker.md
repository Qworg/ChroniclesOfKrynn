# Inquisitor - Suit Seeker

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Suit Seeker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Suit%20Seeker
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Domain; Improvised Array (Su); Suit; Judgment; Ability; Eye of the Harrow (Su); Unravel Array (Su)
- **Replaced / altered class features:** detect alignment; true judgment

## Replacement details

### Alters: judgment, second judgment, and third judgment

- **Archetype feature:** Ability
- **Description:** Books Piercing Intelligence Crowns Smiting Charisma Hammers Destruction Strength Keys Protection Dexterity Shields Resiliency Constitution Stars Healing Wisdom A suit seeker does not gain access to and cannot use the justice, resistance, or purity judgments.
- **Mechanics:**
  - Level hooks: 6, 10.
  - Mechanics summary: Books Piercing Intelligence Crowns Smiting Charisma Hammers Destruction Strength Keys Protection Dexterity Shields Resiliency Constitution Stars Healing Wisdom A suit seeker does not gain access to and cannot use the justice, resistance, or purity judgments. A suit seeker makes the following adjustments to her judgments. Smiting : At 6th level, while the suit seeker has her smiting judgment active, her weapons can only count as an alignment type (chaotic, evil, good, or lawful) for the purpose of bypassing damage reduction if the selected alignment is represented on one of the suit seeker’s cards in her current improvised array. If multiple alignments are represented in the improvised array, the suit seeker must select one. If the array contains only neutral cards, the suit seeker cannot benefit from this judgment. She can change the alignment of her judgment to another alignment represented in the array as a swift action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: detect alignment

- **Archetype feature:** Eye of the Harrow (Su)
- **Description:** At 2nd level, a suit seeker can use the magic of her improvised array to hone her attacks against targets that match the cards’ alignment.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a suit seeker can use the magic of her improvised array to hone her attacks against targets that match the cards’ alignment. If any of the cards in her improvised array matches the alignment of an enemy creature within 60 feet on either the good-evil axis or the lawful-chaotic axis, the card glows faintly and the inquisitor gains a +1 sacred bonus on attack rolls against enemies of the matching alignment as long as the card is in her array. If a card matches the alignment of an enemy within 60 feet on both alignment axes, the card glows brightly and the inquisitor gains a +1 sacred bonus on attack rolls and damage rolls against enemies of the matching alignment.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.
  - Needs implementation review: harrow deck/cards.

### Replaces: true judgment

- **Archetype feature:** Unravel Array (Su)
- **Description:** At 20th level, a suit seeker can tear apart a target’s place in destiny, rendering the creature immobile or possibly dead.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a suit seeker can tear apart a target’s place in destiny, rendering the creature immobile or possibly dead. As long as she has an improvised array drawn, the suit seeker can destroy one of the cards in her array and designate a single creature within 30 feet as the target of the harrow’s magic. The designated creature must succeed at a Will save (DC 10 + 1/2 the inquisitor’s level + the inquisitor’s Wisdom modifier) or one of its ability scores is immediately reduced to 0, which can immobilize, render unconscious, or kill the creature. Regardless of whether or not the target succeeds at its save, it becomes immune to the inquisitor’s unravel array ability for 24 hours. Once this ability has been used, it cannot be used again for 1d4 rounds. The destroyed harrow card is removed from the harrow deck.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, ki/monk hook.
  - Needs implementation review: harrow deck/cards.

## Parsed source feature headings

- Class Skills
- Domain
- Improvised Array (Su)
- Suit
- Judgment
- Ability
- Eye of the Harrow (Su)
- Unravel Array (Su)

