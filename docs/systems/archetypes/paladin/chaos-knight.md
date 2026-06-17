# Paladin - Chaos Knight

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Chaos Knight
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Chaos%20Knight
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Entropic Touch (Su); Blessings of the Maelstrom (Su); Aura of Chaos (Su); D4; Blessing
- **Replaced / altered class features:** Lay on Hands; Mercy; Aura of Faith

## Implementation details

### Replaces: lay on hands

- **Archetype feature:** Entropic Touch (Su)
- **Description:** At 2nd level, a chaos knight can employ the forces of entropy with a touch to shatter a mind-affecting spell or effect currently affecting an ally.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a chaos knight can employ the forces of entropy with a touch to shatter a mind-affecting spell or effect currently affecting an ally. As a standard action, he can touch a creature to grant that creature a new saving throw against one mind-affecting effect, with a bonus on the save equal to one-third the chaos knight’s level (minimum +0). If the chaos knight targets himself, he can use this ability as a swift action. A chaos knight can use this ability a number of times per day equal to half his paladin level + his Charisma modifier.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: mercy

- **Archetype feature:** Blessings of the Maelstrom (Su)
- **Description:** At 3rd level, a chaos knight can harness the unpredictable essence of the Maelstrom to bless a creature.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 5.
  - **Rules text to implement:** At 3rd level, a chaos knight can harness the unpredictable essence of the Maelstrom to bless a creature. When he uses his entropic touch ability, the chaos knight can grant the touched creature a blessing from the table below that lasts for a number of rounds equal to 1 + the chaos knight’s Charisma modifier (minimum 1 round). Only one creature can have this blessing at a time. If another creature gains the blessing, the previous blessing ends. The creature rolls 1d4 and compares the result to the table below to determine the blessing. If the chaos knight targets himself with the blessing, he can roll twice and choose his preferred result. At 5th level and every 3 levels thereafter, the chaos knight can grant a blessing to one additional creature at a time.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of faith

- **Archetype feature:** Aura of Chaos (Su)
- **Description:** At 14th level, a chaos knight treats his weapons as chaos-aligned for the purposes of bypassing damage reduction.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a chaos knight treats his weapons as chaos-aligned for the purposes of bypassing damage reduction. In addition, the chaos knight treats attacks targeting enemies within 10 feet of him as chaos-aligned for the purpose of overcoming damage reduction.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Blessing
- **Description:** 1 The creature gains a sacred bonus to AC equal to 1/5 the paladin’s level (minimum +1).
- **Detailed mechanics:**
  - **Rules text to implement:** 1 The creature gains a sacred bonus to AC equal to 1/5 the paladin’s level (minimum +1). 2 The creature gains a sacred bonus on weapon damage rolls equal to the chaos knight’s Charisma modifier. 3 The creature gains fast healing 2. This fast healing increases by 1 for every 3 levels the chaos knight has. 4 The creature gains an enhancement bonus to its movement speeds, adding 5 feet of movement for every 2 levels the chaos knight has (to a maximum of +40 feet).
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Entropic Touch (Su)
- Blessings of the Maelstrom (Su)
- Aura of Chaos (Su)
- Blessing
