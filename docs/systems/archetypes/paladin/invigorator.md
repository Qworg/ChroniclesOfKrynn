# Paladin - Invigorator

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Invigorator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Invigorator
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bestow Hope (Su); Holy Fount (Su); Champion of Life (Sp)
- **Replaced / altered class features:** smite evil; aura of justice; holy champion

## Implementation details

### Replaces: smite evil

- **Archetype feature:** Bestow Hope (Su)
- **Description:** Beginning at 1st level, an invigorator is a champion of her faith who can call upon her deity’s holy power to bathe battling allies in protective energy.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 4, 19, 7, 20.
  - **Rules text to implement:** Beginning at 1st level, an invigorator is a champion of her faith who can call upon her deity’s holy power to bathe battling allies in protective energy. As a swift action during combat, the invigorator can choose a number of nonevil allies within sight equal to her Charisma modifier upon whom to bestow hope. Once activated, bestow hope grants the invigorator and these allies DR 1/— until the combat ends, at which point the damage reduction immediately ends. During a battle, the invigorator can change the allies this ability affects as a swift action. Ending it is a free action, but each time it is activated during a single combat, another use of the ability is expended. The invigorator can use this ability a number of times per day equal to 3 + her Charisma modifier. The invigorator must participate in the combat to use this ability. If she is frightened, panicked, paralyzed, stunned, unconscious, or otherwise prevented from participating in the combat, any DR this ability bestows is temporarily suspended until she can participate in the combat again; this doesn’t count as ending the ability. At 4th level, and at every 3 paladin levels thereafter, the DR this ability grants increases by 1, to a maximum of DR 7/— at 19th level. The DR this ability grants does not stack with the DR the invigorator receives from aura of righteousness or holy champion. However, at both 7th level and 20th level, an invigorator can choose to bestow hope upon an additional ally, for a total number of allies equal to 2 + the invigorator’s Charisma modifier at 20th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of justice

- **Archetype feature:** Holy Fount (Su)
- **Description:** At 11th level, an invigorator can expend two uses of bestow hope to radiate healing energies to bolster her nearby allies.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, an invigorator can expend two uses of bestow hope to radiate healing energies to bolster her nearby allies. For a number of rounds equal to 1/2 the invigorator’s paladin level, the invigorator and all nonevil allies within a 10-foot radius of her gain fast healing 10. This ability is an aura centered on the invigorator; allies must be within the aura at the beginning of their turns to benefit from the fast healing. Using this ability is a free action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: holy champion

- **Archetype feature:** Champion of Life (Sp)
- **Description:** An invigorator’s holy resolve can sometimes overcome death—or smite the horror that is undeath.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 20.
  - **Rules text to implement:** An invigorator’s holy resolve can sometimes overcome death—or smite the horror that is undeath. At 20th level, three times per day as a standard action, an invigorator can use breath of life as a spell-like ability, using her paladin level as her caster level. Creatures brought back to life with this ability do not suffer the normal temporary negative level the spell imposes.
- **Implementation flags:**
  - spell-like ability support.

## Parsed source feature headings

- Bestow Hope (Su)
- Holy Fount (Su)
- Champion of Life (Sp)
