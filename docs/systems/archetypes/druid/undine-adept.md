# Druid - Undine Adept

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Undine Adept
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Undine%20Adept
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Domains; Amphibious (Su); Augment Summoning (Su); Resist Water’s Call (Su); Wild Shape (Su); Commune with Water Spirits
- **Replaced / altered class features:** woodland stride; resist nature’s lure; venom immunity

## Replacement details

### Replaces: woodland stride

- **Archetype feature:** Amphibious (Su)
- **Description:** At 2nd level, the undine adept gains the aquatic subtype and the amphibious universal monster ability, allowing her to breathe water or air.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, the undine adept gains the aquatic subtype and the amphibious universal monster ability, allowing her to breathe water or air.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trackless step

- **Archetype feature:** Augment Summoning (Su)
- **Description:** At 3rd level, any creature with the water subtype the undine adept summons with either summon monster or summon nature’s ally gains the benefits of the Augment Summoning feat.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, any creature with the water subtype the undine adept summons with either summon monster or summon nature’s ally gains the benefits of the Augment Summoning feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Water’s Call (Su)
- **Description:** At 4th level, an undine adept gains a +4 bonus on saving throws against the spell-like and supernatural abilities of outsiders with the aquatic or water subtype, fey with the aquatic or water subtype, and spells and effects with the water descriptor.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, an undine adept gains a +4 bonus on saving throws against the spell-like and supernatural abilities of outsiders with the aquatic or water subtype, fey with the aquatic or water subtype, and spells and effects with the water descriptor.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: venom immunity

- **Archetype feature:** Commune with Water Spirits
- **Description:** At 9th level, an undine adept adds commune to her druid spell list.
- **Mechanics:**
  - Level hooks: 9.
  - Mechanics summary: At 9th level, an undine adept adds commune to her druid spell list. She may use this spell whether she worships a deity or elemental forces.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Parsed source feature headings

- Domains
- Amphibious (Su)
- Augment Summoning (Su)
- Resist Water’s Call (Su)
- Wild Shape (Su)
- Commune with Water Spirits

