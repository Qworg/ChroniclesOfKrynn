# Warrior - Lore Warden (PFS Field Guide)

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Lore Warden (PFS Field Guide)
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Lore%20Warden%20%28PFS%20Field%20Guide%29
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Scholastic (Ex); Expertise (Ex); Maneuver Mastery (Ex); Know Thy Enemy (Ex); Hair’s Breadth (Ex); Swift Lore (Ex); Know Weakness (Ex)
- **Replaced / altered class features:** the lore warden’s proficiency with medium armor, heavy armor, and shields; bravery 1; armor training 1; armor training 2; armor training 3; armor training 4; armor mastery

## Replacement details

### Replaces: the lore warden’s proficiency with medium armor, heavy armor, and shields

- **Archetype feature:** Scholastic (Ex)
- **Description:** Lore wardens gain 2 additional skill ranks each level.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Lore wardens gain 2 additional skill ranks each level. These ranks must be spent on Intelligence-based skills. All Intelligence-based skills are class skills for lore wardens.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: bravery 1

- **Archetype feature:** Expertise (Ex)
- **Description:** At 2nd level, a lore warden gains Combat Expertise as a bonus feat, even if he would not normally qualify for this feat.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a lore warden gains Combat Expertise as a bonus feat, even if he would not normally qualify for this feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: armor training 1

- **Archetype feature:** Maneuver Mastery (Ex)
- **Description:** At 3rd level, a lore warden gains a +2 bonus on all CMB checks and to his CMD.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 7, 11, 15.
  - Mechanics summary: At 3rd level, a lore warden gains a +2 bonus on all CMB checks and to his CMD. This bonus increases to +4 at 7th level, +6 at 11th level, and +8 at 15th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 2

- **Archetype feature:** Know Thy Enemy (Ex)
- **Description:** At 7th level, a lore warden can take a standard action to study a specific target in sight.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a lore warden can take a standard action to study a specific target in sight. He must make a Knowledge check to determine the target’s abilities and weaknesses as part of this standard action. If successful, the lore warden not only notes the appropriate abilities and weaknesses, as detailed under the Knowledge skill on page 100 of the Pathfinder RPG Core Rulebook, but also gains a +2 competence bonus on all attack rolls and weapon damage rolls made against that enemy. Note that this bonus on attack and damage rolls applies only to that specific creature. This bonus lasts for the duration of an encounter, or until the lore warden attempts a new Knowledge check to use this ability on a different target.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: armor training 3

- **Archetype feature:** Hair’s Breadth (Ex)
- **Description:** At 11th level, a lore warden can attempt an Acrobatics check as an immediate action to negate a confirmation role for a critical hit.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a lore warden can attempt an Acrobatics check as an immediate action to negate a confirmation role for a critical hit. The critical hit confirmation is negated (though the attack still hits and deals normal damage) if the Acrobatics check is greater than the opponent’s confirmation roll.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor training 4

- **Archetype feature:** Swift Lore (Ex)
- **Description:** At 14th level, a lore warden can use his Know Thy Enemy ability as a swift action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a lore warden can use his Know Thy Enemy ability as a swift action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: armor mastery

- **Archetype feature:** Know Weakness (Ex)
- **Description:** At 19th level, a lore warden can automatically conf irm a critical hit once per round when he threatens a critical hit.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a lore warden can automatically conf irm a critical hit once per round when he threatens a critical hit.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Scholastic (Ex)
- Expertise (Ex)
- Maneuver Mastery (Ex)
- Know Thy Enemy (Ex)
- Hair’s Breadth (Ex)
- Swift Lore (Ex)
- Know Weakness (Ex)

