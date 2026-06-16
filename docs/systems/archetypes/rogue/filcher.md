# Rogue - Filcher

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Filcher
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Filcher
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Quicker than the Eye (Ex); Rummage (Ex); Filch (Ex); Superior Filching (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** evasion; trap sense +1, +2, +3, +4, +5, and +6; uncanny dodge; improved uncanny dodge

## Replacement details

### Replaces: evasion

- **Archetype feature:** Quicker than the Eye (Ex)
- **Description:** At 2nd level, a filcher develops an amazingly swift and delicate touch.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a filcher develops an amazingly swift and delicate touch. When she uses Sleight of Hand, creatures take a penalty on their Perception checks to notice the attempt equal to half the filcher’s class level. The filcher also subtracts her class level from the normal –20 penalty when attempting to make a Sleight of Hand check as a move action instead of as a standard action. Lastly, the filcher can withdraw an object hidden on her person, including a weapon, as a move action instead of the usual standard action.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: trap sense +1, +2, +3, +4, +5, and +6

- **Archetype feature:** Rummage (Ex)
- **Description:** At 3rd level, a filcher learns how to assess the value of items at the quickest glance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a filcher learns how to assess the value of items at the quickest glance. She can even make startlingly accurate guesses about particular items merely by observing the bulges they make in pouches, backpacks, or similar containers. She gains a +1 bonus on Appraise checks and an additional +1 bonus every three levels thereafter. As a swift action, a filcher can make an Appraise check in order to determine the relative value of each object carried by her target (DC = 10 + 1 for every object the filcher is trying to ascertain the relative value of). Though she never learns the actual prices of items when using rummage, she does gain enough information to list these items in order, from the most valuable to the least valuable. She can, by taking a –20 penalty on the check, add to this assessment any items carried by her target that she cannot see.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, save DC calculation, ki/monk hook.

### Replaces: uncanny dodge

- **Archetype feature:** Filch (Ex)
- **Description:** At 4th level, a filcher learns how pluck items off her opponents even in combat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a filcher learns how pluck items off her opponents even in combat. She gains Improved Steal as a bonus feat and can use her Sleight of Hand bonus instead of her CMB when performing a steal combat maneuver. If the filcher gains bonuses on combat maneuver checks from any feats, spells, magic items, or similar effects, they are added to the Sleight of Hand bonus when using the steal maneuver.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: improved uncanny dodge

- **Archetype feature:** Superior Filching (Ex)
- **Description:** At 8th level, a filcher becomes a master at separating owners from their property.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a filcher becomes a master at separating owners from their property. She gains Greater Steal as a bonus feat, and opponents do not gain a +5 bonus to their CMD when she tries to remove items fastened to them.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

## Parsed source feature headings

- Quicker than the Eye (Ex)
- Rummage (Ex)
- Filch (Ex)
- Superior Filching (Ex)
- Rogue Talents
- Advanced Talents

