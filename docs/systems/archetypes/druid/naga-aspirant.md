# Druid - Naga Aspirant

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Naga Aspirant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Naga%20Aspirant
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Aspirant’s Bond (Ex); Aspirant’s Enlightenment (Ex); Naga Shape (Su); Augmented Form (Su); True Naga (Su)
- **Replaced / altered class features:** spontaneous casting; resist nature’s lure; venom immunity, a thousand faces, and timeless body; wildshape (at will)

## Implementation details

### Replaces: spontaneous casting

- **Archetype feature:** Aspirant’s Bond (Ex)
- **Description:** A naga aspirant gains a spiritual connection to the serpentine deities worshiped by the nagas.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** A naga aspirant gains a spiritual connection to the serpentine deities worshiped by the nagas. At 1st level, and each time she gains a druid level, she may add one of the following spells to her druid spell list. 0— acid splash, bleed, daze, mage hand, open/close, ray of frost ; 1st— charm person, divine favor, expeditious retreat, mage armor, magic missile, ray of enfeeblement, shield, shield of faith, silent image, true strike ; 2nd— acid arrow, detect thoughts, invisibility, mirror image, scorching ray, see invisibility ; 3rd— dispel magic, displacement, fireball, lightning bolt, suggestion ; 4th— divine power, greater invisibility.
- **Implementation flags:**
  - archetype spell-list override.

### Replaces: resist nature’s lure

- **Archetype feature:** Aspirant’s Enlightenment (Ex)
- **Description:** At 4th level, a naga aspirant gains a +4 bonus on saving throws against the spell-like abilities, supernatural abilities, and poison of nagas.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a naga aspirant gains a +4 bonus on saving throws against the spell-like abilities, supernatural abilities, and poison of nagas.
- **Implementation flags:**
  - poison subsystem.
  - spell-like ability support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Naga Shape (Su)
- **Description:** At 6th level, the naga aspirant can use her wild shape ability (gained at 4th level, as normal) to assume the form of a true naga.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 4.
  - **Rules text to implement:** At 6th level, the naga aspirant can use her wild shape ability (gained at 4th level, as normal) to assume the form of a true naga. This effect functions in a similar manner to a shapechange spell with the following exception. The druid’s true naga form is unique, representing her personal evolution. When taking naga form, the nagaji’s body transforms into that of a large serpent, though she keeps her own head. The naga aspirant loses her limbs and her size increases by one category, granting her a +4 size bonus to Strength and Constitution, a –2 penalty to Dexterity, and a +2 enhancement bonus to her natural armor bonus. She gains a +10 enhancement bonus to land speed and a bite attack that deals 1d6 points of damage. She can cast verbal spells in this form, but cannot cast spells with other components without metamagic or feats such as Natural Spell. This otherwise works like and replaces wild shape.
- **Implementation flags:**
  - wild shape subsystem.
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: venom immunity, a thousand faces, and timeless body

- **Archetype feature:** Augmented Form (Su)
- **Description:** At 9th level and every four levels thereafter, a naga aspirant can choose one of the following abilities to enhance her naga form.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level and every four levels thereafter, a naga aspirant can choose one of the following abilities to enhance her naga form. Once chosen, this augmentation cannot be changed and always applies to her naga form. The caster level for these abilities is equal to her druid level, and unless otherwise stated, the DC is equal to 10 + 1/2 the druid’s class level + the druid’s Charisma bonus. Charming Gaze (Sp) : The druid gains a gaze attack that affects creatures within 30 feet as a charm person spell. Darkvision (Su) : The druid gains darkvision with a range of 60 feet. Detect Thoughts (Su) : The druid can use detect thoughts at will. Guarded Thoughts (Ex) : The druid gains a +2 racial bonus on saves against charm effects and immunity to any form of mind reading (such as detect thoughts ). Poison Immunity (Ex) : The druid gains immunity to all poisons. The druid’s naga form must have at least one poison-based natural attack in order to select this ability. Poisonous Sting (Ex) : The druid’s stinger becomes venomous. The naga form must have a tail stinger to take this ability. Sting—injury; save Fort DC 10 + 1/2 the druid’s class level + the druid’s Constitution modifier; frequency 1 round; effect sleep for 2d4 minutes; cure 1 save. Spit Venom (Ex) : The naga form can spit her venom up to 30 feet as a standard action. This is a ranged touch attack with no range increment. Any opponent hit by this attack must make a successful save (see above) to avoid the effect. The naga form must have a venomous bite to take this ability. Sting (Ex) : The naga form grows a stinger on the end of her tail, granting her a sting natural attack that deals 1d6 points of piercing damage. Swim (Ex) : The naga form gains a swim speed equal to her base speed. Tough Scales (Ex) : The druid’s enhancement bonus to her natural armor increases by +2. The druid may select this ability more than once. Its effects stack. Venomous Bite (Ex) : The naga form’s bite attack becomes poisonous. Bite—injury; save Fortitude DC 10 + 1/2 the druid’s class level + the druid’s Constitution modifier; frequency 1/round for 6 rounds; effect 1 Constitution damage, cure 1 save.
- **Implementation flags:**
  - poison subsystem.

### Replaces: wildshape (at will)

- **Archetype feature:** True Naga (Su)
- **Description:** At 20th level, a naga aspirant metamorphoses into a unique naga.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a naga aspirant metamorphoses into a unique naga. Her wild shape form becomes her natural form, though she can transform into her original nagaji shape at will. Her creature type permanently changes to aberration.
- **Implementation flags:**
  - wild shape subsystem.

## Parsed source feature headings

- Aspirant’s Bond (Ex)
- Aspirant’s Enlightenment (Ex)
- Naga Shape (Su)
- Augmented Form (Su)
- True Naga (Su)
