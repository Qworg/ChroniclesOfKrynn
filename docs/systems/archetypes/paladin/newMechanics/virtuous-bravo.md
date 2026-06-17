# Paladin - Virtuous Bravo

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Virtuous Bravo
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Virtuous%20Bravo
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Bravo’s Finesse (Ex); Bravo’s Smite (Su); Nimble (Ex); Panache and Deeds (Ex); Advanced Deeds (Ex); Bravo’s Holy Strike (Su)
- **Replaced / altered class features:** mercy; the paladin’s spellcasting; aura of justice; holy champion

## Implementation details

### Alters: the paladin’s armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** Virtuous bravos aren’t proficient with heavy armor or shields (except for bucklers).
- **Detailed mechanics:**
  - **Rules text to implement:** Virtuous bravos aren’t proficient with heavy armor or shields (except for bucklers).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bravo’s Finesse (Ex)
- **Description:** A virtuous bravo can use her Dexterity modifier instead of her Strength modifier on attack rolls with light or one-handed piercing melee weapons (though if she carries a shield, she applies its armor check penalty to such attack rolls), and she can use her Charisma score in place of her Intelligence score to meet prerequisites of combat feats.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A virtuous bravo can use her Dexterity modifier instead of her Strength modifier on attack rolls with light or one-handed piercing melee weapons (though if she carries a shield, she applies its armor check penalty to such attack rolls), and she can use her Charisma score in place of her Intelligence score to meet prerequisites of combat feats. This ability counts as having the Weapon Finesse feat for the purpose of meeting feat prerequisites.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: smite evil

- **Archetype feature:** Bravo’s Smite (Su)
- **Description:** When using smite evil, a virtuous bravo doesn’t gain a deflection bonus to AC.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** When using smite evil, a virtuous bravo doesn’t gain a deflection bonus to AC.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: mercy

- **Archetype feature:** Nimble (Ex)
- **Description:** At 3rd level, a virtuous bravo gains a +1 dodge bonus to AC while wearing light armor or no armor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 19.
  - **Rules text to implement:** At 3rd level, a virtuous bravo gains a +1 dodge bonus to AC while wearing light armor or no armor. Anything that causes the virtuous bravo to lose her Dexterity bonus to AC also causes her to lose this dodge bonus. This bonus increases by 1 for every 4 paladin levels beyond 3rd (to a maximum of +5 at 19th level).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: the paladin’s spellcasting

- **Archetype feature:** Panache and Deeds (Ex)
- **Description:** At 4th level, a virtuous bravo gains the swashbuckler’s panache class feature along with the following swashbuckler deeds: dodging panache, menacing swordplay, opportune parry and riposte, precise strike, and swashbuckler initiative.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a virtuous bravo gains the swashbuckler’s panache class feature along with the following swashbuckler deeds: dodging panache, menacing swordplay, opportune parry and riposte, precise strike, and swashbuckler initiative. The virtuous bravo’s paladin levels stack with any swashbuckler levels when using these deeds.
- **Implementation flags:**
  - panache subsystem.
  - feat grant/prerequisite handling.

### Replaces: aura of justice

- **Archetype feature:** Advanced Deeds (Ex)
- **Description:** At 11th level, a virtuous bravo gains the following swashbuckler deeds: bleeding wound, evasive, subtle blade, superior feint, swashbuckler’s grace, and targeted strike.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a virtuous bravo gains the following swashbuckler deeds: bleeding wound, evasive, subtle blade, superior feint, swashbuckler’s grace, and targeted strike.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: holy champion

- **Archetype feature:** Bravo’s Holy Strike (Su)
- **Description:** At 20th level, a virtuous bravo becomes a master at dispensing holy justice with her blade.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a virtuous bravo becomes a master at dispensing holy justice with her blade. When the virtuous bravo confirms a critical hit with a light or one-handed piercing melee weapon, she can choose one of the following three effects in addition to dealing damage: the target is rendered unconscious for 1d4 hours, the target is paralyzed for 2d6 rounds, or the target is slain. Regardless of the effect chosen, the target can attempt a Fortitude save. On a success, the target is instead stunned for 1 round (it still takes damage). The DC of this save is equal to 10 + 1/2 the virtuous bravo’s paladin level + her Charisma modifier. Once a creature has been the target of a bravo’s holy strike, regardless of whether or not it succeeds at the save, that creature is immune to that bravo’s holy strike for 24 hours. Creatures that are immune to critical hits are also immune to this ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Weapon and Armor Proficiency
- Bravo’s Finesse (Ex)
- Bravo’s Smite (Su)
- Nimble (Ex)
- Panache and Deeds (Ex)
- Advanced Deeds (Ex)
- Bravo’s Holy Strike (Su)
