# Druid - Undine Adept

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Undine Adept
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Undine%20Adept
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Domains; Amphibious (Su); Augment Summoning (Su); Resist Water’s Call (Su); Wild Shape (Su); Commune with Water Spirits
- **Replaced / altered class features:** woodland stride; resist nature’s lure; venom immunity

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Domains
- **Description:** An undine adept who chooses a domain must choose the Community or Water domain, or any subdomain of those domains.
- **Detailed mechanics:**
  - **Rules text to implement:** An undine adept who chooses a domain must choose the Community or Water domain, or any subdomain of those domains.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Replaces: woodland stride

- **Archetype feature:** Amphibious (Su)
- **Description:** At 2nd level, the undine adept gains the aquatic subtype and the amphibious universal monster ability, allowing her to breathe water or air.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, the undine adept gains the aquatic subtype and the amphibious universal monster ability, allowing her to breathe water or air.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trackless step

- **Archetype feature:** Augment Summoning (Su)
- **Description:** At 3rd level, any creature with the water subtype the undine adept summons with either summon monster or summon nature’s ally gains the benefits of the Augment Summoning feat.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, any creature with the water subtype the undine adept summons with either summon monster or summon nature’s ally gains the benefits of the Augment Summoning feat.
- **Implementation flags:**
  - summoning subsystem.
  - feat grant/prerequisite handling.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Water’s Call (Su)
- **Description:** At 4th level, an undine adept gains a +4 bonus on saving throws against the spell-like and supernatural abilities of outsiders with the aquatic or water subtype, fey with the aquatic or water subtype, and spells and effects with the water descriptor.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an undine adept gains a +4 bonus on saving throws against the spell-like and supernatural abilities of outsiders with the aquatic or water subtype, fey with the aquatic or water subtype, and spells and effects with the water descriptor.
- **Implementation flags:**
  - spell-like ability support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Wild Shape (Su)
- **Description:** At 6th level, an undine adept gains the ability to use wild shape.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, an undine adept gains the ability to use wild shape. When an undine takes the form of a creature with the aquatic or water subtype, this ability functions at her class level + 1. For all other forms, her effective druid level for the ability is equal to her actual undine adept level. This ability otherwise functions as and replaces wild shape.
- **Implementation flags:**
  - wild shape subsystem.
  - feat grant/prerequisite handling.

### Replaces: venom immunity

- **Archetype feature:** Commune with Water Spirits
- **Description:** At 9th level, an undine adept adds commune to her druid spell list.
- **Detailed mechanics:**
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, an undine adept adds commune to her druid spell list. She may use this spell whether she worships a deity or elemental forces.
- **Implementation flags:**
  - archetype spell-list override.

## Parsed source feature headings

- Domains
- Amphibious (Su)
- Augment Summoning (Su)
- Resist Water’s Call (Su)
- Wild Shape (Su)
- Commune with Water Spirits
