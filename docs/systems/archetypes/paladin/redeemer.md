# Paladin - Redeemer

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Redeemer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Redeemer
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Merciful Smite (Su); Monstrous Rapport (Ex); Pact of Peace (Sp); Aura of Mercy (Su); Associates
- **Replaced / altered class features:** detect evil

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Merciful Smite (Su)
- **Description:** At 1st level, when a redeemer chooses to smite a creature, she can have all of her attacks against the target deal nonlethal damage.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, when a redeemer chooses to smite a creature, she can have all of her attacks against the target deal nonlethal damage. She does not take the normal –4 attack roll penalty for using a lethal weapon to deal nonlethal damage. She cannot use this ability to deal nonlethal damage to outsiders with the evil subtype, evil-aligned dragons, or undead creatures (these creatures take lethal damage from her smite). This otherwise works like and replaces the standard paladin’s smite evil.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: detect evil

- **Archetype feature:** Monstrous Rapport (Ex)
- **Description:** At 1st level, redeemers gain a +2 bonus on Diplomacy checks to influence creatures who are commonly considered monstrous.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, redeemers gain a +2 bonus on Diplomacy checks to influence creatures who are commonly considered monstrous. This includes but is not limited to "monstrous" races such as goblins and orcs, monstrous humanoids, and other intelligent non-humanoid monsters.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of resolve

- **Archetype feature:** Pact of Peace (Sp)
- **Description:** At 8th level, a redeemer can force a defeated creature to accept a binding pact of peace as a condition of its surrender, as if using lesser geas.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a redeemer can force a defeated creature to accept a binding pact of peace as a condition of its surrender, as if using lesser geas. Her caster level for this ability is equal to her paladin level. Rather than assigning a mission or task, the redeemer gives the creature a simple set of prohibitions to protect others. Example geas include "Leave this city and do not return" or "Do not attack caravans." The prohibition must be against an area no larger than 300 square miles or one specific group of people (such as a tribe or citizens of a particular city). This ability lasts 1 month per paladin level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of justice

- **Archetype feature:** Aura of Mercy (Su)
- **Description:** At 11th level, a redeemer can expend two uses of her merciful smite ability to grant the merciful smite ability to all allies within 10 feet, using her bonuses.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a redeemer can expend two uses of her merciful smite ability to grant the merciful smite ability to all allies within 10 feet, using her bonuses. Allies must use this merciful smite ability by the start of the paladin’s next turn and the bonuses last for 1 minute. Using this ability is a free action. Evil creatures gain no benefit from this ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Associates
- **Description:** A redeemer may ally with an evil creature as long as she feels the creature is capable of redemption.
- **Detailed mechanics:**
  - **Rules text to implement:** A redeemer may ally with an evil creature as long as she feels the creature is capable of redemption. A redeemer may accept henchmen, followers, or cohorts who are not lawful good provided they demonstrate they are willing to follow her and seek betterment under her tutelage.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Merciful Smite (Su)
- Monstrous Rapport (Ex)
- Pact of Peace (Sp)
- Aura of Mercy (Su)
- Associates
