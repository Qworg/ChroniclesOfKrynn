# Ranger - Code Runner

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Code Runner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Code%20Runner
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Mnemonic Genius (Ex); Resist Interrogation (Ex)
- **Replaced / altered class features:** wild empathy; hunter’s bond

## Implementation details

### Alters: the ranger’s class skills

- **Archetype feature:** Class Skills
- **Description:** A code runner adds Knowledge (local) and Linguistics to his list of class skills, instead of Handle Animal and Heal
- **Detailed mechanics:**
  - **Rules text to implement:** A code runner adds Knowledge (local) and Linguistics to his list of class skills, instead of Handle Animal and Heal
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: wild empathy

- **Archetype feature:** Mnemonic Genius (Ex)
- **Description:** A code runner learns to memorize and accurately recall information, even if he does not speak or understand the language in which the information was presented.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A code runner learns to memorize and accurately recall information, even if he does not speak or understand the language in which the information was presented. The code runner can spend 1 hour and attempt a DC 15 Linguistics check to memorize a single passage of up to 150 words of information in a language he speaks. For every 5 by which he exceeds the DC, he can memorize 150 additional words. The DC is increased by 10 if the message is encoded or in a language he doesn’t understand. A code runner can memorize one such message at any given time. If he fails to memorize a message, he can retry as many times as he wants, as long as he spends 1 hour each time. Once a message has been memorized, he can recall it with perfect accuracy until he memorizes a different message.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: hunter’s bond

- **Archetype feature:** Resist Interrogation (Ex)
- **Description:** At 4th level, a code runner gains a bonus equal to half his ranger level on saving throws against divination effects.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 11.
  - **Rules text to implement:** At 4th level, a code runner gains a bonus equal to half his ranger level on saving throws against divination effects. At 11th level, if he succeeds at a saving throw against a divination effect that would grant its caster knowledge or information, the caster is not aware that the saving throw was successful, and the code runner can attempt a Bluff check opposed by the caster’s Sense Motive check in order to send false information to the caster.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Class Skills
- Mnemonic Genius (Ex)
- Resist Interrogation (Ex)
