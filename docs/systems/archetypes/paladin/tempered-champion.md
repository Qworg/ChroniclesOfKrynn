# Paladin - Tempered Champion

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Tempered Champion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Tempered%20Champion
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Divine Weapon Specialization (Ex); Divine Bond (Su)
- **Replaced / altered class features:** spellcasting

## Implementation details

### Replaces: spellcasting

- **Archetype feature:** Divine Weapon Specialization (Ex)
- **Description:** At 4th level and every 4 levels thereafter, a tempered champion gains a bonus feat from the following list: Disruptive, Divine Fighting Technique (see page 10), Greater Penetrating Strike, Greater Weapon Focus, Greater Weapon Specialization, Penetrating Strike, Weapon Focus, Weapon Specialization, and Weapon Trick (see page 8).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level and every 4 levels thereafter, a tempered champion gains a bonus feat from the following list: Disruptive, Divine Fighting Technique (see page 10), Greater Penetrating Strike, Greater Weapon Focus, Greater Weapon Specialization, Penetrating Strike, Weapon Focus, Weapon Specialization, and Weapon Trick (see page 8). If a feat requires choosing a weapon or weapon group, the tempered champion must choose her deity’s favored weapon, or its group. The tempered champion must meet the feat’s prerequisites, but treats her tempered champion levels as fighter levels for this purpose. In addition, the 4th-level tempered champion gains the increased base weapon damage of the warpriest’s sacred weapon ability ACG at her tempered champion level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Divine Bond (Su)
- **Description:** At 5th level, a tempered champion must select a weapon for her divine bond.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a tempered champion must select a weapon for her divine bond. If she is out of daily uses, she can expend a use of lay on hands to activate this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Divine Weapon Specialization (Ex)
- Divine Bond (Su)
