# Wizard - Hallowed Necromancer

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Hallowed Necromancer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Hallowed%20Necromancer
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Arcane School; Turn Undead (Su); Positive Touch (Su); Death Bane (Su); Ghostbane (Su); Guarded Life (Su)
- **Replaced / altered class features:** grave touch and Scribe Scroll; the bonus feat gained at 5th level; the bonus feat gained at 10th level; the 15th level bonus feat

## Replacement details

### Alters: arcane school and spells

- **Archetype feature:** Arcane School
- **Description:** A hallowed necromancer must specialize in the school of necromancy and swear never to create undead.
- **Mechanics:**
  - Mechanics summary: A hallowed necromancer must specialize in the school of necromancy and swear never to create undead.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: power over undead

- **Archetype feature:** Turn Undead (Su)
- **Description:** A hallowed necromancer must select Turn Undead as a bonus feat with her power over undead arcane school ability.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A hallowed necromancer must select Turn Undead as a bonus feat with her power over undead arcane school ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: grave touch and Scribe Scroll

- **Archetype feature:** Positive Touch (Su)
- **Description:** As a standard action, a hallowed necromancer can sacrifice a prepared spell of the necromancy school to spontaneously cast a cure spell of the same level or lower, counting the spell as a necromancy spell rather than a conjuration spell.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: As a standard action, a hallowed necromancer can sacrifice a prepared spell of the necromancy school to spontaneously cast a cure spell of the same level or lower, counting the spell as a necromancy spell rather than a conjuration spell. This cure spell harms only undead; it doesn’t heal the living. If the spell requires an attack roll, it as has a critical threat range of 19–20. A number of times per day equal to 3 + her Intelligence modifier, when she spontaneously casts a cure spell, she can either turn the effect into a ray and increase the range to close or remove the Will save but deal half the normal amount of damage.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, spellcasting/spell-list hook.

### Replaces: the bonus feat gained at 5th level

- **Archetype feature:** Death Bane (Su)
- **Description:** At 5th level, a hallowed necromancer’s cure spells are maximized when used to damage undead and the save DCs of her spells cast on undead creatures are 1 higher.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a hallowed necromancer’s cure spells are maximized when used to damage undead and the save DCs of her spells cast on undead creatures are 1 higher. She can expend 2 uses of positive touch as a swift action to imbue any weapon she wields with the undead-bane or ghost touch weapon special ability for 1 round per 5 wizard levels she has. These effects apply only against undead, and only while the hallowed necromancer wields the weapon. If the weapon is her arcane bond item, this ability costs only 1 use of positive touch.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook.

### Replaces: the bonus feat gained at 10th level

- **Archetype feature:** Ghostbane (Su)
- **Description:** At 10th level, a hallowed necromancer can expend 3 uses of her positive touch as a swift action while casting a spell to affect undead as if the spell were prepared with the Ectoplasmic Spell APG , Thanatopic Spell APG , or Threnodic Spell APG feat.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, a hallowed necromancer can expend 3 uses of her positive touch as a swift action while casting a spell to affect undead as if the spell were prepared with the Ectoplasmic Spell APG , Thanatopic Spell APG , or Threnodic Spell APG feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the 15th level bonus feat

- **Archetype feature:** Guarded Life (Su)
- **Description:** At 15th level, when a hallowed necromancer fails a saving throw against a death effect, energy drain, a necromantic effect, or a negative energy effect, she can expend 2 uses of positive touch as an immediate action to reroll it.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15, 4.
  - Mechanics summary: At 15th level, when a hallowed necromancer fails a saving throw against a death effect, energy drain, a necromantic effect, or a negative energy effect, she can expend 2 uses of positive touch as an immediate action to reroll it. She must accept the result of the reroll even if it’s worse. If she would take hit point damage from such an effect, as an immediate action she can instead expend 1 use of positive touch and sacrifice a prepared necromancy spell of 4th level or higher to reduce the damage she takes by an amount equal to her wizard level + 10 times the spell level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Arcane School
- Turn Undead (Su)
- Positive Touch (Su)
- Death Bane (Su)
- Ghostbane (Su)
- Guarded Life (Su)

