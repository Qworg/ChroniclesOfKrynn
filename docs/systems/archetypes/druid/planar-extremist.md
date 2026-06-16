# Druid - Planar Extremist

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Planar Extremist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Planar%20Extremist
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Aura (Ex); Spells; Planar Bond; Spontaneous Casting; Resist the Opposite (Ex); Planar Aspect (Su)
- **Replaced / altered class features:** Alignment; Spells; Nature's Bond; Spontaneous Casting; Resist Nature's Lure; Wild Shape

## Replacement details

### Alters: the druid’s alignment

- **Archetype feature:** Alignment
- **Description:** A planar extremist must have an alignment of chaotic evil, chaotic good, lawful evil, or lawful good.
- **Mechanics:**
  - Mechanics summary: A planar extremist must have an alignment of chaotic evil, chaotic good, lawful evil, or lawful good.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the druid’s spells

- **Archetype feature:** Spells
- **Description:** A planar extremist gains one fewer spell slot per spell level than normal in which to prepare spells.
- **Mechanics:**
  - Mechanics summary: A planar extremist gains one fewer spell slot per spell level than normal in which to prepare spells. The planar extremist removes all summon nature’s ally spells from her spell list and replaces them with the summon monster spells of the same levels. The druid can otherwise cast spells as normal for a druid of her level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: nature’s bond

- **Archetype feature:** Planar Bond
- **Description:** A planar extremist forms a bond with a manifestation of the Outer Plane with which she is aligned.
- **Mechanics:**
  - Mechanics summary: A planar extremist forms a bond with a manifestation of the Outer Plane with which she is aligned. This bond can take one of two forms. The abilities of this outsider companion are determined using the rules for eidolons for the unchained summoner PU class, as if the planar extremist were a summoner of her druid level, except the outsider companion gains no additional evolution pool (only the evolutions from its base form and base evolutions for its subtype), and it must be of a subtype whose alignment exact... The planar extremist can summon her outsider companion with the same 1-minute ritual a summoner normally uses to do so, but she can’t cast summon monster spells if she currently has her outsider companion summoned, and she can’t summon her companion if she already has a creature summoned through other means. As the planar ally gains class levels, her eidolon’s base statistics and base evolutions increase as if her druid level were her summoner level. The eidolon gains the darkvision, link, share spells, evasion, ability score increase, devotion, multiattack, and improved evasion abilities at the appropriate levels, but never gains an evolution pool.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, cleric domain hook, summoner eidolon hook, eidolon evolution hook, animal companion hook.

### Alters: a druid’s spontaneous casting

- **Archetype feature:** Spontaneous Casting
- **Description:** A planar extremist can channel stored spell energy into summoning spells that she hasn’t prepared ahead of time.
- **Mechanics:**
  - Mechanics summary: A planar extremist can channel stored spell energy into summoning spells that she hasn’t prepared ahead of time. She can lose a prepared spell in order to cast a summon monster spell of the same level or lower, but only to summon creatures whose alignment matches hers.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist the Opposite (Ex)
- **Description:** At 4th level, a planar extremist gains a +2 bonus on saving throws against the spell-like and supernatural abilities of creatures whose alignment is diametrically opposed to her own.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a planar extremist gains a +2 bonus on saving throws against the spell-like and supernatural abilities of creatures whose alignment is diametrically opposed to her own.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: wild shape

- **Archetype feature:** Planar Aspect (Su)
- **Description:** At 4th level, as a standard action, a planar extremist can gain the benefits of the bloodrager bloodline associated with her alignment (choosing from Abyssal, Celestial, or Infernal), as if she were a bloodrager of her druid level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 6, 18, 20.
  - Mechanics summary: At 4th level, as a standard action, a planar extremist can gain the benefits of the bloodrager bloodline associated with her alignment (choosing from Abyssal, Celestial, or Infernal), as if she were a bloodrager of her druid level. She can gain these benefits for 1 minute per druid level as if she were bloodraging (but she gains no other benefits or penalties of bloodrage) or until she dismisses it as a swift action; this duration need not be used consecutively but must be spent in 1-minute increments. She can use this ability an additional time per day at 6th level and every 4 levels thereafter, for a total of five times per day at 18th level. At 20th level, a planar extremist can use planar aspect at will.
- **Implementation flags:**
  - Likely existing hooks: sorcerer bloodline hook, rage/rage-power hook, wild shape hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Nature's Bond
- Resist Nature's Lure

## Parsed source feature headings

- Aura (Ex)
- Spells
- Planar Bond
- Spontaneous Casting
- Resist the Opposite (Ex)
- Planar Aspect (Su)

