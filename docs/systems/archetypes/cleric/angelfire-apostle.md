# Cleric - Angelfire Apostle

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Angelfire Apostle
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Angelfire%20Apostle
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Armor Proficiency; Diminished Spellcasting; Extra Channel; Channel Angelfire (Su); Versatile Healing Channel (Sp); Cleansing Flames (Su)
- **Replaced / altered class features:** Armor Proficiency; Spellcasting; Alignment; Channel Energy

## Replacement details

### Alters: the cleric’s armor proficiency

- **Archetype feature:** Armor Proficiency
- **Description:** Angelfire apostles are not proficient with medium armor.
- **Mechanics:**
  - Mechanics summary: Angelfire apostles are not proficient with medium armor.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the cleric’s spellcasting

- **Archetype feature:** Diminished Spellcasting
- **Description:** An angelfire apostle is less concerned with the traditional divine magic that many religious adherents receive.
- **Mechanics:**
  - Mechanics summary: An angelfire apostle is less concerned with the traditional divine magic that many religious adherents receive. The angelfire apostle receives one fewer spell slot at each spell level. When an angelfire apostle gets no spells per day at a spell level, he can cast domain spells of that level normally, but can only cast nondomain spells of that level if he gets them as bonus spells.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook, cleric domain hook.

### Alters: channel energy

- **Archetype feature:** Channel Angelfire (Su)
- **Description:** An angelfire apostle must be of good or neutral alignment and must choose to channel positive energy, even if his deity is neutral or if he is not devoted to a particular deity.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: An angelfire apostle must be of good or neutral alignment and must choose to channel positive energy, even if his deity is neutral or if he is not devoted to a particular deity. When an angelfire apostle channels positive energy, affected nongood creatures are dazzled for 1 round, with no saving throw for this effect, in addition to experiencing the normal effects of channel energy.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Alignment

## Parsed source feature headings

- Armor Proficiency
- Diminished Spellcasting
- Extra Channel
- Channel Angelfire (Su)
- Versatile Healing Channel (Sp)
- Cleansing Flames (Su)

