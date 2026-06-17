# Summoner - Shaitan Binder

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Shaitan Binder
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Shaitan%20Binder
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Base Form; Shaitan Magic (Su); Earth Glide (Su); Stone Curse (Su); Noble Eidolon (Sp)
- **Replaced / altered class features:** shield ally and greater shield ally; aspect; greater aspect; twin eidolon

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Base Form
- **Description:** At 1st level, if a shaitan binder’s eidolon has the biped base form, it gains a +2 bonus to one ability score.
- **Detailed mechanics:**
  - **Level hooks:** 1.
  - **Rules text to implement:** At 1st level, if a shaitan binder’s eidolon has the biped base form, it gains a +2 bonus to one ability score. The shaitan binder must make this choice at 1st level. If at any time the shaitan binder’s eidolon has another base form, it loses this bonus until it returns to biped form. A shaitan binder’s eidolon does not gain the share spells ability.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - feat grant/prerequisite handling.

### Replaces: shield ally and greater shield ally

- **Archetype feature:** Shaitan Magic (Su)
- **Description:** At 4th level, a shaitan binder’s eidolon gains the basic magic evolution as a free evolution.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 6, 8, 12.
  - **Rules text to implement:** At 4th level, a shaitan binder’s eidolon gains the basic magic evolution as a free evolution. At 6th level, it gains the minor magic evolution. At 8th level, it gains the major magic evolution as a free evolution, and adds the following to the list of available spells for that evolution: glitterdust and soften earth and stone. At 12th level, it gains the ultimate magic evolution as a free evolution, and adds the following to the list of available spells for that evolution: meld into stone and stone shape. Although the shaitan binder gains the standard versions of these evolutions for free, he must pay the normal cost to upgrade them to the improved versions.
- **Implementation flags:**
  - eidolon/evolution subsystem.

### Replaces: aspect

- **Archetype feature:** Earth Glide (Su)
- **Description:** At 10th level, if a shaitan binder’s eidolon has the burrow evolution, it gains the earth glide universal monster ability and can use this ability to travel at its full base speed.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 10.
  - **Rules text to implement:** At 10th level, if a shaitan binder’s eidolon has the burrow evolution, it gains the earth glide universal monster ability and can use this ability to travel at its full base speed.
- **Implementation flags:**
  - eidolon/evolution subsystem.

### Replaces: greater aspect

- **Archetype feature:** Stone Curse (Su)
- **Description:** At 18th level, a shaitan binder may select stone curse as a 4-point evolution.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 18.
  - **Rules text to implement:** At 18th level, a shaitan binder may select stone curse as a 4-point evolution. This allows the eidolon to trap creatures in stone like the shaitan stone curse ability. The DC to resist or break free of the stone curse is 10 + 1/2 the eidolon’s Hit Dice + the eidolon’s Strength score.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - curse subsystem.

### Replaces: twin eidolon

- **Archetype feature:** Noble Eidolon (Sp)
- **Description:** At 20th level, a shaitan binder’s eidolon gains the ability to grant its summoner’s wishes.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a shaitan binder’s eidolon gains the ability to grant its summoner’s wishes. Once per day, the eidolon can cast limited wish as a spell-like ability. The eidolon’s caster level is equal to its level. The wish must be spoken aloud by the shaitan binder, beginning with the words "I wish," and cannot duplicate a wish the eidolon has granted within the past 24 hours. If the eidolon uses this ability to duplicate a spell with a costly material component, the shaitan binder must provide that component.
- **Implementation flags:**
  - eidolon/evolution subsystem.
  - summoning subsystem.
  - spell-like ability support.

## Parsed source feature headings

- Base Form
- Shaitan Magic (Su)
- Earth Glide (Su)
- Stone Curse (Su)
- Noble Eidolon (Sp)
