# Summoner - God Caller

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** God Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20God%20Caller
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Guidance (Sp); Divine Word (Ex); Divine Awareness (Sp); Divine Might (Ex); Overwhelming Presence (Sp)
- **Replaced / altered class features:** transposition; aspect; greater aspect; twin eidolon

## Replacement details

### Alters: the summoner’s class skills

- **Archetype feature:** Class Skills
- **Description:** A god caller adds Diplomacy and Intimidate to his list of class skills, instead of Knowledge (dungeoneering, engineering, geography, and nature) and Use Magic Device.
- **Mechanics:**
  - Mechanics summary: A god caller adds Diplomacy and Intimidate to his list of class skills, instead of Knowledge (dungeoneering, engineering, geography, and nature) and Use Magic Device.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: life link

- **Archetype feature:** Guidance (Sp)
- **Description:** A god caller’s eidolon has a tiny spark of divinity.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: A god caller’s eidolon has a tiny spark of divinity. It can use guidance as a spell-like ability at will. However, the eidolon and the god caller must remain within 50 feet of one another for the eidolon to remain at full strength.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, summoner eidolon hook.

### Replaces: transposition

- **Archetype feature:** Divine Word (Ex)
- **Description:** At 8th level, if a god caller’s eidolon would grant him a bonus with the aid another action on a Diplomacy or Intimidate check, the god caller can instead choose to roll twice and take the better result.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, if a god caller’s eidolon would grant him a bonus with the aid another action on a Diplomacy or Intimidate check, the god caller can instead choose to roll twice and take the better result. He makes the choice before rolling. Once per day while his eidolon uses the aid another action to assist him in such a check, if the god caller would improve a target’s attitude toward him, or gain a success if using the individual influence rules ( Ultimate Intrigue 102 ), he instead improves that target’s attitude by 2 steps or it counts as 2 successes.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, summoner eidolon hook.

### Replaces: aspect

- **Archetype feature:** Divine Awareness (Sp)
- **Description:** At 10th level, after 10 minutes of concentration, a god caller’s eidolon can see from afar as per clairaudience/clairvoyance.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 10, 18.
  - Mechanics summary: At 10th level, after 10 minutes of concentration, a god caller’s eidolon can see from afar as per clairaudience/clairvoyance . The eidolon can do this once per day at 10th level, and an additional time per day every 4 summoner levels thereafter (maximum of 3 times per day at 18th level).
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook.

### Replaces: greater aspect

- **Archetype feature:** Divine Might (Ex)
- **Description:** At 18th level, a god caller’s eidolon’s attacks are treated as epic for the purpose of overcoming damage reduction and harming mythic creatures.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 18.
  - Mechanics summary: At 18th level, a god caller’s eidolon’s attacks are treated as epic for the purpose of overcoming damage reduction and harming mythic creatures.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook.
  - Needs implementation review: mythic rules.

### Replaces: twin eidolon

- **Archetype feature:** Overwhelming Presence (Sp)
- **Description:** At 20th level, a god caller’s eidolon can use overwhelming presence ( Pathfinder RPG Ultimate Magic 230 ) three times per day.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a god caller’s eidolon can use overwhelming presence ( Pathfinder RPG Ultimate Magic 230 ) three times per day. The save DC is equal to 19 + the eidolon’s Charisma modifier.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, summoner eidolon hook.

## Parsed source feature headings

- Class Skills
- Guidance (Sp)
- Divine Word (Ex)
- Divine Awareness (Sp)
- Divine Might (Ex)
- Overwhelming Presence (Sp)

