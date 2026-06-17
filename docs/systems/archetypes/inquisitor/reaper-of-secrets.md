# Inquisitor - Reaper of Secrets

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Reaper of Secrets
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Reaper%20of%20Secrets
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bound by Secrecy (Ex); Deceitful Lore (Ex); Soul-Piercing Gaze (Su); Mind-Game Tactics (Su)
- **Replaced / altered class features:** monster lore; stern gaze; solo tactics

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bound by Secrecy (Ex)
- **Description:** A reaper of secrets must choose Norgorber as her deity.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A reaper of secrets must choose Norgorber as her deity. If she ever changes her deity, she loses this archetype and becomes a normal inquisitor.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: monster lore

- **Archetype feature:** Deceitful Lore (Ex)
- **Description:** At 1st level, a reaper of secrets adds her Wisdom modifier on Bluff and Disguise skill checks in addition to her Charisma modifier.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a reaper of secrets adds her Wisdom modifier on Bluff and Disguise skill checks in addition to her Charisma modifier.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: stern gaze

- **Archetype feature:** Soul-Piercing Gaze (Su)
- **Description:** At 1st level, as a swift action, a reaper of secrets can focus on a single creature she can see.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, as a swift action, a reaper of secrets can focus on a single creature she can see. She then gains an insight bonus on Perception and Sense Motive checks against that creature equal to 1/2 her level (minimum +1). The effect ends if she focuses on a new target.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: solo tactics

- **Archetype feature:** Mind-Game Tactics (Su)
- **Description:** At 3rd level, a reaper of secrets can read other creatures so well she can use their reactions to gain a tactical advantage.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a reaper of secrets can read other creatures so well she can use their reactions to gain a tactical advantage. She treats any creature targeted by her soul-piercing gaze as if it were her ally and possessed the same teamwork feats as she does for the purposes of positioning and threatening when she determines whether she receives a benefit from her teamwork feats. She cannot use this ability to benefit from any teamwork feats that require particular actions from allies, such as Swap Places APG. For example, a reaper of secrets with the Precise Strike APG feat gains the bonus from that feat if she and the target of her soul-piercing gaze occupy flanking positions relative to the creature she attacks.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Bound by Secrecy (Ex)
- Deceitful Lore (Ex)
- Soul-Piercing Gaze (Su)
- Mind-Game Tactics (Su)
