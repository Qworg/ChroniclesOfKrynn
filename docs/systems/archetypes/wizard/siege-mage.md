# Wizard - Siege Mage

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Siege Mage
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Siege%20Mage
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Siege Engineer; Siege Engine Bond (Su); Empower Siege Engine (Su); Siege School
- **Replaced / altered class features:** scribe scroll; arcane bond; cantrips, but the siege mage gains the detect magic and read magic cantrips and places them in his spellbook; arcane school

## Replacement details

### Replaces: scribe scroll

- **Archetype feature:** Siege Engineer
- **Description:** At 1st level, the siege mage gains Siege Engineer as a bonus feat, even though he does not meet the prerequisites for that feat.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the siege mage gains Siege Engineer as a bonus feat, even though he does not meet the prerequisites for that feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.
  - Needs implementation review: siege engines.

### Replaces: arcane bond

- **Archetype feature:** Siege Engine Bond (Su)
- **Description:** At 1st level, a siege mage can bond with a single siege engine within 30 feet and line of sight as a standard action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 10.
  - Mechanics summary: At 1st level, a siege mage can bond with a single siege engine within 30 feet and line of sight as a standard action. He can utilize the power of this link to aim and fire the siege engine remotely (as long as he’s within 30 feet), though it still requires a crew to reload the siege engine. At 10th level, he can reload, aim, and fire the siege engine purely by the power of this link, and no longer needs a crew to control the siege engine. It still takes the normal required amount of time and actions to control a siege engine in this manner. The siege mage can end this bond with a free action. A siege mage can bond with a siege engine in this manner a number of times per day equal to his Intelligence modifier (minimum 1) but can only be bonded with one siege engine at a time.
- **Implementation flags:**
  - Needs implementation review: siege engines.

### Replaces: cantrips, but the siege mage gains the detect magic and read magic cantrips and places them in his spellbook

- **Archetype feature:** Empower Siege Engine (Su)
- **Description:** As a swift action, a siege mage can sacrifice one of his spells to empower the next attack he makes before the end of his turn with a siege engine he is bonded with.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: As a swift action, a siege mage can sacrifice one of his spells to empower the next attack he makes before the end of his turn with a siege engine he is bonded with. When he does, the siege engine attack gains a bonus on its attack roll or targeting roll equal to the level of the spell he sacrificed, and a bonus to damage equal to 3 × the level of the spell. He can cast either of these as 1st-level spells.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.
  - Needs implementation review: siege engines.

### Replaces: arcane school

- **Archetype feature:** Siege School
- **Description:** The strange rituals needed to empower all forms of siege engines takes a level of dedication and perseverance that limits a wizard’s time to unlock other arcane mysteries.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: The strange rituals needed to empower all forms of siege engines takes a level of dedication and perseverance that limits a wizard’s time to unlock other arcane mysteries. At 1st level, the siege mage forsakes three schools of magic. Once chosen, these opposition schools cannot be changed. A siege mage who prepares spells from his opposition school must use two spell slots of that level to prepare the spell. In addition, the siege mage takes a –4 penalty on any skill checks made when crafting a magic item that has a spell from one of his opposition schools.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, numeric penalty, spellcasting/spell-list hook, ki/monk hook.
  - Needs implementation review: siege engines.

## Parsed source feature headings

- Siege Engineer
- Siege Engine Bond (Su)
- Empower Siege Engine (Su)
- Siege School

