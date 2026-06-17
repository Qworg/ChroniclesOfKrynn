# Monk - Hamatulatsu Master

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Hamatulatsu Master
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Hamatulatsu%20Master
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bonus Feats; Stunning Fist (Ex); Ki Pool (Su); Infernal Resilience (Ex)
- **Replaced / altered class features:** purity of body

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Alignment
- **Description:** A hamatulatsu master must be lawful neutral or lawful evil.
- **Detailed mechanics:**
  - **Rules text to implement:** A hamatulatsu master must be lawful neutral or lawful evil.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Bonus Feats
- **Description:** A hamatulatsu master replaces the normal monk bonus feats with the following: Deflect Arrows, Dodge, Exotic Weapon Proficiency, Improved Grapple, Intimidating Prowess, Scorpion Style, or Weapon Focus.
- **Detailed mechanics:**
  - **Level hooks:** 6, 10, 14.
  - **Rules text to implement:** A hamatulatsu master replaces the normal monk bonus feats with the following: Deflect Arrows, Dodge, Exotic Weapon Proficiency, Improved Grapple, Intimidating Prowess, Scorpion Style, or Weapon Focus. At 6th level, the following feats are added to the list: Gorgon’s Fist, Hamatulatsu ( Pathfinder Campaign Setting: The Inner Sea World Guide 287), Improved Sunder, Mobility, Power Attack. At 10th level, the following feats are added to the list: Critical Focus, Impaling Critical (unarmed strike) ( Ultimate Combat 105), Improved Critical, Medusa’s Wrath, Snatch Arrows. At 14th level, the following feat is added to the list: Improved Impaling Critical ( Ultimate Combat 105). Anytime a hamatulatsu master would gain a bonus feat, she can instead choose to gain two additional uses of stunning fist per day.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Stunning Fist (Ex)
- **Description:** A hamatulatsu master expands the conditions that she can apply to the target of her stunning fist beyond merely stunning her target.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 8, 12, 16.
  - **Rules text to implement:** A hamatulatsu master expands the conditions that she can apply to the target of her stunning fist beyond merely stunning her target. At 4th level, she can choose to make the target shaken for 1 minute. At 8th level, she can choose to deal 1d10 points of nonlethal bleed damage. At 12th level, she can choose to make the target frightened for 1d3 rounds. At 16th level, she can deal 2d12 points of nonlethal bleed damage. The shaken and frightened conditions allow the target to attempt a Will save to negate the effect instead of a Fortitude save. This ability otherwise functions as normal for a monk of her level.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Ki Pool (Su)
- **Description:** By spending 1 point from her ki pool as a swift action, a hamatulatsu master can make one additional attack at her highest attack bonus when making a flurry of blows attack.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** By spending 1 point from her ki pool as a swift action, a hamatulatsu master can make one additional attack at her highest attack bonus when making a flurry of blows attack. Alternatively, she can spend 1 ki point as a swift action to gain one additional use of her stunning fist ability that round, though this does not grant her an additional attack. Finally, as an immediate action, a hamatulatsu master can spend 1 ki point to make a single melee attack with a +2 bonus against a creature that has damaged her with a natural melee attack, unarmed strike, or weapon without the reach property. This ability otherwise functions as normal for a monk of her level.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: purity of body

- **Archetype feature:** Infernal Resilience (Ex)
- **Description:** At 5th level, a hamatulatsu master gains immunity to all spells, spell-like abilities, and effects with the pain descriptor, as well as a +2 bonus on saving throws against effects that would sicken, nauseate, stagger, or stun her.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a hamatulatsu master gains immunity to all spells, spell-like abilities, and effects with the pain descriptor, as well as a +2 bonus on saving throws against effects that would sicken, nauseate, stagger, or stun her.
- **Implementation flags:**
  - spell-like ability support.

## Parsed source feature headings

- Alignment
- Bonus Feats
- Stunning Fist (Ex)
- Ki Pool (Su)
- Infernal Resilience (Ex)
