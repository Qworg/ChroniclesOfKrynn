# Cleric - Triadic Priest

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Triadic Priest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Triadic%20Priest
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Triadic Bond (Su); Bonded Channeler (Su); Bonded Domain (Su); Domain Spells
- **Replaced / altered class features:** Domains

## Replacement details

### Alters: the domains class feature

- **Archetype feature:** Bonded Domain (Su)
- **Description:** A triadic priest selects only one domain granted by her deity.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: A triadic priest selects only one domain granted by her deity. However, while she is within 10 feet of least one of her bonded allies, she gains the following benefits. Bonded Power (Su) : A triadic priest gains either a witch’s coven hex or the Allied Spellcaster feat as a bonus feat. Bonded Unity (Su) : As a move action, a triadic priest can share one teamwork feat she has with up to two bonded companions that are within 10 feet of her. Her bonded companions do not need to meet the feat’s prerequisites and gain the benefits of the feat for 1 round plus 1 additional round for every 5 class levels the triadic priest has. A bonded companion can gain only one teamwork feat in this way at a time.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook, cleric domain hook.
  - Needs implementation review: witch/shaman hex mechanics.

## Parsed source feature headings

- Triadic Bond (Su)
- Bonded Channeler (Su)
- Bonded Domain (Su)
- Domain Spells

