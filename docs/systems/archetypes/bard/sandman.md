# Bard - Sandman

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Sandman
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Sandman
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bardic Performance; Master of Deception (Ex); Sneakspell (Ex); Trap Sense (Ex); Sneak Attack (Ex)
- **Replaced / altered class features:** inspire greatness; bardic knowledge; versatile performance; inspire competence; lore master

## Implementation details

### Replaces: inspire greatness

- **Archetype feature:** Bardic Performance
- **Description:** A sandman gains the following types of bardic performance.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 6, 9, 15, 18, 20.
  - **Rules text to implement:** A sandman gains the following types of bardic performance. Stealspell (Su) : A sandman can use performance to steal spells from his foes and add them to his list of spells known. Once the performance is started, the bard can steal a prepared spell or a spell known from another creature with a touch attack as a standard action. The target receives a Will save (DC 10 + 1/2 the bard’s level + the bard’s Cha bonus) to negate the effect. The sandman may choose a spell to steal, but if the target does not possess the spell, the bardic performance immediately ends. Otherwise the spell stolen is random, but it is always of the highest level that the bard can cast, if possible. The target loses the prepared spell or spell known and the sandman adds it to his list of spells known for as long as the performance continues, after which it reverts to the original recipient. While stolen, the bard can cast the spell using his available spell slots. This use does not consume the stolen spell. If the bard steals another spell while a spell is stolen, the previous spell immediately reverts to its original owner. This ability requires visual components. This performance replaces inspire courage. Slumber Song (Sp) : At 6th level, a sandman can use his performance to cause a creature he has already fascinated to fall asleep (as deep slumber, but with no HD limit). Otherwise, this ability functions like suggestion. This performance replaces suggestion. Dramatic Subtext (Su) : At 9th level, a sandman can use bardic performance to cast spells without obvious visual or audible components while retaining the spell’s normal effects. Observers must succeed at a Perception check opposed by a sandman’s Sleight of Hand check to notice that the sandman is the source of the spellcasting (though spellcasting still provokes attacks of opportunity). The bard must use this performance for at least 2 rounds before casting a spell; otherwise he is automatically detected and the performance ends. Greater Stealspell (Su) : A sandman’s stealspell power improves at 15th level. When a target fails a save against his stealspell performance, the sandman discovers its spell resistance (if any) and all spells it has prepared or knows. He can then choose which spell to steal. The sandman may forgo stealing a spell and instead reduce the target’s SR by an amount equal to half his bard level and gain that amount of spell resistance for as long as he continues performing. If he steals additional spell resistance, it stacks with previously stolen SR. If he steals a spell or ceases performing, the spell resistance immediately reverts back to its owner. This performance replaces inspire heroics. Mass Slumber Song (Sp) : At 18th level, a sandman can use slumber song to affect any number of fascinated creatures within 30 feet. Otherwise, this ability functions like mass suggestion. This performance replaces mass suggestion. Spell Catching (Su) : At 20th level, a sandman who saves against a spell or spell-like ability that targets only him (not including area spells) may use bardic performance as an immediate action. He must attempt a caster level check (DC 10 + the spell’s original caster level). If it succeeds, the sandman can absorb the spell effect without harm and immediately recast that spell (using the original caster’s level and save DC) or any spell he knows of that level or lower. Using this ability consumes a number of rounds of bardic performance equal to the spell’s level, even if the check fails. This performance replaces deadly performance.
- **Implementation flags:**
  - bardic performance subsystem.
  - rage/rage power subsystem.
  - spell-like ability support.

### Replaces: bardic knowledge

- **Archetype feature:** Master of Deception (Ex)
- **Description:** A sandman gains a bonus equal to half his level on Bluff, Sleight of Hand, and Stealth checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A sandman gains a bonus equal to half his level on Bluff, Sleight of Hand, and Stealth checks. He may also disarm magical traps with Disable Device as a rogue’s trapfinding ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: versatile performance

- **Archetype feature:** Sneakspell (Ex)
- **Description:** At 2nd level, a sandman adds +1 to the save DC of spells and bardic performance against opponents who are denied their Dex bonus.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 10, 18, 6, 14.
  - **Rules text to implement:** At 2nd level, a sandman adds +1 to the save DC of spells and bardic performance against opponents who are denied their Dex bonus. This increases to +2 at 10th level and +3 at 18th level. In addition, at 6th level he gains a +2 bonus on caster level checks to overcome spell resistance against such foes, and this bonus increases to +4 at 14th level.
- **Implementation flags:**
  - bardic performance subsystem.

### Replaces: inspire competence

- **Archetype feature:** Trap Sense (Ex)
- **Description:** At 3rd level, a sandman gains a +1 bonus on Reflex saves against traps and a +1 dodge bonus to AC against traps.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, a sandman gains a +1 bonus on Reflex saves against traps and a +1 dodge bonus to AC against traps. These bonuses increase by +1 every three levels after 3rd.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: lore master

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** At 5th level, a sandman inflicts +1d6 points of damage against targets within 30 feet that he flanks or that are denied their Dex bonus to AC against him.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a sandman inflicts +1d6 points of damage against targets within 30 feet that he flanks or that are denied their Dex bonus to AC against him. This damage increases by +1d6 every five levels after 5th.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Bardic Performance
- Master of Deception (Ex)
- Sneakspell (Ex)
- Trap Sense (Ex)
- Sneak Attack (Ex)
