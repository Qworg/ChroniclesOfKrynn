# Monk - Soul Shepherd

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Soul Shepherd
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Soul%20Shepherd
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Calming Strike (Su); Otherworldly Resilience (Ex); Spirit Sense (Su); Yamaraj's Judgment (Sp)
- **Replaced / altered class features:** Stunning Fist; Evasion; Improved Evasion; Abundant Step; Quivering Palm

## Replacement details

### Replaces: stunning fist

- **Archetype feature:** Calming Strike (Su)
- **Description:** As an immediate action after hitting an incorporeal undead creature with an unarmed strike, a soul shepherd can attempt to calm the creature, encouraging it to move peacefully to the next stage of its metaphysical journey.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: As an immediate action after hitting an incorporeal undead creature with an unarmed strike, a soul shepherd can attempt to calm the creature, encouraging it to move peacefully to the next stage of its metaphysical journey. The target must succeed at a Will save (DC = 10 + half soul shepherd's level + the soul shepherd's Wisdom modifier) or be calmed, as calm spirit , for 1 minute. The soul shepherd can use this ability against a haunt by making a touch attack against an AC of 10 + the haunt's CR. A haunt does not receive a saving throw against this ability, but the ability's duration changes to concentration + 1 round, up to 1 round per level. A soul shepherd can use this ability a number of times per day equal to his soul shepherd level.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, ki/monk hook.
  - Needs implementation review: haunt rules.

### Replaces: evasion and improved evasion

- **Archetype feature:** Otherworldly Resilience (Ex)
- **Description:** At 2nd level, a soul shepherd gains DR 2/adamantine, cold resistance 5, and electricity resistance 5.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 9.
  - Mechanics summary: At 2nd level, a soul shepherd gains DR 2/adamantine, cold resistance 5, and electricity resistance 5. At 9th level, this improves to DR 5/adamantine, cold resistance 10, and electricity resistance 10.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: abundant step

- **Archetype feature:** Spirit Sense (Su)
- **Description:** At 12th level, a soul shepherd can spend 1 point from his ki pool as a swift action to grant himself the ability to notice, locate, and distinguish between living and undead creatures within 30 feet, just as if he had a psychopomp's spiritsense ability for a number of rounds equal to his Wisdom modifier (minimum 1).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a soul shepherd can spend 1 point from his ki pool as a swift action to grant himself the ability to notice, locate, and distinguish between living and undead creatures within 30 feet, just as if he had a psychopomp's spiritsense ability for a number of rounds equal to his Wisdom modifier (minimum 1).
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: quivering palm

- **Archetype feature:** Yamaraj's Judgment (Sp)
- **Description:** At 15th level, a soul shepherd can spend 1 point from his ki pool as a standard action to attempt to free an enslaved soul from an effect that is imprisoning it, such as soul bind or trap the soul.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a soul shepherd can spend 1 point from his ki pool as a standard action to attempt to free an enslaved soul from an effect that is imprisoning it, such as soul bind or trap the soul . This functions as a targeted dispel magic spell with a caster level equal to the soul shepherd's level. He can spend an additional ki point when he activates this ability to gain a +4 bonus on the caster level check. If the soul is held prisoner by a creature or a non-spell effect, the soul shepherd frees it if his caster level check result is at least 11 + the creature or effect's CR.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Calming Strike (Su)
- Otherworldly Resilience (Ex)
- Spirit Sense (Su)
- Yamaraj's Judgment (Sp)

