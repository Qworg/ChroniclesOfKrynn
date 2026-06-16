# Paladin - Tempered Champion

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Tempered Champion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Tempered%20Champion
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Divine Weapon Specialization (Ex); Divine Bond (Su)
- **Replaced / altered class features:** spellcasting

## Replacement details

### Replaces: spellcasting

- **Archetype feature:** Divine Weapon Specialization (Ex)
- **Description:** At 4th level and every 4 levels thereafter, a tempered champion gains a bonus feat from the following list: Disruptive, Divine Fighting Technique (see page 10), Greater Penetrating Strike, Greater Weapon Focus, Greater Weapon Specialization, Penetrating Strike, Weapon Focus, Weapon Specialization, and Weapon Trick (see page 8).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level and every 4 levels thereafter, a tempered champion gains a bonus feat from the following list: Disruptive, Divine Fighting Technique (see page 10), Greater Penetrating Strike, Greater Weapon Focus, Greater Weapon Specialization, Penetrating Strike, Weapon Focus, Weapon Specialization, and Weapon Trick (see page 8). If a feat requires choosing a weapon or weapon group, the tempered champion must choose her deity’s favored weapon, or its group. The tempered champion must meet the feat’s prerequisites, but treats her tempered champion levels as fighter levels for this purpose. In addition, the 4th-level tempered champion gains the increased base weapon damage of the warpriest’s sacred weapon ability ACG at her tempered champion level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Divine Weapon Specialization (Ex)
- Divine Bond (Su)

