# Rogue - Discretion Specialist

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Discretion Specialist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Discretion%20Specialist
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fast Talker (Ex); Obfuscation (Su); Evidence Disposal (Sp); No Loose Ends (Ex); Rogue Talents; Advanced Talents
- **Replaced / altered class features:** Trapfinding; Trap Sense/Danger Sense; 4th, 12-th level Rogue Talents; Uncanny Dodge; Improved Uncanny Dodge

## Replacement details

### Replaces: trapfinding

- **Archetype feature:** Fast Talker (Ex)
- **Description:** A discretion specialist adds half her rogue level (minimum +1) as a bonus on Bluff, Diplomacy, and Intimidate checks.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A discretion specialist adds half her rogue level (minimum +1) as a bonus on Bluff, Diplomacy, and Intimidate checks.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: trap sense (for a core rogue) or danger sense (for an unchained rogue)

- **Archetype feature:** Obfuscation (Su)
- **Description:** A discretion specialist is highly skilled at convincing others not to trust their own senses.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 6, 18.
  - Mechanics summary: A discretion specialist is highly skilled at convincing others not to trust their own senses. At 3rd level as a full-round action, the discretion specialist can convince one living creature within 30 feet that up to 5 minutes of its memories from the past hour are unreliable. If the target fails a Will saving throw (DC = 10 + half the discretion specialist’s rogue level + her Intelligence modifier), the target is convinced that those memories didn’t happen or that it’s confusing the memories with a dream (or is otherwise hazy as to the memories’ reality). Each hour after the discretion specialist uses this ability, the target can attempt a new Will saving throw to realize that its relevant memories have been tampered with, although not necessarily that the discretion specialist was the originator of the tampering. The discretion specialist can use this ability once per day, and one additional time per day for every 5 rogue levels she has. At 6th level and every 3 levels thereafter, the discretion specialist can obfuscate memories from an additional hour in the past (to a maximum of 6 hours at 18th level).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, save DC calculation, ki/monk hook.

### Replaces: the rogue talents gained at 4th

- **Archetype feature:** Evidence Disposal (Sp)
- **Description:** A discretion specialist can cover up a corpse’s cause of a death—or dispose of it entirely.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 4, 20, 12.
  - Mechanics summary: A discretion specialist can cover up a corpse’s cause of a death—or dispose of it entirely. At 4th level, the discretion specialist gains the ability to cast dress corpse ( Pathfinder RPG Ultimate Intrigue 212) as a spell-like ability, using her rogue level as her caster level. She can use this ability once per day, plus one additional time per day for every 5 rogue levels she has (to a maximum of five times at 20th level). At 12th level, she can spend two uses of this ability to disintegrate a corpse entirely as a full-round action, leaving behind only a trace of fine dust (a disintegrated creature’s equipment is unaffected). The target cannot be an undead creature. A corpse disintegrated this way cannot be brought back to life except by resurrection or more powerful magic, including miracle or wish .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: 12th levels

- **Archetype feature:** Evidence Disposal (Sp)
- **Description:** A discretion specialist can cover up a corpse’s cause of a death—or dispose of it entirely.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 4, 20, 12.
  - Mechanics summary: A discretion specialist can cover up a corpse’s cause of a death—or dispose of it entirely. At 4th level, the discretion specialist gains the ability to cast dress corpse ( Pathfinder RPG Ultimate Intrigue 212) as a spell-like ability, using her rogue level as her caster level. She can use this ability once per day, plus one additional time per day for every 5 rogue levels she has (to a maximum of five times at 20th level). At 12th level, she can spend two uses of this ability to disintegrate a corpse entirely as a full-round action, leaving behind only a trace of fine dust (a disintegrated creature’s equipment is unaffected). The target cannot be an undead creature. A corpse disintegrated this way cannot be brought back to life except by resurrection or more powerful magic, including miracle or wish .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: uncanny dodge and improved uncanny dodge

- **Archetype feature:** No Loose Ends (Ex)
- **Description:** At 4th level, the discretion specialist can prevent opponents from escaping.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 8.
  - Mechanics summary: At 4th level, the discretion specialist can prevent opponents from escaping. Opponents damaged by the discretion specialist’s sneak attack are unable to take the withdraw action for 1 round, though they can still move as normal. At 8th level, a creature damaged by the discretion specialist’s sneak attack is hampered in casting spells of the teleportation subschool (such as dimension door ) as well as using methods of magical transport such as shadow walk . A target attempting to cast such a spell before the end of the discretion specialist’s next turn must succeed at a concentration check (in addition to any concentration checks required for casting while threatened or other circumstances) or lose the spell. The DC of this check is equal to 10 + half the discretion specialist’s rogue level + her Intelligence modifier.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, spellcasting/spell-list hook, sneak attack hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Trap Sense/Danger Sense
- 4th, 12-th level Rogue Talents

## Parsed source feature headings

- Fast Talker (Ex)
- Obfuscation (Su)
- Evidence Disposal (Sp)
- No Loose Ends (Ex)
- Rogue Talents
- Advanced Talents

