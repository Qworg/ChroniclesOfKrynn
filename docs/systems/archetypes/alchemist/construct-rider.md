# Alchemist - Construct Rider

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Construct Rider
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Construct%20Rider
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Craft Mount (Su); Diminished Extracts; Construct Rider Discoveries (Su)
- **Replaced / altered class features:** Brew Potion, mutagen, and the discovery gained at 4th level

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Class Skills
- **Description:** The construct rider gains Ride (Dex) and Knowledge (engineering) (Int) as class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** The construct rider gains Ride (Dex) and Knowledge (engineering) (Int) as class skills.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Replaces: Brew Potion, mutagen, and the discovery gained at 4th level

- **Archetype feature:** Craft Mount (Su)
- **Description:** A construct rider assembles a construct mount shaped like a riding animal.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** A construct rider assembles a construct mount shaped like a riding animal. A Medium alchemist can select a camel or a horse. A Small alchemist can select a pony or wolf, but can also select a boar or a dog if he’s at least 4th level. The GM may approve other animals as mounts. This construct mount acts in most ways as a druid animal companion, using the character’s alchemist level as his effective druid level. A construct mount is a construct, but uses the appropriate animal companion’s statistics, gaining Hit Dice, skills, feats, and Strength and Dexterity adjustments as the alchemist advances in level. A construct mount has no Constitution score, and instead gains bonus hit points appropriate for a construct of its size. It has an Intelligence score (and skill points), a lower base attack bonus, and better saving throws than a normal construct of its Hit Dice. The mount has all the immunities of a construct (except immunity to mind-affecting effects, since it has a mind). A construct rider can use Craft (alchemy) instead of Handle Animal for all purposes involving his construct mount, though the check still takes a –5 penalty due to the construct mount’s unusual nature. To create a construct with a mind and body that are constantly changing and improving, the construct rider must manufacture vast quantities of clockwork or animating reagents. As such, the construct rider can never gain the mutagen or cognatogen ability, even from a discovery or another class. At first, his mount is a singular masterpiece created during a momentary stroke of brilliance. At 4th level, the construct rider gains Craft Construct as a bonus feat and can use his extracts instead of spells to meet spell prerequisites when crafting other constructs.
- **Implementation flags:**
  - animal companion progression.
  - ki subsystem.
  - crafting subsystem.
  - feat grant/prerequisite handling.
  - skill/class-skill modification.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Diminished Extracts
- **Description:** A construct rider may prepare one fewer extract of each level than normal.
- **Detailed mechanics:**
  - **Rules text to implement:** A construct rider may prepare one fewer extract of each level than normal. If this reduces the number to 0, he may prepare extracts of that level only if his Intelligence allows bonus extracts of that level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Construct Rider Discoveries (Su)
- **Description:** The construct rider can select from the following archetype-specific discoveries in place of an alchemist discovery.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 8, 10.
  - **Rules text to implement:** The construct rider can select from the following archetype-specific discoveries in place of an alchemist discovery. Internal Reservoir (Ex, Sp) : The construct mount contains a reservoir tank than the construct rider can fill with one dose of a potion or extract the construct rider created. As a move action that doesn’t provoke an attack of opportunity, the construct mount can apply the potion or extract to itself. Refilling the reservoir is a complicated process that requires a DC 20 Craft (alchemy) check. Failure destroys the potion or extract. The process requires 1 minute, and provokes attacks of opportunity. A construct rider must be at least 6th level before selecting this discovery. Vaporizing Reservoir (Ex, Su) : The construct rider upgrades his mount’s reservoir, adding a compartment near the mouth which stores a bomb. Loading the bomb requires the same process as loading an extract or potion. A construct mount loaded with a bomb can unleash it as a breath weapon in a 15-foot cone or a 30-foot line as a standard action, dealing damage as a direct hit against all targets in the area of effect. The alchemist selects a line or cone area when loading the reservoir. Because the construct mount lacks the alchemist’s Throw Anything ability, the alchemist’s Intelligence bonus doesn’t apply to this damage. A construct rider must be at least 8th level and possess the internal reservoir discovery before selecting this discovery. Widened Vaporizer (Su) : When the construct mount uses its breath weapon from the vaporizing reservoir discovery, it can also unleash a 30-foot cone or a 60-foot line. A construct rider must be at least 10th level and possess the internal reservoir and vaporizing reservoir discoveries before selecting this discovery.
- **Implementation flags:**
  - crafting subsystem.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Class Skills
- Craft Mount (Su)
- Diminished Extracts
- Construct Rider Discoveries (Su)
