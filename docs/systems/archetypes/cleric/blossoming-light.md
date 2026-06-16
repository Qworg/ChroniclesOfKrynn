# Cleric - Blossoming Light

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Blossoming Light
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Blossoming%20Light
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Promise of Faith; Promise of Purity; Luminous Font (Su)
- **Replaced / altered class features:** Armor Proficiency; Alignment; Channel Energy; Domains

## Replacement details

### Alters: the cleric’s armor proficiencies

- **Archetype feature:** Promise of Faith
- **Description:** A blossoming light vows to trust in her deity’s protection over arms and armor.
- **Mechanics:**
  - Mechanics summary: A blossoming light vows to trust in her deity’s protection over arms and armor. She is not proficient with any armor or shields. The blossoming light cannot use or benefit from any of her class features (including spellcasting) while wearing armor or using a shield, or for 1 minute thereafter.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

### Alters: the cleric’s alignment

- **Archetype feature:** Promise of Purity
- **Description:** A blossoming light must be truly pure of heart.
- **Mechanics:**
  - Mechanics summary: A blossoming light must be truly pure of heart. She must be good-aligned and worship a nonevil deity. If the blossoming light willfully commits an evil act, she loses all class features (including spellcasting) until she atones.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

### Alters: channel energy

- **Archetype feature:** Luminous Font (Su)
- **Description:** A blossoming light forsakes her deity’s deeper mysteries to focus on benevolence, healing, and bringing light to darkness.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 3, 7, 10.
  - Mechanics summary: A blossoming light forsakes her deity’s deeper mysteries to focus on benevolence, healing, and bringing light to darkness. A blossoming light still selects domains and retains access to domain powers, but does not gain domain spell slots. A blossoming light adds half her level on Diplomacy checks against good creatures or to convince an evil creature to take an action against its evil nature. A blossoming light’s channel energy is usable a number of times per day equal to 5 + her Charisma modifier. At 2nd level and every 2 levels thereafter, the blossoming light gains an additional use per day of channel energy. At 3rd level, when a blossoming light channels energy to harm undead, her channeled energy also harms chaotic evil outsiders, worshipers of chaotic evil deities, and evil creatures with light sensitivity or light blindness as if they were undead.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook.

### Alters: the cleric’s domains

- **Archetype feature:** Luminous Font (Su)
- **Description:** A blossoming light forsakes her deity’s deeper mysteries to focus on benevolence, healing, and bringing light to darkness.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 3, 7, 10.
  - Mechanics summary: A blossoming light forsakes her deity’s deeper mysteries to focus on benevolence, healing, and bringing light to darkness. A blossoming light still selects domains and retains access to domain powers, but does not gain domain spell slots. A blossoming light adds half her level on Diplomacy checks against good creatures or to convince an evil creature to take an action against its evil nature. A blossoming light’s channel energy is usable a number of times per day equal to 5 + her Charisma modifier. At 2nd level and every 2 levels thereafter, the blossoming light gains an additional use per day of channel energy. At 3rd level, when a blossoming light channels energy to harm undead, her channeled energy also harms chaotic evil outsiders, worshipers of chaotic evil deities, and evil creatures with light sensitivity or light blindness as if they were undead.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Armor Proficiency

## Parsed source feature headings

- Promise of Faith
- Promise of Purity
- Luminous Font (Su)

