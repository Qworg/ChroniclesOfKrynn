# Paladin - Divine Hunter

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Divine Hunter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Divine%20Hunter
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Precise Shot; Shared Precision (Su); Divine Bond (Su); Distant Mercy (Sp); Aura of Care (Su); Hunter’s Blessing (Su); Righteous Hunter (Su)
- **Replaced / altered class features:** her Heavy Armor Proficiency; aura of courage; the standard paladin’s divine bond; the paladin’s 6th-level mercy; aura of resolve; aura of justice; aura of faith

## Implementation details

### Replaces: her Heavy Armor Proficiency

- **Archetype feature:** Precise Shot
- **Description:** A divine hunter gains Precise Shot as a bonus feat at 1st level, even if she doesn’t meet the prerequisites.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** A divine hunter gains Precise Shot as a bonus feat at 1st level, even if she doesn’t meet the prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of courage

- **Archetype feature:** Shared Precision (Su)
- **Description:** At 3rd level, when a divine hunter hits a creature with a ranged attack, she grants her allies within 10 feet of her the benefit of the Precise Shot feat against that target until the start of her next turn.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, when a divine hunter hits a creature with a ranged attack, she grants her allies within 10 feet of her the benefit of the Precise Shot feat against that target until the start of her next turn. Her allies must remain within 10 feet of her, and must be able both to see and hear the divine hunter to gain this benefit.
- **Implementation flags:**
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: the standard paladin’s divine bond

- **Archetype feature:** Divine Bond (Su)
- **Description:** At 5th level, a divine hunter forms a bond with her deity.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a divine hunter forms a bond with her deity. This functions as the paladin’s divine bond ability, except the bond must always take the form of a ranged or throwing weapon (excluding ammunition). In addition to the listed abilities, a divine hunter can add the distance, returning, or seeking special abilities to her weapon, but she cannot add the defending or disruption special abilities. Special abilities added to throwing weapons function normally when the weapon is used in melee.
- **Implementation flags:**
  - ki subsystem.

### Replaces: the paladin’s 6th-level mercy

- **Archetype feature:** Distant Mercy (Sp)
- **Description:** At 6th level, a divine hunter can expend two uses of her lay on hand abilities to use her lay on hands ability on a target within 5 feet per paladin level.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a divine hunter can expend two uses of her lay on hand abilities to use her lay on hands ability on a target within 5 feet per paladin level. Distant mercy has no effect on creatures harmed by positive energy, such as undead.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of resolve

- **Archetype feature:** Aura of Care (Su)
- **Description:** At 8th level, a divine hunter and her allies gain a preternatural awareness of each other’s position in battle.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a divine hunter and her allies gain a preternatural awareness of each other’s position in battle. She and any allies within 10 feet of her no longer provide cover against each other’s ranged attacks unless they wish to. Allies who cannot move or otherwise take actions still provide cover, as do flat-footed allies. The divine hunter and her allies must be able to see or hear each other to use this ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of justice

- **Archetype feature:** Hunter’s Blessing (Su)
- **Description:** At 11th level, a divine hunter can expend a use of her smite evil ability as a swift action to grant herself and all allies within 10 feet the Deadly Aim, Precise Shot, and Improved Precise Shot feats, even if they lack the prerequisites.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a divine hunter can expend a use of her smite evil ability as a swift action to grant herself and all allies within 10 feet the Deadly Aim, Precise Shot, and Improved Precise Shot feats, even if they lack the prerequisites. The effects last for 1 minute. Evil creatures gain no benefit from this ability.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of faith

- **Archetype feature:** Righteous Hunter (Su)
- **Description:** At 14th level, a divine hunter’s ranged weapons are treated as good-aligned for the purposes of overcoming damage reduction.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a divine hunter’s ranged weapons are treated as good-aligned for the purposes of overcoming damage reduction. Any ranged attacks made by an ally within 10 feet of her are likewise treated as good-aligned for the purposes of overcoming damage reduction. This ability functions only while the divine hunter is conscious.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Precise Shot
- Shared Precision (Su)
- Divine Bond (Su)
- Distant Mercy (Sp)
- Aura of Care (Su)
- Hunter’s Blessing (Su)
- Righteous Hunter (Su)
