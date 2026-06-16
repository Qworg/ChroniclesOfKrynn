# Wizard - Elder Mythos Scholar

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Elder Mythos Scholar
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Elder%20Mythos%20Scholar
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Arcane Bond; Eldritch Knowledge (Su); Eldritch Grimoire; Talisman of Revealing; Eldritch Infusion (Su)
- **Replaced / altered class features:** the school ability gained at 8th level

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Arcane Bond
- **Description:** An Elder Mythos scholar must choose to bond with an object, inscribing that object with eldritch runes.
- **Mechanics:**
  - Mechanics summary: An Elder Mythos scholar must choose to bond with an object, inscribing that object with eldritch runes.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the 1st-level arcane school ability

- **Archetype feature:** Eldritch Knowledge (Su)
- **Description:** An Elder Mythos scholar gains two fewer daily uses of his 1st-level arcane school ability, which is normally used a number of times per day equal to 3 + his Intelligence modifier.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: An Elder Mythos scholar gains two fewer daily uses of his 1st-level arcane school ability, which is normally used a number of times per day equal to 3 + his Intelligence modifier. If he has no such ability, he can’t take this archetype. When an Elder Mythos scholar attempts a Will save against confusion, fear, insanity, or madness (see page 12), whether magical or mundane, he can spend 2 daily uses of that arcane school ability to apply his Intelligence modifier instead of his Wisdom modifier to the save. However, whenever he uses this ability, he is affected by a nightmare the next time he sleeps, with no saving throw. Until he sleeps and experiences the nightmare, he can’t recover the spent uses of the arcane school ability by any means.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook.

### Alters: spellbook

- **Archetype feature:** Eldritch Grimoire
- **Description:** An Elder Mythos scholar keeps copious notes on how to use magic against the servants of the Elder Mythos in his spellbook.
- **Mechanics:**
  - Mechanics summary: An Elder Mythos scholar keeps copious notes on how to use magic against the servants of the Elder Mythos in his spellbook. Every spell he adds to his spellbook takes up an additional 1d6 pages and costs twice the normal amount to inscribe; however, when casting spells prepared from his grimoire, he gains a +2 bonus on caster level checks and increases the save DCs by 1 against the creatures listed in talisman of revealing below.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, spellcasting/spell-list hook.

### Replaces: Scribe Scroll

- **Archetype feature:** Talisman of Revealing
- **Description:** While wearing or wielding his bonded item, an Elder Mythos scholar can spontaneously cast a special detect aberration APG spell by sacrificing a prepared 1st-level spell.
- **Mechanics:**
  - Level hooks: 1, 5, 10.
  - Mechanics summary: While wearing or wielding his bonded item, an Elder Mythos scholar can spontaneously cast a special detect aberration APG spell by sacrificing a prepared 1st-level spell. Instead of detecting aberrations, this spell detects creatures associated with the Elder Mythos, such as the following (or similar creatures, at the GM’s discretion): bhole B4 , colour out of space B4 , deep one B5 , deep one elder B5 , denizen of Leng B2 , elder thing B4 , flying polyp B4 , gug B2 , hound of Tindalos B2 , Leng ghoul B5 , Leng spider B2 , mi-go B4 , nightgau... He gains a +2 circumstance bonus on Knowledge checks to identify such creatures and Spellcraft checks to identify effects they create. At 5th level, an Elder Mythos scholar adds invisibility purge and see invisibility to his spellbook and can spontaneously cast either spell by sacrificing a prepared spell of the same or higher level while wearing or wielding his bonded item. At 10th level, he adds banish seeming APG and true seeing to his spellbook as 5th-level spells and can spontaneously cast them in the same fashion.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the 5th-

- **Archetype feature:** Talisman of Revealing
- **Description:** While wearing or wielding his bonded item, an Elder Mythos scholar can spontaneously cast a special detect aberration APG spell by sacrificing a prepared 1st-level spell.
- **Mechanics:**
  - Level hooks: 1, 5, 10.
  - Mechanics summary: While wearing or wielding his bonded item, an Elder Mythos scholar can spontaneously cast a special detect aberration APG spell by sacrificing a prepared 1st-level spell. Instead of detecting aberrations, this spell detects creatures associated with the Elder Mythos, such as the following (or similar creatures, at the GM’s discretion): bhole B4 , colour out of space B4 , deep one B5 , deep one elder B5 , denizen of Leng B2 , elder thing B4 , flying polyp B4 , gug B2 , hound of Tindalos B2 , Leng ghoul B5 , Leng spider B2 , mi-go B4 , nightgau... He gains a +2 circumstance bonus on Knowledge checks to identify such creatures and Spellcraft checks to identify effects they create. At 5th level, an Elder Mythos scholar adds invisibility purge and see invisibility to his spellbook and can spontaneously cast either spell by sacrificing a prepared spell of the same or higher level while wearing or wielding his bonded item. At 10th level, he adds banish seeming APG and true seeing to his spellbook as 5th-level spells and can spontaneously cast them in the same fashion.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: 10th-level bonus feats

- **Archetype feature:** Talisman of Revealing
- **Description:** While wearing or wielding his bonded item, an Elder Mythos scholar can spontaneously cast a special detect aberration APG spell by sacrificing a prepared 1st-level spell.
- **Mechanics:**
  - Level hooks: 1, 5, 10.
  - Mechanics summary: While wearing or wielding his bonded item, an Elder Mythos scholar can spontaneously cast a special detect aberration APG spell by sacrificing a prepared 1st-level spell. Instead of detecting aberrations, this spell detects creatures associated with the Elder Mythos, such as the following (or similar creatures, at the GM’s discretion): bhole B4 , colour out of space B4 , deep one B5 , deep one elder B5 , denizen of Leng B2 , elder thing B4 , flying polyp B4 , gug B2 , hound of Tindalos B2 , Leng ghoul B5 , Leng spider B2 , mi-go B4 , nightgau... He gains a +2 circumstance bonus on Knowledge checks to identify such creatures and Spellcraft checks to identify effects they create. At 5th level, an Elder Mythos scholar adds invisibility purge and see invisibility to his spellbook and can spontaneously cast either spell by sacrificing a prepared spell of the same or higher level while wearing or wielding his bonded item. At 10th level, he adds banish seeming APG and true seeing to his spellbook as 5th-level spells and can spontaneously cast them in the same fashion.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the school ability gained at 8th level

- **Archetype feature:** Eldritch Infusion (Su)
- **Description:** At 8th level, once each day while preparing spells, an Elder Mythos scholar can spend 1 extra hour to brew a tincture of hallucinogens and alien trace minerals.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, once each day while preparing spells, an Elder Mythos scholar can spend 1 extra hour to brew a tincture of hallucinogens and alien trace minerals. Though it has no effect for others, if he drinks it, the elixir expands his mind and perceptions into transitive dimensions, granting him a +4 alchemical bonus to his Intelligence score and reducing his Wisdom and Constitution scores by 2 for 10 minutes per wizard level he has. While under the effects of this elixir, he adds 1/2 his class level to his Perception checks against aberrations and creatures listed in talisman of revealing, but subtracts the same amount from all other Perception checks. His spells have a 20% failure chance, unless they summon, call, or contact a creature listed in talisman of revealing or otherwise affect only such creatures (for instance, a fireball aimed at 3 gugs but not a fireball aimed at 3 gugs and a gnome).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Arcane Bond
- Eldritch Knowledge (Su)
- Eldritch Grimoire
- Talisman of Revealing
- Eldritch Infusion (Su)

