# Alchemist - Aerochemist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Aerochemist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Aerochemist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Aeromantic Concoction (Su); Bombs Away (Ex); Aerodynamic Prowess (Su)
- **Replaced / altered class features:** Mutagen, Swift Poisoning; Persistent Mutagen; Poison Use; Swift Alchemy; Poison Resistance

## Replacement details

### Replaces: mutagen, swift poisoning, and persistent mutagen

- **Archetype feature:** Aeromantic Concoction (Su)
- **Description:** An aerochemist learns to craft a special alchemical concoction.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 10, 14.
  - Mechanics summary: An aerochemist learns to craft a special alchemical concoction. It takes 10 minutes to brew a dose of this concoction, and once brewed, it remains potent until used. An aerochemist can maintain only 1 dose of this concoction at a time—if he brews a second dose, any existing concoction becomes inert. As with an extract or bomb, an aeromantic concoction that is not in the aerochemist’s possession becomes inert until he picks it up again. When consumed, an aerochemist’s aeromantic concoction makes his body become incredibly buoyant for 10 minutes per alchemist level. The concoction grants the aerochemist a +5 bonus on Acrobatics checks to attempt high jumps or long jumps, and he is always treated as having a running start when attempting long jumps.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, alchemist bomb hook, mutagen hook, alchemist discovery hook.

### Replaces: poison use and swift alchemy

- **Archetype feature:** Bombs Away (Ex)
- **Description:** At 2nd level, an aerochemist becomes an expert at attacking from above.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6, 18.
  - Mechanics summary: At 2nd level, an aerochemist becomes an expert at attacking from above. He gains a +1 bonus on attack rolls made with thrown weapons against targets that are at least 10 feet below him. This bonus increases to +2 at 6th level, and increases by an additional 1 every 4 levels thereafter, to a maximum bonus of +5 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, alchemist bomb hook, ki/monk hook.

### Replaces: poison resistance

- **Archetype feature:** Aerodynamic Prowess (Su)
- **Description:** At 2nd level, an aerochemist gains a +2 bonus on Fly checks.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 5, 8.
  - Mechanics summary: At 2nd level, an aerochemist gains a +2 bonus on Fly checks. This bonus increases to +4 at 5th level, and +6 at 8th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Aeromantic Concoction (Su)
- Bombs Away (Ex)
- Aerodynamic Prowess (Su)

