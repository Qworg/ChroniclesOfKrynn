# Bard - Buccaneer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Buccaneer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Buccaneer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Hilt Bash (Ex); Song of Surrender (Su); Knock Out (Ex); Mass Song of Surrender (Su)
- **Replaced / altered class features:** bardic knowledge; suggestion; lore master; mass suggestion

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Hilt Bash (Ex)
- **Description:** A buccaneer develops the ability to fight with the hilts and flats of his weapons, aiming to leave his victims alive.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A buccaneer develops the ability to fight with the hilts and flats of his weapons, aiming to leave his victims alive. He can use a weapon that normally deals lethal damage to deal nonlethal damage with no penalty on his attack roll.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.

### Replaces: suggestion

- **Archetype feature:** Song of Surrender (Su)
- **Description:** A buccaneer of 4th level or higher can use his performance to encourage an enemy to surrender.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: A buccaneer of 4th level or higher can use his performance to encourage an enemy to surrender. To be affected, an enemy must be within 30 feet and be able to see and hear the buccaneer’s performance. This effect lasts for 1 round—essentially, the affected enemy takes no actions on its next turn other than to lie prone, although it is not considered flat-footed or helpless. A Will saving throw (DC 10 + 1/2 the buccaneer’s level + the buccaneer’s Charisma modifier) negates the effect.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, rage/rage-power hook.

### Replaces: lore master

- **Archetype feature:** Knock Out (Ex)
- **Description:** At 5th level, a buccaneer may focus his blows in an attempt to knock out an opponent.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5, 17.
  - Mechanics summary: At 5th level, a buccaneer may focus his blows in an attempt to knock out an opponent. Once per day as a swift action, the buccaneer can choose one target to attempt to knock out. The buccaneer adds his Charisma bonus (if any) on his attack roll and adds his buccaneer level on any nonlethal damage rolls made against the target. The bonus lasts until the buccaneer deals nonlethal damage to his target or until the buccaneer chooses a new target to attempt to knock out. He can use this ability one additional time per day for every six levels he possesses beyond 5th, to a maximum of three times per day at 17th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: mass suggestion

- **Archetype feature:** Mass Song of Surrender (Su)
- **Description:** This ability functions just like song of surrender but allows a buccaneer of 16th level or higher to affect all enemies within 30 feet.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 16.
  - Mechanics summary: This ability functions just like song of surrender but allows a buccaneer of 16th level or higher to affect all enemies within 30 feet. Enemies within range of this effect still receive a saving throw.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Hilt Bash (Ex)
- Song of Surrender (Su)
- Knock Out (Ex)
- Mass Song of Surrender (Su)

