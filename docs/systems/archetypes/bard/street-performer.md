# Bard - Street Performer

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Street Performer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Street%20Performer
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Gladhanding; Streetwise; Quick Change (Ex)
- **Replaced / altered class features:** countersong; lore master

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bardic Performance
- **Description:** A street performer gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 3, 9, 15.
  - **Rules text to implement:** A street performer gains the following types of bardic performance. Disappearing Act (Su) : A street performer can use performance to divert attention from an ally. All creatures within 30 feet that fail a Will save (DC 10 + 1/2 the bard’s level + the bard’s Cha modifier) treat one creature chosen by the bard as if it were invisible. This performance affects one additional creature at 5th level and every 6 levels thereafter. If the targets take any action that would cause them to become visible, they become visible to everyone. The bard cannot use this ability on himself. This ability is a mind-affecting effect that requires visual components. This performance replaces inspire courage. Harmless Performer (Su) : At 3rd level, a street performer can use performance to appear meek and unworthy of being attacked. While using this performance, whenever an enemy targets the street performer, the enemy must succeed at a Will save (DC 10 + 1/2 the bard’s level + the bard’s Cha bonus) or be unable to attack the bard this round, as per sanctuary. The enemy loses the attack that targeted the bard, but may spend additional attacks targeting other creatures. If the opponent was targeting the street performer with a spell, it must succeed at a concentration check at the same DC or lose the spell. If this check succeeds, it may target another creature with the spell instead. This mind-affecting ability requires audible or visual components. This performance replaces inspire competence. Madcap Prank (Su) : At 9th level, a street performer can use performance to discomfit a target within 30 feet, causing its clothing to become tangled, its headgear to fall down over its eyes, or even causing it to slip and fall or otherwise be made to appear a fool. The target must make a Reflex save (DC 10 + 1/2 the bard’s level + the bard’s Cha modifier) each round that it hears or sees the performance, or it takes one of the following random effects each round: 1—blinded, 2—dazzled, 3—deafened, 4—entangled, 5—fall prone, 6—nauseated. Each effect lasts 1 round. This performance replaces inspire greatness. Slip through the Crowd (Su) : At 15th level, a street performer’s disappearing act enables affected creatures to move through crowd squares and enemy-occupied squares without impediment. Affected creatures are treated as if having greater invisibility, but enemies gain a new saving throw to notice them each time they are attacked. This performance replaces inspire heroics.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - feat grant/prerequisite handling.

### Replaces: countersong

- **Archetype feature:** Gladhanding
- **Description:** A street performer earns double the normal amount of money from Perform checks.
- **Detailed mechanics:**
  - **Rules text to implement:** A street performer earns double the normal amount of money from Perform checks. As a standard action, he may use a Bluff check in place of a Diplomacy check to improve a creature’s attitude for 1 minute, after which its attitude becomes one step worse than originally.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: bardic knowledge

- **Archetype feature:** Streetwise
- **Description:** A street performer gains a bonus equal to half his level on Bluff, Disguise, Knowledge (local), and Sleight of Hand checks, Diplomacy or Intimidate checks made to influence crowds, and Diplomacy checks to gather information (minimum +1).
- **Detailed mechanics:**
  - **Rules text to implement:** A street performer gains a bonus equal to half his level on Bluff, Disguise, Knowledge (local), and Sleight of Hand checks, Diplomacy or Intimidate checks made to influence crowds, and Diplomacy checks to gather information (minimum +1).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: lore master

- **Archetype feature:** Quick Change (Ex)
- **Description:** At 5th level, a street performer can don a disguise as a standard action by taking a –5 penalty on his check.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a street performer can don a disguise as a standard action by taking a –5 penalty on his check. He can take 10 on Bluff and Disguise checks and use Bluff to create a diversion to hide as a swift action. He can take 20 on a Bluff or Disguise check once per day, plus one time per six levels beyond 5th.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Bardic Performance
- Gladhanding
- Streetwise
- Quick Change (Ex)
