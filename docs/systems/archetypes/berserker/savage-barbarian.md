# Berserker - Savage Barbarian

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Savage Barbarian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Savage%20Barbarian
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Naked Courage (Ex); Natural Toughness (Ex); Rage Powers
- **Replaced / altered class features:** trap sense; damage reduction

## Replacement details

### Replaces: trap sense

- **Archetype feature:** Naked Courage (Ex)
- **Description:** At 3rd level, the savage barbarian gains a +1 dodge bonus to AC and a +1 morale bonus on saving throws against fear when wearing no armor (shields are allowed).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, the savage barbarian gains a +1 dodge bonus to AC and a +1 morale bonus on saving throws against fear when wearing no armor (shields are allowed). This bonus increases by +1 for every six levels after 3rd.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook.

### Replaces: damage reduction

- **Archetype feature:** Natural Toughness (Ex)
- **Description:** At 7th level, the savage barbarian gains a +1 natural armor bonus to AC when wearing no armor (shields are allowed).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, the savage barbarian gains a +1 natural armor bonus to AC when wearing no armor (shields are allowed). This bonus increases by +1 for every three levels beyond 7th.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, AC/natural armor bonus.

## Parsed source feature headings

- Naked Courage (Ex)
- Natural Toughness (Ex)
- Rage Powers

