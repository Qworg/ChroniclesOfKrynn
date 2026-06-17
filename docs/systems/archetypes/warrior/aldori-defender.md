# Warrior - Aldori Defender

- **Class:** Warrior
- **Pathfinder source class:** Fighter
- **Archetype:** Aldori Defender
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Fighter%20Aldori%20Defender
- **Index:** docs/systems/archetypes/warrior.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Suggested Feats; Defensive Parry (Ex); Disarming Strike (Ex); Steel Net (Ex); Counterattack (Ex)
- **Replaced / altered class features:** armor training; the bonus feat the fighter would normally gain at 6th level; the bonus feat the fighter would normally gain at 8th level; the bonus feat the fighter would normally gain at 10th level

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Suggested Feats
- **Description:** Although this archetype replaces some of the bonus feats that a fighter would normally have access to, Aldori defenders still have several opportunities to gain feats.
- **Detailed mechanics:**
  - **Rules text to implement:** Although this archetype replaces some of the bonus feats that a fighter would normally have access to, Aldori defenders still have several opportunities to gain feats. The following feats are the most thematically appropriate for an Aldori defender, but the archetype does not require any of them: Aldori Dueling Mastery (see page 24), Combat Expertise, Dazzling Display, Exotic Weapon Proficiency (Aldori dueling sword), Improved Disarm, Improved Feint, Improved Initiative, Lunge, Quick Draw, Weapon Finesse, Weapon Focus (Aldori dueling sword), Weapon Specialization (Aldori dueling sword).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: armor training

- **Archetype feature:** Defensive Parry (Ex)
- **Description:** At 3rd level, when an Aldori defender makes a full attack with an Aldori dueling sword, he gains a +1 shield bonus to his AC against melee attacks until the beginning of his next turn.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 7, 11, 15.
  - **Rules text to implement:** At 3rd level, when an Aldori defender makes a full attack with an Aldori dueling sword, he gains a +1 shield bonus to his AC against melee attacks until the beginning of his next turn. This bonus increases to +2 at 7th level, +3 at 11th level, and +4 at 15th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the bonus feat the fighter would normally gain at 6th level

- **Archetype feature:** Disarming Strike (Ex)
- **Description:** At 6th level, when an Aldori defender successfully disarms an opponent using an Aldori dueling sword, he also deals normal damage to the target, but without the normal Strength bonus to damage.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, when an Aldori defender successfully disarms an opponent using an Aldori dueling sword, he also deals normal damage to the target, but without the normal Strength bonus to damage.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the bonus feat the fighter would normally gain at 8th level

- **Archetype feature:** Steel Net (Ex)
- **Description:** At 8th level, an Aldori defender can create a blazing wall of steel to defend himself.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, an Aldori defender can create a blazing wall of steel to defend himself. When fighting defensively as a full-round action with an Aldori dueling sword, the Aldori defender’s penalties on all attacks in a round are reduced by 2, and his dodge bonus to AC increases by 2 for the same round.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: the bonus feat the fighter would normally gain at 10th level

- **Archetype feature:** Counterattack (Ex)
- **Description:** At 10th level, once per round, an Aldori defender can make an attack of opportunity against an opponent who hits him with a melee attack (regardless of how many attacks of opportunity the Aldori defender can otherwise make), so long as the attacking creature is within the his reach.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, once per round, an Aldori defender can make an attack of opportunity against an opponent who hits him with a melee attack (regardless of how many attacks of opportunity the Aldori defender can otherwise make), so long as the attacking creature is within the his reach.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Suggested Feats
- Defensive Parry (Ex)
- Disarming Strike (Ex)
- Steel Net (Ex)
- Counterattack (Ex)
