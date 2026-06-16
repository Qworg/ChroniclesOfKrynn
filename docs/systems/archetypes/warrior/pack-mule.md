# Warrior - Pack Mule

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Pack Mule
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Pack%20Mule
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skill Ranks per Level; Unobtrusive; Efficient Packer (Ex); Weight Training (Ex); Healthy as a Mule (Ex)
- **Replaced / altered class features:** the bonus feat gained at 1st level; bravery; armor training 1 through 4; armor mastery

## Replacement details

### Alters: the fighter’s skill ranks per level

- **Archetype feature:** Skill Ranks per Level
- **Description:** 4 + Int modifier.
- **Mechanics:**
  - Mechanics summary: 4 + Int modifier.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the bonus feat gained at 1st level

- **Archetype feature:** Unobtrusive
- **Description:** A pack mule gains Bluff (Cha), Disguise (Cha), Sleight of Hand (Dex), and Stealth (Dex) as class skills.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: A pack mule gains Bluff (Cha), Disguise (Cha), Sleight of Hand (Dex), and Stealth (Dex) as class skills.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: bravery

- **Archetype feature:** Efficient Packer (Ex)
- **Description:** At 2nd level, a pack mule adds a bonus equal to 1/2 his fighter level on Sleight of Hand checks to conceal objects on his body.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a pack mule adds a bonus equal to 1/2 his fighter level on Sleight of Hand checks to conceal objects on his body. He also adds a bonus equal to 1/2 his class level to his Strength score for the purpose of determining his carrying capacity.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: armor training 1 through 4

- **Archetype feature:** Weight Training (Ex)
- **Description:** At 3rd level, a pack mule learns to be more maneuverable when carrying loads.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 15, 7.
  - Mechanics summary: At 3rd level, a pack mule learns to be more maneuverable when carrying loads. Whenever he is carrying a medium or heavy load, he reduces the check penalty by 1 (to a minimum of 0) and increases the maximum Dexterity bonus allowed by 1. At 7th, 11th, and 15th levels, these benefits increase by 1 (to a maximum of 4 at 15th level). In addition, a pack mule can move at his normal speed while carrying a medium load. At 7th level, a pack mule can move at his normal speed while carrying a heavy load.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty.

### Replaces: armor mastery

- **Archetype feature:** Healthy as a Mule (Ex)
- **Description:** At 19th level, whenever the pack mule takes Constitution, Dexterity, or Strength damage, he reduces the amount of ability damage taken by 2, to a minimum of 0.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, whenever the pack mule takes Constitution, Dexterity, or Strength damage, he reduces the amount of ability damage taken by 2, to a minimum of 0.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Skill Ranks per Level
- Unobtrusive
- Efficient Packer (Ex)
- Weight Training (Ex)
- Healthy as a Mule (Ex)

