# Alchemist - Plague Bringer

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Plague Bringer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Plague%20Bringer
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Plague Vial (Su); Disease Resistance (Ex); Discoveries
- **Replaced / altered class features:** mutagen; all increments of poison resistance and poison immunity

## Implementation details

### Replaces: mutagen

- **Archetype feature:** Plague Vial (Su)
- **Description:** At 1st level, a plague bringer can create a plague vial, an alchemically grown and concentrated disease sample.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a plague bringer can create a plague vial, an alchemically grown and concentrated disease sample. It takes 1 hour to prepare a plague vial, and once prepared, the vial remains potent until used. A plague bringer can only maintain 1 plague vial at a time—if he prepares a second vial, any existing plague vial becomes inert. A plague vial that is not in a plague bringer’s possession becomes inert until a plague bringer picks it up again. It’s a standard action to drink a plague vial. Upon being imbibed, the plague vial infects the plague bringer’s blood, sweat, tears, and other bodily fluids for 10 minutes per class level. Any creature that harms him with melee attacks (except with reach weapons) must make a Fortitude save (DC 10 + 1/2 the plague bringer’s level + the plague bringer’s Intelligence modifier) or become sickened for 1 round per plague bringer level. The plague bringer is immune to the effect of his own plague vial, but not that of another’s plague vial. The effects of multiple plague vials do not stack. As a standard action, the plague bringer can infect a weapon with this sickness (typically by licking it or wiping his blood or pus on it). The disease on the weapon works like a poisoned weapon, except the source is a disease instead of a poison (so a dwarf’s resistance to poison does not apply). Anyone other than a plague bringer (including another alchemist) who drinks a plague vial must make a saving throw against the vial’s DC or become nauseated for 1 hour. Unless he learns how to brew a mutagen by taking the mutagen discovery, he can never benefit from a mutagen and reacts to it as if he were a non-alchemist. At any particular time, a plague bringer can only be under the effect of either a plague vial or a mutagen (not both); drinking another immediately ends the effects of any ongoing plague vial or mutagen. All limitations to mutagens apply to plague vials as if they were the same substance. The infuse mutagen discovery and persistent mutagen class ability apply to plague vials. The sticky poison discovery applies to a weapon infected with a plague vial. The plague vial is a disease effect.
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.

### Replaces: all increments of poison resistance and poison immunity

- **Archetype feature:** Disease Resistance (Ex)
- **Description:** At 2nd level, a plague bringer gains a +2 bonus on all saving throws against disease.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 5, 8, 10.
  - **Rules text to implement:** At 2nd level, a plague bringer gains a +2 bonus on all saving throws against disease. This bonus increases to +4 at 5th level, and to +6 at 8th level. At 10th level, a plague bringer becomes completely immune to disease (including magical diseases).
- **Implementation flags:**
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** The following discoveries complement the plague bringer archetype: explosive bomb, precise bombs, smoke bomb breath weapon bomb, fast bomb, nauseating bomb ; plague bomb.
- **Detailed mechanics:**
  - **Rules text to implement:** The following discoveries complement the plague bringer archetype: explosive bomb, precise bombs, smoke bomb breath weapon bomb, fast bomb, nauseating bomb ; plague bomb.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Plague Vial (Su)
- Disease Resistance (Ex)
- Discoveries
