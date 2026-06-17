# Monk - Tetori

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Tetori
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Tetori
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Errata; Bonus Feat; Graceful Grappler (Ex); Counter-Grapple (Ex); Break Free (Ex); Inescapable Grasp (Su); Form Lock (Su); Iron Body (Su)
- **Replaced / altered class features:** flurry of blows; slow fall; high jump; abundant step, improved evasion, timeless body, and tongue of sun and moon; diamond soul; empty body

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Errata
- **Description:** Link The style of the tetori is that of the majestic wrestler—a warrior with a dizzying array of grabs, holds, and locks with which to bewilder and incapacitate his foes.
- **Detailed mechanics:**
  - **Rules text to implement:** Link The style of the tetori is that of the majestic wrestler—a warrior with a dizzying array of grabs, holds, and locks with which to bewilder and incapacitate his foes.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feat
- **Description:** A tetori gains the following bonus feats: 1st level—Improved Grapple, 2nd level—Stunning Pin, 6th Level—Greater Grapple, 10th level—Pinning Knockout, 14th level—Choke Hold, 18th level—Neckbreaker.
- **Detailed mechanics:**
  - **Level hooks:** 1, 2, 10, 14, 18.
  - **Rules text to implement:** A tetori gains the following bonus feats: 1st level—Improved Grapple, 2nd level—Stunning Pin, 6th Level—Greater Grapple, 10th level—Pinning Knockout, 14th level—Choke Hold, 18th level—Neckbreaker. These feats replace a monk’s normal bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: flurry of blows

- **Archetype feature:** Graceful Grappler (Ex)
- **Description:** A tetori uses his monk level in place of his base attack bonus to determine CMB and CMD for grappling.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8, 15.
  - **Rules text to implement:** A tetori uses his monk level in place of his base attack bonus to determine CMB and CMD for grappling. At 4th level, he suffers no penalties on attack rolls, can make attacks of opportunity while grappling, and retains his Dexterity bonus to AC when pinning an opponent or when grappled. At 8th level, a tetori gains the grab special attack when using unarmed strikes ( Pathfinder RPG Bestiary 301), and can use this ability against creatures his own size or smaller by spending 1 point from his ki pool, or against larger creatures by spending 2 points from his ki pool. At 15th level, a tetori gains the constrict special attack ( Bestiary 298), inflicting his unarmed strike damage on any successful grapple check.
- **Implementation flags:**
  - ki subsystem.

### Replaces: slow fall

- **Archetype feature:** Counter-Grapple (Ex)
- **Description:** At 4th level, a tetori wrestler may make an attack of opportunity against a creature attempting to grapple him.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 6, 8, 10.
  - **Rules text to implement:** At 4th level, a tetori wrestler may make an attack of opportunity against a creature attempting to grapple him. This ability does not allow the tetori to make an attack of opportunity against a creature with the Greater Grapple feat. At 6th level, he may use counter-grapple even if his attacker has concealment or total concealment, at 8th level even if he is flat-footed, and at 10th level even if his attacker has exceptional reach.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: high jump

- **Archetype feature:** Break Free (Ex)
- **Description:** At 5th level, a tetori adds his monk level on combat maneuver or Escape Artist checks made to escape a grapple.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a tetori adds his monk level on combat maneuver or Escape Artist checks made to escape a grapple. If a tetori fails a save against an effect that causes him to become entangled, paralyzed, slowed, or staggered, he may spend 1 point from his ki pool as an immediate action to attempt a new save.
- **Implementation flags:**
  - ki subsystem.

### Replaces: abundant step, improved evasion, timeless body, and tongue of sun and moon

- **Archetype feature:** Inescapable Grasp (Su)
- **Description:** At 9th level, a tetori can spend 1 point from his ki pool to suppress his opponents’ freedom of movement and magical bonuses to Escape Artist or on checks to escape a grapple.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9, 13, 17.
  - **Rules text to implement:** At 9th level, a tetori can spend 1 point from his ki pool to suppress his opponents’ freedom of movement and magical bonuses to Escape Artist or on checks to escape a grapple. At 13th level, this ability also duplicates the effect of dimensional anchor. At 17th level, the tetori’s unarmed strike gains the ghost touch special ability, and an incorporeal creature that he strikes gains the grappled condition (Reflex negates, DC 10 + 1/2 the wrestler’s level + his Wisdom modifier). Inescapable grasp is a swift action and lasts until the beginning of the wrestler’s next turn.
- **Implementation flags:**
  - ki subsystem.

### Replaces: diamond soul

- **Archetype feature:** Form Lock (Su)
- **Description:** At 13th level, a tetori can negate a polymorph effect by touch with a Wisdom check, adding a bonus equal to his monk level, against a DC of 11 + the caster level of the effect (or HD of the creature, for supernatural polymorph effects).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 13.
  - **Rules text to implement:** At 13th level, a tetori can negate a polymorph effect by touch with a Wisdom check, adding a bonus equal to his monk level, against a DC of 11 + the caster level of the effect (or HD of the creature, for supernatural polymorph effects). This is a standard action requiring 2 points from the tetori’s ki pool, or an immediate action if a creature the tetori is grappling attempts to use a polymorph effect.
- **Implementation flags:**
  - ki subsystem.

### Replaces: empty body

- **Archetype feature:** Iron Body (Su)
- **Description:** At 19th level, as a move action, a tetori can make his tissues ultra-dense for 1 minute as the iron body spell by spending 3 points from his ki pool.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 19.
  - **Rules text to implement:** At 19th level, as a move action, a tetori can make his tissues ultra-dense for 1 minute as the iron body spell by spending 3 points from his ki pool.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Errata
- Bonus Feat
- Graceful Grappler (Ex)
- Counter-Grapple (Ex)
- Break Free (Ex)
- Inescapable Grasp (Su)
- Form Lock (Su)
- Iron Body (Su)
