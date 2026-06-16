# Paladin - Combat Healer Squire

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Combat Healer Squire
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Combat%20Healer%20Squire
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Careful Healer (Ex); Dress Wounds (Su); Swift Healer (Ex)
- **Replaced / altered class features:** detect evil; divine grace; divine health

## Replacement details

### Replaces: detect evil

- **Archetype feature:** Careful Healer (Ex)
- **Description:** At 1st level, a combat healer squire provokes no attacks of opportunity when she uses the Heal skill to stabilize a creature or treat poison.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a combat healer squire provokes no attacks of opportunity when she uses the Heal skill to stabilize a creature or treat poison. In addition, when she administers long-term care with the Heal skill, she can restore a total number of additional hit points equal to her character level, divided as she wishes among those she is tending.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: divine grace

- **Archetype feature:** Dress Wounds (Su)
- **Description:** At 2nd level, a combat healer squire can hastily dress a deadly wound for her knight, temporary alleviating his suffering.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a combat healer squire can hastily dress a deadly wound for her knight, temporary alleviating his suffering. This ability acts in all ways like using the Heal skill to treat deadly wounds, except the combat healer squire only needs to take a fullround action to use this ability. The hit points healed are temporary, and only last 10 minutes, but they are not lost first like temporary hit points. A combat healer squire can only use this ability on her knight, not other creatures. A knight cannot benefit from this ability more than once per day, and cannot be treated for deadly wounds with the Heal skill within 24 hours of being subjected to this ability.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: divine health

- **Archetype feature:** Swift Healer (Ex)
- **Description:** At 3rd level, a combat healer squire becomes even more adept when treating wounds, and can use the Heal skill to perform first aid or treat poison as a swift action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a combat healer squire becomes even more adept when treating wounds, and can use the Heal skill to perform first aid or treat poison as a swift action.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Careful Healer (Ex)
- Dress Wounds (Su)
- Swift Healer (Ex)

