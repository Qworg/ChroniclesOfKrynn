# Paladin - Mind Sword

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Mind Sword
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Mind%20Sword
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Mind Arsenal (Su); Touch Treatment (Su); Spells
- **Replaced / altered class features:** lay on hands; mercy; channel positive energy

## Implementation details

### Replaces: lay on hands

- **Archetype feature:** Mind Arsenal (Su)
- **Description:** At 2nd level, a mind sword can make a telekinetic attack with a melee weapon.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 2, 6, 12.
  - **Rules text to implement:** At 2nd level, a mind sword can make a telekinetic attack with a melee weapon. This functions as the hand of the apprentice universalist wizard school ability, but any calculations of that ability based on Intelligence are instead based on Charisma. At 6th level, a mind sword can expend two uses of this ability as a fullround action to attack the same opponent multiple times, as if using the full-attack action. At 12th level, a mind sword can expend one use of this ability as a full-round action to combine melee attacks and ranged attacks aimed at different targets within 60 feet as part of a single full-attack action.
- **Implementation flags:**
  - ki subsystem.

### Replaces: mercy

- **Archetype feature:** Touch Treatment (Su)
- **Description:** At 3rd level, a mind sword can expend one use of her mind arsenal ability to remove minor harmful mental conditions, as per the mesmerist touch treatment class feature ( Pathfinder RPG Occult Adventures 43).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 9, 15.
  - **Rules text to implement:** At 3rd level, a mind sword can expend one use of her mind arsenal ability to remove minor harmful mental conditions, as per the mesmerist touch treatment class feature ( Pathfinder RPG Occult Adventures 43). At 9th level, she can remove moderate conditions, and at 15th level, she can remove major conditions.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: channel positive energy

- **Archetype feature:** Spells
- **Description:** A mind sword adds the following psychic spells to her paladin spell list at the listed spell levels: 1st— detect psychic significance OA, mage hand, telekinetic projectile OA, thought shield I OA ; 2nd— apport object OA, enshroud thoughts OA, mental barrier I OA, thought shield II OA ; 3rd— intellect fortress I OA, mental barrier II OA, telekinetic maneuver OA, thought shield III OA ; 4th— intellect fortress II OA, telekinesis, thought shield IV OA, thoughtsense OA, tower of iron will I OA.
- **Detailed mechanics:**
  - **Rules text to implement:** A mind sword adds the following psychic spells to her paladin spell list at the listed spell levels: 1st— detect psychic significance OA, mage hand, telekinetic projectile OA, thought shield I OA ; 2nd— apport object OA, enshroud thoughts OA, mental barrier I OA, thought shield II OA ; 3rd— intellect fortress I OA, mental barrier II OA, telekinetic maneuver OA, thought shield III OA ; 4th— intellect fortress II OA, telekinesis, thought shield IV OA, thoughtsense OA, tower of iron will I OA. The mind sword can prepare and cast these psychic spells as divine paladin spells. However, the mind sword cannot use these spells for item creation, including making potions or scrolls of these spells.
- **Implementation flags:**
  - ki subsystem.
  - archetype spell-list override.

## Parsed source feature headings

- Mind Arsenal (Su)
- Touch Treatment (Su)
- Spells
