# Paladin - Invigorator

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Invigorator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Invigorator
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bestow Hope (Su); Holy Fount (Su); Champion of Life (Sp)
- **Replaced / altered class features:** smite evil; aura of justice; holy champion

## Replacement details

### Replaces: smite evil

- **Archetype feature:** Bestow Hope (Su)
- **Description:** Beginning at 1st level, an invigorator is a champion of her faith who can call upon her deity’s holy power to bathe battling allies in protective energy.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 4, 19, 7, 20.
  - Mechanics summary: Beginning at 1st level, an invigorator is a champion of her faith who can call upon her deity’s holy power to bathe battling allies in protective energy. As a swift action during combat, the invigorator can choose a number of nonevil allies within sight equal to her Charisma modifier upon whom to bestow hope. Once activated, bestow hope grants the invigorator and these allies DR 1/— until the combat ends, at which point the damage reduction immediately ends. During a battle, the invigorator can change the allies this ability affects as a swift action. Ending it is a free action, but each time it is activated during a single combat, another use of the ability is expended. The invigorator can use this ability a number of times per day equal to 3 + her Charisma modifier.
- **Implementation flags:**
  - Likely existing hooks: smite hook.

### Replaces: aura of justice

- **Archetype feature:** Holy Fount (Su)
- **Description:** At 11th level, an invigorator can expend two uses of bestow hope to radiate healing energies to bolster her nearby allies.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, an invigorator can expend two uses of bestow hope to radiate healing energies to bolster her nearby allies. For a number of rounds equal to 1/2 the invigorator’s paladin level, the invigorator and all nonevil allies within a 10-foot radius of her gain fast healing 10. This ability is an aura centered on the invigorator; allies must be within the aura at the beginning of their turns to benefit from the fast healing. Using this ability is a free action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: holy champion

- **Archetype feature:** Champion of Life (Sp)
- **Description:** An invigorator’s holy resolve can sometimes overcome death—or smite the horror that is undeath.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 20.
  - Mechanics summary: An invigorator’s holy resolve can sometimes overcome death—or smite the horror that is undeath. At 20th level, three times per day as a standard action, an invigorator can use breath of life as a spell-like ability, using her paladin level as her caster level. Creatures brought back to life with this ability do not suffer the normal temporary negative level the spell imposes.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, smite hook.

## Parsed source feature headings

- Bestow Hope (Su)
- Holy Fount (Su)
- Champion of Life (Sp)

