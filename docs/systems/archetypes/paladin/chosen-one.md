# Paladin - Chosen One

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Chosen One
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Chosen%20One
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bondless; Divine Emissary (Ex); Religious Mentor (Ex); Delayed Grace (Su); Lay on Paws (Su); True Form (Ex); Emissary’s Smite (Su)
- **Replaced / altered class features:** Divine Bond; Class Skills; Divine Grace; Smite Evil; Lay on Hands; Channel Positive Energy

## Replacement details

### Alters: divine grace and smite evil

- **Archetype feature:** Delayed Grace (Su)
- **Description:** A chosen one begins her adventuring career without fully understanding her true potential.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 4, 7.
  - Mechanics summary: A chosen one begins her adventuring career without fully understanding her true potential. The chosen one uses the Barbarian, Rogue, Sorcerer column on Table 7–1 on page 169 of the Pathfinder RPG Core Rulebook to calculate her typical starting age. She receives the smite evil ability at 2nd level and the divine grace ability at 4th level. This does not affect the rate at which she gains additional uses per day of smite evil, so she still gains her second use at 4th level, her third at 7th level, and so on.
- **Implementation flags:**
  - Likely existing hooks: smite hook.

### Alters: lay on hands and channel positive energy

- **Archetype feature:** Lay on Paws (Su)
- **Description:** At 2nd level, a chosen one’s familiar is able to borrow some of her divine energy to heal itself and others.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 4.
  - Mechanics summary: At 2nd level, a chosen one’s familiar is able to borrow some of her divine energy to heal itself and others. The familiar can use the chosen one’s lay on hands ability, including all of her mercies, but each such use consumes two uses of the paladin’s lay on hands ability. Starting at 4th level, the familiar can also channel positive energy, but each such use consumes four uses of the paladin’s lay on hands ability.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Divine Bond
- Class Skills

## Parsed source feature headings

- Bondless
- Divine Emissary (Ex)
- Religious Mentor (Ex)
- Delayed Grace (Su)
- Lay on Paws (Su)
- True Form (Ex)
- Emissary’s Smite (Su)

