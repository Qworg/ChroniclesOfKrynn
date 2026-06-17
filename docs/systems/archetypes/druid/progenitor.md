# Druid - Progenitor

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Progenitor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Progenitor
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Infused Summoning (Ex); Primal Bond (Ex); Fey Shape (Su)
- **Replaced / altered class features:** Spontaneous Casting; Nature Bond; Wild Shape

## Implementation details

### Alters: spontaneous casting

- **Archetype feature:** Infused Summoning (Ex)
- **Description:** When a progenitor casts summon nature’s ally to summon a creature, the summoned creature gains fast healing equal to the progenitor’s level (maximum equal to the progenitor’s Wisdom modifier).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** When a progenitor casts summon nature’s ally to summon a creature, the summoned creature gains fast healing equal to the progenitor’s level (maximum equal to the progenitor’s Wisdom modifier).
- **Implementation flags:**
  - summoning subsystem.

### Replaces: nature bond

- **Archetype feature:** Primal Bond (Ex)
- **Description:** A progenitor infuses herself with fey magic so that she is treated as either her original creature type or the fey type for the purposes of spells or effects that target a creature by type, whichever is more beneficial to her.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** A progenitor infuses herself with fey magic so that she is treated as either her original creature type or the fey type for the purposes of spells or effects that target a creature by type, whichever is more beneficial to her. Additionally, the progenitor chooses one of two forms through which this bond expresses itself: magic or nature. A progenitor who chooses magic as her primal bond can draw upon wild magic as a swift action to attempt to cast a prepared spell without losing that spell from its spell slot. To use this ability, she casts the spell as she would normally, but as the spell’s effects take place, she must attempt a concentration check (DC = 20 + twice the spell’s level). If she fails, she expends the spell normally as if she had cast it, but its effects are replaced by a wild magic effect (see page 63) with a CR equal to her caster level and she is staggered until the end of her next turn. If she succeeds, she casts the spell normally and it is not expended from her prepared spell slot, allowing her to cast that spell again at a later point. A progenitor can use wild magic in this manner once per day plus one additional time per day at 5th level and every 5 levels thereafter. A progenitor who chooses nature as her primal bond can create plants as a full-round action. She can do so once per day plus one additional time per day per 5 levels. At the start of her next turn, so long as she is touching a solid surface underfoot, a 5-foot radius of mobile undergrowth springs to life around the progenitor for a number of rounds equal to 3 plus the progenitor’s Wisdom bonus. Upon activating this ability, the progenitor chooses whether the undergrowth provides cover or difficult terrain. If the progenitor chooses cover, her undergrowth provides a cover bonus to AC to the progenitor and allies within the radius. If she chooses difficult terrain, enemies who enter the radius of undergrowth treat it as difficult terrain. A progenitor’s undergrowth is treated as forest terrain if it provides cover and plains terrain if it provides difficult terrain. This radius increases by 5 feet at 5th level and every 5 levels thereafter.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: wild shape

- **Archetype feature:** Fey Shape (Su)
- **Description:** A progenitor never gains the ability to use wild shape to transform into an elemental.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 8, 10, 14.
  - **Rules text to implement:** A progenitor never gains the ability to use wild shape to transform into an elemental. At 6th level, a progenitor can use wild shape to change into a Small or Medium fey. When doing so, her wild shape functions as fey form I. At 8th level, a progenitor can use wild shape to change into a Tiny or Large fey. When she does so, her wild shape functions as fey form II. At 10th level, a progenitor can use wild shape to change into a Diminutive or Huge fey. When she does so, her wild shape functions as fey form III. At 14th level, when a progenitor uses wild shape to assume a fey form, her wild shape functions as fey form IV.
- **Implementation flags:**
  - wild shape subsystem.

## Parsed source feature headings

- Infused Summoning (Ex)
- Primal Bond (Ex)
- Fey Shape (Su)
