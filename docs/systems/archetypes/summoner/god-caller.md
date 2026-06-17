# Summoner - God Caller

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** God Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20God%20Caller
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Guidance (Sp); Divine Word (Ex); Divine Awareness (Sp); Divine Might (Ex); Overwhelming Presence (Sp)
- **Replaced / altered class features:** transposition; aspect; greater aspect; twin eidolon

## Implementation details

### Alters: the summoner’s class skills

- **Archetype feature:** Class Skills
- **Description:** A god caller adds Diplomacy and Intimidate to his list of class skills, instead of Knowledge (dungeoneering, engineering, geography, and nature) and Use Magic Device.
- **Detailed mechanics:**
  - **Rules text to implement:** A god caller adds Diplomacy and Intimidate to his list of class skills, instead of Knowledge (dungeoneering, engineering, geography, and nature) and Use Magic Device.
- **Implementation flags:**
  - ki subsystem.
  - summoning subsystem.
  - skill/class-skill modification.

### Alters: life link

- **Archetype feature:** Guidance (Sp)
- **Description:** A god caller’s eidolon has a tiny spark of divinity.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** A god caller’s eidolon has a tiny spark of divinity. It can use guidance as a spell-like ability at will. However, the eidolon and the god caller must remain within 50 feet of one another for the eidolon to remain at full strength. If the eidolon is beyond 50 feet but closer than 1,000 feet, its current and maximum hit point totals are reduced by half.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - spell-like ability support.

### Replaces: transposition

- **Archetype feature:** Divine Word (Ex)
- **Description:** At 8th level, if a god caller’s eidolon would grant him a bonus with the aid another action on a Diplomacy or Intimidate check, the god caller can instead choose to roll twice and take the better result.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, if a god caller’s eidolon would grant him a bonus with the aid another action on a Diplomacy or Intimidate check, the god caller can instead choose to roll twice and take the better result. He makes the choice before rolling. Once per day while his eidolon uses the aid another action to assist him in such a check, if the god caller would improve a target’s attitude toward him, or gain a success if using the individual influence rules ( Ultimate Intrigue 102 ), he instead improves that target’s attitude by 2 steps or it counts as 2 successes.
- **Implementation flags:**
  - eidolon/evolution subsystem.

### Replaces: aspect

- **Archetype feature:** Divine Awareness (Sp)
- **Description:** At 10th level, after 10 minutes of concentration, a god caller’s eidolon can see from afar as per clairaudience/clairvoyance.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 10, 18.
  - **Rules text to implement:** At 10th level, after 10 minutes of concentration, a god caller’s eidolon can see from afar as per clairaudience/clairvoyance. The eidolon can do this once per day at 10th level, and an additional time per day every 4 summoner levels thereafter (maximum of 3 times per day at 18th level).
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.

### Replaces: greater aspect

- **Archetype feature:** Divine Might (Ex)
- **Description:** At 18th level, a god caller’s eidolon’s attacks are treated as epic for the purpose of overcoming damage reduction and harming mythic creatures.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 18.
  - **Rules text to implement:** At 18th level, a god caller’s eidolon’s attacks are treated as epic for the purpose of overcoming damage reduction and harming mythic creatures.
- **Implementation flags:**
  - eidolon/evolution subsystem.

### Replaces: twin eidolon

- **Archetype feature:** Overwhelming Presence (Sp)
- **Description:** At 20th level, a god caller’s eidolon can use overwhelming presence ( Pathfinder RPG Ultimate Magic 230 ) three times per day.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a god caller’s eidolon can use overwhelming presence ( Pathfinder RPG Ultimate Magic 230 ) three times per day. The save DC is equal to 19 + the eidolon’s Charisma modifier.
- **Implementation flags:**
  - eidolon/evolution subsystem.

## Parsed source feature headings

- Class Skills
- Guidance (Sp)
- Divine Word (Ex)
- Divine Awareness (Sp)
- Divine Might (Ex)
- Overwhelming Presence (Sp)
