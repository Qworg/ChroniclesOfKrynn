# Ranger - Sentinel

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Sentinel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Sentinel
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Mugshot (Sp); Uncanny Alertness (Ex); Sense Intruder (Su); Mugshot Quarry (Ex)
- **Replaced / altered class features:** wild empathy; a ranger’s hunter’s bond and woodland stride; the combat style feat gained at 6th level and alters combat style feats

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Mugshot (Sp)
- **Description:** A sentinel can spend 1 minute studying the appearance of a target or a likeness of the target in the form of a picture, carving, or visual illusion and memorize it with perfect recall.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: A sentinel can spend 1 minute studying the appearance of a target or a likeness of the target in the form of a picture, carving, or visual illusion and memorize it with perfect recall. From that point on, the sentinel gains a +4 bonus on Perception checks to notice the target in disguise or pick him out of a crowd. The sentinel is automatically allowed a Perception check against the target’s Disguise check whenever she sees the target, even if the individual isn’t doing anything to draw attention to himself. A sentinel can memorize the appearance of a number of targets equal to her Wisdom modifier (minimum 1) at any given time. Once a sentinel has reached her maximum number of memorized appearances, she must forget one of the memorized faces before gaining a new one.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: a ranger’s hunter’s bond and woodland stride

- **Archetype feature:** Uncanny Alertness (Ex)
- **Description:** At 4th level, a sentinel is always ready to defend against incoming attacks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 7.
  - Mechanics summary: At 4th level, a sentinel is always ready to defend against incoming attacks. A sentinel is never flat-footed before acting in combat, even if she is surprised (she can still become flat-footed by any other effect or situation that would render her flat-footed). At 7th level, the sentinel also always acts on the surprise round. If she would have acted on the surprise round anyway, or if there is no surprise round, she gains a bonus on initiative checks equal to half her ranger level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: the combat style feat gained at 6th level

- **Archetype feature:** Sense Intruder (Su)
- **Description:** At 6th level, a sentinel gains the ability to establish an incredibly effective watch by standing still and focusing on all of her senses as once.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 10.
  - Mechanics summary: At 6th level, a sentinel gains the ability to establish an incredibly effective watch by standing still and focusing on all of her senses as once. At any time, she can spend 1 minute setting up this ability. Once she has done so, she must stand still, taking no other actions except to keep track of her surroundings; she can’t even take free actions like talking. Her heightened senses grant her a supernatural awareness of her surroundings within 20 feet. If any Tiny or larger creature enters the area over which her awareness extends, she automatically knows that it did so (this part of the ability is a divination effect and can’t be deceived by spells that block sensory input, only by extreme effects like mind blank ). Furthermore, unless that creature is simultaneously negating its visual, auditory, and scent stimuli (such as by being under invisibility, silence , and negate aroma APG all at once), the sentinel can attempt a Perception check as an immediate action to pinpoint the intruder’s location, ignoring any Stealth bonuses the intruder might gain from effects that obscure only one o...
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty, spellcasting/spell-list hook, ki/monk hook.

### Replaces: alters combat style feats

- **Archetype feature:** Sense Intruder (Su)
- **Description:** At 6th level, a sentinel gains the ability to establish an incredibly effective watch by standing still and focusing on all of her senses as once.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 10.
  - Mechanics summary: At 6th level, a sentinel gains the ability to establish an incredibly effective watch by standing still and focusing on all of her senses as once. At any time, she can spend 1 minute setting up this ability. Once she has done so, she must stand still, taking no other actions except to keep track of her surroundings; she can’t even take free actions like talking. Her heightened senses grant her a supernatural awareness of her surroundings within 20 feet. If any Tiny or larger creature enters the area over which her awareness extends, she automatically knows that it did so (this part of the ability is a divination effect and can’t be deceived by spells that block sensory input, only by extreme effects like mind blank ). Furthermore, unless that creature is simultaneously negating its visual, auditory, and scent stimuli (such as by being under invisibility, silence , and negate aroma APG all at once), the sentinel can attempt a Perception check as an immediate action to pinpoint the intruder’s location, ignoring any Stealth bonuses the intruder might gain from effects that obscure only one o...
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, numeric penalty, spellcasting/spell-list hook, ki/monk hook.

### Alters: quarry and improved quarry

- **Archetype feature:** Mugshot Quarry (Ex)
- **Description:** At 11th level, the sentinel can activate her quarry ability (and her improved quarry ability at 19th level) against any of the targets she has memorized with the mugshot ability, even if the creature in question is not within her line of sight.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 11, 19.
  - Mechanics summary: At 11th level, the sentinel can activate her quarry ability (and her improved quarry ability at 19th level) against any of the targets she has memorized with the mugshot ability, even if the creature in question is not within her line of sight.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Mugshot (Sp)
- Uncanny Alertness (Ex)
- Sense Intruder (Su)
- Mugshot Quarry (Ex)

