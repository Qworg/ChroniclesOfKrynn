# Ranger - Freebooter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Freebooter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Freebooter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Freebooter's Bane (Ex); Freebooter’s Bond (Ex); Fast Swimmer (Ex)
- **Replaced / altered class features:** favored enemy; hunter’s bond; woodland stride

## Replacement details

### Replaces: favored enemy

- **Archetype feature:** Freebooter's Bane (Ex)
- **Description:** At 1st level, the freebooter can, as a move action, indicate an enemy in combat and rally her allies to focus on that target.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 5, 20.
  - Mechanics summary: At 1st level, the freebooter can, as a move action, indicate an enemy in combat and rally her allies to focus on that target. The freebooter and her allies gain a +1 bonus on weapon attack and damage rolls against the target. This ability applies only to allies who can see or hear the freebooter and who are within 30 feet of the freebooter at the time she activates this ability. At 5th level and every 5 levels thereafter (10th, 15th, and 20th level), the bonus increases by 1. The freebooter’s bane lasts until the target dies or the freebooter selects a new target.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored enemy hook.

### Replaces: hunter’s bond

- **Archetype feature:** Freebooter’s Bond (Ex)
- **Description:** At 4th level, a freebooter forms a bond with her crewmates.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a freebooter forms a bond with her crewmates. This bond allows her to spend a move action to grant her allies extra combat prowess when they work as a team. All allies within 30 feet who can see or hear the freebooter gain an additional +2 bonus on attack rolls when flanking with the freebooter or with another ally affected by this ability.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: woodland stride

- **Archetype feature:** Fast Swimmer (Ex)
- **Description:** Starting at 7th level, a freebooter may swim half her speed as a move action or her normal speed as a full-round action with a successful Swim check.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: Starting at 7th level, a freebooter may swim half her speed as a move action or her normal speed as a full-round action with a successful Swim check. The freebooter gains a +2 bonus on Swim checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Freebooter's Bane (Ex)
- Freebooter’s Bond (Ex)
- Fast Swimmer (Ex)

