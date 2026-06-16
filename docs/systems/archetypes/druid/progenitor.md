# Druid - Progenitor

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Progenitor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Progenitor
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Infused Summoning (Ex); Primal Bond (Ex); Fey Shape (Su)
- **Replaced / altered class features:** Spontaneous Casting; Nature Bond; Wild Shape

## Replacement details

### Alters: spontaneous casting

- **Archetype feature:** Infused Summoning (Ex)
- **Description:** When a progenitor casts summon nature’s ally to summon a creature, the summoned creature gains fast healing equal to the progenitor’s level (maximum equal to the progenitor’s Wisdom modifier).
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: When a progenitor casts summon nature’s ally to summon a creature, the summoned creature gains fast healing equal to the progenitor’s level (maximum equal to the progenitor’s Wisdom modifier).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: nature bond

- **Archetype feature:** Primal Bond (Ex)
- **Description:** A progenitor infuses herself with fey magic so that she is treated as either her original creature type or the fey type for the purposes of spells or effects that target a creature by type, whichever is more beneficial to her.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: A progenitor infuses herself with fey magic so that she is treated as either her original creature type or the fey type for the purposes of spells or effects that target a creature by type, whichever is more beneficial to her. Additionally, the progenitor chooses one of two forms through which this bond expresses itself: magic or nature. A progenitor who chooses magic as her primal bond can draw upon wild magic as a swift action to attempt to cast a prepared spell without losing that spell from its spell slot. To use this ability, she casts the spell as she would normally, but as the spell’s effects take place, she must attempt a concentration check (DC = 20 + twice the spell’s level). If she fails, she expends the spell normally as if she had cast it, but its effects are replaced by a wild magic effect (see page 63) with a CR equal to her caster level and she is staggered until the end of her next turn. If she succeeds, she casts the spell normally and it is not expended from her prepared spell slot, allowing her to cast that spell again at a later point.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook.

### Alters: wild shape

- **Archetype feature:** Fey Shape (Su)
- **Description:** A progenitor never gains the ability to use wild shape to transform into an elemental.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 8, 10, 14.
  - Mechanics summary: A progenitor never gains the ability to use wild shape to transform into an elemental. At 6th level, a progenitor can use wild shape to change into a Small or Medium fey. At 8th level, a progenitor can use wild shape to change into a Tiny or Large fey. At 10th level, a progenitor can use wild shape to change into a Diminutive or Huge fey. At 14th level, when a progenitor uses wild shape to assume a fey form, her wild shape functions as fey form IV .
- **Implementation flags:**
  - Likely existing hooks: wild shape hook.

## Parsed source feature headings

- Infused Summoning (Ex)
- Primal Bond (Ex)
- Fey Shape (Su)

