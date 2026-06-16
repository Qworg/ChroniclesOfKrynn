# Bard - Dawnflower Dervish

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Dawnflower Dervish
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Dawnflower%20Dervish
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Deity; Battle Dance; Dervish Dance (Ex); Spinning Spellcaster (Ex); Meditative Whirl (Ex)
- **Replaced / altered class features:** their proficiency with the rapier and whip; bardic knowledge; lore master; the dirge of doom bardic performance

## Replacement details

### Replaces: their proficiency with the rapier and whip

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Dawnflower dervishes gain weapon proficiency with the scimitar.
- **Mechanics:**
  - Mechanics summary: Dawnflower dervishes gain weapon proficiency with the scimitar.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the standard bardic performance ability

- **Archetype feature:** Battle Dance
- **Description:** A Dawnflower dervish is trained in the use of the Perform skill, especially dance, to create magical effects on himself.
- **Mechanics:**
  - Level hooks: 10.
  - Mechanics summary: A Dawnflower dervish is trained in the use of the Perform skill, especially dance, to create magical effects on himself. This works like bardic performance, except that the Dawnflower dervish’s performances grant double their normal bonuses, but these bonuses only affect him. Battle dancing is treated as bardic performance for the purposes of feats, abilities, and effects that affect bardic performance, except that battle dancing does not benefit from the Lingering Performance feat or any other ability that allows a bardic performance to grant bonuses after it has ended. Like bardic performance, battle dancing cannot be maintained at the same time as other performance abilities. Starting a battle dance is a move action, but it can be maintained each round as a free action. Changing a battle dance from one effect to another requires the Dawnflower dervish to stop the previous performance and start the new one as a move action.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: bardic knowledge

- **Archetype feature:** Dervish Dance (Ex)
- **Description:** A Dawnflower dervish gains the Dervish Dance feat as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A Dawnflower dervish gains the Dervish Dance feat as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: lore master

- **Archetype feature:** Spinning Spellcaster (Ex)
- **Description:** At 5th level, a Dawnflower dervish gains a +4 bonus on concentration checks to cast spells defensively.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a Dawnflower dervish gains a +4 bonus on concentration checks to cast spells defensively.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the dirge of doom bardic performance

- **Archetype feature:** Meditative Whirl (Ex)
- **Description:** At 8th level, when using battle dance, the Dawnflower dervish can enter a trancelike state where his spinning motion represents the movement of the planets around the sun, and his spirit is attuned to the healing aspects of Sarenrae.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, when using battle dance, the Dawnflower dervish can enter a trancelike state where his spinning motion represents the movement of the planets around the sun, and his spirit is attuned to the healing aspects of Sarenrae. By spending a move action focusing on his whirling, the dervish can apply the Quicken Spell feat to any cure spell he is about to cast (effectively spending a move action and swift action to cast the spell). This does not alter the level of the spell or the casting time. The dervish can use this ability once per day at 8th level and one additional time per day for every two dervish levels he has beyond 8th.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, bardic performance hook.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Deity
- Battle Dance
- Dervish Dance (Ex)
- Spinning Spellcaster (Ex)
- Meditative Whirl (Ex)

