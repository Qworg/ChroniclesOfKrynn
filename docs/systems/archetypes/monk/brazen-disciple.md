# Monk - Brazen Disciple

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Brazen Disciple
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Brazen%20Disciple
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Feinting Flurry (Ex); Bonus Feats; Efreeti’s Guile (Ex); Confounding Koan (Sp); Genie Apotheosis
- **Replaced / altered class features:** the monk’s bonus feats at 1st level and at 6th level; still mind; abundant step; perfect self

## Replacement details

### Alters: the monk’s class skills

- **Archetype feature:** Class Skills
- **Description:** A brazen disciple gains Bluff (Cha), Disguise (Cha), and Knowledge (planes) (Int) as class skills but loses Knowledge (religion), Ride, and Swim.
- **Mechanics:**
  - Mechanics summary: A brazen disciple gains Bluff (Cha), Disguise (Cha), and Knowledge (planes) (Int) as class skills but loses Knowledge (religion), Ride, and Swim.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the monk’s bonus feats at 1st level

- **Archetype feature:** Feinting Flurry (Ex)
- **Description:** When using flurry of blows to make melee attacks, a brazen disciple can forgo his first attack to attempt a Bluff check to feint.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 1.
  - Mechanics summary: When using flurry of blows to make melee attacks, a brazen disciple can forgo his first attack to attempt a Bluff check to feint. At 6th level, when a brazen disciple successfully feints, his opponent is denied its Dexterity bonus to AC until the end of the monk’s turn.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: at 6th level

- **Archetype feature:** Feinting Flurry (Ex)
- **Description:** When using flurry of blows to make melee attacks, a brazen disciple can forgo his first attack to attempt a Bluff check to feint.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 1.
  - Mechanics summary: When using flurry of blows to make melee attacks, a brazen disciple can forgo his first attack to attempt a Bluff check to feint. At 6th level, when a brazen disciple successfully feints, his opponent is denied its Dexterity bonus to AC until the end of the monk’s turn.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Alters: the monk’s bonus feats

- **Archetype feature:** Bonus Feats
- **Description:** At 2nd, 10th, 14th, and 18th levels, a brazen disciple can select a bonus feat.
- **Mechanics:**
  - Level hooks: 6, 10.
  - Mechanics summary: At 2nd, 10th, 14th, and 18th levels, a brazen disciple can select a bonus feat. These feats must be chosen from the following list: Catch Off-Guard, Combat Reflexes, Deceitful, Dodge, Elemental Fist APG , and Improved Initiative. At 6th level, the brazen disciple can also choose from the following feats: Efreeti Style UC , Improved Dirty Trick APG , Improved Disarm, Improved Steal APG , Improved Trip, and Mobility. At 10th level, the brazen disciple can also choose from the following feats: Efreeti Stance UC , Efreeti Touch UC , Improved Critical, and Spring Attack. He need not meet the prerequisites normally required for these feats to select them.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: still mind

- **Archetype feature:** Efreeti’s Guile (Ex)
- **Description:** At 3rd level, a brazen disciple can add his Wisdom modifier on Bluff and Disguise checks instead of his Charisma modifier.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a brazen disciple can add his Wisdom modifier on Bluff and Disguise checks instead of his Charisma modifier.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: abundant step

- **Archetype feature:** Confounding Koan (Sp)
- **Description:** At 12th level, a brazen disciple can spend 2 ki points as a standard action to confuse a target within 30 feet with a riddle or paradox.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a brazen disciple can spend 2 ki points as a standard action to confuse a target within 30 feet with a riddle or paradox. This ability functions as per confusion , except that it is language-dependent. The DC is equal to 10 + half the monk’s class level + his Wisdom modifier, and the caster level is equal to his class level.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, ki/monk hook.

### Replaces: perfect self

- **Archetype feature:** Genie Apotheosis
- **Description:** At 20th level, a brazen disciple is treated as a native outsider with the fire subtype rather than as a humanoid (or whatever the monk’s creature type was) for the purpose of spells and magical effects.
- **Mechanics:**
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a brazen disciple is treated as a native outsider with the fire subtype rather than as a humanoid (or whatever the monk’s creature type was) for the purpose of spells and magical effects. He has immunity to fire and vulnerability to cold. Once per day, the brazen disciple can grant a limited wish (as per the spell limited wish ) to a non-outsider as a spell-like ability (CL 20th).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Class Skills
- Feinting Flurry (Ex)
- Bonus Feats
- Efreeti’s Guile (Ex)
- Confounding Koan (Sp)
- Genie Apotheosis

