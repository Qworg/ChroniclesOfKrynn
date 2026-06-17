# Paladin - Tranquil Guardian

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Tranquil Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Tranquil%20Guardian
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Touch of Serenity (Su); Serene Strike (Su); Divine Bond (Su); Aura of Calm (Su); Waves of Peace (Su); Apostle of Peace (Su)
- **Replaced / altered class features:** smite evil; aura of courage; aura of resolve; aura of justice; holy champion

## Implementation details

### Replaces: smite evil

- **Archetype feature:** Touch of Serenity (Su)
- **Description:** At 1st level, a tranquil guardian gains Touch of Serenity as a bonus feat, even if she does not meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 6.
  - **Rules text to implement:** At 1st level, a tranquil guardian gains Touch of Serenity as a bonus feat, even if she does not meet the prerequisites. At 6th level, and every six levels thereafter, the duration of a tranquil guardian’s Touch of Serenity increases by 1 round. Each round on its turn, the target may attempt a new Will save to end the effect. The duration does not stack; only the longest remaining duration applies.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of courage

- **Archetype feature:** Serene Strike (Su)
- **Description:** At 3rd level, when a tranquil guardian confirms a critical hit, she may convert all damage from her attack to nonlethal damage, and when she does, she can activate Touch of Serenity through her weapon or unarmed strike.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, when a tranquil guardian confirms a critical hit, she may convert all damage from her attack to nonlethal damage, and when she does, she can activate Touch of Serenity through her weapon or unarmed strike. Using serene strike is a free action.
- **Implementation flags:**
  - rage/rage power subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Divine Bond (Su)
- **Description:** A tranquil guardian who chooses a weapon as her divine bond may only increase her weapon’s enhancement bonus or add the following properties to her weapon: conductive, defending, disruptive, grayflame, or merciful.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A tranquil guardian who chooses a weapon as her divine bond may only increase her weapon’s enhancement bonus or add the following properties to her weapon: conductive, defending, disruptive, grayflame, or merciful.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of resolve

- **Archetype feature:** Aura of Calm (Su)
- **Description:** At 8th level, a tranquil guardian is immune to all spells and spell-like abilities with the emotion descriptor, as well as all fear effects.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a tranquil guardian is immune to all spells and spell-like abilities with the emotion descriptor, as well as all fear effects. Each ally within 10 feet of her gains a +4 morale bonus on saving throws against these effects. This ability functions only while the tranquil guardian is conscious, not if she is unconscious or dead.
- **Implementation flags:**
  - spell-like ability support.

### Replaces: aura of justice

- **Archetype feature:** Waves of Peace (Su)
- **Description:** At 11th level, a tranquil guardian may expend 2 uses of her Touch of Serenity to affect each opponent within 5 feet of her with that effect.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a tranquil guardian may expend 2 uses of her Touch of Serenity to affect each opponent within 5 feet of her with that effect. She does not need to touch the creature for the effect to take hold.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: holy champion

- **Archetype feature:** Apostle of Peace (Su)
- **Description:** At 20th level, a tranquil guardian’s DR increases to 10/evil, and whenever she channels positive energy or uses lay on hands to heal, she heals the maximum possible amount.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a tranquil guardian’s DR increases to 10/evil, and whenever she channels positive energy or uses lay on hands to heal, she heals the maximum possible amount. In addition, any creature struck by her Touch of Serenity, even if it saves, must make an additional Will save (DC 10 + 1/2 her tranquil guardian level + her Charisma modifier) the next time it tries to attack. If it fails this save, the attack (including spells or special abilities) automatically fails.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Touch of Serenity (Su)
- Serene Strike (Su)
- Divine Bond (Su)
- Aura of Calm (Su)
- Waves of Peace (Su)
- Apostle of Peace (Su)
