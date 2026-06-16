# Wizard - Bonded Wizard

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Bonded Wizard
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Bonded%20Wizard
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Arcane Bond (Ex); Hidden Bond (Sp); Bonded Force (Su); Reshape Bond (Sp)
- **Replaced / altered class features:** Scribe Scroll; a wizard’s bonus feats normally gained at 5th and 15th level

## Replacement details

### Replaces: Scribe Scroll

- **Archetype feature:** Hidden Bond (Sp)
- **Description:** A bonded wizard can change the appearance and magical aura of her bonded item at will, as if using disguise self and magic aura , but affecting only the item; for the purpose of disguise self , the item’s item type (such as weapon or ring) is its creature type.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: A bonded wizard can change the appearance and magical aura of her bonded item at will, as if using disguise self and magic aura , but affecting only the item; for the purpose of disguise self , the item’s item type (such as weapon or ring) is its creature type.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: a wizard’s bonus feats normally gained at 5th

- **Archetype feature:** Bonded Force (Su)
- **Description:** At 5th level, a bonded wizard wearing or wielding her bonded object can channel magical energies through it to create tools, armor, and weapons from pure force.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 9, 13, 17, 15.
  - Mechanics summary: At 5th level, a bonded wizard wearing or wielding her bonded object can channel magical energies through it to create tools, armor, and weapons from pure force. She gains a pool of force points equal to half his wizard level. She can expend 1 point from his force pool as a standard action to create an effect that acts as mage armor (lasting 1 hour), shield (lasting 1 minute), or spiritual weapon (any simple or martial weapon, using her Intelligence modifier to determine its attack bonus rather than Wisdom and lasting 1 round per wizard level). At 9th level, when the bonded wizard uses bonded force for mage armor , the armor bonus increases by 1; when she uses bonded force for shield , the shield bonus increases by 1; and she gains a +1 enhancement bonus on attack and damage rolls when using bonded force for spiritual weapon . The increases for mage armor and shield and the enhancement bonus for spiritual weapon improve by an additional 1 at 13th level and again at 17th level. When she uses bonded force for spiritual weapon , the bonded wizard can choose to reduce this enhancement bonus by 1 to double the spiritual weapon’s critical threat range as the keen weapon property, and for mage armor or shield , she can choose to reduce the armor or shield bonus by 1 to protect herself from critical hits and sneak attacks as the light fortification armor...
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, sneak attack hook, ki/monk hook.

### Replaces: 15th level

- **Archetype feature:** Bonded Force (Su)
- **Description:** At 5th level, a bonded wizard wearing or wielding her bonded object can channel magical energies through it to create tools, armor, and weapons from pure force.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 9, 13, 17, 15.
  - Mechanics summary: At 5th level, a bonded wizard wearing or wielding her bonded object can channel magical energies through it to create tools, armor, and weapons from pure force. She gains a pool of force points equal to half his wizard level. She can expend 1 point from his force pool as a standard action to create an effect that acts as mage armor (lasting 1 hour), shield (lasting 1 minute), or spiritual weapon (any simple or martial weapon, using her Intelligence modifier to determine its attack bonus rather than Wisdom and lasting 1 round per wizard level). At 9th level, when the bonded wizard uses bonded force for mage armor , the armor bonus increases by 1; when she uses bonded force for shield , the shield bonus increases by 1; and she gains a +1 enhancement bonus on attack and damage rolls when using bonded force for spiritual weapon . The increases for mage armor and shield and the enhancement bonus for spiritual weapon improve by an additional 1 at 13th level and again at 17th level. When she uses bonded force for spiritual weapon , the bonded wizard can choose to reduce this enhancement bonus by 1 to double the spiritual weapon’s critical threat range as the keen weapon property, and for mage armor or shield , she can choose to reduce the armor or shield bonus by 1 to protect herself from critical hits and sneak attacks as the light fortification armor...
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, sneak attack hook, ki/monk hook.

### Replaces: the wizard’s bonus feat normally gained at 10th level

- **Archetype feature:** Reshape Bond (Sp)
- **Description:** At 10th level, a bonded wizard can repair her bonded item or turn it into another object once per day as a full-round action.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, a bonded wizard can repair her bonded item or turn it into another object once per day as a full-round action. Transforming it functions as polymorph any object , but does not alter the item’s magical properties (including its item slot), while repairing it functions as make whole . The wizard may also sacrifice a prepared spell in order to repair an additional 1d6 points of damage per level of the sacrificed spell.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Arcane Bond (Ex)
- Hidden Bond (Sp)
- Bonded Force (Su)
- Reshape Bond (Sp)

