# Summoner - Synthesist

- **Class:** Summoner
- **Pathfinder source class:** Summoner
- **Archetype:** Synthesist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Summoner%20Synthesist
- **Index:** docs/systems/archetypes/summoner.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fused Eidolon; Fused Link (Su); Shielded Meld (Ex); Maker’s Jump (Sp); Greater Shielded Meld (Ex); Split Forms (Su)
- **Replaced / altered class features:** the class’s eidolon ability, bond senses, and life bond; life link; shield ally; maker’s call and transposition; greater shield ally; merge forms

## Replacement details

### Replaces: the class’s eidolon ability, bond senses, and life bond

- **Archetype feature:** Fused Eidolon
- **Description:** A synthesist summons the essence of a powerful outsider to meld with his own being.
- **Mechanics:**
  - Mechanics summary: A synthesist summons the essence of a powerful outsider to meld with his own being. The synthesist wears the eidolon like translucent, living armor. The eidolon mimics all of the synthesist’s movements, and the synthesist perceives through the eidolon’s senses and speaks through its voice, as the two are now one creature. The synthesist directs all of the eidolon’s actions while fused, perceives through its senses, and speaks through its voice, as the two are now one creature. While fused with his eidolon, the synthesist uses the eidolon’s Strength, Dexterity, and Constitution, but retains his own Intelligence, Wisdom, and Charisma. The synthesist gains the eidolon’s hit points as temporary hit points.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, spellcasting/spell-list hook, summoner eidolon hook, eidolon evolution hook, ki/monk hook, AC/natural armor bonus.

### Replaces: life link

- **Archetype feature:** Fused Link (Su)
- **Description:** Starting at 1st level, the synthesist forms a close bond with his eidolon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: Starting at 1st level, the synthesist forms a close bond with his eidolon. Whenever the temporary hit points from his eidolon would be reduced to 0, the summoner can, as a free action, sacrifice any number of his own hit points. Each hit point sacrificed this way prevents 1 point of damage done to the eidolon (thus preventing the loss of the summoner’s temporary hit points), preventing the eidolon from being killed and sent back to its home plane.
- **Implementation flags:**
  - Likely existing hooks: summoner eidolon hook, ki/monk hook.

### Replaces: shield ally

- **Archetype feature:** Shielded Meld (Ex)
- **Description:** At 4th level, whenever the synthesist is fused with his eidolon, he gains a +2 shield bonus to his Armor Class and a +2 circumstance bonus on his saving throws.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, whenever the synthesist is fused with his eidolon, he gains a +2 shield bonus to his Armor Class and a +2 circumstance bonus on his saving throws.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, summoner eidolon hook.

### Replaces: maker’s call and transposition

- **Archetype feature:** Maker’s Jump (Sp)
- **Description:** At 6th level, whenever the synthesist is fused with his eidolon, the synthesist can cast dimension door as a spell-like ability using his caster level.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, whenever the synthesist is fused with his eidolon, the synthesist can cast dimension door as a spell-like ability using his caster level. This ability only affects the fused synthesist and eidolon. The synthesist can use this ability once per day at 6th level, plus one additional time per day for every six levels beyond 6th.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, summoner eidolon hook.

### Replaces: greater shield ally

- **Archetype feature:** Greater Shielded Meld (Ex)
- **Description:** At 12th level, whenever the synthesist is fused with his eidolon, he gains a +4 shield bonus to his Armor Class and a +4 circumstance bonus on his saving throws.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, whenever the synthesist is fused with his eidolon, he gains a +4 shield bonus to his Armor Class and a +4 circumstance bonus on his saving throws.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, summoner eidolon hook.

### Replaces: merge forms

- **Archetype feature:** Split Forms (Su)
- **Description:** At 16th level, as a swift action, the synthesist and his fused eidolon can split into two creatures: the synthesist and the eidolon.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 16.
  - Mechanics summary: At 16th level, as a swift action, the synthesist and his fused eidolon can split into two creatures: the synthesist and the eidolon. Both have the same evolutions. All effects and spells currently targeting the fused synthesist-eidolon affect both the synthesist and the eidolon. The synthesist can use this ability for a number of rounds per day equal to his summoner level. He can end this effect at any time as a full-round action. For the duration of this effect, the eidolon functions as a normal eidolon of the summoner’s class level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, summoner eidolon hook, eidolon evolution hook.

## Parsed source feature headings

- Fused Eidolon
- Fused Link (Su)
- Shielded Meld (Ex)
- Maker’s Jump (Sp)
- Greater Shielded Meld (Ex)
- Split Forms (Su)

