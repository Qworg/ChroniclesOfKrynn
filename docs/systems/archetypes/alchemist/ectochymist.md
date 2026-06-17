# Alchemist - Ectochymist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Ectochymist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Ectochymist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Ectoplasmic Blanche (Su); Cool-Headed (Ex); Advanced Ectochymistry (Su); Swift Ectochymistry (Su); Ghost Trap (Su); Ectochymical Analysis (Sp); Discoveries
- **Replaced / altered class features:** bombs; poison resistance; poison use; swift poisoning; the 8th-level alchemist discovery; poison immunity

## Implementation details

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** An ectochymist adds Knowledge (religion) to his list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** An ectochymist adds Knowledge (religion) to his list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: bombs

- **Archetype feature:** Ectoplasmic Blanche (Su)
- **Description:** An ectochymist can alchemically treat a melee weapon so that it deals full damage to incorporeal creatures.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** An ectochymist can alchemically treat a melee weapon so that it deals full damage to incorporeal creatures. The process requires a full-round action and lasts until the next time that weapon is used to make an attack. An ectochymist can use this ability a number of times per day equal to his alchemist level + his Intelligence modifier.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: poison resistance

- **Archetype feature:** Cool-Headed (Ex)
- **Description:** At 2nd level, an ectochymist gains a +2 bonus on saves against death, fear, and negative energy effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 5, 8.
  - **Rules text to implement:** At 2nd level, an ectochymist gains a +2 bonus on saves against death, fear, and negative energy effects. This bonus increases to +4 at 5th level, and to +6 at 8th level.
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison use

- **Archetype feature:** Advanced Ectochymistry (Su)
- **Description:** At 2nd level, a weapon coated in an ectochymist’s ectoplasmic blanche also deals full damage to haunts.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a weapon coated in an ectochymist’s ectoplasmic blanche also deals full damage to haunts.
- **Implementation flags:**
  - haunt subsystem.
  - poison subsystem.

### Replaces: swift poisoning

- **Archetype feature:** Swift Ectochymistry (Su)
- **Description:** At 6th level, an ectochymist can use ectoplasmic blanche on one of his own weapons as a swift action.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, an ectochymist can use ectoplasmic blanche on one of his own weapons as a swift action. When coated on a weapon wielded by the ectochymist, ectoplasmic blanche lasts for a number of attacks equal to the ectochymist’s Intelligence modifier (minimum 1 attack).
- **Implementation flags:**
  - poison subsystem.

### Replaces: the 8th-level alchemist discovery

- **Archetype feature:** Ghost Trap (Su)
- **Description:** At 8th level, an ectochymist can throw a trap to capture an incorporeal creature of up to 1 Hit Die per alchemist level he possesses.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, an ectochymist can throw a trap to capture an incorporeal creature of up to 1 Hit Die per alchemist level he possesses. As a standard action, the ectochymist can expend a use of ectoplasmic blanche to coat the inside of a container with his blanche and throw it at an incorporeal creature as a ranged touch attack. If he hits, the creature receives a Will save to escape the trap (DC = 10 + 1/2 his alchemist level + his Intelligence modifier). If the creature fails its save, it is sealed within the vessel until someone breaks or opens that vessel. The ghost trap automatically survives being thrown at the incorporeal creature, but otherwise is only as durable as the vessel (normally hardness 5, 1 hp for a glass bottle).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: poison immunity

- **Archetype feature:** Ectochymical Analysis (Sp)
- **Description:** At 10th level, an ectochymist can use alchemical processes to uncover esoteric knowledge from a haunted area that would normally require divinations to ascertain.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, an ectochymist can use alchemical processes to uncover esoteric knowledge from a haunted area that would normally require divinations to ascertain. This process takes 10 minutes and expends one use of ectoplasmic blanche. Treat this effect as speak with haunt with a saving throw DC equal to 10 + 1/2 the ectochymist’s class level + the ectochymist’s Charisma modifier and a caster level equal to the ectochymist’s class level. Because the ectochymist is performing an analysis to answer his questions and not speaking with the haunt directly, he uses Craft (alchemy) rather than Sense Motive to oppose any Bluff checks the spirit might attempt in order to mislead him.
- **Implementation flags:**
  - ki subsystem.
  - haunt subsystem.
  - poison subsystem.
  - crafting subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the ectochymist archetype: alchemical simulacrum, cognatogen, grand cognatogen, greater alchemical simulacrum, and mummification.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the ectochymist archetype: alchemical simulacrum, cognatogen, grand cognatogen, greater alchemical simulacrum, and mummification.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Ectoplasmic Blanche (Su)
- Cool-Headed (Ex)
- Advanced Ectochymistry (Su)
- Swift Ectochymistry (Su)
- Ghost Trap (Su)
- Ectochymical Analysis (Sp)
- Discoveries
