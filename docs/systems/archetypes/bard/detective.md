# Bard - Detective

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Detective
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Detective
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Eye for Detail (Ex); Arcane Insight (Ex); Arcane Investigation
- **Replaced / altered class features:** bardic knowledge; well-versed; versatile performance

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** A detective gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 9, 15, 20.
  - **Rules text to implement:** A detective gains the following types of bardic performance. Careful Teamwork (Su) : A detective uses performance to keep allies coordinated, alert, and ready for action. All allies within 30 feet gain a +1 bonus on Initiative checks, Perception, and Disable Device checks for 1 hour. They also gain a +1 insight bonus on Reflex saves and to AC against traps and when they are flat-footed. These bonuses increase by +1 at 5th level and every six levels thereafter. Using this ability requires 3 rounds of continuous performance, and the targets must be able to see and hear the bard throughout the performance. This ability is language-dependent and requires visual and audible components. This performance replaces inspire courage. True Confession (Su) : At 9th level, a detective can use performance to trick a creature into revealing its secrets. Using this ability requires a successful Sense Motive check to see through a Bluff or notice mental compulsion. After 3 continuous rounds of performance, the target must make a Will save (DC 10 + 1/2 the bard’s level + the bard’s Cha modifier). Success renders the target immune to this power for 24 hours. On a failed save, a liar inadvertently reveals the lie and the truth behind it. A creature under a charm or compulsion reveals the nature of its enchantment and who placed it (if the creature knows) and gains a new saving throw to break free from the enchantment. This ability is language-dependent and requires audible components. Using this power requires only 2 rounds of performance at 15th level, and 1 round of performance at 20th level. This performance replaces inspire greatness. Show Yourselves (Ex) : At 15th level, a detective can use performance to compel creatures to reveal themselves when hiding. All enemies within 30 feet must make a Will save (DC 10 + 1/2 the bard’s level + the bard’s Cha modifier). If they fail, they must cease using Stealth, unlock and open doors between themselves and the detective, and dismiss, suppress, or dispel if necessary magical effects that grant invisibility or any other form of concealment from the detective. As long as they can hear the performance, affected creatures may not attack or flee until they have eliminated every such effect, though they are freed from this compulsion immediately if attacked. Creatures in the area must make this save each round the bard continues his performance. This ability is language-dependent and requires audible components. This performance replaces inspire heroics.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: bardic knowledge

- **Archetype feature:** Eye for Detail (Ex)
- **Description:** A detective gains a bonus equal to half his level on Knowledge (local), Perception, and Sense Motive checks, as well as Diplomacy checks to gather information (minimum +1).
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A detective gains a bonus equal to half his level on Knowledge (local), Perception, and Sense Motive checks, as well as Diplomacy checks to gather information (minimum +1).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: well-versed

- **Archetype feature:** Arcane Insight (Ex)
- **Description:** At 2nd level, a detective can find and disable magical traps, like a rogue’s trapfinding ability.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a detective can find and disable magical traps, like a rogue’s trapfinding ability. In addition, he gains a +4 bonus on saving throws made against illusions and a +4 bonus on caster level checks and saving throws to see through disguises and protections against divination (such as magic aura, misdirection, and nondetection ).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: versatile performance

- **Archetype feature:** Arcane Investigation
- **Description:** In addition, a detective’s class spell list includes the following: 1st— detect chaos / evil / law / good ; 2nd— zone of truth ; 3rd— arcane eye, speak with dead, speak with plants ; 4th— discern lies ; 5th— prying eyes, stone tell ; 6th— discern location, find the path, greater prying eyes, moment of prescience.
- **Detailed mechanics:**
  - **Level hooks:** 2.
  - **Rules text to implement:** In addition, a detective’s class spell list includes the following: 1st— detect chaos / evil / law / good ; 2nd— zone of truth ; 3rd— arcane eye, speak with dead, speak with plants ; 4th— discern lies ; 5th— prying eyes, stone tell ; 6th— discern location, find the path, greater prying eyes, moment of prescience. A detective may add one of these spells or any divination spell on the bard spell list to his list of spells known at 2nd level and every four levels thereafter.
- **Implementation flags:**
  - archetype spell-list override.

## Parsed source feature headings

- Bardic Performance
- Eye for Detail (Ex)
- Arcane Insight (Ex)
- Arcane Investigation
