# Cleric - Iron Priest

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Iron Priest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Iron%20Priest
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Channel Energy (Su); Spontaneous Casting
- **Replaced / altered class features:** Class Skills; Channel Energy; Spellcasting

## Replacement details

### Alters: channel energy

- **Archetype feature:** Channel Energy (Su)
- **Description:** When an iron priest channels energy to heal or harm living creatures, she heals or harms constructs with the clockwork or robot subtypes as well.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: When an iron priest channels energy to heal or harm living creatures, she heals or harms constructs with the clockwork or robot subtypes as well. Constructs without those subtypes are also affected, but gain only half the normal amount of healing or take only half the normal amount of damage, as appropriate. An iron priest cannot harm or heal undead with channel energy.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: casting

- **Archetype feature:** Spontaneous Casting
- **Description:** An iron priest can spontaneously cast make whole and greater make whole in place of cure/inflict moderate wounds and cure/inflict critical wounds , regardless of whether she channels positive or negative energy.
- **Mechanics:**
  - Mechanics summary: An iron priest can spontaneously cast make whole and greater make whole in place of cure/inflict moderate wounds and cure/inflict critical wounds , regardless of whether she channels positive or negative energy.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Class Skills

## Parsed source feature headings

- Class Skills
- Channel Energy (Su)
- Spontaneous Casting

