# Bard - Dirge Bard

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Dirge Bard
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Dirge%20Bard
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bardic Performance; Haunted Eyes (Ex); Secrets of the Grave (Ex); Haunting Refrain (Su)
- **Replaced / altered class features:** well-versed; versatile performance; lore master

## Replacement details

### Replaces: well-versed

- **Archetype feature:** Haunted Eyes (Ex)
- **Description:** At 2nd level, a dirge bard gains a +4 bonus on saves against fear, energy drain, death effects, and necromantic effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a dirge bard gains a +4 bonus on saves against fear, energy drain, death effects, and necromantic effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.
  - Needs implementation review: haunt rules.

### Replaces: versatile performance

- **Archetype feature:** Secrets of the Grave (Ex)
- **Description:** At 2nd level, a dirge bard gains a bonus equal to half his bard level on Knowledge (religion) checks made to identify undead creatures and their abilities.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a dirge bard gains a bonus equal to half his bard level on Knowledge (religion) checks made to identify undead creatures and their abilities. A dirge bard may use mind-affecting spells to affect undead as if they were living creatures, even if they are mindless (though spells that affect only humanoids do not affect them, even if they were humanoids in life). In addition, he may add one necromancy spell from the spell list of any arcane spellcasting class to his list of spells known at 2nd level and every four levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: lore master

- **Archetype feature:** Haunting Refrain (Su)
- **Description:** At 5th level, a dirge bard is able to stir primal terrors in the hearts of listeners.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, a dirge bard is able to stir primal terrors in the hearts of listeners. He can use a Perform (keyboard) or Perform (percussion) check in place of an Intimidate check to demoralize an opponent, with a bonus equal to half his bard level. In addition, saving throws against any fear effect he creates are made with a –2 penalty, and this penalty increases by –1 every 5 levels beyond 5th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.
  - Needs implementation review: haunt rules.

## Parsed source feature headings

- Bardic Performance
- Haunted Eyes (Ex)
- Secrets of the Grave (Ex)
- Haunting Refrain (Su)

