# Cleric - Hidden Priest

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Hidden Priest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Hidden%20Priest
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** False Arcanist (Ex); Unseen Devotion (Su)
- **Replaced / altered class features:** one of the cleric’s two 1st-level domain powers (her choice); one of the cleric’s two 8th-level domain powers (his choice)

## Replacement details

### Replaces: one of the cleric’s two 1st-level domain powers (her choice)

- **Archetype feature:** False Arcanist (Ex)
- **Description:** At 1st level, a hidden priest is able to disguise his cleric spellcasting, presenting it as arcane magic of some kind.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a hidden priest is able to disguise his cleric spellcasting, presenting it as arcane magic of some kind. Typically, this is as alchemist, bard, sorcerer, or wizard magic, and the cleric disguises the words and gestures of the cleric spell with accoutrements appropriate to his apparent profession. He must make a skill check (DC 10 + twice the level of the spell) to disguise his casting and successfully cast the spell. The type of skill check depends on the type of caster he pretends to be: Craft (alchemy) for alchemist, Perform for bard, Knowledge (arcana) for sorcerer or wizard. Using Spellcraft to identify the spell works normally, though unless the observer beats the DC by 10 or more, she doesn’t suspect the source of the magic is divine. If he makes a DC 12 Craft (alchemy) check, he disguises his spellcasting as the mixing of an alchemical extract or potion (perhaps with the words disguised as reciting an obscure formula or talking herself through the list of ingredients), which he gives to the target.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook, cleric domain hook, ki/monk hook.

### Replaces: one of the cleric’s two 8th-level domain powers (his choice)

- **Archetype feature:** Unseen Devotion (Su)
- **Description:** At 8th level, a hidden priest can apply the Silent Spell and Still Spell feats to a spell he is about to cast.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a hidden priest can apply the Silent Spell and Still Spell feats to a spell he is about to cast. This does not alter the level of the spell or the casting time. He can use this ability once per day at 8th level and one additional time per day for every four additional cleric levels beyond 8th. Even though this ability does not modify the spell’s actual level, he cannot use this ability to cast a spell whose modified spell level would be above the level of the highest-level spell that he is capable of casting. This ability always applies both feats (the cleric cannot use it to just apply one or the other).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, cleric domain hook.

## Parsed source feature headings

- False Arcanist (Ex)
- Unseen Devotion (Su)

