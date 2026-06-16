# Monk - Tetori

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Tetori
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Tetori
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Errata; Bonus Feat; Graceful Grappler (Ex); Counter-Grapple (Ex); Break Free (Ex); Inescapable Grasp (Su); Form Lock (Su); Iron Body (Su)
- **Replaced / altered class features:** flurry of blows; slow fall; high jump; abundant step, improved evasion, timeless body, and tongue of sun and moon; diamond soul; empty body

## Replacement details

### Replaces: flurry of blows

- **Archetype feature:** Graceful Grappler (Ex)
- **Description:** A tetori uses his monk level in place of his base attack bonus to determine CMB and CMD for grappling.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 8, 15.
  - Mechanics summary: A tetori uses his monk level in place of his base attack bonus to determine CMB and CMD for grappling. At 4th level, he suffers no penalties on attack rolls, can make attacks of opportunity while grappling, and retains his Dexterity bonus to AC when pinning an opponent or when grappled. At 8th level, a tetori gains the grab special attack when using unarmed strikes ( Pathfinder RPG Bestiary 301), and can use this ability against creatures his own size or smaller by spending 1 point from his ki pool, or against larger creatures by spending 2 points from his ki pool. At 15th level, a tetori gains the constrict special attack ( Bestiary 298), inflicting his unarmed strike damage on any successful grapple check.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: slow fall

- **Archetype feature:** Counter-Grapple (Ex)
- **Description:** At 4th level, a tetori wrestler may make an attack of opportunity against a creature attempting to grapple him.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 6, 8, 10.
  - Mechanics summary: At 4th level, a tetori wrestler may make an attack of opportunity against a creature attempting to grapple him. This ability does not allow the tetori to make an attack of opportunity against a creature with the Greater Grapple feat. At 6th level, he may use counter-grapple even if his attacker has concealment or total concealment, at 8th level even if he is flat-footed, and at 10th level even if his attacker has exceptional reach.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: high jump

- **Archetype feature:** Break Free (Ex)
- **Description:** At 5th level, a tetori adds his monk level on combat maneuver or Escape Artist checks made to escape a grapple.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a tetori adds his monk level on combat maneuver or Escape Artist checks made to escape a grapple. If a tetori fails a save against an effect that causes him to become entangled, paralyzed, slowed, or staggered, he may spend 1 point from his ki pool as an immediate action to attempt a new save.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, ki/monk hook.

### Replaces: abundant step, improved evasion, timeless body, and tongue of sun and moon

- **Archetype feature:** Inescapable Grasp (Su)
- **Description:** At 9th level, a tetori can spend 1 point from his ki pool to suppress his opponents’ freedom of movement and magical bonuses to Escape Artist or on checks to escape a grapple.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 9, 13, 17.
  - Mechanics summary: At 9th level, a tetori can spend 1 point from his ki pool to suppress his opponents’ freedom of movement and magical bonuses to Escape Artist or on checks to escape a grapple. At 13th level, this ability also duplicates the effect of dimensional anchor . At 17th level, the tetori’s unarmed strike gains the ghost touch special ability, and an incorporeal creature that he strikes gains the grappled condition (Reflex negates, DC 10 + 1/2 the wrestler’s level + his Wisdom modifier). Inescapable grasp is a swift action and lasts until the beginning of the wrestler’s next turn.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, ki/monk hook.

### Replaces: diamond soul

- **Archetype feature:** Form Lock (Su)
- **Description:** At 13th level, a tetori can negate a polymorph effect by touch with a Wisdom check, adding a bonus equal to his monk level, against a DC of 11 + the caster level of the effect (or HD of the creature, for supernatural polymorph effects).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a tetori can negate a polymorph effect by touch with a Wisdom check, adding a bonus equal to his monk level, against a DC of 11 + the caster level of the effect (or HD of the creature, for supernatural polymorph effects). This is a standard action requiring 2 points from the tetori’s ki pool, or an immediate action if a creature the tetori is grappling attempts to use a polymorph effect.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, ki/monk hook.

### Replaces: empty body

- **Archetype feature:** Iron Body (Su)
- **Description:** At 19th level, as a move action, a tetori can make his tissues ultra-dense for 1 minute as the iron body spell by spending 3 points from his ki pool.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, as a move action, a tetori can make his tissues ultra-dense for 1 minute as the iron body spell by spending 3 points from his ki pool.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Errata
- Bonus Feat
- Graceful Grappler (Ex)
- Counter-Grapple (Ex)
- Break Free (Ex)
- Inescapable Grasp (Su)
- Form Lock (Su)
- Iron Body (Su)

