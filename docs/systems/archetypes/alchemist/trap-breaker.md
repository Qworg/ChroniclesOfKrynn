# Alchemist - Trap Breaker

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Trap Breaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Trap%20Breaker
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Trapfinding (Ex); Explosive Disarm (Ex); Land Mine (Ex); Mine Engineering (Ex)
- **Replaced / altered class features:** poison use and poison resistance +2; poison resistance +4 and poison resistance +6; swift poisoning; poison immunity

## Replacement details

### Replaces: poison use and poison resistance +2

- **Archetype feature:** Trapfinding (Ex)
- **Description:** Starting at 2nd level, a trap breaker adds 1/2 his alchemist level on Perception checks made to locate traps and on Disable Device checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: Starting at 2nd level, a trap breaker adds 1/2 his alchemist level on Perception checks made to locate traps and on Disable Device checks. A trap breaker can use Disable Device to disarm magic traps.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: poison resistance +4 and poison resistance +6

- **Archetype feature:** Explosive Disarm (Ex)
- **Description:** At 5th level, a trap breaker can attempt to disarm a mechanical trap by detonating it rather than disarming it with a Disable Device check.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 8.
  - Mechanics summary: At 5th level, a trap breaker can attempt to disarm a mechanical trap by detonating it rather than disarming it with a Disable Device check. As a fullround action, a trap breaker may expend one of his bombs to make a ranged touch attack against a trap, using the trap’s Disable Device DC as its AC. If the attack misses, the bomb’s splash damage activates the trap. If the attack hits, the bomb deactivates the trap without setting it off. The trap breaker must both know the location of the trap and be able to reach the trap’s trigger with a ranged touch attack in order to use this ability. At 8th level, a trap breaker can disarm magic traps with this ability.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, alchemist bomb hook.

### Replaces: swift poisoning

- **Archetype feature:** Land Mine (Ex)
- **Description:** At 6th level, a trap breaker can turn his bombs into land mines.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a trap breaker can turn his bombs into land mines. Setting a land mine is a fullround action that provokes attacks of opportunity. The land mine fills a single 5-foot square, and can’t be placed in the same space as another trap, land mine, or magic trap. The trap breaker can arm the land mine with any bomb he is eligible to use, and the effects of this bomb are immediately transferred to the land mine. Creating a land mine uses up two of the alchemist’s bombs per day. The DCs for Perception checks to notice the land mine, Disable Device checks to disable it, and saving throws to avoid its effects are equal to 10 + 1/2 the alchemist’s level + his Intelligence modifier.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, alchemist bomb hook.

### Replaces: poison immunity

- **Archetype feature:** Mine Engineering (Ex)
- **Description:** At 10th level, a trap breaker’s expertise in improving explosives allows him to create land mines with minimal expense.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, a trap breaker’s expertise in improving explosives allows him to create land mines with minimal expense. Creating a land mine uses up only one of the alchemist’s bombs per day.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook.

## Parsed source feature headings

- Trapfinding (Ex)
- Explosive Disarm (Ex)
- Land Mine (Ex)
- Mine Engineering (Ex)

