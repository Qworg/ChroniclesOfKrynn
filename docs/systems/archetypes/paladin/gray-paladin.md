# Paladin - Gray Paladin

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Gray Paladin
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Gray%20Paladin
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Weakened Grace; Code of Conduct; Enhanced Health (Ex); Smite Foe (Su); Aura of Subtlety (Sp, Su)
- **Replaced / altered class features:** the paladin’s code of conduct and associated abilities and alters the section on ex-paladins; divine health; channel positive energy and alters smite evil; aura of justice

## Replacement details

### Alters: the paladin’s alignment restrictions

- **Archetype feature:** Alignment
- **Description:** A gray paladin can be lawful good, lawful neutral, or neutral good, though she must still follow a lawful good, neutral good, or lawful neutral deity.
- **Mechanics:**
  - Mechanics summary: A gray paladin can be lawful good, lawful neutral, or neutral good, though she must still follow a lawful good, neutral good, or lawful neutral deity.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the paladin’s class skills

- **Archetype feature:** Class Skills
- **Description:** A gray paladin adds Bluff, Disguise, and Intimidate to her list of class skills.
- **Mechanics:**
  - Mechanics summary: A gray paladin adds Bluff, Disguise, and Intimidate to her list of class skills.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: smite evil, aura of courage, aura of resolve
- **Archetype feature:** Weakened Grace
- **Description:** A gray paladin’s loosened code weakens her connection to the power that grants her paladin abilities.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: A gray paladin’s loosened code weakens her connection to the power that grants her paladin abilities. She gains her first use of smite evil at 2nd level, instead of 1st, though she still gains further uses of smite evil at the rate listed on Table 3–11 of the Core Rulebook . She never gains the aura of good or divine grace class features.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, rage/rage-power hook, smite hook.

### Alters: aura of righteousness, and it replaces aura of good and divine grace

- **Archetype feature:** Weakened Grace
- **Description:** A gray paladin’s loosened code weakens her connection to the power that grants her paladin abilities.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: A gray paladin’s loosened code weakens her connection to the power that grants her paladin abilities. She gains her first use of smite evil at 2nd level, instead of 1st, though she still gains further uses of smite evil at the rate listed on Table 3–11 of the Core Rulebook . She never gains the aura of good or divine grace class features.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, rage/rage-power hook, smite hook.

### Replaces: the paladin’s code of conduct

- **Archetype feature:** Code of Conduct
- **Description:** A gray paladin must be of lawful good, lawful neutral, or neutral good alignment and loses all class features except proficiencies if she ever willingly commits an evil act (for example, casting a spell with the evil descriptor).
- **Mechanics:**
  - Mechanics summary: A gray paladin must be of lawful good, lawful neutral, or neutral good alignment and loses all class features except proficiencies if she ever willingly commits an evil act (for example, casting a spell with the evil descriptor). She should strive to act with honor and uphold the tenets of her faith, but failing to do so is not a violation of her code, and other than evil actions, she can do whatever else she feels is necessary to uphold the causes of law and good.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

### Replaces: associated abilities

- **Archetype feature:** Code of Conduct
- **Description:** A gray paladin must be of lawful good, lawful neutral, or neutral good alignment and loses all class features except proficiencies if she ever willingly commits an evil act (for example, casting a spell with the evil descriptor).
- **Mechanics:**
  - Mechanics summary: A gray paladin must be of lawful good, lawful neutral, or neutral good alignment and loses all class features except proficiencies if she ever willingly commits an evil act (for example, casting a spell with the evil descriptor). She should strive to act with honor and uphold the tenets of her faith, but failing to do so is not a violation of her code, and other than evil actions, she can do whatever else she feels is necessary to uphold the causes of law and good.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

### Replaces: alters the section on ex-paladins

- **Archetype feature:** Code of Conduct
- **Description:** A gray paladin must be of lawful good, lawful neutral, or neutral good alignment and loses all class features except proficiencies if she ever willingly commits an evil act (for example, casting a spell with the evil descriptor).
- **Mechanics:**
  - Mechanics summary: A gray paladin must be of lawful good, lawful neutral, or neutral good alignment and loses all class features except proficiencies if she ever willingly commits an evil act (for example, casting a spell with the evil descriptor). She should strive to act with honor and uphold the tenets of her faith, but failing to do so is not a violation of her code, and other than evil actions, she can do whatever else she feels is necessary to uphold the causes of law and good.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.

### Replaces: divine health

- **Archetype feature:** Enhanced Health (Ex)
- **Description:** At 3rd level, a gray paladin is far less a stranger to poisons than a normal paladin.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a gray paladin is far less a stranger to poisons than a normal paladin. She gains a +4 sacred bonus on all saving throws against poisons and diseases.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: channel positive energy

- **Archetype feature:** Smite Foe (Su)
- **Description:** At 4th level, a gray paladin can spend two uses of smite evil in order to smite a nongood creature that is not evil and gain her full benefits.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a gray paladin can spend two uses of smite evil in order to smite a nongood creature that is not evil and gain her full benefits. The gray paladin must truly believe that the creature she smites is an opponent to the cause of good. Even if this nonevil foe is an outsider, undead, or dragon, she doesn’t add increased damage to her first attack.
- **Implementation flags:**
  - Likely existing hooks: smite hook.

### Replaces: alters smite evil

- **Archetype feature:** Smite Foe (Su)
- **Description:** At 4th level, a gray paladin can spend two uses of smite evil in order to smite a nongood creature that is not evil and gain her full benefits.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a gray paladin can spend two uses of smite evil in order to smite a nongood creature that is not evil and gain her full benefits. The gray paladin must truly believe that the creature she smites is an opponent to the cause of good. Even if this nonevil foe is an outsider, undead, or dragon, she doesn’t add increased damage to her first attack.
- **Implementation flags:**
  - Likely existing hooks: smite hook.

### Replaces: aura of justice

- **Archetype feature:** Aura of Subtlety (Sp, Su)
- **Description:** At 11th level, a gray paladin learns how to protect herself from detection.
- **Mechanics:**
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a gray paladin learns how to protect herself from detection. She and her allies within 10 feet gain a +4 morale bonus on saving throws against divination effects. Furthermore, casters of divinations that target the gray paladin or her nearby allies must succeed at a caster level check as though the gray paladin and her nearby allies were under the effect of a nondetection spell cast by the gray paladin, with a caster level equal to the gray paladin’s paladin level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Class Skills
- Weakened Grace
- Code of Conduct
- Enhanced Health (Ex)
- Smite Foe (Su)
- Aura of Subtlety (Sp, Su)

