# Wizard - Arcane Warden

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Arcane Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Arcane%20Warden
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Universal Magic; Class Skills; Ready for Anything (Ex); Generous Touch (Su); Restorative Shelter (Su)
- **Replaced / altered class features:** Arcane School; Class Skills; Scribe Scroll; Bonus Feats; Hand of the Apprentice; Metamagic Mastery

## Replacement details

### Alters: arcane school

- **Archetype feature:** Universal Magic
- **Description:** An arcane warden values all schools of magic and recognizes that, faced with an unpredictable world, versatility is one of the greatest tools for survival.
- **Mechanics:**
  - Mechanics summary: An arcane warden values all schools of magic and recognizes that, faced with an unpredictable world, versatility is one of the greatest tools for survival. All arcane warden wizards must be universalists.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the wizard’s class skills

- **Archetype feature:** Class Skills
- **Description:** An arcane warden focuses his training on survival, be it navigating difficult regions, enduring in the wilderness, or aiding others in such conditions.
- **Mechanics:**
  - Mechanics summary: An arcane warden focuses his training on survival, be it navigating difficult regions, enduring in the wilderness, or aiding others in such conditions. He gains Climb, Heal, Survival, and Swim as class skills. Appraise, Fly, Knowledge (nobility), and Linguistics are not class skills for the arcane warden.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: Scribe Scroll

- **Archetype feature:** Ready for Anything (Ex)
- **Description:** Instead of crafting magical items or learning ways to manipulate metamagic, arcane wardens prefer to spend their time providing safety and refuge for others.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: Instead of crafting magical items or learning ways to manipulate metamagic, arcane wardens prefer to spend their time providing safety and refuge for others. At 1st level, an arcane warden gains a bonus feat associated with aiding allies or providing shelter. At 5th, 10th, 15th, and 20th levels, the arcane warden gains an additional bonus feat. The arcane warden must qualify for any feat he takes, and must choose from the following list: Alertness, Endurance, Great Fortitude, Improved Great Fortitude, Leadership, Self-Sufficient, Skill Focus (Survival), Toughness, or any teamwork feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the bonus feats gained at 5th, 10th, 15th
- **Archetype feature:** Ready for Anything (Ex)
- **Description:** Instead of crafting magical items or learning ways to manipulate metamagic, arcane wardens prefer to spend their time providing safety and refuge for others.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: Instead of crafting magical items or learning ways to manipulate metamagic, arcane wardens prefer to spend their time providing safety and refuge for others. At 1st level, an arcane warden gains a bonus feat associated with aiding allies or providing shelter. At 5th, 10th, 15th, and 20th levels, the arcane warden gains an additional bonus feat. The arcane warden must qualify for any feat he takes, and must choose from the following list: Alertness, Endurance, Great Fortitude, Improved Great Fortitude, Leadership, Self-Sufficient, Skill Focus (Survival), Toughness, or any teamwork feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: 20th levels

- **Archetype feature:** Ready for Anything (Ex)
- **Description:** Instead of crafting magical items or learning ways to manipulate metamagic, arcane wardens prefer to spend their time providing safety and refuge for others.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: Instead of crafting magical items or learning ways to manipulate metamagic, arcane wardens prefer to spend their time providing safety and refuge for others. At 1st level, an arcane warden gains a bonus feat associated with aiding allies or providing shelter. At 5th, 10th, 15th, and 20th levels, the arcane warden gains an additional bonus feat. The arcane warden must qualify for any feat he takes, and must choose from the following list: Alertness, Endurance, Great Fortitude, Improved Great Fortitude, Leadership, Self-Sufficient, Skill Focus (Survival), Toughness, or any teamwork feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: the hand of the apprentice universalist school ability

- **Archetype feature:** Generous Touch (Su)
- **Description:** Arcane wardens are talented at enhancing the magical effects they create to bolster allies.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: Arcane wardens are talented at enhancing the magical effects they create to bolster allies. When an arcane warden casts a spell with a target of “creature touched” on a willing target other than himself, he can cause the effects of the spell to last longer than normal. A spell with a duration of 1 round per level lasts an additional number of rounds equal to the arcane warden’s Intelligence modifier (minimum of 1 additional round). A spell with a duration of 1 minute per level lasts for an additional number of minutes equal to the arcane warden’s Intelligence modifier (minimum of 1 additional minute). Spells with different durations than this are not enhanced by this ability. Only one spell can be enhanced in this way on any individual creature at a time.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: the metamagic mastery universalist school ability

- **Archetype feature:** Restorative Shelter (Su)
- **Description:** While an arcane warden can find refuge in many naturally occurring hideaways, his preferred places of rest are magically created cottages, homes, and even manors.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: While an arcane warden can find refuge in many naturally occurring hideaways, his preferred places of rest are magically created cottages, homes, and even manors. An arcane warden learns the following spells: mage’s magnificent mansion , rope trick , secure shelter , and tiny hut . These spells do not take up room in the arcane warden’s spellbook, and he does not need his spellbook to prepare these spells. He must still be the appropriate level to prepare the spell in question. The arcane warden’s caster level is treated as 2 higher than his actual caster level for the purposes of determining the duration of these spells and resolving attempts to dispel these spells. Any creature that spends at least 8 hours relaxing in one of these shelters gains a bonus equal to the level of the spell that created it on any saving throws against disease or poison effects made in the next 24 hours.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Universal Magic
- Class Skills
- Ready for Anything (Ex)
- Generous Touch (Su)
- Restorative Shelter (Su)

