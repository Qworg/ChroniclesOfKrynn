# Cleric - Crusader

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Crusader
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Crusader
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Diminished Spellcasting; Bonus Feat; Legion’s Blessing (Su)
- **Replaced / altered class features:** Domains; Spells

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Diminished Spellcasting
- **Description:** A crusader chooses only one domain and gains one fewer spell of each level than normal.
- **Detailed mechanics:**
  - **Rules text to implement:** A crusader chooses only one domain and gains one fewer spell of each level than normal. If this reduces the number to 0, she may cast spells of that level only if they are domain spells or if her Wisdom allows bonus spells of that level.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feat
- **Description:** A crusader gains a bonus feat at 1st level, then again at 5th level and every five levels thereafter (to a maximum of five at 20th level).
- **Detailed mechanics:**
  - **Level hooks:** 1, 5, 20, 10.
  - **Rules text to implement:** A crusader gains a bonus feat at 1st level, then again at 5th level and every five levels thereafter (to a maximum of five at 20th level). These bonus feats must be chosen from the following list: Heavy Armor Proficiency, Improved Shield Bash, Martial Weapon Proficiency, Saving Shield, Shield Focus, Tower Shield Proficiency, and Weapon Focus *. At 10th level, a crusader may also choose from the following feats: Exotic Weapon Proficiency, Greater Shield Focus, Greater Weapon Focus *, Improved Critical *, Shield Slam, Shield Specialization, and Weapon Specialization *. At 20th level, a crusader may also choose from the following feats: Greater Shield Specialization and Greater Weapon Specialization *. Bonus feats marked with an asterisk (*) must be applied to the favored weapon of the crusader's deity. A crusader need not meet the normal class- or level-based prerequisites for these bonus feats.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Legion’s Blessing (Su)
- **Description:** At 8th level, a crusader gains the ability to confer beneficial spells quickly to a large group of allies.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 8.
  - **Rules text to implement:** At 8th level, a crusader gains the ability to confer beneficial spells quickly to a large group of allies. As a full-round action, the crusader may confer the effects of a single harmless spell with a range of touch to a number of creatures equal to half her cleric level. The spell’s range remains touch, so all intended recipients must be within the crusader’s reach when the spell is cast. Using the legion’s blessing expends the prepared spell, but it also requires the crusader to sacrifice another prepared spell three levels higher, as when spontaneously using a cure or inflict spell. The higher-level spell is not cast but is simply lost, its magical energy used to power the legion’s blessing.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Diminished Spellcasting
- Bonus Feat
- Legion’s Blessing (Su)
