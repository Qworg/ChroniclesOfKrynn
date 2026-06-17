# Druid - Nithveil Adept

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Nithveil Adept
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Nithveil%20Adept
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Nithveil Skills; Nature Bond (Su); Animal Speech (Su); Resist Fey Influence (Ex); Locate Nithveil (Sp)
- **Replaced / altered class features:** nature sense; spontaneous casting; resist nature’s lure

## Implementation details

### Replaces: nature sense

- **Archetype feature:** Nithveil Skills
- **Description:** A Nithveil adept adds Bluff, Diplomacy, Disguise, Sense Motive, Perform (any), and Stealth to her list of class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** A Nithveil adept adds Bluff, Diplomacy, Disguise, Sense Motive, Perform (any), and Stealth to her list of class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: nature bond

- **Archetype feature:** Nature Bond (Su)
- **Description:** A Nithveil adept cannot select an animal companion, and can take only a domain.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** A Nithveil adept cannot select an animal companion, and can take only a domain. If she worships an Eldest, the Nithveil trickster can choose any of the domains or subdomains granted by that Eldest in addition to those normally available to druids.
- **Implementation flags:**
  - animal companion progression.
  - domain system.

### Replaces: spontaneous casting

- **Archetype feature:** Animal Speech (Su)
- **Description:** A Nithveil adept can imbue normal animals with the ability to speak for a brief period.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** A Nithveil adept can imbue normal animals with the ability to speak for a brief period. Once per day as a standard action, the Nithveil adept can touch an animal to grant it the ability to speak any language the druid knows for 1 minute per druid level. This does not increase the animal’s Intelligence or improve its attitude, and the animal behaves as though communicating with someone under the effects of a speak with animals spell, save that it can speak with anyone who understands the language the Nithveil adept grants it. The Nithveil adept gains one additional use of this ability at 4th level and every 4 levels thereafter.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: resist nature’s lure

- **Archetype feature:** Resist Fey Influence (Ex)
- **Description:** At 4th level, a Nithveil adept gains a +4 bonus on saving throws against the spell-like and supernatural abilities of fey.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a Nithveil adept gains a +4 bonus on saving throws against the spell-like and supernatural abilities of fey. Once per day before attempting such a saving throw, the Nithveil adept can choose to roll two dice and take the better result, applying the +4 bonus as normal.
- **Implementation flags:**
  - spell-like ability support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Locate Nithveil (Sp)
- **Description:** At 9th level, a Nithveil adept can cast find the path as a spell-like ability, but only to locate Nithveil.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a Nithveil adept can cast find the path as a spell-like ability, but only to locate Nithveil. The spell’s duration is extended until the druid reaches her destination or until Nithveil recedes from the Material Plane at the end of the new moon. This ability can be used only once per month, during the new moon.
- **Implementation flags:**
  - spell-like ability support.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Nithveil Skills
- Nature Bond (Su)
- Animal Speech (Su)
- Resist Fey Influence (Ex)
- Locate Nithveil (Sp)
