# Alchemist - Eldritch Poisoner

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Eldritch Poisoner
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Eldritch%20Poisoner
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Arcanotoxin (Su); Toxicologist (Ex); Sneak Attack (Ex); Discoveries; Careful Injection (Ex)
- **Replaced / altered class features:** bomb; Throw Anything; mutagen and persistent mutagen; the discovery gained at 4th level

## Implementation details

### Replaces: bomb

- **Archetype feature:** Arcanotoxin (Su)
- **Description:** An eldritch poisoner can blend volatile chemicals and her own personal magic to create deadly poisons known as arcanotoxins.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 3.
  - **Rules text to implement:** An eldritch poisoner can blend volatile chemicals and her own personal magic to create deadly poisons known as arcanotoxins. She can use this ability a number of times each day equal to her alchemist level + her Intelligence modifier. An arcanotoxin functions only when used by the eldritch poisoner and becomes inert if not used within 1 minute. Creating an arcanotoxin is a standard action, and it can be applied to a weapon as a move action. At 1st level, an eldritch poisoner must choose whether her arcanotoxin deals Strength or Dexterity damage. At 3rd level and every 2 alchemist levels thereafter, she can enhance her arcanotoxin in one of the following ways. She can’t select the same improvement twice in a row. Select one additional form of ability damage: Charisma, Dexterity, Intelligence, Strength, or Wisdom. Grant an onset time of 1 round, or increase an existing onset time by 2 rounds (maximum 11 rounds). Increase the ability damage die by one step (maximum 1d6). Increase the number of consecutive saves required to cure the poison by 1 (maximum 3). Increase the frequency by 2 rounds (maximum 10 rounds). If an eldritch poisoner can deal different kinds of ability damage, she selects which ability to affect each time she creates a dose of arcanotoxin, and can willingly reduce enhanced aspects of her arcanotoxin, such as the save DC or onset time. Some discoveries apply secondary effects; a dose of arcanotoxin can cause only one secondary effect. Alchemist discoveries that affect mundane poisons do not apply to an arcanotoxin. Arcanotoxin
- **Implementation flags:**
  - ki subsystem.
  - poison subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Type
- **Description:** poison, injury;
- **Detailed mechanics:**
  - **Rules text to implement:** poison, injury;
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Save
- **Description:** Fortitude DC = 10 + 1/2 the eldritch poisoner’s alchemist level + her Intelligence modifier
- **Detailed mechanics:**
  - **Rules text to implement:** Fortitude DC = 10 + 1/2 the eldritch poisoner’s alchemist level + her Intelligence modifier
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Frequency
- **Description:** 1/round for 2 rounds
- **Detailed mechanics:**
  - **Rules text to implement:** 1/round for 2 rounds
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Effect
- **Description:** 1d2 ability damage (see above);
- **Detailed mechanics:**
  - **Rules text to implement:** 1d2 ability damage (see above);
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Cure
- **Description:** 1 save
- **Detailed mechanics:**
  - **Rules text to implement:** 1 save
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: Throw Anything

- **Archetype feature:** Toxicologist (Ex)
- **Description:** An eldritch poisoner gains a +2 bonus on Craft (alchemy) checks to create poisons and antitoxins, and creates them in half the normal amount of time.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An eldritch poisoner gains a +2 bonus on Craft (alchemy) checks to create poisons and antitoxins, and creates them in half the normal amount of time.
- **Implementation flags:**
  - poison subsystem.
  - crafting subsystem.

### Replaces: mutagen and persistent mutagen

- **Archetype feature:** Sneak Attack (Ex)
- **Description:** At 1st level, the eldritch poisoner gains a sneak attack identical to the rogue class feature, dealing 1d6 points of sneak attack damage at 1st level; the damage increases by 1d6 at 4th level and every 4 alchemist levels thereafter.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 1, 4.
  - **Rules text to implement:** At 1st level, the eldritch poisoner gains a sneak attack identical to the rogue class feature, dealing 1d6 points of sneak attack damage at 1st level; the damage increases by 1d6 at 4th level and every 4 alchemist levels thereafter.
- **Implementation flags:**
  - poison subsystem.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Discoveries
- **Description:** An eldritch poisoner can select any of the following discoveries, in addition to those available to other alchemists.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 10, 4, 6, 15, 8, 12.
  - **Rules text to implement:** An eldritch poisoner can select any of the following discoveries, in addition to those available to other alchemists. Arcanotoxin discoveries with a save DC use her arcanotoxin’s save DC. Antidote (Su) : The eldritch poisoner can sacrifice one use of her arcanotoxin to create an extract of delay poison which she can feed to an adjacent, willing creature as a standard action. Beginning at 10th level, she can instead use this ability to create an extract of neutralize poison. Apothecary (Ex, Sp) : The eldritch poisoner can use detect poison at will as a spell-like ability and gains a bonus equal to 1/2 her alchemist level on Heal checks to identify or treat poisons and to the bonus she grants when successfully treating a poison. Combine Toxins (Ex) : An eldritch poisoner can diversify her arcanotoxin, dealing damage to any two ability scores with a single dose. The alchemist must already know how to target both ability scores with her arcanotoxin. A combined toxin reduces the damage die of its arcanotoxin by one step, to a minimum of 1 point of ability damage to each ability score. Contact Toxin (Su) : The eldritch poisoner can create her arcanotoxin as a contact poison. A vial of contact arcanotoxin can be thrown up to 30 feet as a ranged touch attack or smeared onto a surface as a standard action, but it becomes inert after 1 minute. The arcanotoxin’s save DC is reduced by 2. The eldritch poisoner must be at least 4th level to select this discovery. Envenom (Su) : The eldritch poisoner can create and apply her arcanotoxin to a held weapon (her own or an ally’s) as a move action. The toxin lasts 1 minute or until used. Lethal Toxin (Su) : The eldritch poisoner’s arcanotoxin can deal Constitution damage. She must be at least 10th level to select this discovery. Mind-Altering Toxin (Su) : Whenever a creature fails its saving throw against the eldritch poisoner’s arcanotoxin, it also becomes dazzled by hallucinations for the toxin’s duration as a secondary effect. When the alchemist reaches 10th level, targets become confused instead. The alchemist must be at least 6th level to select this discovery. Paralytic Toxin (Su) : Whenever a creature fails its saving throw against the eldritch poisoner’s arcanotoxin, it also becomes staggered for the toxin’s duration as a secondary effect. Beginning at 15th level, the target becomes paralyzed instead. The poisoner must be at least 8th level to select this discovery. Sickening Toxin (Su) : When a creature fails its save against the eldritch poisoner’s arcanotoxin, it also becomes sickened for the toxin’s duration as a secondary effect. When the alchemist reaches 12th level, targets become nauseated instead. Tailored Toxin (Ex) : Choose one creature type (and subtype, for humanoids or outsiders). The eldritch poisoner’s arcanotoxin is particularly effective against such creatures, increasing the save DC by 2. This discovery can be selected more than once; each time it applies to a different creature type (or subtype). Toxic Fumes (Ex) : The eldritch poisoner can create her arcanotoxin as an inhaled poison. She can throw a vial of arcanotoxin up to 30 feet as a ranged touch attack, affecting all creatures in a 10-foot-by-10-foot square. The arcanotoxin’s save DC is reduced by 4, its duration is halved, and a successful save immediately ends the inhaled arcanotoxin’s effect. The eldritch poisoner must be at least 6th level to select this discovery.
- **Implementation flags:**
  - poison subsystem.
  - spell-like ability support.
  - feat grant/prerequisite handling.

### Replaces: the discovery gained at 4th level

- **Archetype feature:** Careful Injection (Ex)
- **Description:** At 4th level, an eldritch poisoner can forgo some of her sneak attack damage in order to increase the save DC of a poison or arcanotoxin on the weapon used to make the sneak attack.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4.
  - **Rules text to implement:** At 4th level, an eldritch poisoner can forgo some of her sneak attack damage in order to increase the save DC of a poison or arcanotoxin on the weapon used to make the sneak attack. The poison’s DC increases by 1 for every 1d6 points of sneak attack damage forgone.
- **Implementation flags:**
  - poison subsystem.

## Parsed source feature headings

- Arcanotoxin (Su)
- Type
- Save
- Frequency
- Effect
- Cure
- Toxicologist (Ex)
- Sneak Attack (Ex)
- Discoveries
- Careful Injection (Ex)
