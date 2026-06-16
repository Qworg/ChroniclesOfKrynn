# Cleric - Stoic Caregiver

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Stoic Caregiver
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Stoic%20Caregiver
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Positive Channeler (Su); Domains; Midwife Training (Su); Fated Cures (Su); Three-Aspect Channel (Su)
- **Replaced / altered class features:** Channel Energy; Domains;

## Replacement details

### Alters: channel energy

- **Archetype feature:** Positive Channeler (Su)
- **Description:** A stoic caregiver must choose to channel positive energy, even if she worships a deity who is neutral or if she is not devoted to a particular deity.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A stoic caregiver must choose to channel positive energy, even if she worships a deity who is neutral or if she is not devoted to a particular deity. A stoic caregiver cannot worship a deity who is evil.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: domains

- **Archetype feature:** Domains
- **Description:** A stoic caregiver chooses only one domain.
- **Mechanics:**
  - Mechanics summary: A stoic caregiver chooses only one domain.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

## Parsed source feature headings

- Positive Channeler (Su)
- Domains
- Midwife Training (Su)
- Fated Cures (Su)
- Three-Aspect Channel (Su)

