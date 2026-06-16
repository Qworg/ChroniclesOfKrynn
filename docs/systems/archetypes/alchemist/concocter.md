# Alchemist - Concocter

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Concocter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Concocter
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Mutagenic Mixology (Ex); Extracting Mixology (Ex)
- **Replaced / altered class features:** 2nd, 4th, 6th-level Discovery; Swift Poisoning

## Replacement details

### Replaces: the discoveries gained at 2nd

- **Archetype feature:** Mutagenic Mixology (Ex)
- **Description:** At 2nd level, whenever a concocter brews a potion, he can mix in some of the chemicals he uses to create his mutagen, adding some of his mutagen’s effects to this concoction.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 4.
  - Mechanics summary: At 2nd level, whenever a concocter brews a potion, he can mix in some of the chemicals he uses to create his mutagen, adding some of his mutagen’s effects to this concoction. When he drinks this concoction, he gains the benefit of the potion as normal. Additionally, he gains a +2 natural armor bonus and a +4 alchemical bonus to one of his physical ability scores (Strength, Dexterity, or Constitution), while suffering a –2 penalty to the corresponding mental ability score (Intelligence, Wisdom, or Charisma), just as though the concoction were a mutagen. The ability score that receives the bonus must be chosen when the concoction is made. These benefits and penalties last for the duration of the effects of the potion on which the concoction is based or for 1 minute per the concocter’s alchemist level, whichever is shorter. If the concocter drinks another concoction or a mutagen while under the effects of this concoction, the effects of any previous concoction or mutagen immediately end.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, save DC calculation, mutagen hook, alchemist discovery hook, AC/natural armor bonus.

### Replaces: 4th levels

- **Archetype feature:** Mutagenic Mixology (Ex)
- **Description:** At 2nd level, whenever a concocter brews a potion, he can mix in some of the chemicals he uses to create his mutagen, adding some of his mutagen’s effects to this concoction.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 4.
  - Mechanics summary: At 2nd level, whenever a concocter brews a potion, he can mix in some of the chemicals he uses to create his mutagen, adding some of his mutagen’s effects to this concoction. When he drinks this concoction, he gains the benefit of the potion as normal. Additionally, he gains a +2 natural armor bonus and a +4 alchemical bonus to one of his physical ability scores (Strength, Dexterity, or Constitution), while suffering a –2 penalty to the corresponding mental ability score (Intelligence, Wisdom, or Charisma), just as though the concoction were a mutagen. The ability score that receives the bonus must be chosen when the concoction is made. These benefits and penalties last for the duration of the effects of the potion on which the concoction is based or for 1 minute per the concocter’s alchemist level, whichever is shorter. If the concocter drinks another concoction or a mutagen while under the effects of this concoction, the effects of any previous concoction or mutagen immediately end.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, save DC calculation, mutagen hook, alchemist discovery hook, AC/natural armor bonus.

### Replaces: swift poisoning

- **Archetype feature:** Effect
- **Description:** 1 Either the extract (01–50 on a d%) or potion (51–100 on a d%) has no effect.
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: 1 Either the extract (01–50 on a d%) or potion (51–100 on a d%) has no effect. The consumable that takes effect treats its caster level or the concocter’s alchemist level as 2 higher, whichever is appropriate. 3 Both the extract and potion function normally but treat their caster level or the concocter’s alchemist level as 2 higher, whichever is appropriate. 4 Both the extract and potion function normally and are affected as though they were spells extended with the Extend Spell metamagic feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, alchemist discovery hook.

### Replaces: the discovery gained at 6th level

- **Archetype feature:** Effect
- **Description:** 1 Either the extract (01–50 on a d%) or potion (51–100 on a d%) has no effect.
- **Mechanics:**
  - Level hooks: 6.
  - Mechanics summary: 1 Either the extract (01–50 on a d%) or potion (51–100 on a d%) has no effect. The consumable that takes effect treats its caster level or the concocter’s alchemist level as 2 higher, whichever is appropriate. 3 Both the extract and potion function normally but treat their caster level or the concocter’s alchemist level as 2 higher, whichever is appropriate. 4 Both the extract and potion function normally and are affected as though they were spells extended with the Extend Spell metamagic feat.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, spellcasting/spell-list hook, alchemist discovery hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 2nd, 4th, 6th-level Discovery

## Parsed source feature headings

- Mutagenic Mixology (Ex)
- Extracting Mixology (Ex)
- d4
- Effect

