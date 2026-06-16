# Bard - Daredevil

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Daredevil
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Daredevil
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Agile (Ex); Bardic Performance; Canny Foe (Ex); Dauntless (Ex); Scoundrel’s Fortune (Ex)
- **Replaced / altered class features:** bardic knowledge; inspire courage; versatile performance; well-versed; lore master

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Agile (Ex)
- **Description:** A daredevil adds half her class level (minimum 1) on Acrobatics, Bluff, Climb, and Escape Artist checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A daredevil adds half her class level (minimum 1) on Acrobatics, Bluff, Climb, and Escape Artist checks.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: inspire courage

- **Archetype feature:** Bardic Performance
- **Description:** A daredevil gains the following type of bardic performance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 17.
  - Mechanics summary: A daredevil gains the following type of bardic performance. Derring-do (Su) : A daredevil can use her performance to bring out grace in the clumsiest allies. The daredevil and any allies who see her receive a +1 morale bonus on Reflex saving throws and a +2 competence bonus on Dexterity-based skill checks. Allies who move at least 10 feet during their turn gain a +1 dodge bonus to their Armor Class until the start of their next turn. At 5th level, and every six bard levels thereafter, the saving throw and Armor Class bonuses increase by +1, to a maximum of +4 at 17th level, and the skill check bonuses increase by +2, to a maximum of +8 at 17th level. This is a mind-affecting ability that uses visual components.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, rage/rage-power hook, bardic performance hook, ki/monk hook.

### Replaces: versatile performance

- **Archetype feature:** Canny Foe (Ex)
- **Description:** At 2nd level, a daredevil can choose one type of combat maneuver.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6.
  - Mechanics summary: At 2nd level, a daredevil can choose one type of combat maneuver. She gains a +2 bonus on her combat maneuver checks to attempt the chosen maneuver and to her CMD to resist that maneuver. At 6th level, and every four levels thereafter, the daredevil gains a +2 bonus for an additional type of combat maneuver. She may not choose the same maneuver twice.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: well-versed

- **Archetype feature:** Dauntless (Ex)
- **Description:** At 2nd level, a daredevil gains a +1 morale bonus on saving throws against mind-affecting effects, including all fear effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 18.
  - Mechanics summary: At 2nd level, a daredevil gains a +1 morale bonus on saving throws against mind-affecting effects, including all fear effects. This bonus increases by +1 for every four levels gained after 2nd level, to a maximum of +5 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: lore master

- **Archetype feature:** Scoundrel’s Fortune (Ex)
- **Description:** At 5th level, once per day a daredevil can choose to roll two dice instead of one for any skill check, keeping the best result.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 20.
  - Mechanics summary: At 5th level, once per day a daredevil can choose to roll two dice instead of one for any skill check, keeping the best result. She can use this ability one additional time per day for every three levels she possesses beyond 5th, to a maximum of eight times per day at 20th level.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

## Parsed source feature headings

- Agile (Ex)
- Bardic Performance
- Canny Foe (Ex)
- Dauntless (Ex)
- Scoundrel’s Fortune (Ex)

