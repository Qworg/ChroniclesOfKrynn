# Wizard - Scrollmaster

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Scrollmaster
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Scrollmaster
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Scroll Blade (Su); Scroll Shield (Su); Improved Scroll Casting (Su)
- **Replaced / altered class features:** the wizard’s arcane bond; the 10th-level wizard bonus feat

## Replacement details

### Replaces: the wizard's arcane bond

- **Archetype feature:** Scroll Blade (Su)
- **Description:** Any suitable scroll can become a fragile but magically empowered short sword in the wizard's hands.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Free action to activate
  - Duration: Until deactivated or the scroll is destroyed
  - Uses: No daily cap; any qualifying scroll can be used
  - Core function:
    - Any paper, parchment, or cloth scroll wielded by the wizard functions as a melee weapon treated as a short sword.
    - The wizard is proficient with the scroll blade, and effects that work with short swords also work with it.
    - The enhancement bonus equals half the highest-level wizard spell on the scroll.
    - A scroll holding only a cantrip or 1st-level spell counts as masterwork instead of enchanted.
    - Only one scroll blade can be wielded at a time.
    - The scroll has hardness 0 and hit points equal to the highest spell level on it.
  - Scaling: Enhancement bonus scales with the highest-level wizard spell stored on the scroll.
  - Interactions: Using the scroll as a weapon does not expend the spells written on it.
  - Edge cases: If the scroll is sundered, the weapon is destroyed and its spells are lost.
  - Implementation flags:
    - Likely existing hooks: improvised-weapon proficiency grant, enhancement bonus derived from scroll contents, short-sword feat compatibility flag.

### Adds: scroll-based defensive stance

- **Archetype feature:** Scroll Shield (Su)
- **Description:** The wizard can turn a scroll into a fragile light shield and later trade part of its enhancement for special shield properties.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1, 5
  - Action/timing: Free action to activate
  - Duration: Until deactivated or the scroll is destroyed
  - Uses: No daily cap; any qualifying scroll can be used
  - Core function:
    - Any paper, parchment, or cloth scroll can function as a light wooden shield in the scrollmaster's hands.
    - The shield grants a +1 shield bonus plus an enhancement bonus equal to half the level of the highest-level wizard spell on the scroll, while cantrip-only or 1st-level scrolls count as masterwork shields.
    - The scroll shield has no armor check penalty, no arcane spell failure chance, and no maximum Dexterity cap, and the wizard is treated as proficient with it.
    - Each successful attack roll against the wizard removes 1 hit point from the shield, and the scroll is destroyed when its hit points reach 0.
    - At 5th level, a 3rd-level or higher wizard scroll can trade enhancement points for ghost touch, light fortification, or moderate fortification if the wizard knows the required prerequisite spell.
  - Scaling: Enhancement value scales from scroll spell level, and shield special properties unlock at 5th level.
  - Interactions: A scrollmaster can wield a scroll blade in one hand and a scroll shield in the other, and metamagic scrolls use the spell's base level for enhancement calculations.
  - Edge cases: The scroll still retains its written spell until destruction, but repeated incoming attacks can destroy the shield even if no damage penetrates the wizard's AC.
  - Implementation flags:
    - Likely existing hooks: shield bonus derived from scroll contents, durability loss on each successful incoming attack, optional shield-property conversion.

### Replaces: the 10th-level wizard bonus feat

- **Archetype feature:** Improved Scroll Casting (Su)
- **Description:** When using deciphered wizard scrolls, the scrollmaster can substitute personal casting stats for the scroll's built-in numbers.
- **Mechanics:**
  - Type: Su
  - Level hooks: 10
  - Action/timing: Passive when casting from an eligible deciphered wizard scroll
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - For a deciphered wizard scroll, use the wizard's Intelligence modifier and relevant feats to set the save DC instead of the scroll's default DC.
    - If the wizard's caster level is higher than the scroll's caster level, use the wizard's caster level instead.
    - The override applies only while the scrollmaster is the caster.
  - Scaling: None
  - Interactions: This mirrors staff-style scaling by overriding stored scroll values with the caster's own numbers.
  - Edge cases: The ability does not function on a scroll that has not already been deciphered.
  - Implementation flags:
    - Likely existing hooks: override scroll DC with caster Intelligence, override scroll caster level with the wizard's level, require-deciphered flag.

## Parsed source feature headings

- Scroll Blade (Su)
- Scroll Shield (Su)
- Improved Scroll Casting (Su)
