# Druid - Defender of the True World

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Defender of the True World
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Defender%20of%20the%20True%20World
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Bonus Languages; Enemy of the First World; Fey Empathy (Ex); Fey Stalker (Ex); Feybane (Ex); Beguiling Immunity (Ex); First World Deceiver (Su)
- **Replaced / altered class features:** trackless step Feybane (Ex) : At 4th level, a defender of the true world doesn’t gain a bonus on saving throws against spells and effects that utilize or target plants; venom immunity; a thousand faces

## Replacement details

### Alters: the druid’s class skills

- **Archetype feature:** Class Skills
- **Description:** A defender of the true world gains Diplomacy as a class skill.
- **Mechanics:**
  - Mechanics summary: A defender of the true world gains Diplomacy as a class skill.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: spontaneous casting

- **Archetype feature:** Enemy of the First World
- **Description:** A defender of the true world cannot use summon nature’s ally to summon fey creatures.
- **Mechanics:**
  - Mechanics summary: A defender of the true world cannot use summon nature’s ally to summon fey creatures.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: wild empathy

- **Archetype feature:** Fey Empathy (Ex)
- **Description:** A defender of the true world gains a +2 competence bonus on Bluff, Diplomacy, and Intimidate checks when interacting with fey creatures.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20.
  - Mechanics summary: A defender of the true world gains a +2 competence bonus on Bluff, Diplomacy, and Intimidate checks when interacting with fey creatures. This bonus increases by 1 for every 4 druid levels she has (maximum +7 at 20th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Alters: resist nature’s lure

- **Archetype feature:** Feybane (Ex)
- **Description:** At 4th level, a defender of the true world doesn’t gain a bonus on saving throws against spells and effects that utilize or target plants.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a defender of the true world doesn’t gain a bonus on saving throws against spells and effects that utilize or target plants. She instead treats her natural attacks as cold iron for the purpose of overcoming damage reduction, and she gains a +2 bonus on caster level checks to overcome the spell resistance of fey creatures.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, natural attack system.

### Replaces: venom immunity

- **Archetype feature:** Beguiling Immunity (Ex)
- **Description:** At 9th level, a defender of the true world becomes immune to the mind-affecting effects of fey.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a defender of the true world becomes immune to the mind-affecting effects of fey.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: a thousand faces

- **Archetype feature:** First World Deceiver (Su)
- **Description:** At 13th level, a defender of the true world gains the ability to change her appearance as per alter self , except she can take the form of a humanoid or fey creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a defender of the true world gains the ability to change her appearance as per alter self , except she can take the form of a humanoid or fey creature. Her base land speed from this ability cannot exceed 60 feet.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- trackless step Feybane (Ex) : At 4th level, a defender of the true world doesn’t gain a bonus on saving throws against spells and effects that utilize or target plants

## Parsed source feature headings

- Class Skills
- Bonus Languages
- Enemy of the First World
- Fey Empathy (Ex)
- Fey Stalker (Ex)
- Feybane (Ex)
- Beguiling Immunity (Ex)
- First World Deceiver (Su)

