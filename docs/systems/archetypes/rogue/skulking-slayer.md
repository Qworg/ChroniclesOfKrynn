# Rogue - Skulking Slayer

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Skulking Slayer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Skulking%20Slayer
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Class Skills; Skill Ranks per Level; Pass for Human (Ex); Underhanded Maneuvers (Ex); Bonus Feats; Bold Strike (Ex); Shifty (Ex); Unexpected Charge (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** trapfinding; trap sense +1 and +4; trap sense +2; trap sense +3

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** The skulking slayer gains proficiency with greatclubs and whips, but loses proficiency with rapiers and hand crossbows.
- **Detailed mechanics:**
  - **Rules text to implement:** The skulking slayer gains proficiency with greatclubs and whips, but loses proficiency with rapiers and hand crossbows.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** The skulking slayer does not gain Disable Device, Linguistics, and Sleight of Hand as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** The skulking slayer does not gain Disable Device, Linguistics, and Sleight of Hand as class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skill Ranks per Level
- **Description:** 6 + Int modifier.
- **Detailed mechanics:**
  - **Rules text to implement:** 6 + Int modifier.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Pass for Human (Ex)
- **Description:** At 1st level, when trying to conceal her half-orc heritage, a skulking slayer gains a bonus on Disguise checks equal to half her level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, when trying to conceal her half-orc heritage, a skulking slayer gains a bonus on Disguise checks equal to half her level. When using disguise to appear as a specific individual, skulking stalkers ignore the normal –2 penalty to appear as another race.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: trapfinding

- **Archetype feature:** Underhanded Maneuvers (Ex)
- **Description:** At 1st level, when she could normally make a sneak attack, a slayer may instead make a dirty trick or steal combat maneuver with a bonus on her roll.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, when she could normally make a sneak attack, a slayer may instead make a dirty trick or steal combat maneuver with a bonus on her roll. This bonus is equal to her number of sneak attack dice for a dirty trick combat maneuver, or 1-1/2 × her number of sneak attack dice for a steal combat maneuver.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** At 2nd level, a skulking slayer can select the Surprise Follow-Through feat (see below) in place of a rogue talent.
- **Detailed mechanics:**
  - **Level hooks:** 2, 10.
  - **Rules text to implement:** At 2nd level, a skulking slayer can select the Surprise Follow-Through feat (see below) in place of a rogue talent. At 10th level, she can select the Improved Surprise Follow-Through feat (if she already has Surprise Follow-Through) in place of an advanced rogue talent.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: trap sense +1 and +4

- **Archetype feature:** Bold Strike (Ex)
- **Description:** At 3rd level, when a skulking slayer charges and makes a sneak attack with a two-handed weapon, she rolls d8s instead of d6s for her sneak attack damage.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, when a skulking slayer charges and makes a sneak attack with a two-handed weapon, she rolls d8s instead of d6s for her sneak attack damage.
- **Implementation flags:**
  - ki subsystem.

### Replaces: trap sense +2

- **Archetype feature:** Shifty (Ex)
- **Description:** At 6th level, a skulking slayer gains a bonus on Bluff checks to feint equal to half her level.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 6.
  - **Rules text to implement:** At 6th level, a skulking slayer gains a bonus on Bluff checks to feint equal to half her level.
- **Implementation flags:**
  - ki subsystem.

### Replaces: trap sense +3

- **Archetype feature:** Unexpected Charge (Ex)
- **Description:** At 9th level, a skulking slayer can make a Bluff check to feint as a swift action before a charge.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a skulking slayer can make a Bluff check to feint as a swift action before a charge.
- **Implementation flags:**
  - ki subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Rogue Talents
- **Description:** The following rogue talents complement the skulking slayer archetype: combat trick, surprise attack; combat swipe, powerful sneak; terrain mastery.
- **Detailed mechanics:**
  - **Rules text to implement:** The following rogue talents complement the skulking slayer archetype: combat trick, surprise attack; combat swipe, powerful sneak; terrain mastery.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Advanced Talents
- **Description:** The following advanced rogue talents complement the skulking slayer archetype: crippling strike; deadly sneak; unwitting ally.
- **Detailed mechanics:**
  - **Rules text to implement:** The following advanced rogue talents complement the skulking slayer archetype: crippling strike; deadly sneak; unwitting ally.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Class Skills
- Skill Ranks per Level
- Pass for Human (Ex)
- Underhanded Maneuvers (Ex)
- Bonus Feats
- Bold Strike (Ex)
- Shifty (Ex)
- Unexpected Charge (Ex)
- Rogue Talents
- Advanced Talents
