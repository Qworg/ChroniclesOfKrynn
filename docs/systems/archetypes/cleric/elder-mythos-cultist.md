# Cleric - Elder Mythos Cultist

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Elder Mythos Cultist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Elder%20Mythos%20Cultist
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Deities; Domain; Forbidden Knowledge (Ex); Unhinged Mind (Ex); Channel the Void (Su); Maddening Gaze (Su)
- **Replaced / altered class features:** the increases to channel energy gained at 5th, 11th, and 19th levels

## Replacement details

### Alters: the cleric’s required alignment

- **Archetype feature:** Alignment
- **Description:** An Elder Mythos cultist must be chaotic evil or chaotic neutral.
- **Mechanics:**
  - Mechanics summary: An Elder Mythos cultist must be chaotic evil or chaotic neutral.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: domains

- **Archetype feature:** Domain
- **Description:** An Elder Mythos cultist receives only a single domain, chosen from the following list: Chaos, Madness, or Void.
- **Mechanics:**
  - Mechanics summary: An Elder Mythos cultist receives only a single domain, chosen from the following list: Chaos, Madness, or Void. He can choose any subdomain of those domains offered by an Outer God or Great Old One he worships.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook.

### Alters: the listed effect for negative energy

- **Archetype feature:** Channel the Void (Su)
- **Description:** At 1st level, when an Elder Mythos cultist channels energy, he taps into the unthinkable void between the stars.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 8.
  - Mechanics summary: At 1st level, when an Elder Mythos cultist channels energy, he taps into the unthinkable void between the stars. This is similar to channeling negative energy, but instead of healing undead, this blast of energy harms and devours living beings, corporeal non-skeletal undead, and constructs crafted from flesh (such as flesh golems). This is not negative energy damage; instead, the damage manifests in the form of wounds from supernatural deterioration and rot. A creature that would take damage from this energy can attempt a Fortitude save to halve the damage, rather than a Will save. At 8th level, a creature that both fails the Fortitude save and would be killed or destroyed by this effect is entirely disintegrated, leaving behind only a trace of fine dust. This ability still counts as channel energy, but it counts as neither positive nor negative energy specifically (for example, the Elder Mythos cultist couldn't take the Turn Undead or Command Undead feat).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, saving throw hook, smite hook, ki/monk hook.

### Alters: channel energy and replaces spontaneous casting

- **Archetype feature:** Channel the Void (Su)
- **Description:** At 1st level, when an Elder Mythos cultist channels energy, he taps into the unthinkable void between the stars.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 8.
  - Mechanics summary: At 1st level, when an Elder Mythos cultist channels energy, he taps into the unthinkable void between the stars. This is similar to channeling negative energy, but instead of healing undead, this blast of energy harms and devours living beings, corporeal non-skeletal undead, and constructs crafted from flesh (such as flesh golems). This is not negative energy damage; instead, the damage manifests in the form of wounds from supernatural deterioration and rot. A creature that would take damage from this energy can attempt a Fortitude save to halve the damage, rather than a Will save. At 8th level, a creature that both fails the Fortitude save and would be killed or destroyed by this effect is entirely disintegrated, leaving behind only a trace of fine dust. This ability still counts as channel energy, but it counts as neither positive nor negative energy specifically (for example, the Elder Mythos cultist couldn't take the Turn Undead or Command Undead feat).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, saving throw hook, smite hook, ki/monk hook.

### Replaces: the increases to channel energy gained at 5th, 11th
- **Archetype feature:** Maddening Gaze (Su)
- **Description:** At 5th level, as a standard action, an Elder Mythos cultist can focus his gaze on a single living creature within 30 feet and inundate the creature’s mind with visions of alien horror.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 11, 19.
  - Mechanics summary: At 5th level, as a standard action, an Elder Mythos cultist can focus his gaze on a single living creature within 30 feet and inundate the creature’s mind with visions of alien horror. The target takes 2 points of Wisdom damage and becomes confused and sickened for 1d4 rounds. A successful Will save (DC = 10 + 1/2 the Elder Mythos cultist’s cleric level + his Charisma modifier) negates the Wisdom damage and the confusion effect, though the target is sickened for 1 round. This gaze attack is a mind-affecting effect. An Elder Mythos cultist can use this ability once per day at 5th level, plus an additional time per day for every 3 cleric levels thereafter. At 11th level, the target takes 1d6+1 points of Wisdom damage and is confused and sickened for 2d4 rounds.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.

### Replaces: 19th levels

- **Archetype feature:** Maddening Gaze (Su)
- **Description:** At 5th level, as a standard action, an Elder Mythos cultist can focus his gaze on a single living creature within 30 feet and inundate the creature’s mind with visions of alien horror.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 5, 11, 19.
  - Mechanics summary: At 5th level, as a standard action, an Elder Mythos cultist can focus his gaze on a single living creature within 30 feet and inundate the creature’s mind with visions of alien horror. The target takes 2 points of Wisdom damage and becomes confused and sickened for 1d4 rounds. A successful Will save (DC = 10 + 1/2 the Elder Mythos cultist’s cleric level + his Charisma modifier) negates the Wisdom damage and the confusion effect, though the target is sickened for 1 round. This gaze attack is a mind-affecting effect. An Elder Mythos cultist can use this ability once per day at 5th level, plus an additional time per day for every 3 cleric levels thereafter. At 11th level, the target takes 1d6+1 points of Wisdom damage and is confused and sickened for 2d4 rounds.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation.

## Parsed source feature headings

- Deities
- Domain
- Forbidden Knowledge (Ex)
- Unhinged Mind (Ex)
- Channel the Void (Su)
- Maddening Gaze (Su)

