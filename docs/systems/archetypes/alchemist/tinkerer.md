# Alchemist - Tinkerer

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Tinkerer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Tinkerer
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Clockwork Bond (Ex); Tinkering (Ex); Clockwork Familiar (Ex); Greater Tinkering (Ex); Clockwork Upgrade (Ex); Clockwork Mimicries (Ex); Discoveries
- **Replaced / altered class features:** mutagen; poison resistance +2, poison use, and poison resistance +4; swift poisoning; poison resistance +6; poison immunity

## Replacement details

### Replaces: mutagen

- **Archetype feature:** Clockwork Bond (Ex)
- **Description:** At 1st level, a tinkerer forms a bond with one of her creations, and begins play with it at no cost.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 3, 7, 4, 8, 12, 16, 20.
  - Mechanics summary: At 1st level, a tinkerer forms a bond with one of her creations, and begins play with it at no cost. This functions as the familiar option of the wizard’s arcane bond class feature, with the tinkerer’s effective wizard level equal to her alchemist level. If a tinkerer would gain a familiar through another class, those levels stack for purposes of determining the familiar’s abilities. A tinkerer’s familiar can take any shape the tinkerer wishes, but its statistics and abilities are identical to a clockwork spy with the normal adjustments and abilities for a familiar applied, and it is a construct with the clockwork subtype. At 3rd level, if the tinkerer has the infusion discovery, a clockwork spy familiar can deliver the tinkerer’s extracts with a range of touch for her. At 7th level, a clockwork spy can communicate with constructs with the clockwork subtype.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, save DC calculation, mutagen hook, alchemist discovery hook.

### Replaces: poison resistance +2, poison use, and poison resistance +4

- **Archetype feature:** Tinkering (Ex)
- **Description:** At 2nd level, a tinkerer can spend 1 hour working on her clockwork spy familiar to enhance it with one of the options from the following list.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 5.
  - Mechanics summary: At 2nd level, a tinkerer can spend 1 hour working on her clockwork spy familiar to enhance it with one of the options from the following list. At 5th level, the tinkerer can choose a second option from the list. The same option cannot be chosen twice. A tinkerer can change the enhancements applied to her familiar, but doing so takes 1 hour of work per enhancement she wishes to change. The clockwork spy familiar gains DR 2/adamantine. The clockwork spy familiar gains resist cold 5.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook, ki/monk hook, AC/natural armor bonus.

### Replaces: swift poisoning

- **Archetype feature:** Clockwork Familiar (Ex)
- **Description:** At 6th level, the tinkerer turns her familiar into a clockwork familiar that takes any form she wishes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 7.
  - Mechanics summary: At 6th level, the tinkerer turns her familiar into a clockwork familiar that takes any form she wishes. She must choose which type of item is installed in the clockwork familiar. She gains the clockwork familiar at no cost, as if she were a 7th-level spellcaster with the Improved Familiar feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

### Replaces: poison resistance +6

- **Archetype feature:** Greater Tinkering (Ex)
- **Description:** At 8th level, a tinkerer can spend 1 hour working on her familiar to enhance it with one of the options from the following list.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a tinkerer can spend 1 hour working on her familiar to enhance it with one of the options from the following list. A tinkerer can change the enhancement applied to her familiar, but doing so takes 1 hour. The clockwork familiar’s bite attack deals 1d4 points of damage. The clockwork familiar gains DR 10/adamantine. The clockwork familiar gains any feat for which it qualifies as a bonus feat. The clockwork familiar gains a +10 alchemical bonus on Stealth checks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: poison immunity

- **Archetype feature:** Clockwork Upgrade (Ex)
- **Description:** At 10th level, a tinkerer has learned how to change the type of magic item her clockwork familiar can carry.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, a tinkerer has learned how to change the type of magic item her clockwork familiar can carry. This requires 1 hour of uninterrupted work. A tinkerer can change the type of item her clockwork familiar carries only once every 24 hours. Additionally, a tinkerer can remove a spent item and install a new one as a move action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: persistent mutagen

- **Archetype feature:** Clockwork Mimicries (Ex)
- **Description:** At 14th level, a tinkerer can use her mechanical mastery to create clockwork mimicries of powerful magic items.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a tinkerer can use her mechanical mastery to create clockwork mimicries of powerful magic items. Doing so takes 1 hour of uninterrupted work, and allows the tinkerer to create a wondrous item that functions for a number of hours per day equal to her alchemist level. When creating such a clockwork item, the tinkerer must use materials worth an amount equal to the wondrous item’s construction cost. A tinkerer cannot create a mimicry of a consumable wondrous item or a wondrous item with finite charges, and she can have only one mimicry at a time. The tinkerer can spend 1 hour disassembling a clockwork mimicry and reassembling it into a mimicry of a different wondrous item. When she disassembles a clockwork mimicry, she can salvage parts worth half of the mimicry’s creation cost.
- **Implementation flags:**
  - Likely existing hooks: mutagen hook.

## Parsed source feature headings

- Clockwork Bond (Ex)
- Tinkering (Ex)
- Clockwork Familiar (Ex)
- Greater Tinkering (Ex)
- Clockwork Upgrade (Ex)
- Clockwork Mimicries (Ex)
- Discoveries

