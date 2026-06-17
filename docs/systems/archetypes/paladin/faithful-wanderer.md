# Paladin - Faithful Wanderer

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Faithful Wanderer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Faithful%20Wanderer
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Wanderer’s Lore; Hidden Aura (Su); Stalk Evil (Su); Champion’s Bond (Su)
- **Replaced / altered class features:** Class Skills; Detect Evil; Aura of Good; Aura of Justice; Aura of Courage; Aura of Resolve; Aura of Faith; Aura of Righteousness; Smite Evil; Divine Bond; Holy Champion

## Implementation details

### Alters: the paladin’s class skills and replaces detect evil

- **Archetype feature:** Wanderer’s Lore
- **Description:** A faithful wanderer quickly learns that everything in the wastes is evil, and she develops the skills she needs to survive.
- **Detailed mechanics:**
  - **Rules text to implement:** A faithful wanderer quickly learns that everything in the wastes is evil, and she develops the skills she needs to survive. She gains Knowledge (nature), Knowledge (planes), Perception, Stealth, and Survival as class skills but doesn’t gain Diplomacy, Handle Animal, Knowledge (nobility), or Ride as class skills. A faithful wanderer gains a number of skill ranks equal to 4 + her Intelligence modifier at each level (instead of gaining a number of skill ranks equal to 2 + her Intelligence modifier).
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Replaces: aura of good and aura of justice, and it alters aura of courage, aura of resolve, aura of faith, and aura of righteousness

- **Archetype feature:** Hidden Aura (Su)
- **Description:** A faithful wanderer doesn’t have an aura of good like other paladins do, as this would give her presence away to hostile denizens of the Abyssal wastelands.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 3, 8, 11, 14, 17.
  - **Rules text to implement:** A faithful wanderer doesn’t have an aura of good like other paladins do, as this would give her presence away to hostile denizens of the Abyssal wastelands. Her other auras likewise don’t reveal her presence. The benefits of her aura of courage, aura of resolve, aura of faith, and aura of righteousness affect only her. At 3rd level, her alignment aura emulates the alignment planar traits ( Pathfinder RPG GameMastery Guide 187) of her current location (chaotic evil in the Worldwound or the Abyss) for the purposes of alignment-detection effects, though this doesn’t change her actual alignment. At 8th level, she takes no penalties from the mildly chaos-aligned and mildly evil-aligned planar traits and treats all opposed strongly aligned planar traits as if they were only mildly aligned. At 11th level, she takes no penalties even in areas with strongly chaos- and evil-aligned planar traits. At 14th level, she leaves no trail in areas with chaos- and evil-aligned planar traits, can’t be tracked in such terrain, and can use Stealth to hide in such terrain, even if the terrain doesn’t grant cover or concealment. At 17th level, she can use Stealth to hide in areas with these planar traits even while being observed.
- **Implementation flags:**
  - rage/rage power subsystem.

### Replaces: smite evil

- **Archetype feature:** Stalk Evil (Su)
- **Description:** A faithful wanderer isn’t interested in going out in a blaze of glory after exhausting a limited ability to smite evil.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 20, 7, 13.
  - **Rules text to implement:** A faithful wanderer isn’t interested in going out in a blaze of glory after exhausting a limited ability to smite evil. Instead, she has developed techniques to evade, stalk, and punish evil whenever necessary. She gains a +2 bonus on Knowledge, Perception, Sense Motive, Stealth, and Survival checks against evil outsiders, as well as a +2 bonus on weapon attack and damage rolls against them. These bonuses don’t stack with favored enemy bonuses. At 5th level and every 5 levels thereafter, these bonuses increase by 2 (to a maximum of +10 at 20th level). At 7th level, the faithful wanderer also gains these bonuses against undead, and at 13th level, she also gains these bonuses against evil dragons.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: divine bond and replaces holy champion

- **Archetype feature:** Champion’s Bond (Su)
- **Description:** At 5th level, a faithful wanderer must choose the weapon option of her divine bond class feature.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 5, 20.
  - **Rules text to implement:** At 5th level, a faithful wanderer must choose the weapon option of her divine bond class feature. At 20th level, whenever her divine bond is active, she gains several additional benefits, as follows: Her DR improves to 5/—. Additionally, if she rolls a natural 20 on an attack roll against an evil outsider and confirms the critical hit, the outsider is also subject to banishment, using the faithful wanderer’s paladin level as the caster level (her weapon and holy symbol automatically count as objects that the subject hates). Finally, whenever she uses lay on hands to heal herself, she heals the maximum possible amount of hit points.
- **Implementation flags:**
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Wanderer’s Lore
- Hidden Aura (Su)
- Stalk Evil (Su)
- Champion’s Bond (Su)
