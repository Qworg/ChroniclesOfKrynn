# Cleric - Merciful Healer

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Merciful Healer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Merciful%20Healer
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Willing Healer; Channel Energy (Su); Combat Medic (Ex); Merciful Healing (Su); True Healer (Su)
- **Replaced / altered class features:** Domains; Channel Energy

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Willing Healer
- **Description:** A merciful healer must choose the Healing domain.
- **Detailed mechanics:**
  - **Rules text to implement:** A merciful healer must choose the Healing domain. She does not gain a second domain. If the cleric worships a deity, that deity must be one that grants the Healing domain. A merciful healer must channel positive energy.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Channel Energy (Su)
- **Description:** As the cleric ability, save that a merciful healer must channel positive energy, and when she does, she cannot choose to target undead.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** As the cleric ability, save that a merciful healer must channel positive energy, and when she does, she cannot choose to target undead. This ability is otherwise identical to the cleric ability of the same name.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Combat Medic (Ex)
- **Description:** A merciful healer does not provoke attacks of opportunity when using the Heal skill to stabilize another creature or casting healing spells.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A merciful healer does not provoke attacks of opportunity when using the Heal skill to stabilize another creature or casting healing spells.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Merciful Healing (Su)
- **Description:** At 3rd level, a merciful healer can channel positive energy to relieve one or more harmful conditions.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 6, 9, 12.
  - **Rules text to implement:** At 3rd level, a merciful healer can channel positive energy to relieve one or more harmful conditions. The merciful healer chooses one of the following harmful conditions at 3rd level: fatigued, shaken, or sickened. When the merciful healer channels energy she can remove the chosen condition from one living creature that she heals within her channel energy burst. At 6th level, she can choose another condition. It can be one of those she didn’t choose at 3rd level, or one of the following conditions: dazed, diseased, or staggered. She can remove the selected condition or the one she chose at 3rd level from up to two creatures within her channel energy burst. She gains another condition at 9th level, and can choose an above condition or one of the following conditions: cursed, exhausted, frightened, nauseated, or poisoned. She can remove that condition, or a condition she previously chose, from one or two creatures within the burst. Finally, at 12th level, she can choose a lower-level condition or one of the following conditions: blinded, deafened, paralyzed, or stunned. She can remove that condition or one she previously chose from one, two, or three creatures within her channel energy burst. Feats and effects that affect a paladin’s mercy also affect this ability.
- **Implementation flags:**
  - poison subsystem.
  - curse subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** True Healer (Su)
- **Description:** At 8th level, when a merciful healer channels holy energy, she can choose to apply the benefits of merciful healing or to reroll any 1s when determining how much damage she heals with the holy energy.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, when a merciful healer channels holy energy, she can choose to apply the benefits of merciful healing or to reroll any 1s when determining how much damage she heals with the holy energy. She must choose which benefit to take before she rolls to see how much damage she heals.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Willing Healer
- Channel Energy (Su)
- Combat Medic (Ex)
- Merciful Healing (Su)
- True Healer (Su)
