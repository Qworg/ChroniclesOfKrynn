# Paladin - Tranquil Guardian

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Tranquil Guardian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Tranquil%20Guardian
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Touch of Serenity (Su); Serene Strike (Su); Divine Bond (Su); Aura of Calm (Su); Waves of Peace (Su); Apostle of Peace (Su)
- **Replaced / altered class features:** smite evil; aura of courage; aura of resolve; aura of justice; holy champion

## Replacement details

### Replaces: smite evil

- **Archetype feature:** Touch of Serenity (Su)
- **Description:** At 1st level, a tranquil guardian gains Touch of Serenity as a bonus feat, even if she does not meet the prerequisites.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 6.
  - Mechanics summary: At 1st level, a tranquil guardian gains Touch of Serenity as a bonus feat, even if she does not meet the prerequisites. At 6th level, and every six levels thereafter, the duration of a tranquil guardian’s Touch of Serenity increases by 1 round. Each round on its turn, the target may attempt a new Will save to end the effect.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, saving throw hook, smite hook.

### Replaces: aura of courage

- **Archetype feature:** Serene Strike (Su)
- **Description:** At 3rd level, when a tranquil guardian confirms a critical hit, she may convert all damage from her attack to nonlethal damage, and when she does, she can activate Touch of Serenity through her weapon or unarmed strike.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, when a tranquil guardian confirms a critical hit, she may convert all damage from her attack to nonlethal damage, and when she does, she can activate Touch of Serenity through her weapon or unarmed strike. Using serene strike is a free action.
- **Implementation flags:**
  - Likely existing hooks: rage/rage-power hook.

### Replaces: aura of resolve

- **Archetype feature:** Aura of Calm (Su)
- **Description:** At 8th level, a tranquil guardian is immune to all spells and spell-like abilities with the emotion descriptor, as well as all fear effects.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a tranquil guardian is immune to all spells and spell-like abilities with the emotion descriptor, as well as all fear effects. Each ally within 10 feet of her gains a +4 morale bonus on saving throws against these effects.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: aura of justice

- **Archetype feature:** Waves of Peace (Su)
- **Description:** At 11th level, a tranquil guardian may expend 2 uses of her Touch of Serenity to affect each opponent within 5 feet of her with that effect.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a tranquil guardian may expend 2 uses of her Touch of Serenity to affect each opponent within 5 feet of her with that effect. She does not need to touch the creature for the effect to take hold.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: holy champion

- **Archetype feature:** Apostle of Peace (Su)
- **Description:** At 20th level, a tranquil guardian’s DR increases to 10/evil, and whenever she channels positive energy or uses lay on hands to heal, she heals the maximum possible amount.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a tranquil guardian’s DR increases to 10/evil, and whenever she channels positive energy or uses lay on hands to heal, she heals the maximum possible amount. In addition, any creature struck by her Touch of Serenity, even if it saves, must make an additional Will save (DC 10 + 1/2 her tranquil guardian level + her Charisma modifier) the next time it tries to attack. If it fails this save, the attack (including spells or special abilities) automatically fails.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook.

## Parsed source feature headings

- Touch of Serenity (Su)
- Serene Strike (Su)
- Divine Bond (Su)
- Aura of Calm (Su)
- Waves of Peace (Su)
- Apostle of Peace (Su)

