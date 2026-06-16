# Alchemist - Ectochymist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Ectochymist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Ectochymist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Ectoplasmic Blanche (Su); Cool-Headed (Ex); Advanced Ectochymistry (Su); Swift Ectochymistry (Su); Ghost Trap (Su); Ectochymical Analysis (Sp); Discoveries
- **Replaced / altered class features:** bombs; poison resistance; poison use; swift poisoning; the 8th-level alchemist discovery; poison immunity

## Replacement details

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** An ectochymist adds Knowledge (religion) to his list of class skills.
- **Mechanics:**
  - Mechanics summary: An ectochymist adds Knowledge (religion) to his list of class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: bombs

- **Archetype feature:** Ectoplasmic Blanche (Su)
- **Description:** An ectochymist can alchemically treat a melee weapon so that it deals full damage to incorporeal creatures.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: An ectochymist can alchemically treat a melee weapon so that it deals full damage to incorporeal creatures. The process requires a full-round action and lasts until the next time that weapon is used to make an attack. An ectochymist can use this ability a number of times per day equal to his alchemist level + his Intelligence modifier.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook.

### Replaces: poison resistance

- **Archetype feature:** Cool-Headed (Ex)
- **Description:** At 2nd level, an ectochymist gains a +2 bonus on saves against death, fear, and negative energy effects.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 5, 8.
  - Mechanics summary: At 2nd level, an ectochymist gains a +2 bonus on saves against death, fear, and negative energy effects. This bonus increases to +4 at 5th level, and to +6 at 8th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook.

### Replaces: poison use

- **Archetype feature:** Advanced Ectochymistry (Su)
- **Description:** At 2nd level, a weapon coated in an ectochymist’s ectoplasmic blanche also deals full damage to haunts.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a weapon coated in an ectochymist’s ectoplasmic blanche also deals full damage to haunts.
- **Implementation flags:**
  - Needs implementation review: haunt rules.

### Replaces: swift poisoning

- **Archetype feature:** Swift Ectochymistry (Su)
- **Description:** At 6th level, an ectochymist can use ectoplasmic blanche on one of his own weapons as a swift action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, an ectochymist can use ectoplasmic blanche on one of his own weapons as a swift action. When coated on a weapon wielded by the ectochymist, ectoplasmic blanche lasts for a number of attacks equal to the ectochymist’s Intelligence modifier (minimum 1 attack).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the 8th-level alchemist discovery

- **Archetype feature:** Ghost Trap (Su)
- **Description:** At 8th level, an ectochymist can throw a trap to capture an incorporeal creature of up to 1 Hit Die per alchemist level he possesses.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, an ectochymist can throw a trap to capture an incorporeal creature of up to 1 Hit Die per alchemist level he possesses. As a standard action, the ectochymist can expend a use of ectoplasmic blanche to coat the inside of a container with his blanche and throw it at an incorporeal creature as a ranged touch attack. If he hits, the creature receives a Will save to escape the trap (DC = 10 + 1/2 his alchemist level + his Intelligence modifier). If the creature fails its save, it is sealed within the vessel until someone breaks or opens that vessel.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, alchemist discovery hook.

### Replaces: poison immunity

- **Archetype feature:** Ectochymical Analysis (Sp)
- **Description:** At 10th level, an ectochymist can use alchemical processes to uncover esoteric knowledge from a haunted area that would normally require divinations to ascertain.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, an ectochymist can use alchemical processes to uncover esoteric knowledge from a haunted area that would normally require divinations to ascertain. This process takes 10 minutes and expends one use of ectoplasmic blanche. Treat this effect as speak with haunt with a saving throw DC equal to 10 + 1/2 the ectochymist’s class level + the ectochymist’s Charisma modifier and a caster level equal to the ectochymist’s class level. Because the ectochymist is performing an analysis to answer his questions and not speaking with the haunt directly, he uses Craft (alchemy) rather than Sense Motive to oppose any Bluff checks the spirit might attempt in order to mislead him.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, ki/monk hook.
  - Needs implementation review: haunt rules.

## Parsed source feature headings

- Class Skills
- Ectoplasmic Blanche (Su)
- Cool-Headed (Ex)
- Advanced Ectochymistry (Su)
- Swift Ectochymistry (Su)
- Ghost Trap (Su)
- Ectochymical Analysis (Sp)
- Discoveries

