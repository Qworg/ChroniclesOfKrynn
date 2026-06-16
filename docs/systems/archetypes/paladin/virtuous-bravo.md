# Paladin - Virtuous Bravo

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Virtuous Bravo
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Virtuous%20Bravo
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Bravo’s Finesse (Ex); Bravo’s Smite (Su); Nimble (Ex); Panache and Deeds (Ex); Advanced Deeds (Ex); Bravo’s Holy Strike (Su)
- **Replaced / altered class features:** mercy; the paladin’s spellcasting; aura of justice; holy champion

## Replacement details

### Alters: the paladin’s armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Virtuous bravos aren’t proficient with heavy armor or shields (except for bucklers).
- **Mechanics:**
  - Mechanics summary: Virtuous bravos aren’t proficient with heavy armor or shields (except for bucklers).
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: smite evil

- **Archetype feature:** Bravo’s Smite (Su)
- **Description:** When using smite evil, a virtuous bravo doesn’t gain a deflection bonus to AC.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: When using smite evil, a virtuous bravo doesn’t gain a deflection bonus to AC.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, smite hook.

### Replaces: mercy

- **Archetype feature:** Nimble (Ex)
- **Description:** At 3rd level, a virtuous bravo gains a +1 dodge bonus to AC while wearing light armor or no armor.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 19.
  - Mechanics summary: At 3rd level, a virtuous bravo gains a +1 dodge bonus to AC while wearing light armor or no armor. Anything that causes the virtuous bravo to lose her Dexterity bonus to AC also causes her to lose this dodge bonus. This bonus increases by 1 for every 4 paladin levels beyond 3rd (to a maximum of +5 at 19th level).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, paladin mercy hook.

### Replaces: the paladin’s spellcasting

- **Archetype feature:** Panache and Deeds (Ex)
- **Description:** At 4th level, a virtuous bravo gains the swashbuckler’s panache class feature along with the following swashbuckler deeds: dodging panache, menacing swordplay, opportune parry and riposte, precise strike, and swashbuckler initiative.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a virtuous bravo gains the swashbuckler’s panache class feature along with the following swashbuckler deeds: dodging panache, menacing swordplay, opportune parry and riposte, precise strike, and swashbuckler initiative. The virtuous bravo’s paladin levels stack with any swashbuckler levels when using these deeds.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook.
  - Needs implementation review: panache resource, deed subsystem, swashbuckler class mechanics.

### Replaces: aura of justice

- **Archetype feature:** Advanced Deeds (Ex)
- **Description:** At 11th level, a virtuous bravo gains the following swashbuckler deeds: bleeding wound, evasive, subtle blade, superior feint, swashbuckler’s grace, and targeted strike.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a virtuous bravo gains the following swashbuckler deeds: bleeding wound, evasive, subtle blade, superior feint, swashbuckler’s grace, and targeted strike.
- **Implementation flags:**
  - Needs implementation review: deed subsystem, swashbuckler class mechanics.

### Replaces: holy champion

- **Archetype feature:** Bravo’s Holy Strike (Su)
- **Description:** At 20th level, a virtuous bravo becomes a master at dispensing holy justice with her blade.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a virtuous bravo becomes a master at dispensing holy justice with her blade. When the virtuous bravo confirms a critical hit with a light or one-handed piercing melee weapon, she can choose one of the following three effects in addition to dealing damage: the target is rendered unconscious for 1d4 hours, the target is paralyzed for 2d6 rounds, or the target is slain. Regardless of the effect chosen, the target can attempt a Fortitude save. On a success, the target is instead stunned for 1 round (it still takes damage). The DC of this save is equal to 10 + 1/2 the virtuous bravo’s paladin level + her Charisma modifier. Once a creature has been the target of a bravo’s holy strike, regardless of whether or not it succeeds at the save, that creature is immune to that bravo’s holy strike for 24 hours.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Bravo’s Finesse (Ex)
- Bravo’s Smite (Su)
- Nimble (Ex)
- Panache and Deeds (Ex)
- Advanced Deeds (Ex)
- Bravo’s Holy Strike (Su)

