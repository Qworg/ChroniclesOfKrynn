# Bard - Sandman

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Sandman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Sandman
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Master of Deception (Ex); Sneakspell (Ex); Trap Sense (Ex); Sneak Attack (Ex)
- **Replaced / altered class features:** inspire greatness; bardic knowledge; versatile performance; inspire competence; lore master

## Replacement details

### Replaces: inspire greatness

- **Archetype feature:** Bardic Performance
- **Description:** A sandman gains the following types of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 9, 15, 18, 20.
  - Mechanics summary: A sandman gains the following types of bardic performance. Stealspell (Su) : A sandman can use performance to steal spells from his foes and add them to his list of spells known. Once the performance is started, the bard can steal a prepared spell or a spell known from another creature with a touch attack as a standard action. The target receives a Will save (DC 10 + 1/2 the bard’s level + the bard’s Cha bonus) to negate the effect. The sandman may choose a spell to steal, but if the target does not possess the spell, the bardic performance immediately ends. Otherwise the spell stolen is random, but it is always of the highest level that the bard can cast, if possible.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook, rage/rage-power hook, bardic performance hook.

### Replaces: bardic knowledge

- **Archetype feature:** Master of Deception (Ex)
- **Description:** A sandman gains a bonus equal to half his level on Bluff, Sleight of Hand, and Stealth checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A sandman gains a bonus equal to half his level on Bluff, Sleight of Hand, and Stealth checks. He may also disarm magical traps with Disable Device as a rogue’s trapfinding ability.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: versatile performance

- **Archetype feature:** Sneakspell (Ex)
- **Description:** At 2nd level, a sandman adds +1 to the save DC of spells and bardic performance against opponents who are denied their Dex bonus.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 10, 18, 6, 14.
  - Mechanics summary: At 2nd level, a sandman adds +1 to the save DC of spells and bardic performance against opponents who are denied their Dex bonus. This increases to +2 at 10th level and +3 at 18th level. In addition, at 6th level he gains a +2 bonus on caster level checks to overcome spell resistance against such foes, and this bonus increases to +4 at 14th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook, bardic performance hook.

### Replaces: inspire competence

- **Archetype feature:** Trap Sense (Ex)
- **Description:** At 3rd level, a sandman gains a +1 bonus on Reflex saves against traps and a +1 dodge bonus to AC against traps.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a sandman gains a +1 bonus on Reflex saves against traps and a +1 dodge bonus to AC against traps. These bonuses increase by +1 every three levels after 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: lore master

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** At 5th level, a sandman inflicts +1d6 points of damage against targets within 30 feet that he flanks or that are denied their Dex bonus to AC against him.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a sandman inflicts +1d6 points of damage against targets within 30 feet that he flanks or that are denied their Dex bonus to AC against him. This damage increases by +1d6 every five levels after 5th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, sneak attack hook.

## Parsed source feature headings

- Bardic Performance
- Master of Deception (Ex)
- Sneakspell (Ex)
- Trap Sense (Ex)
- Sneak Attack (Ex)

