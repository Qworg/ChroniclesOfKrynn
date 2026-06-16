# Monk - Gray Disciple

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Gray Disciple
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Gray%20Disciple
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fade from Sight (Sp); Gray Heart (Sp); Born in Darkness (Sp); Earth Glide (Su); Entomb (Su); Earthen Thrall (Sp)
- **Replaced / altered class features:** slow fall and still mind; high jump and the bonus feat gained at 6th level; wholeness of body; abundant step; quivering palm; tongue of the sun and moon and empty body

## Replacement details

### Replaces: slow fall and still mind

- **Archetype feature:** Fade from Sight (Sp)
- **Description:** At 4th level, as a swift action, the gray disciple can become invisible (as the invisibility spell) for 1 round by spending 1 ki point.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, as a swift action, the gray disciple can become invisible (as the invisibility spell) for 1 round by spending 1 ki point. To use this ability, the gray disciple must already have invisibility as a spell-like ability.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Replaces: high jump

- **Archetype feature:** Gray Heart (Sp)
- **Description:** At 6th level, as a swift action, the gray disciple can enlarge himself (as the enlarge person spell) for 1 minute by spending 1 ki point.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, as a swift action, the gray disciple can enlarge himself (as the enlarge person spell) for 1 minute by spending 1 ki point. To use this ability, the gray disciple must already have enlarge person available as a spell-like ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Replaces: the bonus feat gained at 6th level

- **Archetype feature:** Gray Heart (Sp)
- **Description:** At 6th level, as a swift action, the gray disciple can enlarge himself (as the enlarge person spell) for 1 minute by spending 1 ki point.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, as a swift action, the gray disciple can enlarge himself (as the enlarge person spell) for 1 minute by spending 1 ki point. To use this ability, the gray disciple must already have enlarge person available as a spell-like ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Replaces: wholeness of body

- **Archetype feature:** Born in Darkness (Sp)
- **Description:** At 7th level, as a standard action, the gray disciple can radiate darkness (as the spell, except originating from the disciple’s person) for 1 round per level by spending 1 ki point.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, as a standard action, the gray disciple can radiate darkness (as the spell, except originating from the disciple’s person) for 1 round per level by spending 1 ki point.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Replaces: abundant step

- **Archetype feature:** Earth Glide (Su)
- **Description:** At 12th level, as a swift action, the gray disciple can spend a ki point to walk through solid stone for 1 round.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, as a swift action, the gray disciple can spend a ki point to walk through solid stone for 1 round. This functions as the earth glide universal monster ability. The gray disciple may continue earth gliding as long as he spends 1 ki point every round as a swift action. If he ceases earth gliding within a solid object, he is violently ejected and takes 5d6 points of damage. The gray disciple is not harmed by damage caused to material he is earth gliding through, but a stone to flesh spell cast upon it causes violent ejection as described above.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Replaces: quivering palm

- **Archetype feature:** Entomb (Su)
- **Description:** At 15th level, a gray disciple can phase a foe into solid rock, killing it instantly.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a gray disciple can phase a foe into solid rock, killing it instantly. To use this ability, he expends 1 ki point as part of a bull rush or reposition combat maneuver against a creature adjacent to unworked earth or stone. If the creature succeeds at a Reflex save (DC 10 + 1/2 the gray disciple’s monk level + the gray disciple’s Wisdom modifier), it is ejected in the nearest open space and takes 5d6 points of damage. If it fails, it dies instantly as its body merges with the surrounding stone. Entomb is usable once per day, but a failed bull rush or reposition attempt does not count as a use of the ability. Entomb has no effect on creatures that can earth glide, are incorporeal, or can otherwise can survive merging with a solid object.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, ki/monk hook.

### Replaces: tongue of the sun and moon and empty body

- **Archetype feature:** Earthen Thrall (Sp)
- **Description:** At 17th level, a gray disciple can attempt to control a creature with the earth subtype once per day.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a gray disciple can attempt to control a creature with the earth subtype once per day. This ability is treated as dominate monster (DC 10 + 1/2 the gray disciple’s monk level + the gray disciple’s Wisdom modifier), but is only effective against creatures with the earth subtype, and the gray disciple can keep only a single creature enthralled.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

## Parsed source feature headings

- Fade from Sight (Sp)
- Gray Heart (Sp)
- Born in Darkness (Sp)
- Earth Glide (Su)
- Entomb (Su)
- Earthen Thrall (Sp)

