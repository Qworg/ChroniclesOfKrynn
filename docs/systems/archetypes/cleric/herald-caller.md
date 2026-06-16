# Cleric - Herald Caller

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Herald Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Herald%20Caller
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Skill Ranks per Level; Dedicated Summoner; Call Heralds (Su); Divine Heralds (Su); Mighty Heralds
- **Replaced / altered class features:** Class Skills; Domains; Armor Proficiencies;

## Replacement details

### Alters: the cleric’s class skills

- **Archetype feature:** Skill Ranks per Level
- **Description:** 4 + Int modifier.
- **Mechanics:**
  - Mechanics summary: 4 + Int modifier.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: the cleric’s domains

- **Archetype feature:** Dedicated Summoner
- **Description:** A herald caller depends on summoned allies to overcome her foes, which affords her little experience with the martial pursuits typical of other clerics and a narrower spiritual focus.
- **Mechanics:**
  - Mechanics summary: A herald caller depends on summoned allies to overcome her foes, which affords her little experience with the martial pursuits typical of other clerics and a narrower spiritual focus. A herald caller can choose only one domain from her deity’s list of domains, rather than the normal two domains, and she doesn’t gain proficiency with medium armor or shields.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Alters: armor proficiencies

- **Archetype feature:** Dedicated Summoner
- **Description:** A herald caller depends on summoned allies to overcome her foes, which affords her little experience with the martial pursuits typical of other clerics and a narrower spiritual focus.
- **Mechanics:**
  - Mechanics summary: A herald caller depends on summoned allies to overcome her foes, which affords her little experience with the martial pursuits typical of other clerics and a narrower spiritual focus. A herald caller can choose only one domain from her deity’s list of domains, rather than the normal two domains, and she doesn’t gain proficiency with medium armor or shields.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

## Parsed source feature headings

- Skill Ranks per Level
- Dedicated Summoner
- Call Heralds (Su)
- Divine Heralds (Su)
- Mighty Heralds

