# Inquisitor - Sworn of the Eldest

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Sworn of the Eldest
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Sworn%20of%20the%20Eldest
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Whimsical Worship (Ex); Deity; Disarming Discernment (Ex); Feytongue (Ex); Feywatcher (Ex); Magic of the Eldest
- **Replaced / altered class features:** Deity; Domain; Monster Lore; Stern Gaze; Solo Tactics; Teamwork Feats

## Replacement details

### Alters: domain

- **Archetype feature:** Deity
- **Description:** A sworn of the Eldest must select one of the Eldest as a deity and must select a domain or subdomain of that Eldest for her domain ability; she cannot be devoted to an ideal or philosophy.
- **Mechanics:**
  - Mechanics summary: A sworn of the Eldest must select one of the Eldest as a deity and must select a domain or subdomain of that Eldest for her domain ability; she cannot be devoted to an ideal or philosophy.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Replaces: monster lore

- **Archetype feature:** Disarming Discernment (Ex)
- **Description:** A sworn of the Eldest adds her Charisma modifier on Sense Motive skill checks, in addition to her Wisdom modifier.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A sworn of the Eldest adds her Charisma modifier on Sense Motive skill checks, in addition to her Wisdom modifier.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: stern gaze

- **Archetype feature:** Feytongue (Ex)
- **Description:** A sworn of the Eldest receives a morale bonus equal to half her inquisitor level (minimum +1) on Bluff and Diplomacy checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A sworn of the Eldest receives a morale bonus equal to half her inquisitor level (minimum +1) on Bluff and Diplomacy checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: solo tactics

- **Archetype feature:** Feywatcher (Ex)
- **Description:** Resistant to the tricky ways of other fey, a sworn of the Eldest gains the resist nature’s lure druid class feature .
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Resistant to the tricky ways of other fey, a sworn of the Eldest gains the resist nature’s lure druid class feature .
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: all teamwork feats

- **Archetype feature:** Magic of the Eldest
- **Description:** At 3rd level and every 3 levels thereafter, a sworn of the Eldest gains a bonus spell slot of the highest spell level she can cast, and she learns the corresponding spell listed for her domain as a bonus spell known.
- **Mechanics:**
  - Level hooks: 3.
  - Mechanics summary: At 3rd level and every 3 levels thereafter, a sworn of the Eldest gains a bonus spell slot of the highest spell level she can cast, and she learns the corresponding spell listed for her domain as a bonus spell known. She can use this bonus spell slot only to cast the domain spell of that level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, cleric domain hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Deity

## Parsed source feature headings

- Whimsical Worship (Ex)
- Deity
- Disarming Discernment (Ex)
- Feytongue (Ex)
- Feywatcher (Ex)
- Magic of the Eldest

