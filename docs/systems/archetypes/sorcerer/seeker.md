# Sorcerer - Seeker

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Seeker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Seeker
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Tinkering (Ex); Seeker Lore (Ex); Seeker Magic (Su)
- **Replaced / altered class features:** all of the bonus class skills he would otherwise normally gain from his mystery; his bonus Eschew Materials feat; the revelation gained at 3rd level; the bloodline power gained at 3rd level; the revelation gained at 15th level; the bloodline power gained at 15th level

## Replacement details

### Replaces: all of the bonus class skills he would otherwise normally gain from his mystery

- **Archetype feature:** Tinkering (Ex)
- **Description:** Seekers often look to ancient devices, old tomes, and strange magical items in order to learn more about their oracle mysteries or sorcerous bloodlines.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: Seekers often look to ancient devices, old tomes, and strange magical items in order to learn more about their oracle mysteries or sorcerous bloodlines. As a result of this curiosity and thanks to an innate knack at deciphering the strange and weird, a seeker gains Disable Device as a class skill. In addition, at 1st level, a seeker adds half his oracle or sorcerer level on Perception checks made to locate traps and on all Disable Device skill checks (minimum +1). A seeker can use Disable Device to disarm magical traps. If the seeker also possesses levels in rogue or another class that provides the trapfinding ability, those levels stack with his oracle or sorcerer levels for determining his overall bonus on these skill checks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, sorcerer bloodline hook, ki/monk hook.

### Replaces: his bonus Eschew Materials feat

- **Archetype feature:** Tinkering (Ex)
- **Description:** Seekers often look to ancient devices, old tomes, and strange magical items in order to learn more about their oracle mysteries or sorcerous bloodlines.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: Seekers often look to ancient devices, old tomes, and strange magical items in order to learn more about their oracle mysteries or sorcerous bloodlines. As a result of this curiosity and thanks to an innate knack at deciphering the strange and weird, a seeker gains Disable Device as a class skill. In addition, at 1st level, a seeker adds half his oracle or sorcerer level on Perception checks made to locate traps and on all Disable Device skill checks (minimum +1). A seeker can use Disable Device to disarm magical traps. If the seeker also possesses levels in rogue or another class that provides the trapfinding ability, those levels stack with his oracle or sorcerer levels for determining his overall bonus on these skill checks.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, sorcerer bloodline hook, ki/monk hook.

### Replaces: the revelation gained at 3rd level

- **Archetype feature:** Seeker Lore (Ex)
- **Description:** By 3rd level, a seeker has already learned much about his mystery or bloodline, and is more comfortable using the bonus spells gained by that mystery or bloodline.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: By 3rd level, a seeker has already learned much about his mystery or bloodline, and is more comfortable using the bonus spells gained by that mystery or bloodline. He gains a +4 bonus on all concentration checks, on caster level checks made to overcome spell resistance, and on all Knowledge (arcana) and Spellcraft checks made on topics associated with his bonus spells.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the bloodline power gained at 3rd level

- **Archetype feature:** Seeker Lore (Ex)
- **Description:** By 3rd level, a seeker has already learned much about his mystery or bloodline, and is more comfortable using the bonus spells gained by that mystery or bloodline.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: By 3rd level, a seeker has already learned much about his mystery or bloodline, and is more comfortable using the bonus spells gained by that mystery or bloodline. He gains a +4 bonus on all concentration checks, on caster level checks made to overcome spell resistance, and on all Knowledge (arcana) and Spellcraft checks made on topics associated with his bonus spells.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, sorcerer bloodline hook.

### Replaces: the revelation gained at 15th level

- **Archetype feature:** Seeker Magic (Su)
- **Description:** At 15th level, a seeker becomes skilled at modifying his mystery or bloodline spells with metamagic.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a seeker becomes skilled at modifying his mystery or bloodline spells with metamagic. When a seeker applies a metamagic feat to any bonus spells granted by his mystery or his bloodline, he reduces the metamagic feat’s spell level adjustment by 1. Thus, applying a Metamagic feat like Still Spell to a spell does not change its effective spell level at all, while applying Quicken Spell only increases the spell’s effective spell level by 3 instead of by 4. This reduction to the spell level adjustment for Metamagic feats does not stack with similar reductions from other abilities.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, sorcerer bloodline hook, ki/monk hook.

### Replaces: the bloodline power gained at 15th level

- **Archetype feature:** Seeker Magic (Su)
- **Description:** At 15th level, a seeker becomes skilled at modifying his mystery or bloodline spells with metamagic.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a seeker becomes skilled at modifying his mystery or bloodline spells with metamagic. When a seeker applies a metamagic feat to any bonus spells granted by his mystery or his bloodline, he reduces the metamagic feat’s spell level adjustment by 1. Thus, applying a Metamagic feat like Still Spell to a spell does not change its effective spell level at all, while applying Quicken Spell only increases the spell’s effective spell level by 3 instead of by 4. This reduction to the spell level adjustment for Metamagic feats does not stack with similar reductions from other abilities.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, sorcerer bloodline hook, ki/monk hook.

## Parsed source feature headings

- Tinkering (Ex)
- Seeker Lore (Ex)
- Seeker Magic (Su)

