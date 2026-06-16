# Druid - Skinshaper

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Skinshaper
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Skinshaper
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Skinshaping (Su); Flashmorph (Su)
- **Replaced / altered class features:** wild shape; a thousand faces

## Replacement details

### Alters: the druid’s class skills

- **Archetype feature:** Class Skills
- **Description:** A skinshaper adds Disguise to her list of class skills, instead of Ride.
- **Mechanics:**
  - Mechanics summary: A skinshaper adds Disguise to her list of class skills, instead of Ride.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: wild shape

- **Archetype feature:** Skinshaping (Su)
- **Description:** At 4th level, a skinshaper gains the ability to turn herself into any Small or Medium humanoid and back again once per day.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 6, 18, 20, 8, 12, 16.
  - Mechanics summary: At 4th level, a skinshaper gains the ability to turn herself into any Small or Medium humanoid and back again once per day. This ability functions as per alter self , except as noted here. The effect lasts for 1 hour per druid level, or until the skinshaper changes back. Changing form is a standard action and doesn’t provoke an attack of opportunity. The skinshaper must be familiar with the form she has chosen. She can use this ability an additional time per day at 6th level and every 2 druid levels thereafter, up to a total of eight times at 18th level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, wild shape hook, sneak attack hook, ki/monk hook.

### Replaces: a thousand faces

- **Archetype feature:** Flashmorph (Su)
- **Description:** At 13th level, a skinshaper learns to change her shape extremely quickly.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a skinshaper learns to change her shape extremely quickly. She can use skinshaping as a swift action.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Class Skills
- Skinshaping (Su)
- Flashmorph (Su)

