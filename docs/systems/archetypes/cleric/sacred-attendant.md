# Cleric - Sacred Attendant

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Sacred Attendant
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Sacred%20Attendant
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Channel Beauty (Su); Domains; Nimble (Ex); Nurture Grace (Su); Inspiring Camaraderie (Sp)
- **Replaced / altered class features:** the cleric’s proficiency with light and medium armor

## Replacement details

### Alters: channel energy

- **Archetype feature:** Channel Beauty (Su)
- **Description:** Whenever a sacred attendant channels energy to heal, she can opt to reduce the number of dice she rolls by 1 or more.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: Whenever a sacred attendant channels energy to heal, she can opt to reduce the number of dice she rolls by 1 or more. For every die the sacred attendant subtracts, each of the targets of the channeled energy is healed of 1 point of Charisma damage.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: domains

- **Archetype feature:** Domains
- **Description:** The sacred attendant can choose only one domain from those belonging to her deity.
- **Mechanics:**
  - Mechanics summary: The sacred attendant can choose only one domain from those belonging to her deity.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Replaces: the cleric’s proficiency with light

- **Archetype feature:** Nimble (Ex)
- **Description:** The sacred attendant gains a +1 dodge bonus to AC and CMD when unarmored, unencumbered, and not denied her Dexterity bonus to AC (regardless of whether she has a Dexterity bonus).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 18.
  - Mechanics summary: The sacred attendant gains a +1 dodge bonus to AC and CMD when unarmored, unencumbered, and not denied her Dexterity bonus to AC (regardless of whether she has a Dexterity bonus). At 2nd level and every 4 cleric levels thereafter, the dodge bonus increases by 1 (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: medium armor

- **Archetype feature:** Nimble (Ex)
- **Description:** The sacred attendant gains a +1 dodge bonus to AC and CMD when unarmored, unencumbered, and not denied her Dexterity bonus to AC (regardless of whether she has a Dexterity bonus).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 18.
  - Mechanics summary: The sacred attendant gains a +1 dodge bonus to AC and CMD when unarmored, unencumbered, and not denied her Dexterity bonus to AC (regardless of whether she has a Dexterity bonus). At 2nd level and every 4 cleric levels thereafter, the dodge bonus increases by 1 (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Channel Beauty (Su)
- Domains
- Nimble (Ex)
- Nurture Grace (Su)
- Inspiring Camaraderie (Sp)

