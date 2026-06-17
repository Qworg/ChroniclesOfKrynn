# Ranger - Hooded Champion

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Hooded Champion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Hooded%20Champion
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Panache (Ex); Deeds; Combat Style
- **Replaced / altered class features:** favored enemy at 1st level; wild empathy, endurance, evasion, and improved evasion

## Implementation details

### Replaces: favored enemy at 1st level

- **Archetype feature:** Panache (Ex)
- **Description:** At 1st level, the hooded champion gains the swashbuckler’s panache class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, the hooded champion gains the swashbuckler’s panache class feature. He regains panache through critical hits and killing blows when using a bow of any kind, rather than when using a light or one-handed piercing melee weapon. If the hooded champion has this ability and the panache ability from another class or archetype, the panache points from the two sources do not stack, but the hooded champion regains panache in any way either class feature allows him to. For example, a character with a Charisma score of 16 who has both the hooded champion’s and the swashbuckler’s panache has a base of 3 panache points, and regains panache from critical hits and killing blows from both bows and light or one-handed piercing melee weapons.
- **Implementation flags:**
  - ki subsystem.
  - panache subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Deeds
- **Description:** At 1st level, the hooded champion gains the swashbuckler’s derring-do and dodging panache deeds, as well as the following deeds.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 3.
  - **Rules text to implement:** At 1st level, the hooded champion gains the swashbuckler’s derring-do and dodging panache deeds, as well as the following deeds. For all deeds, treat the hooded champion’s ranger level as his swashbuckler level. Dead Aim (Ex) : At 1st level, the hooded champion’s can spend 1 panache point when making a single ranged attack (not a full attack) with a bow to make a ranged touch attack instead. The target must be in the bow’s first range increment. At 3rd level, the hooded champion gains the swashbuckler’s kip-up deed as well as the following deed. Hooded Champion’s Initiative (Ex) : At 3rd level, while the hooded champion has at least 1 panache point, he gains a +2 bonus on initiative checks. In addition, if he has the Quick Draw feat, his hands are free and unrestrained, and his weapon isn’t hidden, he can draw a single bow as part of the initiative check.
- **Implementation flags:**
  - ki subsystem.
  - panache subsystem.
  - feat grant/prerequisite handling.

### Replaces: wild empathy, endurance, evasion, and improved evasion

- **Archetype feature:** Combat Style
- **Description:** At 2nd level, the hooded champion must select the archery combat style.
- **Detailed mechanics:**
  - **Level hooks:** 2, 9, 16.
  - **Rules text to implement:** At 2nd level, the hooded champion must select the archery combat style. At 9th level, the hooded champion gains the swashbuckler’s grace and evasive deeds. At 16th level, the hooded champion gains the swashbuckler’s edge and cheat death deeds.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Panache (Ex)
- Deeds
- Combat Style
