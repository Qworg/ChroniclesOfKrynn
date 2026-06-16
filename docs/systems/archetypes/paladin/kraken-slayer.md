# Paladin - Kraken Slayer

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Kraken Slayer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Kraken%20Slayer
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Smite Deepest Evil (Su); Divine Immunity (Ex); Divine Bond (Sp); Aura of Elusion (Su)
- **Replaced / altered class features:** divine health; aura of faith

## Replacement details

### Alters: smite evil

- **Archetype feature:** Smite Deepest Evil (Su)
- **Description:** This functions as the smite evil ability, but the kraken slayer does not get a bonus of 2 points of damage per level on the first successful attack against any creatures other than evil creatures with the aquatic or water subtype.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: This functions as the smite evil ability, but the kraken slayer does not get a bonus of 2 points of damage per level on the first successful attack against any creatures other than evil creatures with the aquatic or water subtype. She gains a bonus of 2 points of damage per level on all smite attacks made against evil creatures with the aquatic or water subtype.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, smite hook.

### Replaces: divine health

- **Archetype feature:** Divine Immunity (Ex)
- **Description:** At 3rd level, a kraken slayer is immune to poisons and diseases, including supernatural and magical diseases, delivered by the natural attacks of creatures with the aquatic or water subtype.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a kraken slayer is immune to poisons and diseases, including supernatural and magical diseases, delivered by the natural attacks of creatures with the aquatic or water subtype.
- **Implementation flags:**
  - Likely existing hooks: natural attack system.

### Alters: divine bond

- **Archetype feature:** Divine Bond (Sp)
- **Description:** A kraken slayer who chooses a weapon as her divine bond may either increase her weapon’s enhancement bonus or add any of the following properties to her weapon: axiomatic , brilliant energy , defending , grayflame UE , holy , keen , merciful , seaborne UE , and speed.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: A kraken slayer who chooses a weapon as her divine bond may either increase her weapon’s enhancement bonus or add any of the following properties to her weapon: axiomatic , brilliant energy , defending , grayflame UE , holy , keen , merciful , seaborne UE , and speed . A kraken slayer who chooses a mount must select one suitable for an aquatic environment, such as an elasmosaurus, giant seahorse B4 , or orca.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: aura of faith

- **Archetype feature:** Aura of Elusion (Su)
- **Description:** At 14th level, a kraken slayer gains a sacred bonus equal to her kraken slayer level on Escape Artist checks and combat maneuver checks to escape a grapple and to her CMD to avoid being grappled.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a kraken slayer gains a sacred bonus equal to her kraken slayer level on Escape Artist checks and combat maneuver checks to escape a grapple and to her CMD to avoid being grappled. Each ally within 10 feet of her gains a sacred bonus equal to half her kraken slayer level on Escape Artist checks and combat maneuver checks to escape a grapple and to CMD to avoid being grappled.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

## Parsed source feature headings

- Smite Deepest Evil (Su)
- Divine Immunity (Ex)
- Divine Bond (Sp)
- Aura of Elusion (Su)

