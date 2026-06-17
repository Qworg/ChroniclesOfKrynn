# Bard - Arcane Duelist

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Arcane Duelist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Arcane%20Duelist
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Arcane Strike; Bardic Performance; Bonus Feats; Arcane Bond (Ex); Arcane Armor (Ex)
- **Replaced / altered class features:** bardic knowledge; mass suggestion; versatile performance and well-versed; lore master; jack of all trades

## Implementation details

### Replaces: bardic knowledge

- **Archetype feature:** Arcane Strike
- **Description:** Arcane duelists gain Arcane Strike as a bonus feat at 1st level.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** Arcane duelists gain Arcane Strike as a bonus feat at 1st level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: mass suggestion

- **Archetype feature:** Bardic Performance
- **Description:** An arcane duelist gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 6, 18.
  - **Rules text to implement:** An arcane duelist gains the following types of bardic performance. Rallying Cry (Su) : At 1st level, an arcane duelist can use performance to rally dispirited allies. Each round he makes an Intimidate check. Any ally (including the bard) within 30 feet may use this check in place of his own saving throw against fear and despair effects. Those already under a fear or despair effect can attempt a new save each round using the bard’s Intimidate check. Rallying cry does not work on effects that don’t allow saves. This is a mind-affecting ability that uses audible components. This performance replaces countersong. Bladethirst (Su) : An arcane duelist of 6th level or higher may use performance to grant one weapon, one natural weapon, one end of a double weapon, or 50 items of ammunition of the same type within 30 feet a +1 enhancement bonus. This enhancement bonus increases by +1 for every three levels after 6th (maximum +5 at 18th level). These bonuses stack with existing bonuses and may be used to increase the item’s enhancement bonus up to +5 or to add any of the following weapon properties: defending, distance, ghost touch, keen, mighty cleaving, returning, shock, shocking burst, seeking, speed, or wounding. If the weapon is not magical, at least a +1 enhancement bonus must be added before adding special abilities. This performance replaces suggestion. Mass Bladethirst (Su) : An arcane duelist of 18th level or higher can use his bladethirst performance to enhance the weapons of as many allies as desired within 30 feet. The bonus provided by this power is +4 if conferred on two allies, +3 for three allies, +2 for four allies, and +1 for five or more allies. The power granted to each weapon must be identical.
- **Implementation flags:**
  - bardic performance subsystem.
  - ki subsystem.

### Replaces: versatile performance and well-versed

- **Archetype feature:** Bonus Feats
- **Description:** An arcane duelist weaves might and magic in his combat style, gaining the following bonus feats at 2nd level and every four levels thereafter: 2nd level— Combat Casting, 6th level— Disruptive, 10th level— Spellbreaker, 14th level— Penetrating Strike, 18th level— Greater Penetrating Strike.
- **Detailed mechanics:**
  - **Level hooks:** 2, 6, 10, 14, 18.
  - **Rules text to implement:** An arcane duelist weaves might and magic in his combat style, gaining the following bonus feats at 2nd level and every four levels thereafter: 2nd level— Combat Casting, 6th level— Disruptive, 10th level— Spellbreaker, 14th level— Penetrating Strike, 18th level— Greater Penetrating Strike.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: lore master

- **Archetype feature:** Arcane Bond (Ex)
- **Description:** At 5th level, an arcane duelist gains the arcane bond ability as a wizard, using a weapon as his bonded item, allowing him to cast any one addition spell that he knows once per day.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, an arcane duelist gains the arcane bond ability as a wizard, using a weapon as his bonded item, allowing him to cast any one addition spell that he knows once per day. He may not choose a familiar or other type of bonded item. He may use the hand holding his bonded weapon for somatic components.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: jack of all trades

- **Archetype feature:** Arcane Armor (Ex)
- **Description:** At 10th level, an arcane duelist gains Medium Armor Proficiency and can cast bard spells in medium armor with no chance of arcane spell failure.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 10, 16.
  - **Rules text to implement:** At 10th level, an arcane duelist gains Medium Armor Proficiency and can cast bard spells in medium armor with no chance of arcane spell failure. At 16th level, he gains Heavy Armor Proficiency and can cast bard spells in heavy armor with no arcane spell failure.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Arcane Strike
- Bardic Performance
- Bonus Feats
- Arcane Bond (Ex)
- Arcane Armor (Ex)
