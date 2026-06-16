# Ranger - Toxic Herbalist

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Toxic Herbalist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Toxic%20Herbalist
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Toxic Touch (Ex); Nature’s Mercy (Ex and Su); Sudden Onset (Ex); Grim Harvest (Ex); Potent Venom (Ex); Poisonous Reaper (Ex)
- **Replaced / altered class features:** Wild Empathy; Endurance; Hunter's Bond; Swift Tracker; Quarry; Improved Quarry

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Toxic Touch (Ex)
- **Description:** A toxic herbalist studies the safe handling of deadly substances.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A toxic herbalist studies the safe handling of deadly substances. He cannot accidentally poison himself when he applies poison to a weapon.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: endurance

- **Archetype feature:** Nature’s Mercy (Ex and Su)
- **Description:** At 3rd level, a toxic herbalist’s knowledge of the natural world offers respite from wounds and illness.
- **Mechanics:**
  - Level hooks: 3, 8, 18, 13.
  - Mechanics summary: At 3rd level, a toxic herbalist’s knowledge of the natural world offers respite from wounds and illness. Once per day, he can spend 1 hour in a wilderness area gathering herbs and other natural materials and combine them into a medicinal poultice—this hour can be integrated with the hour required for the ranger to prepare spells. Placing the poultice on a wound or ingesting it is a standard action; the creature receiving the poultice heals a number of hit points equal to 1d6 + the ranger’s Wisdom modifier. At 8th level and every 5 levels thereafter, the ranger creates one additional poultice when using this ability, to a maximum of four at 18th level. Poultices remain potent for 1 hour. Additionally, at 8th level, the poultice neutralizes one poison affecting the recipient, as per neutralize poison.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, paladin mercy hook.

### Replaces: hunter’s bond

- **Archetype feature:** Sudden Onset (Ex)
- **Description:** At 4th level, a toxic herbalist can administer a poultice he created via nature’s mercy or poison a weapon as a swift action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a toxic herbalist can administer a poultice he created via nature’s mercy or poison a weapon as a swift action. Additionally, the toxic herbalist adds the following spells to the ranger spell list at the indicated spell levels: 1st— nauseating dart , ray of sickening ; 2nd— pernicious poison , pox pustules ; 3rd— poison , toxic gift ; 4th— absorb toxicity , cloudkill .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, paladin mercy hook, ki/monk hook.

### Replaces: swift tracker

- **Archetype feature:** Grim Harvest (Ex)
- **Description:** At 8th level, a toxic herbalist can spend 1 hour foraging for poisonous substances to create a dose of poison (this hour can be integrated with the hour required to prepare spells or poultices).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, a toxic herbalist can spend 1 hour foraging for poisonous substances to create a dose of poison (this hour can be integrated with the hour required to prepare spells or poultices). The toxic herbalist rolls 1d20 and adds his ranger level and his Intelligence modifier. The DC of this check is equal to the Craft DC of the poison he wishes to create. The poison remains potent for a number of hours equal to the toxic herbalist’s level, regardless of the means used in attempts to preserve it, and it can’t be sold.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook, favored terrain hook.

### Replaces: quarry

- **Archetype feature:** Potent Venom (Ex)
- **Description:** At 11th level, a toxic herbalist’s poisons become even deadlier.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a toxic herbalist’s poisons become even deadlier. When he poisons a favored enemy, the DC of the poison’s saving throw increases by half the toxic herbalist’s favored enemy bonus against that target.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, favored enemy hook.

### Replaces: improved quarry

- **Archetype feature:** Poisonous Reaper (Ex)
- **Description:** At 19th level, a single dose of poison on a toxic herbalist’s weapon remains potent for the entirety of a full attack, instead of for a single strike.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a single dose of poison on a toxic herbalist’s weapon remains potent for the entirety of a full attack, instead of for a single strike.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Hunter's Bond

## Parsed source feature headings

- Toxic Touch (Ex)
- Nature’s Mercy (Ex and Su)
- Sudden Onset (Ex)
- Grim Harvest (Ex)
- Potent Venom (Ex)
- Poisonous Reaper (Ex)

