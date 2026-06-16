# Cleric - Appeaser

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Appeaser
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Appeaser
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Aura (Ex); Channel Utility (Su); Divine Apologist (Ex); Mollified Domain (Su)
- **Replaced / altered class features:** Aura; Channel Energy; Alignment; Spells; Domains

## Replacement details

### Alters: aura

- **Archetype feature:** Aura (Ex)
- **Description:** An appeaser always has an evil aura regardless of his actual alignment.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An appeaser always has an evil aura regardless of his actual alignment.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: channel energy

- **Archetype feature:** Channel Utility (Su)
- **Description:** An appeaser channels negative energy, but also gains limited access to positive energy.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: An appeaser channels negative energy, but also gains limited access to positive energy. At 5th level, an appeaser can channel positive energy as a full-round action, but he treats his cleric level as if it were 4 lower when determining the amount of damage he can deal to undead and the amount of hit points he can restore to living creatures.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the cleric’s alignment and spells

- **Archetype feature:** Divine Apologist (Ex)
- **Description:** An appeaser must worship an evil god.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: An appeaser must worship an evil god. His alignment must be within one step of his deity’s, but he himself cannot have an evil alignment. An appeaser cannot cast any spells with the good or evil descriptor.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: the cleric’s domains class feature

- **Archetype feature:** Mollified Domain (Su)
- **Description:** At 1st level, an appeaser gains no domain or domain bonus spells.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 4, 19.
  - Mechanics summary: At 1st level, an appeaser gains no domain or domain bonus spells. Once per day as a standard action, he can sacrifice his own force of will to gain divine providence. Doing so deals 1d3 points of Charisma damage to the appeaser, and allows him to select a single domain offered by his deity (except the Evil domain or its subdomains). The appeaser gains access to any granted powers offered by the domain he would otherwise qualify for, and can sacrifice a prepared spell to cast a domain spell from that domain just as if he were spontaneously casting a cure or inflict spell. He retains access to this domain for a number of minutes equal to 1/2 the appeaser’s cleric level + plus his Wisdom modifier. Any domain abilities that can be used a limited number of times per day can be used only once each time that particular domain is invoked.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, cleric domain hook, ki/monk hook.

## Parsed source feature headings

- Aura (Ex)
- Channel Utility (Su)
- Divine Apologist (Ex)
- Mollified Domain (Su)

