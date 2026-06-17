# Rogue - Knife Master

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Knife Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Knife%20Master
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Hidden Blade; Sneak Stab (Ex); Blade Sense (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Hidden Blade
- **Description:** A knife master adds 1/2 her level on Sleight of Hand checks made to conceal a light blade.
- **Detailed mechanics:**
  - **Rules text to implement:** A knife master adds 1/2 her level on Sleight of Hand checks made to conceal a light blade.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Sneak Stab (Ex)
- **Description:** A knife master focuses her ability to deal sneak attack damage with daggers and similar weapons to such a degree that she can deal more sneak attack damage with those weapons at the expense of sneak attacks with other weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A knife master focuses her ability to deal sneak attack damage with daggers and similar weapons to such a degree that she can deal more sneak attack damage with those weapons at the expense of sneak attacks with other weapons. When she makes a sneak attack with a dagger, kerambit, kukri, punching daggers, starknife, or swordbreaker dagger ( Advanced Player’s Guide 178), she uses d8s to roll sneak attack damage instead of d6s. For sneak attacks with all other weapons, she uses d4s instead of d6s. This ability is identical in all other ways to sneak attack, and supplements that ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Blade Sense (Ex)
- **Description:** At 3rd level, a knife master is so skilled in combat involving light blades that she gains a +1 dodge bonus to AC against attacks made against her with light blades.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, a knife master is so skilled in combat involving light blades that she gains a +1 dodge bonus to AC against attacks made against her with light blades. This bonus increases by +1 for every three levels, to a maximum of +6 at 18th level.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the knife master archetype: befuddling strike, combat trick, offensive defense, surprise attack, underhanded*, and weapon training.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the knife master archetype: befuddling strike, combat trick, offensive defense, surprise attack, underhanded*, and weapon training.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the knife master archetype: another day, confounding blades*, deadly sneak, entanglement of blades, and unwitting ally*.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the knife master archetype: another day, confounding blades*, deadly sneak, entanglement of blades, and unwitting ally*.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Hidden Blade
- Sneak Stab (Ex)
- Blade Sense (Ex)
- Rogue Talents
- Advanced Talents
