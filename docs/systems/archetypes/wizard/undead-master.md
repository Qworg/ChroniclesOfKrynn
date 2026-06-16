# Wizard - Undead Master

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Undead Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Undead%20Master
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Necromantic Focus; Necropolitan (Ex); Corpse Bond (Su); Command Undead (Su); Reanimator (Su); Lich-Loved (Su)
- **Replaced / altered class features:** Scribe Scroll; the bonus feats gained at 5th, 10th, and 15th levels; the bonus feat gained at 20th level

## Replacement details

### Alters: arcane school

- **Archetype feature:** Necromantic Focus
- **Description:** An undead master must be of an evil alignment.
- **Mechanics:**
  - Mechanics summary: An undead master must be of an evil alignment. If he becomes nonevil, he can still use his powers but can’t progress any further as a wizard. Most undead masters specialize in the necromancy school, and an undead master can’t have necromancy as an opposition school.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: alignment

- **Archetype feature:** Necromantic Focus
- **Description:** An undead master must be of an evil alignment.
- **Mechanics:**
  - Mechanics summary: An undead master must be of an evil alignment. If he becomes nonevil, he can still use his powers but can’t progress any further as a wizard. Most undead masters specialize in the necromancy school, and an undead master can’t have necromancy as an opposition school.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: arcane bond

- **Archetype feature:** Corpse Bond (Su)
- **Description:** An undead master can forge an arcane bond with an object, but that object must be made at least partially of bone.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: An undead master can forge an arcane bond with an object, but that object must be made at least partially of bone. Alternatively, he can animate a corpse companion, as per the undead lord cleric archetype ( Pathfinder RPG Ultimate Magic 32 ). He can’t gain a familiar.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: Scribe Scroll

- **Archetype feature:** Command Undead (Su)
- **Description:** An undead master gains Command Undead as a bonus feat, treating his wizard level as his cleric level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: An undead master gains Command Undead as a bonus feat, treating his wizard level as his cleric level. If he lacks the ability to channel negative energy for the purpose of Command Undead, he can expend 3 uses of any 1st-level arcane school ability that normally has a number of uses per day equal to 3 + his Intelligence modifier, rather than a use of channel energy. If he’s a necromancer with the power over undead ability, he instead gains Improved Channel.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: the bonus feats gained at 5th, 10th
- **Archetype feature:** Reanimator (Su)
- **Description:** An undead master adds the following spells to his spellbook at the given wizard levels: 1st— repair undead ACG ; 3rd— lesser animate dead UM ; 5th— animate dead ; 7th— undead anatomy I UM ; 9th— create undead ; 11th— undeath to death ; 13th— create greater undead ; 15th— undead anatomy IV UM ; 17th— cursed earth UM.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: An undead master adds the following spells to his spellbook at the given wizard levels: 1st— repair undead ACG ; 3rd— lesser animate dead UM ; 5th— animate dead ; 7th— undead anatomy I UM ; 9th— create undead ; 11th— undeath to death ; 13th— create greater undead ; 15th— undead anatomy IV UM ; 17th— cursed earth UM . He can spontaneously cast any of these spells by sacrificing a prepared spell of the same level or higher. The undead master can cast lesser animate dead, animate dead, create undead , and create greater undead as if they were 1 level lower than their normal wizard spell level; this does not alter their level for the purpose of item crafting and the like.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: 15th levels

- **Archetype feature:** Reanimator (Su)
- **Description:** An undead master adds the following spells to his spellbook at the given wizard levels: 1st— repair undead ACG ; 3rd— lesser animate dead UM ; 5th— animate dead ; 7th— undead anatomy I UM ; 9th— create undead ; 11th— undeath to death ; 13th— create greater undead ; 15th— undead anatomy IV UM ; 17th— cursed earth UM.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: An undead master adds the following spells to his spellbook at the given wizard levels: 1st— repair undead ACG ; 3rd— lesser animate dead UM ; 5th— animate dead ; 7th— undead anatomy I UM ; 9th— create undead ; 11th— undeath to death ; 13th— create greater undead ; 15th— undead anatomy IV UM ; 17th— cursed earth UM . He can spontaneously cast any of these spells by sacrificing a prepared spell of the same level or higher. The undead master can cast lesser animate dead, animate dead, create undead , and create greater undead as if they were 1 level lower than their normal wizard spell level; this does not alter their level for the purpose of item crafting and the like.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the bonus feat gained at 20th level

- **Archetype feature:** Lich-Loved (Su)
- **Description:** At 20th level, an undead master gains the benefits of the undead sorcerer bloodline’s one of us ability.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, an undead master gains the benefits of the undead sorcerer bloodline’s one of us ability.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, sorcerer bloodline hook.

## Parsed source feature headings

- Necromantic Focus
- Necropolitan (Ex)
- Corpse Bond (Su)
- Command Undead (Su)
- Reanimator (Su)
- Lich-Loved (Su)

