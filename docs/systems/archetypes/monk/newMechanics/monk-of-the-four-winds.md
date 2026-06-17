# Monk - Monk of the Four Winds

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Four Winds
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Four%20Winds
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Elemental Fist (Su); Slow Time (Su); Aspect Master (Su); Immortality (Su)
- **Replaced / altered class features:** Stunning Fist; abundant step; timeless body; perfect self

## Implementation details

### Replaces: Stunning Fist

- **Archetype feature:** Elemental Fist (Su)
- **Description:** At 1st level, a monk of the four winds gains Elemental Fist as a bonus feat, even if he does not meet the prerequisites.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 5, 10.
  - **Rules text to implement:** At 1st level, a monk of the four winds gains Elemental Fist as a bonus feat, even if he does not meet the prerequisites. At 5th level, and every five levels thereafter, the monk increases the damage of his Elemental Fist by 1d6 (2d6 at 5th level, 3d6 at 10th level, and so on).
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: abundant step

- **Archetype feature:** Slow Time (Su)
- **Description:** At 12th level, a monk of the four winds can use his ki to slow time or quicken his movements, depending on the observer.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a monk of the four winds can use his ki to slow time or quicken his movements, depending on the observer. As a swift action, the monk can expend 6 ki points to gain three standard actions during his turn instead of just one. The monk can use these actions to do the following: take a melee attack action, use a skill, use an extraordinary ability, or take a move action. The monk cannot use these actions to cast spells or use spell-like abilities, and cannot combine them to take full-attack actions. Any move actions the monk makes this turn do not provoke attacks of opportunity.
- **Implementation flags:**
  - ki subsystem.
  - spell-like ability support.
  - skill/class-skill modification.

### Replaces: timeless body

- **Archetype feature:** Aspect Master (Su)
- **Description:** At 17th level, a monk of the four winds must choose an aspect of one of the great spirits of the world.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a monk of the four winds must choose an aspect of one of the great spirits of the world. Once made, this choice cannot be changed. This spirit grants the monk a new appearance and new abilities, as well as changing or augmenting the monk’s personality in some way. Once this choice is made, it cannot be changed. The monk must abide by the alignment restrictions of the aspect. If the monk ever changes his alignment to something outside the aspect’s alignment restrictions, he loses this ability and cannot regain it unless his alignment later changes again to match that of the aspect. Aspect of the Carp : The monk’s skin becomes a coat of golden, iridescent fish scales, his neck grows gills, and his fingers become webbed. He can breathe water and gains a swim speed equal to his land speed. The carp is heroic and adventurous—a monk must be nonevil to take on the aspect of the carp. Aspect of the Ki-Rin : The monk’s skin takes on a golden luminescence, and a silvery mane that cannot be bound grows atop his head. He gains a fly speed equal to his land speed, but he must end each turn on the ground. If the monk does not land by the end of his turn, he falls from whatever height he has attained. The ki-rin is honorable, honest, and self-sacrificing—a monk must be lawful good to take on the aspect of the ki-rin. Aspect of the Monkey : The monk’s face becomes that of a monkey, and he grows a prehensile tail. The monk can pick up objects and make unarmed attacks with his tail (though the tail does not grant additional unarmed attacks or natural attacks). In addition, the monk gains a climb speed equal to his land speed. The monkey is a creature of whimsy and a lover of pranks—a monk of any alignment can take on the aspect of the monkey. Aspect of the Oni : The monk’s skin becomes pitch black, and his hair turns white, black, red, or violet. He can assume gaseous form (as the spell) as a standard action for 1 minute per day per monk level. This duration does not need to be consecutive, but it must be spent in 1-minute increments. The oni is treacherous and deceitful, and it hungers for the pain and death of living creatures—a monk must be evil to take on the aspect of the oni. Aspect of the Owl : The monk grows feathers, and his head becomes avian, with wide, unblinking eyes. He gains a fly speed of 30 feet. The owl is a sage creature, deeply serious, and driven toward a single goal—a monk of any alignment can take on the aspect of the owl. Aspect of the Tiger : Dark stripes appear on the monk’s skin, and his face becomes more feline. His eyes become catlike, with vertical pupils, and his canines enlarge. Once per hour, the monk can move at 10 times his normal land speed when he makes a charge and is treated as if he had the pounce ability. The tiger is swift, fierce, and deadly—a monk of any alignment can take on the aspect of the tiger.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - flight/movement mode support.

### Replaces: perfect self

- **Archetype feature:** Immortality (Su)
- **Description:** At 20th level, a monk of the four winds no longer ages.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a monk of the four winds no longer ages. He remains in his current age category forever. Even if the monk comes to a violent end, he spontaneously reincarnates (as the spell) 24 hours later in a place of his choosing within 20 miles of the place he died. The monk must have visited the place in which he returns back to life at least once.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Elemental Fist (Su)
- Slow Time (Su)
- Aspect Master (Su)
- Immortality (Su)
