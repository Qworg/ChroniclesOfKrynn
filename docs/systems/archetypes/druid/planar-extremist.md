# Druid - Planar Extremist

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Planar Extremist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Planar%20Extremist
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Aura (Ex); Spells; Planar Bond; Spontaneous Casting; Resist the Opposite (Ex); Planar Aspect (Su)
- **Replaced / altered class features:** Alignment; Spells; Nature's Bond; Spontaneous Casting; Resist Nature's Lure; Wild Shape

## Implementation details

### Alters: the druid’s alignment

- **Archetype feature:** Alignment
- **Description:** A planar extremist must have an alignment of chaotic evil, chaotic good, lawful evil, or lawful good.
- **Detailed mechanics:**
  - **Rules text to implement:** A planar extremist must have an alignment of chaotic evil, chaotic good, lawful evil, or lawful good.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Aura (Ex)
- **Description:** The planar extremist radiates an aura matching her alignment as if she were a cleric of her druid level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** The planar extremist radiates an aura matching her alignment as if she were a cleric of her druid level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: the druid’s spells

- **Archetype feature:** Spells
- **Description:** A planar extremist gains one fewer spell slot per spell level than normal in which to prepare spells.
- **Detailed mechanics:**
  - **Rules text to implement:** A planar extremist gains one fewer spell slot per spell level than normal in which to prepare spells. The planar extremist removes all summon nature’s ally spells from her spell list and replaces them with the summon monster spells of the same levels. The druid can otherwise cast spells as normal for a druid of her level.
- **Implementation flags:**
  - summoning subsystem.
  - archetype spell-list override.

### Replaces: nature’s bond

- **Archetype feature:** Planar Bond
- **Description:** A planar extremist forms a bond with a manifestation of the Outer Plane with which she is aligned.
- **Detailed mechanics:**
  - **Rules text to implement:** A planar extremist forms a bond with a manifestation of the Outer Plane with which she is aligned. This bond can take one of two forms. The first is a close tie to the plane to which she is aligned, granting the planar extremist one of the domains of her alignment (for example, a lawful good planar extremist could take either the Lawful or Good domain). This option otherwise functions as a druid’s nature bond if she chose a close tie to the natural world. The second option is to form a close bond with an outsider from an Outer Plane. The abilities of this outsider companion are determined using the rules for eidolons for the unchained summoner PU class, as if the planar extremist were a summoner of her druid level, except the outsider companion gains no additional evolution pool (only the evolutions from its base form and base evolutions for its subtype), and it must be of a subtype whose alignment exactly matches the alignment of the planar extremist. The planar extremist can summon her outsider companion with the same 1-minute ritual a summoner normally uses to do so, but she can’t cast summon monster spells if she currently has her outsider companion summoned, and she can’t summon her companion if she already has a creature summoned through other means. As the planar ally gains class levels, her eidolon’s base statistics and base evolutions increase as if her druid level were her summoner level. The eidolon gains the darkvision, link, share spells, evasion, ability score increase, devotion, multiattack, and improved evasion abilities at the appropriate levels, but never gains an evolution pool. Abilities and spells that grant additional evolution points to eidolons do not function for her outsider companion, though any abilities that would grant evolution points to an animal companion do work. The planar extremist does not gain life link or any other class features a summoner gains in relation to her eidolon.
- **Implementation flags:**
  - animal companion progression.
  - domain system.
  - eidolon/evolution subsystem.
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Alters: a druid’s spontaneous casting

- **Archetype feature:** Spontaneous Casting
- **Description:** A planar extremist can channel stored spell energy into summoning spells that she hasn’t prepared ahead of time.
- **Detailed mechanics:**
  - **Rules text to implement:** A planar extremist can channel stored spell energy into summoning spells that she hasn’t prepared ahead of time. She can lose a prepared spell in order to cast a summon monster spell of the same level or lower, but only to summon creatures whose alignment matches hers.
- **Implementation flags:**
  - summoning subsystem.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist the Opposite (Ex)
- **Description:** At 4th level, a planar extremist gains a +2 bonus on saving throws against the spell-like and supernatural abilities of creatures whose alignment is diametrically opposed to her own.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a planar extremist gains a +2 bonus on saving throws against the spell-like and supernatural abilities of creatures whose alignment is diametrically opposed to her own.
- **Implementation flags:**
  - spell-like ability support.

### Replaces: wild shape

- **Archetype feature:** Planar Aspect (Su)
- **Description:** At 4th level, as a standard action, a planar extremist can gain the benefits of the bloodrager bloodline associated with her alignment (choosing from Abyssal, Celestial, or Infernal), as if she were a bloodrager of her druid level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 6, 18, 20.
  - **Rules text to implement:** At 4th level, as a standard action, a planar extremist can gain the benefits of the bloodrager bloodline associated with her alignment (choosing from Abyssal, Celestial, or Infernal), as if she were a bloodrager of her druid level. She can gain these benefits for 1 minute per druid level as if she were bloodraging (but she gains no other benefits or penalties of bloodrage) or until she dismisses it as a swift action; this duration need not be used consecutively but must be spent in 1-minute increments. She can use this ability an additional time per day at 6th level and every 4 levels thereafter, for a total of five times per day at 18th level. At 20th level, a planar extremist can use planar aspect at will.
- **Implementation flags:**
  - rage/rage power subsystem.
  - wild shape subsystem.

## Parsed source feature headings

- Alignment
- Aura (Ex)
- Spells
- Planar Bond
- Spontaneous Casting
- Resist the Opposite (Ex)
- Planar Aspect (Su)
