# Inquisitor - Umbral Stalker

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Umbral Stalker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Umbral%20Stalker
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Dark Descent (Su); Judgment; Swift and Silent (Ex); Deadly Efficiency (Ex)
- **Replaced / altered class features:** the justice judgment; stern gaze

## Replacement details

### Alters: the inquisitor’s class skills

- **Archetype feature:** Class Skills
- **Description:** An umbral stalker adds Acrobatics to her list of class skills, instead of Diplomacy.
- **Mechanics:**
  - Mechanics summary: An umbral stalker adds Acrobatics to her list of class skills, instead of Diplomacy.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: domain

- **Archetype feature:** Dark Descent (Su)
- **Description:** An umbral stalker gains the Darkness domain with the Night subdomain APG , even if her deity normally doesn’t offer it.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: An umbral stalker gains the Darkness domain with the Night subdomain APG , even if her deity normally doesn’t offer it.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Replaces: the justice judgment

- **Archetype feature:** Judgment
- **Description:** Umbral stalkers are most effective when they get the drop on an opponent.
- **Mechanics:**
  - Mechanics summary: Umbral stalkers are most effective when they get the drop on an opponent. An umbral stalker gains access to the following judgment. Stalking : The umbral stalker gains a +2 sacred bonus on attack rolls against creatures that are unaware of her presence (typically because she is invisible or using Stealth). This bonus increases by 2 for every 5 inquisitor levels she has.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Replaces: stern gaze

- **Archetype feature:** Swift and Silent (Ex)
- **Description:** Umbral stalkers often descend upon their prey with deadly grace and efficiency.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Umbral stalkers often descend upon their prey with deadly grace and efficiency. An umbral stalker gains a morale bonus on all Acrobatics and Stealth checks equal to half her inquisitor level (minimum +1).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Alters: exploit weakness

- **Archetype feature:** Deadly Efficiency (Ex)
- **Description:** At 14th level, an umbral stalker becomes even deadlier against enemies who haven’t yet noticed her in the shadows.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, an umbral stalker becomes even deadlier against enemies who haven’t yet noticed her in the shadows. Whenever she confirms a critical hit against a foe that is unaware of her presence, she ignores any damage reduction the target might have and adds her Wisdom bonus to her damage roll (this multiplies on the critical hit as normal); in addition, if the target has regeneration, the creature loses regeneration on the round following the critical hit and can die normally during... Finally, if the umbral stalker deals energy damage to a creature unaware of her presence with vulnerability to that energy type, she deals 2 extra points of damage per die rolled.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Class Skills
- Dark Descent (Su)
- Judgment
- Swift and Silent (Ex)
- Deadly Efficiency (Ex)

