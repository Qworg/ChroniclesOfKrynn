# Monk - Terra-Cotta Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Terra-Cotta Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Terra-Cotta%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Trap Intuition (Ex); Stone Grip (Su); Trap Dodge (Ex); Sudden Adit (Su); Petrifying Strike (Su); Rainmaker (Su)
- **Replaced / altered class features:** evasion; high jump; improved evasion; abundant step; quivering palm; empty body

## Replacement details

### Replaces: evasion

- **Archetype feature:** Trap Intuition (Ex)
- **Description:** At 2nd level, whenever a terra-cotta monk comes within 10 feet of a trap, he receives an immediate Perception check to notice the trap.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, whenever a terra-cotta monk comes within 10 feet of a trap, he receives an immediate Perception check to notice the trap. The GM should make this check in secret. A terra-cotta monk gains a +2 bonus on Perception checks to notice traps. This bonus increases to +4 if the trap is located in a stone wall or floor.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: high jump

- **Archetype feature:** Stone Grip (Su)
- **Description:** At 5th level, a terra-cotta monk adds a bonus equal to his class level on all Climb checks.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a terra-cotta monk adds a bonus equal to his class level on all Climb checks. He can move at his full movement rate while climbing with no increase to the check’s DC. By spending 1 point from his ki pool as a swift action, a monk gains the benefits of spider climb for 1 round.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, ki/monk hook.

### Replaces: improved evasion

- **Archetype feature:** Trap Dodge (Ex)
- **Description:** At 10th level, a terra-cotta monk gains a bonus equal to his Wisdom modifier on all saving throws made against effects produced by mechanical traps.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, a terra-cotta monk gains a bonus equal to his Wisdom modifier on all saving throws made against effects produced by mechanical traps.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: abundant step

- **Archetype feature:** Sudden Adit (Su)
- **Description:** At 12th level, a terra-cotta monk can create passages through stone or dirt as if using the spell passwall with a caster level equal to his monk level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a terra-cotta monk can create passages through stone or dirt as if using the spell passwall with a caster level equal to his monk level. Using this ability is a move action that consumes 2 points of the monk’s ki pool.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

### Replaces: quivering palm

- **Archetype feature:** Petrifying Strike (Su)
- **Description:** At 15th level, a terra-cotta monk can turn an opponent to stone with a single strike.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a terra-cotta monk can turn an opponent to stone with a single strike. He can use this ability once per day, and must announce the attempt before making his attack roll. If the terra-cotta monk’s strike is successful, the creature must succeed at a Fortitude save (DC = 10 + 1/2 the monk’s level + the monk’s Wis modifier) or be petrified for 1 hour per monk level.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, ki/monk hook.

### Replaces: empty body

- **Archetype feature:** Rainmaker (Su)
- **Description:** At 19th level, anytime a terra-cotta monk is underground, he may cause a section of the roof to come down on his enemies per the spell earthquake , with a caster level equal to his monk level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, anytime a terra-cotta monk is underground, he may cause a section of the roof to come down on his enemies per the spell earthquake , with a caster level equal to his monk level. The terra-cotta monk may use this ability only while in a cave, cavern, or tunnel. Using this ability is a standard action that consumes 3 points from his ki pool.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Trap Intuition (Ex)
- Stone Grip (Su)
- Trap Dodge (Ex)
- Sudden Adit (Su)
- Petrifying Strike (Su)
- Rainmaker (Su)

