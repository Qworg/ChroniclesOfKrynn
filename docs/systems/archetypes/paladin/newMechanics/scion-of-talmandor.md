# Paladin - Scion of Talmandor

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Scion of Talmandor
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Scion%20of%20Talmandor
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Scion’s Faith (Ex); Egalitarian (Su); Bonded Eagle (Sp); Consensus (Ex); Talmandor’s Gift (Sp)
- **Replaced / altered class features:** divine bond; aura of resolve; aura of justice

## Implementation details

### Alters: class skills

- **Archetype feature:** Scion’s Faith (Ex)
- **Description:** A scion of Talmandor must worship a lawful good deity, and she gains Fly as a class skill instead of Ride.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A scion of Talmandor must worship a lawful good deity, and she gains Fly as a class skill instead of Ride.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.
  - flight/movement mode support.

### Alters: divine grace

- **Archetype feature:** Egalitarian (Su)
- **Description:** At 2nd level, once per day as a swift action, a scion of Talmandor can halve her bonus on saving throws from divine grace (minimum +1) to grant the resulting bonus to herself and to all allies within 30 feet.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, once per day as a swift action, a scion of Talmandor can halve her bonus on saving throws from divine grace (minimum +1) to grant the resulting bonus to herself and to all allies within 30 feet. This shared bonus lasts for a number of rounds equal to the scion’s Charisma modifier, after which her divine grace is suppressed for 1 hour before returning to normal.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: divine bond

- **Archetype feature:** Bonded Eagle (Sp)
- **Description:** At 5th level, a scion of Talmandor forms a bond with an eagle using the statistics for a bird animal companion.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a scion of Talmandor forms a bond with an eagle using the statistics for a bird animal companion. The eagle is a loyal companion that accompanies the scion on her adventures. When the scion activates smite evil, she can expend an additional use of smite evil to grant her eagle the bonuses granted from smite evil as well. This ability functions like the druid animal companion ability, using the scion’s paladin level as her effective druid level.
- **Implementation flags:**
  - animal companion progression.

### Replaces: aura of resolve

- **Archetype feature:** Consensus (Ex)
- **Description:** At 8th level, twice per day as a swift action during the first full round of combat, a scion of Talmandor can take a vote from a number of allies equal to or less than 3 + the scion’s Charisma modifier, all of whom must be within 30 feet of the scion of Talmandor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, twice per day as a swift action during the first full round of combat, a scion of Talmandor can take a vote from a number of allies equal to or less than 3 + the scion’s Charisma modifier, all of whom must be within 30 feet of the scion of Talmandor. In initiative order, each ally can vote for Freedom, Justice, or Responsibility. Allies who vote receive a +2 sacred bonus either on attack rolls (if Justice wins), on saving throws (if Freedom wins), or to Armor Class (if Responsibility wins) until the end of combat. The scion of Talmandor votes last, and in the case of a tie, her vote breaks the tie.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of justice

- **Archetype feature:** Talmandor’s Gift (Sp)
- **Description:** At 11th level, a scion of Talmandor can summon an avoral agathion ( Pathfinder RPG Bestiary 2 16 ) as if via summon monster VII (caster level equals the scion’s character level).
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a scion of Talmandor can summon an avoral agathion ( Pathfinder RPG Bestiary 2 16 ) as if via summon monster VII (caster level equals the scion’s character level).
- **Implementation flags:**
  - summoning subsystem.

## Parsed source feature headings

- Scion’s Faith (Ex)
- Egalitarian (Su)
- Bonded Eagle (Sp)
- Consensus (Ex)
- Talmandor’s Gift (Sp)
