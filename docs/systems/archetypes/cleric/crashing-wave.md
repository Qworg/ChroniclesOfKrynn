# Cleric - Crashing Wave

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Crashing Wave
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Crashing%20Wave
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Sworn to the Sea; Speech of the Sea; Balanced Channel (Su); Spontaneous Casting; Spell Level; Sponantious Spell
- **Replaced / altered class features:** channel energy

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Sworn to the Sea
- **Description:** A crashing wave must select Gozreh as her deity.
- **Detailed mechanics:**
  - **Rules text to implement:** A crashing wave must select Gozreh as her deity.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: bonus languages

- **Archetype feature:** Speech of the Sea
- **Description:** A crashing wave’s bonus language options include Aquan in addition to the bonus languages available to the character from her race.
- **Detailed mechanics:**
  - **Rules text to implement:** A crashing wave’s bonus language options include Aquan in addition to the bonus languages available to the character from her race. The crashing wave does not gain Abyssal, Celestial, or Infernal as bonus language options.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: channel energy

- **Archetype feature:** Balanced Channel (Su)
- **Description:** At 1st level, a crashing wave can channel the pure balance of the ocean—its wildness, its calm, its cruelty, and its gentleness.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a crashing wave can channel the pure balance of the ocean—its wildness, its calm, its cruelty, and its gentleness. This energy can be used to harm or heal creatures, as the crashing wave chooses. Channeling this energy causes a 30-foot-radius burst centered on the cleric. Using balanced channel is a standard action that does not provoke attacks of opportunity. A crashing wave can choose whether to include herself in the effect. The cleric must be able to present her holy symbol to use this ability, and she can channel energy a number of times equal to 3 + her Charisma modifier. If the crashing wave chooses to harm, creatures within the burst that are chaotic good, chaotic evil, lawful good, or lawful evil take 1d6 points of damage plus 1d6 points of damage for every 2 levels the cleric has beyond 1st (2d6 at 3rd, 3d6 at 5th, and so on). Creatures with a neutral alignment component are unaffected by this energy. Creatures that take damage from the channeled energy can attempt a Fortitude save (DC = 10 + half the crashing wave’s level + her Charisma modifier) for half damage. This damage is neither negative nor positive energy, so a creature’s resistance to positive or negative energy does not reduce this damage. (However, resistance to channeled energy in particular, such as that provided by channel resistance, applies normally.) If the crashing wave chooses to heal, creatures within the burst that have any neutral alignment component are healed 1d6 points of damage plus 1d6 points of damage for every 2 levels the cleric has beyond 1st (2d6 at 3rd, 3d6 at 5th, and so on). This healing does not affect creatures that are chaotic good, chaotic evil, lawful good, or lawful evil. This healing is positive energy, so any creatures not healed by positive energy (such as undead) receive no healing from this effect, even if they have a neutral alignment.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: spontaneous casting

- **Archetype feature:** Spontaneous Casting
- **Description:** A crashing wave does not gain the ability to spontaneously cast cure or inflict spells by sacrificing prepared spells.
- **Detailed mechanics:**
  - **Rules text to implement:** A crashing wave does not gain the ability to spontaneously cast cure or inflict spells by sacrificing prepared spells. However, a crashing wave can spontaneously cast the following spells by sacrificing a prepared spell of the noted level or higher.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Sponantious Spell
- **Description:** 1 Bless water 2 Slipstream APG 3 Water breathing 4 Control water 5 Geyser APG 6 Fluid form APG 7 Elemental body IV (water only) 8 Seamantle APG 9 Elemental swarm (water only)
- **Detailed mechanics:**
  - **Rules text to implement:** 1 Bless water 2 Slipstream APG 3 Water breathing 4 Control water 5 Geyser APG 6 Fluid form APG 7 Elemental body IV (water only) 8 Seamantle APG 9 Elemental swarm (water only)
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Sworn to the Sea
- Speech of the Sea
- Balanced Channel (Su)
- Spontaneous Casting
- Sponantious Spell
