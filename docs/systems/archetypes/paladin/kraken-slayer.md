# Paladin - Kraken Slayer

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Kraken Slayer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Kraken%20Slayer
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Smite Deepest Evil (Su); Divine Immunity (Ex); Divine Bond (Sp); Aura of Elusion (Su)
- **Replaced / altered class features:** divine health; aura of faith

## Implementation details

### Alters: smite evil

- **Archetype feature:** Smite Deepest Evil (Su)
- **Description:** This functions as the smite evil ability, but the kraken slayer does not get a bonus of 2 points of damage per level on the first successful attack against any creatures other than evil creatures with the aquatic or water subtype.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** This functions as the smite evil ability, but the kraken slayer does not get a bonus of 2 points of damage per level on the first successful attack against any creatures other than evil creatures with the aquatic or water subtype. She gains a bonus of 2 points of damage per level on all smite attacks made against evil creatures with the aquatic or water subtype.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: divine health

- **Archetype feature:** Divine Immunity (Ex)
- **Description:** At 3rd level, a kraken slayer is immune to poisons and diseases, including supernatural and magical diseases, delivered by the natural attacks of creatures with the aquatic or water subtype.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a kraken slayer is immune to poisons and diseases, including supernatural and magical diseases, delivered by the natural attacks of creatures with the aquatic or water subtype.
- **Implementation flags:**
  - poison subsystem.

### Alters: divine bond

- **Archetype feature:** Divine Bond (Sp)
- **Description:** A kraken slayer who chooses a weapon as her divine bond may either increase her weapon’s enhancement bonus or add any of the following properties to her weapon: axiomatic, brilliant energy, defending, grayflame UE, holy, keen, merciful, seaborne UE, and speed.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** A kraken slayer who chooses a weapon as her divine bond may either increase her weapon’s enhancement bonus or add any of the following properties to her weapon: axiomatic, brilliant energy, defending, grayflame UE, holy, keen, merciful, seaborne UE, and speed. A kraken slayer who chooses a mount must select one suitable for an aquatic environment, such as an elasmosaurus, giant seahorse B4, or orca.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of faith

- **Archetype feature:** Aura of Elusion (Su)
- **Description:** At 14th level, a kraken slayer gains a sacred bonus equal to her kraken slayer level on Escape Artist checks and combat maneuver checks to escape a grapple and to her CMD to avoid being grappled.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a kraken slayer gains a sacred bonus equal to her kraken slayer level on Escape Artist checks and combat maneuver checks to escape a grapple and to her CMD to avoid being grappled. Each ally within 10 feet of her gains a sacred bonus equal to half her kraken slayer level on Escape Artist checks and combat maneuver checks to escape a grapple and to CMD to avoid being grappled. This ability functions only while the paladin is conscious, not if she is unconscious or dead.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Smite Deepest Evil (Su)
- Divine Immunity (Ex)
- Divine Bond (Sp)
- Aura of Elusion (Su)
