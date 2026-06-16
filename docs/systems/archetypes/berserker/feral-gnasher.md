# Berserker - Feral Gnasher

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Feral Gnasher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Feral%20Gnasher
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Savage Bite (Ex); Impromptu Armament (Ex); Lockjaw (Ex); Improvised Weapon Mastery (Ex); Improved Lockjaw (Ex); Greater Lockjaw (Ex); Wicked Improvisation (Ex); Rage Powers
- **Replaced / altered class features:** fast movement; trap sense +2; trap sense +3 and trap sense +5; trap sense +4

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Savage Bite (Ex)
- **Description:** At 1st level, a feral gnasher gains a savage bite attack.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 10.
  - Mechanics summary: At 1st level, a feral gnasher gains a savage bite attack. This is a primary natural attack that deals 1d4 points of damage. If the goblin already has the hard head, big teeth racial trait, the damage increases to 1d6. At 10th level, the damage from a feral gnasher’s bite increases to 1d6 (or 1d8 if the goblin has the hard head, big teeth racial trait) and deals ×3 damage on a critical hit.
- **Implementation flags:**
  - Likely existing hooks: natural attack system.

### Replaces: the rage power gained at second level

- **Archetype feature:** Impromptu Armament (Ex)
- **Description:** At 2nd level, a feral gnasher gains Throw Anything as a bonus feat and can pick up an unattended object that can be wielded in one hand as a free action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a feral gnasher gains Throw Anything as a bonus feat and can pick up an unattended object that can be wielded in one hand as a free action. Additionally, the feral gnasher can take Catch Off-Guard in place of a rage power.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: trap sense +1

- **Archetype feature:** Lockjaw (Ex)
- **Description:** At 3rd level, a feral gnasher gains the grab ability with her bite attack.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a feral gnasher gains the grab ability with her bite attack. A feral gnasher can use this ability on a creature up to one size category larger than she is.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: improved uncanny dodge

- **Archetype feature:** Improvised Weapon Mastery (Ex)
- **Description:** At 5th level, a feral gnasher gains Improvised Weapon Mastery as a bonus feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a feral gnasher gains Improvised Weapon Mastery as a bonus feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: trap sense +2

- **Archetype feature:** Improved Lockjaw (Ex)
- **Description:** At 6th level, as long as a feral gnasher is controlling the grapple with her lockjaw attack, she does not gain the grappled condition, but is unable to move or use her mouth for anything other than grappling.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, as long as a feral gnasher is controlling the grapple with her lockjaw attack, she does not gain the grappled condition, but is unable to move or use her mouth for anything other than grappling.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense +3 and trap sense +5

- **Archetype feature:** Greater Lockjaw (Ex)
- **Description:** At 9th level and again at 15th level, the size of a creature a feral gnasher is able to use her lockjaw’s grab ability on increases by one size increment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9, 15.
  - Mechanics summary: At 9th level and again at 15th level, the size of a creature a feral gnasher is able to use her lockjaw’s grab ability on increases by one size increment.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense +4

- **Archetype feature:** Wicked Improvisation (Ex)
- **Description:** At 12th level, a feral gnasher becomes more capable with improvised weapons and natural attacks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12, 14.
  - Mechanics summary: At 12th level, a feral gnasher becomes more capable with improvised weapons and natural attacks. The feral gnasher gains a +1 competence bonus on damage rolls when using natural attacks or improvised weapons while raging. At 14th level and every two levels thereafter, the damage bonus increases by +1. This increase is not precision damage and is thus multiplied on a critical hit.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, natural attack system.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Savage Bite (Ex)
- Impromptu Armament (Ex)
- Lockjaw (Ex)
- Improvised Weapon Mastery (Ex)
- Improved Lockjaw (Ex)
- Greater Lockjaw (Ex)
- Wicked Improvisation (Ex)
- Rage Powers

