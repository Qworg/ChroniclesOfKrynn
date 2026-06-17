# Cleric - Elder Mythos Cultist

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Elder Mythos Cultist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Elder%20Mythos%20Cultist
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Deities; Domain; Forbidden Knowledge (Ex); Unhinged Mind (Ex); Channel the Void (Su); Maddening Gaze (Su)
- **Replaced / altered class features:** the increases to channel energy gained at 5th, 11th, and 19th levels

## Implementation details

### Alters: the cleric’s required alignment

- **Archetype feature:** Alignment
- **Description:** An Elder Mythos cultist must be chaotic evil or chaotic neutral.
- **Detailed mechanics:**
  - **Rules text to implement:** An Elder Mythos cultist must be chaotic evil or chaotic neutral.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Deities
- **Description:** An Elder Mythos cultist must worship an Outer God or Great Old One.
- **Detailed mechanics:**
  - **Rules text to implement:** An Elder Mythos cultist must worship an Outer God or Great Old One.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: domains

- **Archetype feature:** Domain
- **Description:** An Elder Mythos cultist receives only a single domain, chosen from the following list: Chaos, Madness, or Void.
- **Detailed mechanics:**
  - **Rules text to implement:** An Elder Mythos cultist receives only a single domain, chosen from the following list: Chaos, Madness, or Void. He can choose any subdomain of those domains offered by an Outer God or Great Old One he worships.
- **Implementation flags:**
  - domain system.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Forbidden Knowledge (Ex)
- **Description:** An Elder Mythos cultist gains a +2 profane bonus on all Knowledge (arcana), Knowledge (dungeoneering), Knowledge (history), Knowledge (planes), and Knowledge (religion) checks, and can attempt these checks untrained.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An Elder Mythos cultist gains a +2 profane bonus on all Knowledge (arcana), Knowledge (dungeoneering), Knowledge (history), Knowledge (planes), and Knowledge (religion) checks, and can attempt these checks untrained. This bonus doubles if the check is related to the Elder Mythos.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Unhinged Mind (Ex)
- **Description:** Bartering sanity for unspeakable knowledge, an Elder Mythos cultist props up his crumbling sanity with a darkly enigmatic personality.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Bartering sanity for unspeakable knowledge, an Elder Mythos cultist props up his crumbling sanity with a darkly enigmatic personality. An Elder Mythos cultist uses Charisma instead of Wisdom as his key spellcasting ability score (to determine his spell DCs, bonus spells per day, bonus on concentration checks, and so on), to determine the effects and umber of uses of his domain powers, and to modify his Will saving throws. However, because of the fragile state of his mind, the Elder Mythos cultist takes a –2 penalty on Will saves to resist mind-affecting effects. An Elder Mythos cultist automatically fails any save to resist the effects of confusion, insanity, and nightmare, and other similar effects so long as the effect’s caster level is higher than his character level.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: the listed effect for negative energy

- **Archetype feature:** Channel the Void (Su)
- **Description:** At 1st level, when an Elder Mythos cultist channels energy, he taps into the unthinkable void between the stars.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 8.
  - **Rules text to implement:** At 1st level, when an Elder Mythos cultist channels energy, he taps into the unthinkable void between the stars. This is similar to channeling negative energy, but instead of healing undead, this blast of energy harms and devours living beings, corporeal non-skeletal undead, and constructs crafted from flesh (such as flesh golems). This is not negative energy damage; instead, the damage manifests in the form of wounds from supernatural deterioration and rot. A creature that would take damage from this energy can attempt a Fortitude save to halve the damage, rather than a Will save. At 8th level, a creature that both fails the Fortitude save and would be killed or destroyed by this effect is entirely disintegrated, leaving behind only a trace of fine dust. A disintegrated creature's equipment is unaffected. This ability still counts as channel energy, but it counts as neither positive nor negative energy specifically (for example, the Elder Mythos cultist couldn't take the Turn Undead or Command Undead feat). For the purposes of feats that require channel energy but refer to what happens if the character channels positive or negative energy, For instance, an Elder Mythos cultist could use Channel Smite to damage living or fleshy creatures with his melee attack.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Alters: channel energy and replaces spontaneous casting

- **Archetype feature:** Channel the Void (Su)
- **Description:** At 1st level, when an Elder Mythos cultist channels energy, he taps into the unthinkable void between the stars.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 8.
  - **Rules text to implement:** At 1st level, when an Elder Mythos cultist channels energy, he taps into the unthinkable void between the stars. This is similar to channeling negative energy, but instead of healing undead, this blast of energy harms and devours living beings, corporeal non-skeletal undead, and constructs crafted from flesh (such as flesh golems). This is not negative energy damage; instead, the damage manifests in the form of wounds from supernatural deterioration and rot. A creature that would take damage from this energy can attempt a Fortitude save to halve the damage, rather than a Will save. At 8th level, a creature that both fails the Fortitude save and would be killed or destroyed by this effect is entirely disintegrated, leaving behind only a trace of fine dust. A disintegrated creature's equipment is unaffected. This ability still counts as channel energy, but it counts as neither positive nor negative energy specifically (for example, the Elder Mythos cultist couldn't take the Turn Undead or Command Undead feat). For the purposes of feats that require channel energy but refer to what happens if the character channels positive or negative energy, For instance, an Elder Mythos cultist could use Channel Smite to damage living or fleshy creatures with his melee attack.
- **Implementation flags:**
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.

### Replaces: the increases to channel energy gained at 5th, 11th, and 19th levels

- **Archetype feature:** Maddening Gaze (Su)
- **Description:** At 5th level, as a standard action, an Elder Mythos cultist can focus his gaze on a single living creature within 30 feet and inundate the creature’s mind with visions of alien horror.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 11, 19.
  - **Rules text to implement:** At 5th level, as a standard action, an Elder Mythos cultist can focus his gaze on a single living creature within 30 feet and inundate the creature’s mind with visions of alien horror. The target takes 2 points of Wisdom damage and becomes confused and sickened for 1d4 rounds. A successful Will save (DC = 10 + 1/2 the Elder Mythos cultist’s cleric level + his Charisma modifier) negates the Wisdom damage and the confusion effect, though the target is sickened for 1 round. This gaze attack is a mind-affecting effect. An Elder Mythos cultist can use this ability once per day at 5th level, plus an additional time per day for every 3 cleric levels thereafter. At 11th level, the target takes 1d6+1 points of Wisdom damage and is confused and sickened for 2d4 rounds. A successful Will save reduces the Wisdom damage to 1 point, and the target is instead sickened for 1d6 rounds. At 19th level, the target takes 2d6 points of Wisdom damage and is rendered permanently confused and sickened. Only greater restoration, heal, limited wish, miracle, or wish can remove the confused and sickened conditions. A successful Will save halves the Wisdom damage, and the target is instead sickened for 2d6 rounds.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Alignment
- Deities
- Domain
- Forbidden Knowledge (Ex)
- Unhinged Mind (Ex)
- Channel the Void (Su)
- Maddening Gaze (Su)
