# Ranger - Hooded Champion

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Hooded Champion
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Hooded%20Champion
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Panache (Ex); Deeds; Combat Style
- **Replaced / altered class features:** favored enemy at 1st level; wild empathy, endurance, evasion, and improved evasion

## Replacement details

### Replaces: favored enemy at 1st level

- **Archetype feature:** Panache (Ex)
- **Description:** At 1st level, the hooded champion gains the swashbuckler’s panache class feature.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, the hooded champion gains the swashbuckler’s panache class feature. He regains panache through critical hits and killing blows when using a bow of any kind, rather than when using a light or one-handed piercing melee weapon. If the hooded champion has this ability and the panache ability from another class or archetype, the panache points from the two sources do not stack, but the hooded champion regains panache in any way either class feature allows him to. For example, a character with a Charisma score of 16 who has both the hooded champion’s and the swashbuckler’s panache has a base of 3 panache points, and regains panache from critical hits and killing blows from both bows and light or one-handed piercing melee weapons.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, favored enemy hook, ki/monk hook.
  - Needs implementation review: panache resource, swashbuckler class mechanics.

### Replaces: wild empathy, endurance, evasion, and improved evasion

- **Archetype feature:** Combat Style
- **Description:** At 2nd level, the hooded champion must select the archery combat style.
- **Mechanics:**
  - Level hooks: 2, 9, 16.
  - Mechanics summary: At 2nd level, the hooded champion must select the archery combat style. At 9th level, the hooded champion gains the swashbuckler’s grace and evasive deeds. At 16th level, the hooded champion gains the swashbuckler’s edge and cheat death deeds.
- **Implementation flags:**
  - Needs implementation review: deed subsystem, swashbuckler class mechanics.

## Parsed source feature headings

- Panache (Ex)
- Deeds
- Combat Style

