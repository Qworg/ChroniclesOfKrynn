# Rogue - Nameless Shadow

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Nameless Shadow
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Nameless%20Shadow
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Harmless Guise (Ex); Face in the Crowd (Ex)
- **Replaced / altered class features:** Trapfinding; 2nd, 4th, 6th, 8th, 10th, 14th, 18th-level Rogue Talents

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Harmless Guise (Ex)
- **Description:** A nameless shadow gains the dual identity and seamless guise vigilante class features, with the following restrictions.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 8, 14, 18.
  - Mechanics summary: A nameless shadow gains the dual identity and seamless guise vigilante class features, with the following restrictions. Her social identity must be that of a mundane and nonthreatening member of society, such as a farmer or a merchant. At 6th level, the nameless shadow gains the many guises vigilante social talent. At 8th level, the nameless shadow gains the quick change vigilante social talent. At 14th level, the nameless shadow gains the everyman vigilante social talent. At 18th level, the nameless shadow gains the any guise vigilante social talent.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty.
  - Needs implementation review: vigilante identity/social-talent mechanics.

### Replaces: the rogue talents gained at 2nd, 6th, 10th, 14th
- **Archetype feature:** Harmless Guise (Ex)
- **Description:** A nameless shadow gains the dual identity and seamless guise vigilante class features, with the following restrictions.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 8, 14, 18.
  - Mechanics summary: A nameless shadow gains the dual identity and seamless guise vigilante class features, with the following restrictions. Her social identity must be that of a mundane and nonthreatening member of society, such as a farmer or a merchant. At 6th level, the nameless shadow gains the many guises vigilante social talent. At 8th level, the nameless shadow gains the quick change vigilante social talent. At 14th level, the nameless shadow gains the everyman vigilante social talent. At 18th level, the nameless shadow gains the any guise vigilante social talent.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty.
  - Needs implementation review: vigilante identity/social-talent mechanics.

### Replaces: 18th levels

- **Archetype feature:** Harmless Guise (Ex)
- **Description:** A nameless shadow gains the dual identity and seamless guise vigilante class features, with the following restrictions.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6, 8, 14, 18.
  - Mechanics summary: A nameless shadow gains the dual identity and seamless guise vigilante class features, with the following restrictions. Her social identity must be that of a mundane and nonthreatening member of society, such as a farmer or a merchant. At 6th level, the nameless shadow gains the many guises vigilante social talent. At 8th level, the nameless shadow gains the quick change vigilante social talent. At 14th level, the nameless shadow gains the everyman vigilante social talent. At 18th level, the nameless shadow gains the any guise vigilante social talent.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty.
  - Needs implementation review: vigilante identity/social-talent mechanics.

### Replaces: the rogue talents gained at 4th

- **Archetype feature:** Face in the Crowd (Ex)
- **Description:** At 4th level, so long as there are at least 10 other nonhostile creatures within 30 feet of her, a nameless shadow can use Bluff or Disguise in place of Stealth to hide or for sniping.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 8.
  - Mechanics summary: At 4th level, so long as there are at least 10 other nonhostile creatures within 30 feet of her, a nameless shadow can use Bluff or Disguise in place of Stealth to hide or for sniping. At 8th level, she can use this ability to hide within a crowd even if she is being observed.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: 8th levels

- **Archetype feature:** Face in the Crowd (Ex)
- **Description:** At 4th level, so long as there are at least 10 other nonhostile creatures within 30 feet of her, a nameless shadow can use Bluff or Disguise in place of Stealth to hide or for sniping.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 8.
  - Mechanics summary: At 4th level, so long as there are at least 10 other nonhostile creatures within 30 feet of her, a nameless shadow can use Bluff or Disguise in place of Stealth to hide or for sniping. At 8th level, she can use this ability to hide within a crowd even if she is being observed.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 2nd, 4th, 6th, 8th, 10th, 14th, 18th-level Rogue Talents

## Parsed source feature headings

- Harmless Guise (Ex)
- Face in the Crowd (Ex)

