# Bard - Lotus Geisha

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Lotus Geisha
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Lotus%20Geisha
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon Proficiency; Enrapturing Performance (Su); Bonus Feats
- **Replaced / altered class features:** well-versed

## Replacement details

### Replaces: the normal bard weapon proficiencies

- **Archetype feature:** Weapon Proficiency
- **Description:** A lotus geisha is proficient with all simple weapons, plus the butterfly sword, fighting fan, iron brush, sai, shortbow, and shuriken.
- **Mechanics:**
  - Mechanics summary: A lotus geisha is proficient with all simple weapons, plus the butterfly sword, fighting fan, iron brush, sai, shortbow, and shuriken.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: well-versed

- **Archetype feature:** Enrapturing Performance (Su)
- **Description:** At 2nd level, a lotus geisha gains the ability to execute an enrapturing performance in addition to her bardic performance ability.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 7, 13.
  - Mechanics summary: At 2nd level, a lotus geisha gains the ability to execute an enrapturing performance in addition to her bardic performance ability. An enrapturing performance is exactly like a bardic performance with the following exceptions. A lotus geisha can use an enrapturing performance to recreate the effects of any of her known bardic performances, but she focuses the performance on only a single target within range. A lotus geisha cannot have a bardic performance and an enrapturing performance in effect at the same time. Every round spent engaged in an enrapturing performance counts against the total number of rounds per day she can use her bardic performance, and she cannot use this ability if she does not have any more rounds of bardic performance left for that day. Starting an enrapturing performance is a standard action; at 7th level, it becomes a move action, and at 13th level, it becomes a swift action.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, save DC calculation, rage/rage-power hook, bardic performance hook, ki/monk hook.

## Parsed source feature headings

- Weapon Proficiency
- Enrapturing Performance (Su)
- Bonus Feats

