# Paladin - Soul Sentinel

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Soul Sentinel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Soul%20Sentinel
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Reprieve (Su); Sacred Soul (Su); Greater Reprieve (Su)
- **Replaced / altered class features:** aura of justice

## Replacement details

### Replaces: the mercy gained at 6th level

- **Archetype feature:** Reprieve (Su)
- **Description:** A soul sentinel relieves manic and tortured souls exposed to the harsh evil of the world.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: A soul sentinel relieves manic and tortured souls exposed to the harsh evil of the world. At 6th level, when the soul sentinel uses her lay on hands ability to heal a living creature, she can remove confusion effects in place of applying one of her other mercies. If used on a creature suffering from a permanent confusion effect, this removes the effect for only 1 minute.
- **Implementation flags:**
  - Likely existing hooks: paladin mercy hook.

### Replaces: aura of justice

- **Archetype feature:** Sacred Soul (Su)
- **Description:** At 11th level, a sacred soul is immune to hexes and curse spells or abilities.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a sacred soul is immune to hexes and curse spells or abilities. Each ally within 10 feet of her gains a +4 morale bonus on saving throws against hexes or curses.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.
  - Needs implementation review: witch/shaman hex mechanics.

### Replaces: the mercy gained at 12th level

- **Archetype feature:** Greater Reprieve (Su)
- **Description:** The soul sentinel suppresses the stain of corruption on the spirits of those she heals.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: The soul sentinel suppresses the stain of corruption on the spirits of those she heals. At 12th level, whenever she uses her lay on hands ability to heal a living creature (other than herself ) or damage an undead creature, in place of applying one of her other mercies, she can suppress the stain from a corrupted creature’s most recent manifestation for 1 minute (for more information about corruption and manifestations, see page 14).
- **Implementation flags:**
  - Likely existing hooks: paladin mercy hook.

## Parsed source feature headings

- Reprieve (Su)
- Sacred Soul (Su)
- Greater Reprieve (Su)

