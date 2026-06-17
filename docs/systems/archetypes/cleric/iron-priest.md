# Cleric - Iron Priest

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Iron Priest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Iron%20Priest
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Channel Energy (Su); Spontaneous Casting
- **Replaced / altered class features:** Class Skills; Channel Energy; Spellcasting

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** The iron priest’s class skills are Appraise (Int), Craft (Int), Diplomacy (Cha), Disable Device (Dex), Heal (Wis), Knowledge (engineering) (Int), Knowledge (history) (Int), Knowledge (local), Knowledge (religion) (Int), Linguistics (Int), Profession (Wis), Spellcraft (Int), and Survival (Wis).
- **Detailed mechanics:**
  - **Rules text to implement:** The iron priest’s class skills are Appraise (Int), Craft (Int), Diplomacy (Cha), Disable Device (Dex), Heal (Wis), Knowledge (engineering) (Int), Knowledge (history) (Int), Knowledge (local), Knowledge (religion) (Int), Linguistics (Int), Profession (Wis), Spellcraft (Int), and Survival (Wis).
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: channel energy

- **Archetype feature:** Channel Energy (Su)
- **Description:** When an iron priest channels energy to heal or harm living creatures, she heals or harms constructs with the clockwork or robot subtypes as well.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** When an iron priest channels energy to heal or harm living creatures, she heals or harms constructs with the clockwork or robot subtypes as well. Constructs without those subtypes are also affected, but gain only half the normal amount of healing or take only half the normal amount of damage, as appropriate. An iron priest cannot harm or heal undead with channel energy.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: casting

- **Archetype feature:** Spontaneous Casting
- **Description:** An iron priest can spontaneously cast make whole and greater make whole in place of cure/inflict moderate wounds and cure/inflict critical wounds, regardless of whether she channels positive or negative energy.
- **Detailed mechanics:**
  - **Rules text to implement:** An iron priest can spontaneously cast make whole and greater make whole in place of cure/inflict moderate wounds and cure/inflict critical wounds, regardless of whether she channels positive or negative energy.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Channel Energy (Su)
- Spontaneous Casting
