# Alchemist - Grenadier [MC]

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Grenadier [MC]
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Grenadier%20%5BMC%5D
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Martial Weapon Proficiency; Alchemical Weapon (Su); Precise Bombs (Ex); Directed Blast (Su); Staggering Blast (Su)
- **Replaced / altered class features:** Brew Potion; poison resistance; poison use; swift poisoning; poison immunity

## Replacement details

### Replaces: Brew Potion

- **Archetype feature:** Martial Weapon Proficiency
- **Description:** At 1st level, a grenadier picks one martial weapon and becomes proficient in its use.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: At 1st level, a grenadier picks one martial weapon and becomes proficient in its use.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: poison resistance

- **Archetype feature:** Alchemical Weapon (Su)
- **Description:** At 2nd level, a grenadier can infuse a weapon or piece of ammunition with a single harmful alchemical liquid or powder, such as alchemist’s fire or sneezing powder, as a move action.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2, 6, 15.
  - Mechanics summary: At 2nd level, a grenadier can infuse a weapon or piece of ammunition with a single harmful alchemical liquid or powder, such as alchemist’s fire or sneezing powder, as a move action. This action consumes the alchemical item, but transfers its effect to the weapon in question. Any extra damage added is not doubled on a critical hit. The alchemical treatment causes no harm to the weapon treated, and wears off 1 minute after being applied if no blow is struck. Infusing a new alchemical item also removes the effect of any alchemical liquid or powder previously applied with this ability. At 6th level, a grenadier can use her alchemical weapon ability as a swift action.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: poison use

- **Archetype feature:** Precise Bombs (Ex)
- **Description:** At 2nd level, a grenadier gains the precise bombs alchemist discovery as a bonus discovery.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a grenadier gains the precise bombs alchemist discovery as a bonus discovery.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, alchemist bomb hook, alchemist discovery hook.

### Replaces: swift poisoning

- **Archetype feature:** Directed Blast (Su)
- **Description:** At 6th level, a grenadier can detonate a bomb so that it splashes in a 20-foot cone rather than affecting a radius.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a grenadier can detonate a bomb so that it splashes in a 20-foot cone rather than affecting a radius. The cone starts at the alchemist and extends away from her in the direction she chooses. The alchemist designates one creature in the squares affected by the cone to be the target of the bomb and makes her attack roll against that creature; all other squares in the cone take splash damage. If the alchemist has the explosive bomb discovery and throws an explosive directed blast, the cone of splash damage is 30 feet long instead of 20 feet.
- **Implementation flags:**
  - Likely existing hooks: alchemist bomb hook, alchemist discovery hook.

### Replaces: poison immunity

- **Archetype feature:** Staggering Blast (Su)
- **Description:** At 10th level, a grenadier’s bombs become particularly overwhelming when they explode.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, a grenadier’s bombs become particularly overwhelming when they explode. Whenever a grenadier confirms a critical hit with a bomb, the creature directly struck by that bomb is staggered for 1d4+1 rounds. A successful Fortitude saving throw (DC equals the bomb’s Reflex save DC to avoid splash damage) reduces the duration to 1 round. The effects of this ability stack with a frost bomb’s staggering effect, but not with the effects of the Staggering Critical feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, saving throw hook, save DC calculation, alchemist bomb hook.

## Parsed source feature headings

- Martial Weapon Proficiency
- Alchemical Weapon (Su)
- Precise Bombs (Ex)
- Directed Blast (Su)
- Staggering Blast (Su)

