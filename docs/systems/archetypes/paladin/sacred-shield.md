# Paladin - Sacred Shield

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Sacred Shield
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Sacred%20Shield
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Bastion of Good (Su); Holy Shield (Su); Divine Bond (Su); Improved Bastion; Perfect Bastion
- **Replaced / altered class features:** smite evil; channel positive energy; the paladin’s aura of justice; the sacred shield’s holy champion ability

## Replacement details

### Replaces: smite evil

- **Archetype feature:** Bastion of Good (Su)
- **Description:** At 1st level, a sacred shield can call upon the powers of good to defend her and her allies against evil.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 20.
  - Mechanics summary: At 1st level, a sacred shield can call upon the powers of good to defend her and her allies against evil. This ability functions as smite evil, except that the paladin gains no benefit on attack or damage rolls against her target. Instead, any attacks the target makes against allies within 10 feet of the paladin deal half damage. Attacks against the paladin deal full damage, but the paladin gains a deflection bonus to her AC equal to her Charisma bonus (if any) against attacks made by the target of the smite. This bonus increases by +1 for every four paladin levels (to a maximum of +6 at 20th level). Feats, abilities, and the like that increase a paladin’s number of uses of smite evil per day increase a sacred shield’s uses of bastion of good per day.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, smite hook.

### Replaces: channel positive energy

- **Archetype feature:** Holy Shield (Su)
- **Description:** At 4th level, a sacred shield can channel her faith into her shield, protecting any nearby allies.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 11, 20.
  - Mechanics summary: At 4th level, a sacred shield can channel her faith into her shield, protecting any nearby allies. All allies adjacent to the paladin gain a shield bonus equal to the sacred shield’s own shield bonus, including any increase from the shield’s enhancement bonus. This bonus does not stack with any existing shield bonuses. The paladin herself radiates light as a light spell while the shielding is active. At 11th level, this protection expands to cover any allies within 10 feet and the radiance increases to the effects of a daylight spell. At 20th level, any allies within 20 feet are protected.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the paladin’s aura of justice

- **Archetype feature:** Improved Bastion
- **Description:** At 11th level, the radius of a sacred shield’s bastion of good ability increases to 20 feet.
- **Mechanics:**
  - Level hooks: 11.
  - Mechanics summary: At 11th level, the radius of a sacred shield’s bastion of good ability increases to 20 feet.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the sacred shield’s holy champion ability

- **Archetype feature:** Perfect Bastion
- **Description:** At 20th level, a sacred shield and her allies within 20 feet gain regeneration 10 against the target of her bastion of good ability (essentially regeneration that is overcome by any damage not caused by the target).
- **Mechanics:**
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a sacred shield and her allies within 20 feet gain regeneration 10 against the target of her bastion of good ability (essentially regeneration that is overcome by any damage not caused by the target).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Bastion of Good (Su)
- Holy Shield (Su)
- Divine Bond (Su)
- Improved Bastion
- Perfect Bastion

