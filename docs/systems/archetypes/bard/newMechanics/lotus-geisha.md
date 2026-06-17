# Bard - Lotus Geisha

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Lotus Geisha
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Lotus%20Geisha
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon Proficiency; Enrapturing Performance (Su); Bonus Feats
- **Replaced / altered class features:** well-versed

## Implementation details

### Replaces: the normal bard weapon proficiencies

- **Archetype feature:** Weapon Proficiency
- **Description:** A lotus geisha is proficient with all simple weapons, plus the butterfly sword, fighting fan, iron brush, sai, shortbow, and shuriken.
- **Detailed mechanics:**
  - **Rules text to implement:** A lotus geisha is proficient with all simple weapons, plus the butterfly sword, fighting fan, iron brush, sai, shortbow, and shuriken.
- **Implementation flags:**
  - flight/movement mode support.

### Replaces: well-versed

- **Archetype feature:** Enrapturing Performance (Su)
- **Description:** At 2nd level, a lotus geisha gains the ability to execute an enrapturing performance in addition to her bardic performance ability.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 7, 13.
  - **Rules text to implement:** At 2nd level, a lotus geisha gains the ability to execute an enrapturing performance in addition to her bardic performance ability. An enrapturing performance is exactly like a bardic performance with the following exceptions. A lotus geisha can use an enrapturing performance to recreate the effects of any of her known bardic performances, but she focuses the performance on only a single target within range. While other creatures see and hear a lotus geisha’s enrapturing performance, only the target of this ability is affected by it. A lotus geisha cannot have a bardic performance and an enrapturing performance in effect at the same time. Every round spent engaged in an enrapturing performance counts against the total number of rounds per day she can use her bardic performance, and she cannot use this ability if she does not have any more rounds of bardic performance left for that day. Starting an enrapturing performance is a standard action; at 7th level, it becomes a move action, and at 13th level, it becomes a swift action. A lotus geisha adds a +2 bonus to the DC of Will saves made to resist the effects of her fascinate, frightening tune, and suggestion enrapturing performances. When a lotus geisha uses her enrapturing performance ability to emulate inspire competence, inspire courage, inspire greatness, or inspire heroics, any bonuses to AC or on ability checks, attack rolls, damage rolls, saving throws, and skill checks increase by +1. For example, a lotus geisha using inspire heroics as an enrapturing performance would grant her target a +5 morale bonus on saving throws and a +5 dodge bonus to AC, instead of the usual +4 bonuses.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** At 1st level, a lotus geisha gains Spell Focus (enchantment) as a bonus feat.
- **Detailed mechanics:**
  - **Level hooks:** 1, 5.
  - **Rules text to implement:** At 1st level, a lotus geisha gains Spell Focus (enchantment) as a bonus feat. At 5th level, she gains Greater Spell Focus (enchantment) as a bonus feat. These bonus feats replace bardic knowledge and lore master.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon Proficiency
- Enrapturing Performance (Su)
- Bonus Feats
