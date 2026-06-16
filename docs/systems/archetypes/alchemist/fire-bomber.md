# Alchemist - Fire Bomber

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Fire Bomber
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Fire%20Bomber
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Fire Bombardier (Su or Ex); Bonus Feats; Fiery Cocktail (Su); Fire Body (Ex); Improved Fire Body (Ex); Greater Fire Body (Ex); Discoveries
- **Replaced / altered class features:** poison resistance +6; poison immunity; persistent mutagen

## Replacement details

### Alters: bomb and throw anything

- **Archetype feature:** Fire Bombardier (Su or Ex)
- **Description:** At 1st level, when a fire bomber throws a bomb that deals fire damage, all creatures in the splash radius take an additional point of damage per die of fire damage dealt.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, when a fire bomber throws a bomb that deals fire damage, all creatures in the splash radius take an additional point of damage per die of fire damage dealt. Fire bombers only add their Intelligence bonus to damage from bombs or alchemical substances that deal fire damage.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, alchemist bomb hook.

### Replaces: the alchemist’s 4th-level discovery

- **Archetype feature:** Fiery Cocktail (Su)
- **Description:** At 4th level, whenever a fire bomber uses a discovery that deals damage other than fire damage, he can split the damage dice evenly between the bomb’s primary damage type and 1d6 points of fire damage; when there is an odd number of damage dice, the odd die of damage comes from the primary damage type.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 8.
  - Mechanics summary: At 4th level, whenever a fire bomber uses a discovery that deals damage other than fire damage, he can split the damage dice evenly between the bomb’s primary damage type and 1d6 points of fire damage; when there is an odd number of damage dice, the odd die of damage comes from the primary damage type. For example, an 8th-level fire bomber could throw a concussive bomb that deals 2d6 points of fire damage and 3d4 points of sonic damage. Additional effects from the bomb still apply, but the save DC for admixture bombs is reduced by 2.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, alchemist bomb hook, alchemist discovery hook.

### Replaces: poison resistance +6

- **Archetype feature:** Fire Body (Ex)
- **Description:** At 8th level, a fire bomber adds elemental body I to his extract list as a 3rd-level extract.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8, 3.
  - Mechanics summary: At 8th level, a fire bomber adds elemental body I to his extract list as a 3rd-level extract. Elemental body extracts prepared using fire body are limited to fire elementals only.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook.

### Replaces: poison immunity

- **Archetype feature:** Improved Fire Body (Ex)
- **Description:** At 10th level, fire bombers add elemental body II to their spell list as a 4th-level extract.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10, 4.
  - Mechanics summary: At 10th level, fire bombers add elemental body II to their spell list as a 4th-level extract. Elemental body extracts prepared using improved fire body are limited to fire elementals only.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, alchemist bomb hook.

### Replaces: persistent mutagen

- **Archetype feature:** Greater Fire Body (Ex)
- **Description:** At 14th level, fire bombers add elemental body IV to their spell list as a 5th-level extract.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 14, 5.
  - Mechanics summary: At 14th level, fire bombers add elemental body IV to their spell list as a 5th-level extract. Elemental body extracts prepared using greater fire body are limited to fire elementals only.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, alchemist bomb hook, mutagen hook.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Fire Bombardier (Su or Ex)
- Bonus Feats
- Fiery Cocktail (Su)
- Fire Body (Ex)
- Improved Fire Body (Ex)
- Greater Fire Body (Ex)
- Discoveries

