# Ranger - Realm Wanderer

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Realm Wanderer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Realm%20Wanderer
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Deceptive Subtlety (Ex); Queen’s Bond (Ex); Dual Master (Ex); Shrewdest Monarch (Su)
- **Replaced / altered class features:** Class Skills; Track; Hunter's Bond; Swift Tracker; Master Hunter

## Replacement details

### Alters: the ranger’s class skills

- **Archetype feature:** Class Skills
- **Description:** A realm wanderer adds Diplomacy and Bluff to his list of class skills, but does not gain Intimidate and Stealth as class skills.
- **Mechanics:**
  - Mechanics summary: A realm wanderer adds Diplomacy and Bluff to his list of class skills, but does not gain Intimidate and Stealth as class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: track

- **Archetype feature:** Deceptive Subtlety (Ex)
- **Description:** A realm wanderer adds half his level (minimum 1) to Diplomacy checks to influence a creature’s attitude, to make requests of creatures, and for similar uses of the skill.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A realm wanderer adds half his level (minimum 1) to Diplomacy checks to influence a creature’s attitude, to make requests of creatures, and for similar uses of the skill. He also adds half his level (minimum 1) to Bluff checks to deceive, lie, or convey secret messages.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: hunter’s bond

- **Archetype feature:** Queen’s Bond (Ex)
- **Description:** At 4th level, a realm wanderer must choose an animal companion for his hunter’s bond.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a realm wanderer must choose an animal companion for his hunter’s bond. This animal companion gains the fiendish template, likely either due to time it spent near a gate to Hell or due to infernal influences in its place of birth. Due to this insidious influence, this animal companion always takes a penalty on attack rolls equal to one-fifth of the realm wanderer’s level (minimum 1). If the realm wanderer releases his animal companion from service or it perishes, he can gain a new fiendish animal companion by completing the required ceremony. Alternatively, when the realm wanderer releases his animal companion or it dies in his service, he can use his influence over its fiendish nature to cause the animal to lose the fiendish template. If the animal companion is then raised or otherwise brought back from the dead after the realm wanderer removes its fiendish template, the animal companion no longer takes the penalty on attacks described above.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, animal companion hook.

### Replaces: swift tracker

- **Archetype feature:** Dual Master (Ex)
- **Description:** At 8th level, the realm wanderer’s bonuses from deceptive subtlety are doubled when he is in either of his two favored terrain types.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, the realm wanderer’s bonuses from deceptive subtlety are doubled when he is in either of his two favored terrain types. However, this benefit applies only to the first two favored terrain types he selected; as he gains additional favored terrains at higher levels, this benefit does not apply in those additional terrain types.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored terrain hook.

### Replaces: master hunter

- **Archetype feature:** Shrewdest Monarch (Su)
- **Description:** At 20th level, the realm wanderer has become a true master of the territories with which he is familiar.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, the realm wanderer has become a true master of the territories with which he is familiar. As a standard action, he can make a single attack at his full attack bonus against an enemy in one of the terrains chosen using the dual master ability. If the attack hits, the target takes damage normally and must succeed at a Fortitude saving throw or die. The DC of this saving throw is equal to 10 + half the realm wanderer’s level + his Wisdom modifier. A realm wanderer can instead deal an amount of nonlethal damage equal to the creature’s current hit points; the target can attempt a Fortitude save at the same DC to negates this damage. The realm wanderer can use this ability in these favored terrains only up to four times per day, but not against the same creature more than once in a 24-hour period.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, favored terrain hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Hunter's Bond

## Parsed source feature headings

- Class Skills
- Deceptive Subtlety (Ex)
- Queen’s Bond (Ex)
- Dual Master (Ex)
- Shrewdest Monarch (Su)

