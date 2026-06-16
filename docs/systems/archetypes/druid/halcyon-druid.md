# Druid - Halcyon Druid

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Halcyon Druid
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Halcyon%20Druid
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bonded Mask (Su); Magaambya-Trained (Ex); Peacekeeper (Ex); Spontaneous Casting; Natural Arcana (Su); Resist Fiendish Influence (Ex); Embody Mask (Sp)
- **Replaced / altered class features:** nature bond; nature sense and alters the druid’s class skills; wild empathy; spontaneous casting; wild shape; resist nature’s lure; a thousand faces

## Replacement details

### Replaces: nature bond

- **Archetype feature:** Bonded Mask (Su)
- **Description:** A halcyon druid forms a powerful bond with a mask, which functions identically to a wizard’s bonded object except that it can be used to cast druid spells (including those gained from class abilities) instead of wizard spells.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A halcyon druid forms a powerful bond with a mask, which functions identically to a wizard’s bonded object except that it can be used to cast druid spells (including those gained from class abilities) instead of wizard spells. A bonded mask must be worn to have an effect, and it occupies the head slot. A halcyon druid can enhance her mask with abilities appropriate for a head slot item, and can designate an existing head slot item as her bonded mask (but only if it covers her face).
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: nature sense

- **Archetype feature:** Magaambya-Trained (Ex)
- **Description:** A halcyon druid adds Diplomacy and all Knowledge skills to her list of class skills.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A halcyon druid adds Diplomacy and all Knowledge skills to her list of class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: alters the druid’s class skills

- **Archetype feature:** Magaambya-Trained (Ex)
- **Description:** A halcyon druid adds Diplomacy and all Knowledge skills to her list of class skills.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A halcyon druid adds Diplomacy and all Knowledge skills to her list of class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: wild empathy

- **Archetype feature:** Peacekeeper (Ex)
- **Description:** A halcyon druid adds half her class level (minimum 1) to Diplomacy and Knowledge (local) checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A halcyon druid adds half her class level (minimum 1) to Diplomacy and Knowledge (local) checks.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: spontaneous casting

- **Archetype feature:** Spontaneous Casting
- **Description:** A halcyon druid adds all spells from the Good cleric domain to her druid spell list, and she can focus stored spell energy into spells from the Good domain that she hasn’t prepared ahead of time.
- **Mechanics:**
  - Mechanics summary: A halcyon druid adds all spells from the Good cleric domain to her druid spell list, and she can focus stored spell energy into spells from the Good domain that she hasn’t prepared ahead of time. She can lose a prepared spell to cast any spell of the same level or lower from the Good domain.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook.

### Replaces: wild shape

- **Archetype feature:** Natural Arcana (Su)
- **Description:** At 4th level and every 2 levels thereafter, a halcyon druid chooses two spells from the wizard/sorcerer spell list and adds them to her druid spell list.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 1, 20.
  - Mechanics summary: At 4th level and every 2 levels thereafter, a halcyon druid chooses two spells from the wizard/sorcerer spell list and adds them to her druid spell list. The chosen spells must be at least 1 level lower than the highest level spell she can currently cast. At 20th level, the halcyon druid can choose wizard/sorcerer spells of any level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, wild shape hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Fiendish Influence (Ex)
- **Description:** At 4th level, a halcyon druid gains a +4 bonus on saving throws against the spell-like and supernatural abilities of outsiders with the evil subtype and spells with the evil descriptor.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a halcyon druid gains a +4 bonus on saving throws against the spell-like and supernatural abilities of outsiders with the evil subtype and spells with the evil descriptor.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: a thousand faces

- **Archetype feature:** Embody Mask (Sp)
- **Description:** At 13th level, a halcyon druid wearing her bonded mask can embody the spirit it represents, which can be any Tiny to Large agathion, angel, archon, or azata.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 13.
  - Mechanics summary: At 13th level, a halcyon druid wearing her bonded mask can embody the spirit it represents, which can be any Tiny to Large agathion, angel, archon, or azata. This ability requires a standard action to activate and functions as per beast shape IV (using the adjustments for magical beasts), but adds the following abilities if the assumed form has them: aura of menace, protective aura, speak with animals, telepathy, and truespeech. If the assumed form has immunity to a condition, the druid gains a +4 bonus on saving throws against effects that cause that condition. A halcyon druid can use this ability for a number of minutes per day equal to her druid level. The duration does not need to be consecutive, but must be used in 1-minute increments.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Bonded Mask (Su)
- Magaambya-Trained (Ex)
- Peacekeeper (Ex)
- Spontaneous Casting
- Natural Arcana (Su)
- Resist Fiendish Influence (Ex)
- Embody Mask (Sp)

