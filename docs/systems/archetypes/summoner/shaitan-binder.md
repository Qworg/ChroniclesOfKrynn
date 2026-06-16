# Summoner - Shaitan Binder

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Shaitan Binder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Shaitan%20Binder
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Base Form; Shaitan Magic (Su); Earth Glide (Su); Stone Curse (Su); Noble Eidolon (Sp)
- **Replaced / altered class features:** shield ally and greater shield ally; aspect; greater aspect; twin eidolon

## Replacement details

### Replaces: shield ally and greater shield ally

- **Archetype feature:** Shaitan Magic (Su)
- **Description:** At 4th level, a shaitan binder’s eidolon gains the basic magic evolution as a free evolution.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 6, 8, 12.
  - Mechanics summary: At 4th level, a shaitan binder’s eidolon gains the basic magic evolution as a free evolution. At 6th level, it gains the minor magic evolution. At 8th level, it gains the major magic evolution as a free evolution, and adds the following to the list of available spells for that evolution: glitterdust and soften earth and stone . At 12th level, it gains the ultimate magic evolution as a free evolution, and adds the following to the list of available spells for that evolution: meld into stone and stone shape . Although the shaitan binder gains the standard versions of these evolutions for free, he must pay the normal cost to upgrade them to the improved versions.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, summoner eidolon hook, eidolon evolution hook.

### Replaces: aspect

- **Archetype feature:** Earth Glide (Su)
- **Description:** At 10th level, if a shaitan binder’s eidolon has the burrow evolution, it gains the earth glide universal monster ability and can use this ability to travel at its full base speed.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10.
  - Mechanics summary: At 10th level, if a shaitan binder’s eidolon has the burrow evolution, it gains the earth glide universal monster ability and can use this ability to travel at its full base speed.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook, eidolon evolution hook.

### Replaces: greater aspect

- **Archetype feature:** Stone Curse (Su)
- **Description:** At 18th level, a shaitan binder may select stone curse as a 4-point evolution.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 18.
  - Mechanics summary: At 18th level, a shaitan binder may select stone curse as a 4-point evolution. This allows the eidolon to trap creatures in stone like the shaitan stone curse ability. The DC to resist or break free of the stone curse is 10 + 1/2 the eidolon’s Hit Dice + the eidolon’s Strength score.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, summoner eidolon hook, eidolon evolution hook.

### Replaces: twin eidolon

- **Archetype feature:** Noble Eidolon (Sp)
- **Description:** At 20th level, a shaitan binder’s eidolon gains the ability to grant its summoner’s wishes.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a shaitan binder’s eidolon gains the ability to grant its summoner’s wishes. Once per day, the eidolon can cast limited wish as a spell-like ability. The eidolon’s caster level is equal to its level. The wish must be spoken aloud by the shaitan binder, beginning with the words "I wish," and cannot duplicate a wish the eidolon has granted within the past 24 hours. If the eidolon uses this ability to duplicate a spell with a costly material component, the shaitan binder must provide that component.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, summoner eidolon hook.

## Parsed source feature headings

- Base Form
- Shaitan Magic (Su)
- Earth Glide (Su)
- Stone Curse (Su)
- Noble Eidolon (Sp)

