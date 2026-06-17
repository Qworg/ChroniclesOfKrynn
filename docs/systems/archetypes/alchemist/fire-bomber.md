# Alchemist - Fire Bomber

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Fire Bomber
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Fire%20Bomber
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Fire Bombardier (Su or Ex); Bonus Feats; Fiery Cocktail (Su); Fire Body (Ex); Improved Fire Body (Ex); Greater Fire Body (Ex); Discoveries
- **Replaced / altered class features:** poison resistance +6; poison immunity; persistent mutagen

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A fire bomber treats torches as a simple weapon.
- **Detailed mechanics:**
  - **Rules text to implement:** A fire bomber treats torches as a simple weapon.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: bomb and throw anything

- **Archetype feature:** Fire Bombardier (Su or Ex)
- **Description:** At 1st level, when a fire bomber throws a bomb that deals fire damage, all creatures in the splash radius take an additional point of damage per die of fire damage dealt.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, when a fire bomber throws a bomb that deals fire damage, all creatures in the splash radius take an additional point of damage per die of fire damage dealt. Fire bombers only add their Intelligence bonus to damage from bombs or alchemical substances that deal fire damage. This otherwise works like the alchemist’s bomb and throw anything abilities.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** A fire bomber can select the Burn!
- **Detailed mechanics:**
  - **Rules text to implement:** A fire bomber can select the Burn! Burn! Burn!, Fire Tamer, or Flame Heart feat in place of a discovery.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the alchemist’s 4th-level discovery

- **Archetype feature:** Fiery Cocktail (Su)
- **Description:** At 4th level, whenever a fire bomber uses a discovery that deals damage other than fire damage, he can split the damage dice evenly between the bomb’s primary damage type and 1d6 points of fire damage; when there is an odd number of damage dice, the odd die of damage comes from the primary damage type.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level, whenever a fire bomber uses a discovery that deals damage other than fire damage, he can split the damage dice evenly between the bomb’s primary damage type and 1d6 points of fire damage; when there is an odd number of damage dice, the odd die of damage comes from the primary damage type. For example, an 8th-level fire bomber could throw a concussive bomb that deals 2d6 points of fire damage and 3d4 points of sonic damage. Additional effects from the bomb still apply, but the save DC for admixture bombs is reduced by 2.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: poison resistance +6

- **Archetype feature:** Fire Body (Ex)
- **Description:** At 8th level, a fire bomber adds elemental body I to his extract list as a 3rd-level extract.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8, 3.
  - **Rules text to implement:** At 8th level, a fire bomber adds elemental body I to his extract list as a 3rd-level extract. Elemental body extracts prepared using fire body are limited to fire elementals only.
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison immunity

- **Archetype feature:** Improved Fire Body (Ex)
- **Description:** At 10th level, fire bombers add elemental body II to their spell list as a 4th-level extract.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10, 4.
  - **Rules text to implement:** At 10th level, fire bombers add elemental body II to their spell list as a 4th-level extract. Elemental body extracts prepared using improved fire body are limited to fire elementals only.
- **Implementation flags:**
  - poison subsystem.
  - archetype spell-list override.

### Replaces: persistent mutagen

- **Archetype feature:** Greater Fire Body (Ex)
- **Description:** At 14th level, fire bombers add elemental body IV to their spell list as a 5th-level extract.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 14, 5.
  - **Rules text to implement:** At 14th level, fire bombers add elemental body IV to their spell list as a 5th-level extract. Elemental body extracts prepared using greater fire body are limited to fire elementals only.
- **Implementation flags:**
  - archetype spell-list override.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the fire bomber archetype: fire brand, rocket bomb ; explosive bombs, fast bombs, inferno bomb, precise bombs breath weapon bomb, explosive missile, immolation bomb ; bottled ooze, confusion bomb, strafe bomb.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the fire bomber archetype: fire brand, rocket bomb ; explosive bombs, fast bombs, inferno bomb, precise bombs breath weapon bomb, explosive missile, immolation bomb ; bottled ooze, confusion bomb, strafe bomb.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Fire Bombardier (Su or Ex)
- Bonus Feats
- Fiery Cocktail (Su)
- Fire Body (Ex)
- Improved Fire Body (Ex)
- Greater Fire Body (Ex)
- Discoveries
