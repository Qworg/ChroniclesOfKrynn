# Berserker - Cave Dweller

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Cave Dweller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Cave%20Dweller
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skills; Tight Tunnels (Ex); Tunnel Vision (Ex); Sun Walker (Ex); Rage Powers
- **Replaced / altered class features:** Skills; Fast Movement; Trap Sense; Damage Reduction

## Replacement details

### Alters: the barbarian’s skills

- **Archetype feature:** Skills
- **Description:** A cave dweller gains Stealth as a class skill in place of Ride.
- **Mechanics:**
  - Mechanics summary: A cave dweller gains Stealth as a class skill in place of Ride.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: fast movement

- **Archetype feature:** Tight Tunnels (Ex)
- **Description:** Cave dwellers pursue prey through the winding tunnels of the deep, which rarely accommodate open sprints.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Cave dwellers pursue prey through the winding tunnels of the deep, which rarely accommodate open sprints. A cave dweller can make a single turn up to 90 degrees while running (though not while charging). Additionally, a cave dweller takes no penalties to movement speed while squeezing.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: trap sense

- **Archetype feature:** Tunnel Vision (Ex)
- **Description:** At 3rd level, a cave dweller’s senses become sharp in the dark.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6.
  - Mechanics summary: At 3rd level, a cave dweller’s senses become sharp in the dark. She gains darkvision to a range of 60 feet and a +1 bonus on Perception checks to detect ambushes, movement, and sound while in darkness. This bonus increases by 1 at 6th level and every 3 levels thereafter.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: damage reduction

- **Archetype feature:** Sun Walker (Ex)
- **Description:** At 7th level, a cave dweller gains a +1 dodge bonus to AC and on saving throws against effects with the light descriptor or that produce bright or sudden light.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 10.
  - Mechanics summary: At 7th level, a cave dweller gains a +1 dodge bonus to AC and on saving throws against effects with the light descriptor or that produce bright or sudden light. Any penalties on attack rolls, saving throws, or skill checks because of bright light are reduced by 1. At 10th level and every 3 levels after 10th, the bonus to AC and saving throws, as well as the reduction of light-based penalties, increases by 1.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

## Parsed source feature headings

- Skills
- Tight Tunnels (Ex)
- Tunnel Vision (Ex)
- Sun Walker (Ex)
- Rage Powers

