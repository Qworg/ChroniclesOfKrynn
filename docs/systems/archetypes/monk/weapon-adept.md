# Monk - Weapon Adept

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Weapon Adept
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Weapon%20Adept
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Perfect Strike (Ex); Way of the Weapon Master (Ex); Evasion (Ex); Uncanny Initiative (Ex); Pure Power
- **Replaced / altered class features:** Stunning Fist; evasion; improved evasion; timeless body; perfect self

## Replacement details

### Replaces: Stunning Fist

- **Archetype feature:** Perfect Strike (Ex)
- **Description:** At 1st level, a weapon adept gains Perfect Strike as a bonus feat, even if he does not meet the prerequisites.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 10.
  - Mechanics summary: At 1st level, a weapon adept gains Perfect Strike as a bonus feat, even if he does not meet the prerequisites. At 10th level, the monk can roll his attack roll three times and take the higher result. If one of these rolls is a critical threat, he can choose which one of his other two rolls to use as his confirmation roll.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: evasion

- **Archetype feature:** Way of the Weapon Master (Ex)
- **Description:** At 2nd level, a weapon adept gains Weapon Focus as a bonus feat with one of his monk weapons.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 6.
  - Mechanics summary: At 2nd level, a weapon adept gains Weapon Focus as a bonus feat with one of his monk weapons. At 6th level, the monk gains Weapon Specialization with the same weapon as a bonus feat, even if he does not meet the prerequisites.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: improved evasion

- **Archetype feature:** Evasion (Ex)
- **Description:** At 9th level, the monk gains evasion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, the monk gains evasion.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: timeless body

- **Archetype feature:** Uncanny Initiative (Ex)
- **Description:** At 17th level, a weapon adept does not need to roll for initiative.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 17.
  - Mechanics summary: At 17th level, a weapon adept does not need to roll for initiative. He always treats his initiative roll as if it resulted in any number of his choosing (from 1 to 20).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: perfect self

- **Archetype feature:** Pure Power
- **Description:** At 20th level, a weapon adept forsakes the ideals of the perfect self to become a bastion of the physical and mental virtues monks hold dear.
- **Mechanics:**
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a weapon adept forsakes the ideals of the perfect self to become a bastion of the physical and mental virtues monks hold dear. The monk gains a +2 bonus to Strength, Dexterity, and Wisdom.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Perfect Strike (Ex)
- Way of the Weapon Master (Ex)
- Evasion (Ex)
- Uncanny Initiative (Ex)
- Pure Power

