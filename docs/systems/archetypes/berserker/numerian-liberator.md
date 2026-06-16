# Berserker - Numerian Liberator

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Numerian Liberator
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Numerian%20Liberator
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skill; Hard Hitter (Ex); Disruptor; Hide from Constructs (Su); Rage Powers
- **Replaced / altered class features:** the uncanny dodge; improved uncanny dodge; indomitable will

## Replacement details

### Replaces: the uncanny dodge

- **Archetype feature:** Hard Hitter (Ex)
- **Description:** At 2nd level, a Numerian liberator can make devastating attacks against objects and foes with breakable components.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a Numerian liberator can make devastating attacks against objects and foes with breakable components. Damage dealt by the barbarian’s attacks ignores an amount of an object’s or creature’s hardness (if any) equal to 1/2 her class level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: improved uncanny dodge

- **Archetype feature:** Disruptor
- **Description:** At 5th level, for any foes in a Numerian liberator’s threatened area, the DC to cast spells defensively increases by 1.
- **Mechanics:**
  - Level hooks: 5, 20.
  - Mechanics summary: At 5th level, for any foes in a Numerian liberator’s threatened area, the DC to cast spells defensively increases by 1. The DC increases by 1 again for every 5 levels thereafter (to a maximum increase of 4 at 20th level). If the barbarian gains the disruptive rage power, the two abilities stack.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook, rage/rage-power hook.

### Replaces: indomitable will

- **Archetype feature:** Hide from Constructs (Su)
- **Description:** At 14th level, a Numerian liberator can control her movement, breathing, body temperature, and other physiological signs to confuse the artificial visions of constructs.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a Numerian liberator can control her movement, breathing, body temperature, and other physiological signs to confuse the artificial visions of constructs. At will, the barbarian can make herself undetectable to constructs as if she were affected by a hide from undead spell that instead hides the subject from constructs. Intelligent constructs receive a Will save (DC 10 + 1/2 the barbarian’s level + the barbarian’s Constitution modifier) to see through this effect. The barbarian must expend 1 round of rage for each round she uses this ability.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook, rage/rage-power hook.

## Parsed source feature headings

- Class Skill
- Hard Hitter (Ex)
- Disruptor
- Hide from Constructs (Su)
- Rage Powers

