# Alchemist - Mad Scientist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Mad Scientist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Mad%20Scientist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Mad Genius (Su); Mad Mutagen (Su); 2nd-Level Alchemist Formulae; 3rd-Level Alchemist Formulae; 4th-Level Alchemist Formulae; 5th-Level Alchemist Formulae; 6th-Level Alchemist Formulae
- **Replaced / altered class features:** Alchemy, 2nd, 4th-level Discovery; Mutagen

## Implementation details

### Alters: alchemy and replaces the discovery gained at 2nd level

- **Archetype feature:** Mad Genius (Su)
- **Description:** At 2nd level, a mad scientist can deal 1d3 points of Wisdom damage to herself (or 1d6 points of sanity damage if employing the sanity rules found on page 12) to create a genius extract as one of her daily 1st-, 2nd-, 3rd-, 4th-, or 5th-level extracts.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 5, 3, 1, 4, 6.
  - **Rules text to implement:** At 2nd level, a mad scientist can deal 1d3 points of Wisdom damage to herself (or 1d6 points of sanity damage if employing the sanity rules found on page 12) to create a genius extract as one of her daily 1st-, 2nd-, 3rd-, 4th-, or 5th-level extracts. This otherwise takes the same amount of time and effort as creating a normal extract of its level, but instead of her choosing a formula she knows for it to grant, a genius extract has an unpredictable result. When the alchemist (or an ally, if she has the infusion discovery) drinks the extract, it produces a random effect from the list of alchemist formulae on page 32 of the Advanced Player’s Guide of 1 spell level higher than the extract’s spell level. For instance, if she creates a genius extract using a 2nd-level extract, it would produce the effect of a random 3rd-level alchemist formula. There is no way to predict which effect a genius extract will produce before drinking it. A genius extract’s minimum caster level is equal to the minimum caster level of the extract used, not the effect produced. So, for instance, a genius extract that produced a fox’s cunning effect would have a minimum caster level of 1 (for the 1st-level extract used) rather than 4 (for the 2nd-level effect). There are 29 potential 2nd-level extracts, 23 potential 3rd-level extracts, 18 potential 4th-level extracts, 15 potential 5th-level extracts, and 15 potential 6th-level extracts.
- **Implementation flags:**
  - ki subsystem.

### Alters: the alchemist’s mutagen and replaces the discovery gained at 4th level

- **Archetype feature:** Mad Mutagen (Su)
- **Description:** At 4th level, a mad scientist can brew a mad mutagen in place of a normal mutagen.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a mad scientist can brew a mad mutagen in place of a normal mutagen. If she does so, she need not make any decisions about the mutagen (including whether to make it a cognatogen or another variant mutagen if she has the appropriate discoveries) when she brews it. When the mad scientist drinks her mad mutagen, she makes those decisions on the fly, but she also takes 1d4 points of Wisdom damage (or 1d8 points of sanity damage if using the sanity rules on page 12). If anyone else, even another alchemist, drinks a mad mutagen, that person must succeed at a Will save (with the same DC as for the Fortitude save against nausea) or she becomes confused for 1 hour. Alchemist Formulae from the Advanced Player's Guide
- **Implementation flags:**
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 2nd-Level Alchemist Formulae
- **Description:** — aid, alchemical allocation, alter self, barkskin, bear’s endurance, blur, bull’s strength, cat’s grace, cure moderate wounds, darkvision, delay poison, detect thoughts, eagle’s splendor, elemental touch, false life, fire breath, fox’s cunning, invisibility, levitate, owl’s wisdom, perceive cues, protection from arrows, resist energy, restoration (lesser), see invisibility, spider climb, transmute potion to poison, undetectable alignment, vomit swarm.
- **Detailed mechanics:**
  - **Rules text to implement:** — aid, alchemical allocation, alter self, barkskin, bear’s endurance, blur, bull’s strength, cat’s grace, cure moderate wounds, darkvision, delay poison, detect thoughts, eagle’s splendor, elemental touch, false life, fire breath, fox’s cunning, invisibility, levitate, owl’s wisdom, perceive cues, protection from arrows, resist energy, restoration (lesser), see invisibility, spider climb, transmute potion to poison, undetectable alignment, vomit swarm.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 3rd-Level Alchemist Formulae
- **Description:** — absorbing touch, amplify elixir, arcane sight, beast shape I, bloodhound, cure serious wounds, displacement, draconic reservoir, elemental aura, fly, gaseous form, haste, heroism, nondetection, protection from energy, rage, remove blindness/deafness, remove curse, remove disease, seek thoughts, thorn body, tongues, water breathing.
- **Detailed mechanics:**
  - **Rules text to implement:** — absorbing touch, amplify elixir, arcane sight, beast shape I, bloodhound, cure serious wounds, displacement, draconic reservoir, elemental aura, fly, gaseous form, haste, heroism, nondetection, protection from energy, rage, remove blindness/deafness, remove curse, remove disease, seek thoughts, thorn body, tongues, water breathing.
- **Implementation flags:**
  - rage/rage power subsystem.
  - curse subsystem.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 4th-Level Alchemist Formulae
- **Description:** — air walk, arcane eye, beast shape II, cure critical wounds, death ward, detonate, discern lies, dragon’s breath, elemental body I, fire shield, fluid form, freedom of movement, invisibility (greater), neutralize poison, restoration, spell immunity, stoneskin, universal formula.
- **Detailed mechanics:**
  - **Rules text to implement:** — air walk, arcane eye, beast shape II, cure critical wounds, death ward, detonate, discern lies, dragon’s breath, elemental body I, fire shield, fluid form, freedom of movement, invisibility (greater), neutralize poison, restoration, spell immunity, stoneskin, universal formula.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.
  - feat grant/prerequisite handling.
  - air walk spell effect.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 5th-Level Alchemist Formulae
- **Description:** — beast shape III, contact other plane, delayed consumption, dream, elemental body II, elude time, magic jar, nightmare, overland flight, planar adaptation, plant shape I, polymorph, resurgent transformation, sending, spell resistance.
- **Detailed mechanics:**
  - **Rules text to implement:** — beast shape III, contact other plane, delayed consumption, dream, elemental body II, elude time, magic jar, nightmare, overland flight, planar adaptation, plant shape I, polymorph, resurgent transformation, sending, spell resistance.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** 6th-Level Alchemist Formulae
- **Description:** — analyze dweomer, beast shape IV, elemental body III, eyebite, form of the dragon I, giant form I, heal, mislead, plant shape II, shadow walk, statue, transformation, true seeing, twin form, wind walk.
- **Detailed mechanics:**
  - **Rules text to implement:** — analyze dweomer, beast shape IV, elemental body III, eyebite, form of the dragon I, giant form I, heal, mislead, plant shape II, shadow walk, statue, transformation, true seeing, twin form, wind walk.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Mad Genius (Su)
- Mad Mutagen (Su)
- 2nd-Level Alchemist Formulae
- 3rd-Level Alchemist Formulae
- 4th-Level Alchemist Formulae
- 5th-Level Alchemist Formulae
- 6th-Level Alchemist Formulae
