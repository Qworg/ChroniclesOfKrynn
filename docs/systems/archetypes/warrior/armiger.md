# Warrior - Armiger

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Armiger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Armiger
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bonus Feats; Hellknight Order; Studious Squire; Ardent (Su)
- **Replaced / altered class features:** Class Skills; Skill Points; 1st, 10th-level Bonus Feats; Bravery

## Replacement details

### Alters: the fighter’s bonus feats

- **Archetype feature:** Bonus Feats
- **Description:** When selecting fighter bonus feats, the armiger can select any feats whose names include the word “Hellknight” (such as those that appear on page 62 of Pathfinder Campaign Setting: Path of the Hellknight ) as though they were combat feats.
- **Mechanics:**
  - Mechanics summary: When selecting fighter bonus feats, the armiger can select any feats whose names include the word “Hellknight” (such as those that appear on page 62 of Pathfinder Campaign Setting: Path of the Hellknight ) as though they were combat feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Alters: the fighter’s class skills and skill points per level, and replaces the fighter’s bonus feats gained at 1st

- **Archetype feature:** Studious Squire
- **Description:** An armiger gains 2 additional skill ranks at each level.
- **Mechanics:**
  - Mechanics summary: An armiger gains 2 additional skill ranks at each level. These ranks must be put into Intimidate and Knowledge (planes). In addition, the armiger treats Knowledge (local) and Knowledge (planes) as class skills.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Alters: 10th levels

- **Archetype feature:** Studious Squire
- **Description:** An armiger gains 2 additional skill ranks at each level.
- **Mechanics:**
  - Mechanics summary: An armiger gains 2 additional skill ranks at each level. These ranks must be put into Intimidate and Knowledge (planes). In addition, the armiger treats Knowledge (local) and Knowledge (planes) as class skills.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: bravery

- **Archetype feature:** Ardent (Su)
- **Description:** Armigers are difficult to sway from their beliefs.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: Armigers are difficult to sway from their beliefs. At 2nd level, an armiger gains a +1 bonus on Will saves against charm effects. This bonus increases by 1 for every 4 fighter levels beyond 2nd. Once per day, if an armiger is forced to take an action that is diametrically opposed to her order’s beliefs and values while under the influence of a charm or compulsion effect, she can immediately attempt a Will save against the effect’s DC to resist acting out that order. Success does not remove the existing charm or compulsion effect, but does allow the armiger to resist betraying her beliefs.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 1st, 10th-level Bonus Feats

## Parsed source feature headings

- Bonus Feats
- Hellknight Order
- Studious Squire
- Ardent (Su)

