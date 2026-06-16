# Wizard - Scrollmaster

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Scrollmaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Scrollmaster
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Scroll Blade (Su); Scroll Shield (Su); Improved Scroll Casting (Su)
- **Replaced / altered class features:** the wizard’s arcane bond; the 10th-level wizard bonus feat

## Replacement details

### Replaces: the wizard’s arcane bond

- **Archetype feature:** Scroll Blade (Su)
- **Description:** A scrollmaster can wield any paper, parchment, or cloth scroll as if it were a melee weapon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 3, 4, 5.
  - Mechanics summary: A scrollmaster can wield any paper, parchment, or cloth scroll as if it were a melee weapon. In the hands of the wizard, the scroll acts as a short sword with an enhancement bonus equal to 1/2 the level of the highest-level wizard spell on the scroll; a scroll with only a cantrip or 1st-level spell on it counts as a masterwork short sword. The scrollmaster is proficient in this weapon, and feats and abilities that affect short swords (such as Weapon Focus) apply to this weapon. A scrollmaster cannot wield two scrollblades at the same time. Activating this ability is a free action. The scroll blade has hardness 0 and hit points equal to the highest-level wizard spell on the scroll.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Replaces: the 10th-level wizard bonus feat

- **Archetype feature:** Improved Scroll Casting (Su)
- **Description:** At 10th level, the scrollmaster can cast a wizard spell from a scroll and use his own Intelligence score and relevant feats to set the DC for the spell, and can use his own caster level if it is higher than that of the scroll (similar to a caster using a staff).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, the scrollmaster can cast a wizard spell from a scroll and use his own Intelligence score and relevant feats to set the DC for the spell, and can use his own caster level if it is higher than that of the scroll (similar to a caster using a staff). The scrollmaster must have already deciphered the writing on the scroll to use this ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook.

## Parsed source feature headings

- Scroll Blade (Su)
- Scroll Shield (Su)
- Improved Scroll Casting (Su)

