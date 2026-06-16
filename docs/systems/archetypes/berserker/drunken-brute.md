# Berserker - Drunken Brute

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Drunken Brute
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Drunken%20Brute
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Raging Drunk (Ex); Rage Powers
- **Replaced / altered class features:** fast movement

## Replacement details

### Replaces: fast movement

- **Archetype feature:** Raging Drunk (Ex)
- **Description:** While raging, the drunken brute can drink a potion, or a tankard of ale or similar quantity of alcohol, as a move action that does not provoke attacks of opportunity.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: While raging, the drunken brute can drink a potion, or a tankard of ale or similar quantity of alcohol, as a move action that does not provoke attacks of opportunity. A potion has its normal effect, while an alcoholic drink allows the barbarian to maintain her rage that round without expending a round of rage for the day (instead of the alcohol’s normal effects). For each alcoholic drink consumed while raging, the barbarian is nauseated for 1 round when her rage expires, in addition to the normal fatigue that follows a rage.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

## Parsed source feature headings

- Raging Drunk (Ex)
- Rage Powers

