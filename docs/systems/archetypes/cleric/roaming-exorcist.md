# Cleric - Roaming Exorcist

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Roaming Exorcist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Roaming%20Exorcist
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Skill Ranks per Level; Dedicated Wanderer; Unseen Revealed (Ex); Spirit Sleuth (Ex); Curse Seeker (Su); Dispossession (Su); Curse Eater (Su)
- **Replaced / altered class features:** Skill Ranks; Weapon/Armor Proficiencies; Domains; Channel Energy

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Skill Ranks per Level
- **Description:** 4 + Int modifier.
- **Detailed mechanics:**
  - **Rules text to implement:** 4 + Int modifier.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Dedicated Wanderer
- **Description:** A roaming exorcist is dedicated to her cause and affords no time to other pursuits typical of clerics.
- **Detailed mechanics:**
  - **Rules text to implement:** A roaming exorcist is dedicated to her cause and affords no time to other pursuits typical of clerics. A roaming exorcist must choose to channel positive energy. She may choose only one domain from her deity’s list of domains, rather than the normal two domains, and she does not gain Medium Armor Proficiency or Shield Proficiency.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Unseen Revealed (Ex)
- **Description:** At 1st level, a roaming exorcist gains a bonus equal to 1/2 her cleric level (minimum +1) on Perception checks to detect haunts and incorporeal creatures and on Sense Motive checks to determine whether a creature is possessed, under the effects of an enchantment or curse, or otherwise magically controlled.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, a roaming exorcist gains a bonus equal to 1/2 her cleric level (minimum +1) on Perception checks to detect haunts and incorporeal creatures and on Sense Motive checks to determine whether a creature is possessed, under the effects of an enchantment or curse, or otherwise magically controlled.
- **Implementation flags:**
  - haunt subsystem.
  - curse subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Spirit Sleuth (Ex)
- **Description:** At 2nd level, upon interacting with a rejuvenating spirit or haunt for the first time (such as by attacking the spirit or channeling energy to damage the haunt), a roaming exorcist can attempt a Sense Motive check as a free action to determine the specific course of action required to permanently neutralize the spirit or haunt (DC = 10 + the undead creature’s Hit Dice or the haunt’s CR).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, upon interacting with a rejuvenating spirit or haunt for the first time (such as by attacking the spirit or channeling energy to damage the haunt), a roaming exorcist can attempt a Sense Motive check as a free action to determine the specific course of action required to permanently neutralize the spirit or haunt (DC = 10 + the undead creature’s Hit Dice or the haunt’s CR).
- **Implementation flags:**
  - ki subsystem.
  - haunt subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Curse Seeker (Su)
- **Description:** At 5th level, a roaming exorcist can more readily identify cursed items.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a roaming exorcist can more readily identify cursed items. When identifying a magic item, the roaming exorcist needs to exceed the item’s DC by only 5 (instead of by 10) in order to determine whether the item is cursed.
- **Implementation flags:**
  - curse subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Dispossession (Su)
- **Description:** At 8th level, a roaming exorcist can expend one use of her channel energy ability to force a possessing creature from its host body.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a roaming exorcist can expend one use of her channel energy ability to force a possessing creature from its host body. The exorcist must make a melee touch attack against the possessed creature; if successful, the roaming exorcist deals damage to the possessing creature as if it were targeted by the roaming exorcist’s channel energy ability (regardless of the possessing creature’s creature type), and the possession effect ceases as the possessing creature is ejected from the host body. A successful Will save (DC = the roaming exorcist’s channel energy DC) halves the damage taken, and the possessing creature resists being ejected from its host.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Curse Eater (Su)
- **Description:** At 11th level, a roaming exorcist gains Improved Disarm as a bonus feat, regardless of whether she meets the feat’s prerequisites.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a roaming exorcist gains Improved Disarm as a bonus feat, regardless of whether she meets the feat’s prerequisites. The roaming exorcist gains a +2 bonus on combat maneuver checks to disarm a creature of a magic item she knows to be cursed. If the roaming exorcist successfully disarms a creature of a cursed item without using a weapon, she may automatically pick up the disarmed cursed item without immediately succumbing to the item’s curse. She may wield or hold this cursed item for a number of rounds equal to her Charisma modifier (minimum 1 round)—during which time she may use the item normally, as if it were not cursed—before the item’s curse manifests again.
- **Implementation flags:**
  - curse subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Skill Ranks per Level
- Dedicated Wanderer
- Unseen Revealed (Ex)
- Spirit Sleuth (Ex)
- Curse Seeker (Su)
- Dispossession (Su)
- Curse Eater (Su)
