# Inquisitor - Expulsionist

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Expulsionist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Expulsionist
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Expel Spirit (Su); Expulsionist Lore (Ex); Spirit Sleuth (Ex)
- **Replaced / altered class features:** domain; monster lore; discern lies

## Replacement details

### Replaces: domain

- **Archetype feature:** Expel Spirit (Su)
- **Description:** At 1st level, an expulsionist receives Alignment Channel and Turn Undead as bonus feats.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 8.
  - Mechanics summary: At 1st level, an expulsionist receives Alignment Channel and Turn Undead as bonus feats. She can channel energy a number of times per day equal to 3 + her Charisma modifier as per a cleric with an effective level equal to her inquisitor level, but only to harm or turn evil outsiders or undead (treating all evil outsiders as undead creatures for the purpose of determining whether they can be affected by Turn Undead). She can take other feats that add to this ability, such as Extra Channel or Improved Channel, but not other feats that fundamentally alter this ability, such as Elemental Channel, and she cannot select Alignment Channel multiple times. The DC to save against this ability is equal to 10 + 1/2 the expulsionist’s inquisitor level + her Charisma modifier. At 8th level, an expulsionist can expend one use of her channel energy ability to attempt to force a possessing creature from its host body. The expulsionist must make a melee touch attack against the possessed creature; if successful, the expulsionist deals damage to the possessing creature as if it were targeted by the expulsionist’s channel energy ability (regardless of the possessing creature’s creature type), and the possession effect ceases as the possessing creature is ejected from the host body.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, save DC calculation, cleric domain hook.

### Replaces: monster lore

- **Archetype feature:** Expulsionist Lore (Ex)
- **Description:** At 1st level, an expulsionist gains a bonus equal to 1/2 her inquisitor level (minimum +1) on skill checks to notice haunts and incorporeal creatures; on Knowledge (religion) checks to identify the abilities and weaknesses of haunts and incorporeal creatures; and on Sense Motive checks to determine whether a creature is possessed, under the effects of an enchantment or cur...
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, an expulsionist gains a bonus equal to 1/2 her inquisitor level (minimum +1) on skill checks to notice haunts and incorporeal creatures; on Knowledge (religion) checks to identify the abilities and weaknesses of haunts and incorporeal creatures; and on Sense Motive checks to determine whether a creature is possessed, under the effects of an enchantment or cur...
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.
  - Needs implementation review: haunt rules.

### Replaces: discern lies

- **Archetype feature:** Spirit Sleuth (Ex)
- **Description:** At 5th level, upon interacting with a rejuvenating undead (such as a ghost) or haunt for the first time (such as by attacking the ghost or channeling energy to damage the haunt), an expulsionist can attempt a Sense Motive check as a free action to determine the specific course of action required to permanently neutralize the spirit of haunt (DC = 20 + the target’s CR).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, upon interacting with a rejuvenating undead (such as a ghost) or haunt for the first time (such as by attacking the ghost or channeling energy to damage the haunt), an expulsionist can attempt a Sense Motive check as a free action to determine the specific course of action required to permanently neutralize the spirit of haunt (DC = 20 + the target’s CR).
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, ki/monk hook.
  - Needs implementation review: haunt rules.

## Parsed source feature headings

- Expel Spirit (Su)
- Expulsionist Lore (Ex)
- Spirit Sleuth (Ex)

