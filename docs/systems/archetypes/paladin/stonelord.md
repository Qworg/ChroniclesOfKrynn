# Paladin - Stonelord

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Stonelord
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Stonelord
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Stonestrike (Su); Heartstone (Ex); Stoneblood (Ex); Defensive Stance (Ex); Earth Channel (Su); Stone Servant (Su); Stonebane (Su); Phase Strike (Su); Mobile Defense (Ex); Stone Body (Ex)
- **Replaced / altered class features:** smite evil; divine grace; divine health and her mercies gained at 3rd, 9th, and 15th level; channel positive energy; divine bond; aura of justice; her 12th-level mercy; her 18th-level mercy; holy champion

## Implementation details

### Replaces: smite evil

- **Archetype feature:** Stonestrike (Su)
- **Description:** Once per day per paladin level, a stonelord can draw upon the power of the living rock.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5.
  - **Rules text to implement:** Once per day per paladin level, a stonelord can draw upon the power of the living rock. As a swift action, she treats her melee attacks until the beginning of her next turn (whether armed or unarmed) as magical and adamantine, including ignoring hardness up to twice her paladin level, with a +1 bonus on attack and damage rolls, as well as on combat maneuver checks. This bonus also applies to her CMD if she or her target is touching the ground or a stone structure. This bonus increases by +1 at 5th level and every 5 levels thereafter.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: divine grace

- **Archetype feature:** Heartstone (Ex)
- **Description:** At 2nd level, a stonelord’s flesh becomes progressively rockier.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6, 18.
  - **Rules text to implement:** At 2nd level, a stonelord’s flesh becomes progressively rockier. She gains a +1 natural armor bonus to AC and DR/adamantine equal to 1/2 her paladin level. The natural armor bonus increases by +1 at 6th level, and every four levels thereafter, to a maximum of +5 at 18th level. These benefits are halved when not touching the ground or a stone structure.
- **Implementation flags:**
  - ki subsystem.

### Replaces: divine health and her mercies gained at 3rd, 9th, and 15th level

- **Archetype feature:** Stoneblood (Ex)
- **Description:** At 3rd level, a stonelord’s vitals begin to calcify and her blood transforms into liquid stone.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 9, 15.
  - **Rules text to implement:** At 3rd level, a stonelord’s vitals begin to calcify and her blood transforms into liquid stone. She adds her paladin level on checks to stabilize at negative hit points and gains a 25% chance to ignore a critical hit or precision damage. This does not stack with fortification armor or similar effects. At 9th level, this chance increases to 50% and she becomes immune to petrification. At 15th level, this chance increases to 75% and she becomes immune to bleed and blood drain effects.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Defensive Stance (Ex)
- **Description:** At 4th level, a stonelord gains the defensive stance ability, as a stalwart defender ( Advanced Player’s Guide 277), and may select one defensive power at 8th level and every four levels thereafter.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8.
  - **Rules text to implement:** At 4th level, a stonelord gains the defensive stance ability, as a stalwart defender ( Advanced Player’s Guide 277), and may select one defensive power at 8th level and every four levels thereafter. Levels of stalwart defender stack with her paladin levels when determining the total number of rounds that she can maintain her defensive stance per day. A stonelord does not gain any spells or spellcasting abilities, does not have a caster level, and cannot use spell trigger or spell completion magic items.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: channel positive energy

- **Archetype feature:** Earth Channel (Su)
- **Description:** At 4th level, a stonelord gains Elemental Channel (earth) as a bonus feat, which she may activate by spending two uses of her lay on hands ability, using her paladin level as her effective cleric level.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, a stonelord gains Elemental Channel (earth) as a bonus feat, which she may activate by spending two uses of her lay on hands ability, using her paladin level as her effective cleric level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: divine bond

- **Archetype feature:** Stone Servant (Su)
- **Description:** At 5th level, a stonelord may call a Small earth elemental to her side, as a paladin calls her mount.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 8, 11, 14, 17, 20.
  - **Rules text to implement:** At 5th level, a stonelord may call a Small earth elemental to her side, as a paladin calls her mount. This earth elemental is Lawful Good in alignment and possesses the celestial template, and it increases in size as the stonelord gains levels, becoming Medium at 8th level, Large at 11th level, Huge at 14th level, Greater at 17th level, and Elder at 20th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of justice

- **Archetype feature:** Stonebane (Su)
- **Description:** At 11th level, when using stonestrike, a stonelord’s attack gains the bane weapon special ability against creatures with the earth subtype and constructs or objects made of earth or stone.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, when using stonestrike, a stonelord’s attack gains the bane weapon special ability against creatures with the earth subtype and constructs or objects made of earth or stone.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: her 12th-level mercy

- **Archetype feature:** Phase Strike (Su)
- **Description:** At 12th level, a stonelord’s stonestrike may pass through stone and metal as if they weren’t there.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a stonelord’s stonestrike may pass through stone and metal as if they weren’t there. By spending 2 uses of her stonestrike ability, she may ignore any cover less than total cover provided by stone or metal, and she ignores any AC bonus from stone or metal armor or shields as if wielding a brilliant energy weapon. A phase strike cannot damage constructs, objects, or creatures with the earth subtype, but unlike a brilliant energy weapon, it can harm undead.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: her 18th-level mercy

- **Archetype feature:** Mobile Defense (Ex)
- **Description:** At 18th level, a stonelord can make one 5-foot step per round while maintaining her defensive stance.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 18.
  - **Rules text to implement:** At 18th level, a stonelord can make one 5-foot step per round while maintaining her defensive stance.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: holy champion

- **Archetype feature:** Stone Body (Ex)
- **Description:** At 20th level, a stonelord's body transforms into living stone.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a stonelord's body transforms into living stone. She no longer needs to eat, drink, breathe, or sleep, and she becomes immune to paralysis, poison, and stunning. She is also no longer subject to critical hits or precision-based damage.
- **Implementation flags:**
  - poison subsystem.

## Parsed source feature headings

- Stonestrike (Su)
- Heartstone (Ex)
- Stoneblood (Ex)
- Defensive Stance (Ex)
- Earth Channel (Su)
- Stone Servant (Su)
- Stonebane (Su)
- Phase Strike (Su)
- Mobile Defense (Ex)
- Stone Body (Ex)
