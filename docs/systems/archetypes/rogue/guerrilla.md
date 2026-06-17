# Rogue - Guerrilla

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Guerrilla
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Guerrilla
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skilled Liar (Ex); Cover of Night (Ex); Secret Messenger (Ex); Guerrilla Sniping (Ex); Uncanny Dodge (Ex); Rogue Talents; Advanced Rogue Talents
- **Replaced / altered class features:** trapfinding; evasion; trap sense; uncanny dodge; improved uncanny dodge

## Implementation details

### Replaces: trapfinding

- **Archetype feature:** Skilled Liar (Ex)
- **Description:** Whenever a guerrilla uses Bluff to attempt to deceive someone, she gains a bonus on the opposed roll equal to 1/2 her rogue level (minimum +1).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Whenever a guerrilla uses Bluff to attempt to deceive someone, she gains a bonus on the opposed roll equal to 1/2 her rogue level (minimum +1). A guerrilla can still use Disable Device to disarm magic traps.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: evasion

- **Archetype feature:** Cover of Night (Ex)
- **Description:** At 2nd level, a guerrilla learns to use darkness to her advantage.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a guerrilla learns to use darkness to her advantage. She gains a +5 bonus on Disguise, Sleight of Hand, and Stealth checks while she is in areas of dim light or darkness, and can create mundane disguises in dim light or darkness with a full-round action (instead of the normal 1d3 × 10 minutes). Additionally, while in dim light or darkness, if a guerrilla would have concealment, she instead has total concealment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: trap sense

- **Archetype feature:** Secret Messenger (Ex)
- **Description:** At 3rd level, a guerrilla gains a +1 bonus on Bluff checks to convey secret messages and on Sense Motive checks to discern secret messages.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 18.
  - **Rules text to implement:** At 3rd level, a guerrilla gains a +1 bonus on Bluff checks to convey secret messages and on Sense Motive checks to discern secret messages. These bonuses increase by 1 every 3 rogue levels thereafter (to a maximum of +6 at 18th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: uncanny dodge

- **Archetype feature:** Guerrilla Sniping (Ex)
- **Description:** At 4th level, when a guerrilla is in an area of dim light or darkness, she takes only a –10 penalty on her Stealth check to maintain her obscured location while sniping.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, when a guerrilla is in an area of dim light or darkness, she takes only a –10 penalty on her Stealth check to maintain her obscured location while sniping.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved uncanny dodge

- **Archetype feature:** Uncanny Dodge (Ex)
- **Description:** At 8th level, a guerrilla gains uncanny dodge.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a guerrilla gains uncanny dodge.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the guerrilla archetype camouflage APG, fast stealth, powerful sneak APG, rogue crawl, stand up, and surprise attack.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the guerrilla archetype camouflage APG, fast stealth, powerful sneak APG, rogue crawl, stand up, and surprise attack.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Rogue Talents
- **Description:** The following advanced rogue talents complement the guerrilla archetype deadly sneak APG, master of disguise APG, stealthy sniper APG, and opportunist.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the guerrilla archetype deadly sneak APG, master of disguise APG, stealthy sniper APG, and opportunist.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Skilled Liar (Ex)
- Cover of Night (Ex)
- Secret Messenger (Ex)
- Guerrilla Sniping (Ex)
- Uncanny Dodge (Ex)
- Rogue Talents
- Advanced Rogue Talents
