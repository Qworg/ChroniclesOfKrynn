# Cleric - Separatist

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Separatist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Separatist
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Forbidden Rites
- **Replaced / altered class features:** Domains

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Separatists do not gain proficiency in their deity’s favored weapon (though they are not prohibited from using it or learning its use).
- **Detailed mechanics:**
  - **Rules text to implement:** Separatists do not gain proficiency in their deity’s favored weapon (though they are not prohibited from using it or learning its use).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Forbidden Rites
- **Description:** A separatist selects one domain from her deity’s domain list, and a second domain that is not on her deity’s domain list.
- **Detailed mechanics:**
  - **Rules text to implement:** A separatist selects one domain from her deity’s domain list, and a second domain that is not on her deity’s domain list. This second domain cannot be an alignment domain that doesn’t match the cleric’s or her deity’s alignment. For example, a lawful good separatist cleric of a neutral good deity cannot choose the Chaos or Evil domain with this ability, but can select the Lawful domain even though her deity isn’t lawful. Granted powers from the cleric’s second domain function as if the cleric’s level, Wisdom, and Charisma were 2 lower than normal (minimum level 1) in terms of effect, DC, and uses per day. This also means the separatist doesn’t gain the domain’s higher-level ability until 2 levels later than normal. If the second domain grants additional class skills, the separatist gains these as normal. In all other respects, this ability works like and replaces the standard cleric’s domain ability.
- **Implementation flags:**
  - domain system.
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Forbidden Rites
