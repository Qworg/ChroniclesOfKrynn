# Rogue - Toxic Talon

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Toxic Talon
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Toxic%20Talon
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Forceful Breath (Ex); Poison Adept (Ex); Toxin Resistance (Ex); Catalyst (Su); Split Toxin (Su)
- **Replaced / altered class features:** trapfinding; uncanny dodge; the rogue’s improved uncanny dodge

## Implementation details

### Alters: the rogue’s weapon proficiencies

- **Archetype feature:** Forceful Breath (Ex)
- **Description:** A toxic talon is proficient with blowguns instead of hand crossbows.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A toxic talon is proficient with blowguns instead of hand crossbows. He can use a blowgun without penalty while prone.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trapfinding

- **Archetype feature:** Poison Adept (Ex)
- **Description:** A toxic talon is trained in the use of poison and cannot accidentally poison himself when applying poison to a projectile weapon.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A toxic talon is trained in the use of poison and cannot accidentally poison himself when applying poison to a projectile weapon. He can apply poison to a projectile as a move action. This counts as the poison use ability for the purposes of qualifying for feats, prestige classes, and other options.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Replaces: trap sense

- **Archetype feature:** Toxin Resistance (Ex)
- **Description:** A toxic talon’s constant exposure to varied poisons grants him increasing resistance to them.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 6, 9, 12, 15, 18.
  - **Rules text to implement:** A toxic talon’s constant exposure to varied poisons grants him increasing resistance to them. At 3rd level, a toxic talon gains a +1 bonus on saving throws against diseases and poisons, and he gains a +1 bonus on Heal checks to treat diseases and poisons. He also gains a +1 bonus on caster level checks (including when he activates a magic item) to treat or remove poisons and diseases, such as when using remove disease or neutralize poison. Finally, he gains a +1 bonus on Perception checks to identify traps that utilize diseases or poisons. These bonuses increase to +2 at 6th level, to +3 at 9th level, to +4 at 12th level, to +5 at 15th level, and to +6 at 18th level.
- **Implementation flags:**
  - poison subsystem.

### Replaces: uncanny dodge

- **Archetype feature:** Catalyst (Su)
- **Description:** At 4th level, a toxic talon can use secret alchemical techniques to enhance a poison as he applies it to a weapon, increasing the save DC of the poison by 1 (this bonus increases to +2 at 12th level).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 12.
  - **Rules text to implement:** At 4th level, a toxic talon can use secret alchemical techniques to enhance a poison as he applies it to a weapon, increasing the save DC of the poison by 1 (this bonus increases to +2 at 12th level). This increase to the save DC lasts for 1 minute or until the poison is used up, whichever comes first. A toxic talon can use catalyst once per hour.
- **Implementation flags:**
  - poison subsystem.

### Replaces: the rogue’s improved uncanny dodge

- **Archetype feature:** Split Toxin (Su)
- **Description:** At 8th level, when a toxic talon uses catalyst to enhance poison as he applies it, he can envenom two ranged weapons or units of ammunition simultaneously with the same dose.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, when a toxic talon uses catalyst to enhance poison as he applies it, he can envenom two ranged weapons or units of ammunition simultaneously with the same dose.
- **Implementation flags:**
  - poison subsystem.

## Parsed source feature headings

- Forceful Breath (Ex)
- Poison Adept (Ex)
- Toxin Resistance (Ex)
- Catalyst (Su)
- Split Toxin (Su)
