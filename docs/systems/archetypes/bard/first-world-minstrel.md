# Bard - First World Minstrel

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** First World Minstrel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20First%20World%20Minstrel
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fey Magic; Wild Empathy (Ex); Bardic Performance; Resist Nature’s Lure (Ex)
- **Replaced / altered class features:** bardic knowledge; inspire courage; dirge of doom; well-versed

## Replacement details

### Alters: the First World minstrel’s spell list

- **Archetype feature:** Fey Magic
- **Description:** A First World minstrel adds summon nature’s ally spells to his spell list instead of the equivalent summon monster spells.
- **Mechanics:**
  - Mechanics summary: A First World minstrel adds summon nature’s ally spells to his spell list instead of the equivalent summon monster spells.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: bardic knowledge

- **Archetype feature:** Wild Empathy (Ex)
- **Description:** A First World minstrel gains the wild empathy druid class feature , using his bard level as his druid level for this ability.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A First World minstrel gains the wild empathy druid class feature , using his bard level as his druid level for this ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: inspire courage

- **Archetype feature:** Bardic Performance
- **Description:** A First World minstrel gains the following types of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: A First World minstrel gains the following types of bardic performance. Echoes of the First World (Su) : A First World minstrel infuses himself or a single willing ally within 30 feet with the strange magic of the First World, granting the target one of the special abilities from the fey creature template other than change shape for 1 round. For every 3 levels beyond 1st the First World minstrel has, he can target one additional ally or add an additional special ability to one of his targets. Gremlin’s Luck (Su) : A First World minstrel of 8th level or higher can use his performance to inflict bad luck on a target within 30 feet for 1 round. Whenever the target rolls an ability check, attack roll, saving throw, or skill check, it must roll twice and take the worse result. A target that succeeds at a Will save (DC 10 + half the First World minstrel’s level + his Charisma modifier) negates the effect and is immune to this ability for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, saving throw hook, save DC calculation, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: dirge of doom

- **Archetype feature:** Bardic Performance
- **Description:** A First World minstrel gains the following types of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: A First World minstrel gains the following types of bardic performance. Echoes of the First World (Su) : A First World minstrel infuses himself or a single willing ally within 30 feet with the strange magic of the First World, granting the target one of the special abilities from the fey creature template other than change shape for 1 round. For every 3 levels beyond 1st the First World minstrel has, he can target one additional ally or add an additional special ability to one of his targets. Gremlin’s Luck (Su) : A First World minstrel of 8th level or higher can use his performance to inflict bad luck on a target within 30 feet for 1 round. Whenever the target rolls an ability check, attack roll, saving throw, or skill check, it must roll twice and take the worse result. A target that succeeds at a Will save (DC 10 + half the First World minstrel’s level + his Charisma modifier) negates the effect and is immune to this ability for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, saving throw hook, save DC calculation, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: well-versed

- **Archetype feature:** Resist Nature’s Lure (Ex)
- **Description:** At 2nd level, a First World minstrel gains the resist nature’s lure druid class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a First World minstrel gains the resist nature’s lure druid class feature.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

## Parsed source feature headings

- Fey Magic
- Wild Empathy (Ex)
- Bardic Performance
- Resist Nature’s Lure (Ex)

