# Paladin - Chaos Knight

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Chaos Knight
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Chaos%20Knight
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Entropic Touch (Su); Blessings of the Maelstrom (Su); Aura of Chaos (Su); D4; Blessing
- **Replaced / altered class features:** Lay on Hands; Mercy; Aura of Faith

## Replacement details

### Replaces: lay on hands

- **Archetype feature:** Entropic Touch (Su)
- **Description:** At 2nd level, a chaos knight can employ the forces of entropy with a touch to shatter a mind-affecting spell or effect currently affecting an ally.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a chaos knight can employ the forces of entropy with a touch to shatter a mind-affecting spell or effect currently affecting an ally. As a standard action, he can touch a creature to grant that creature a new saving throw against one mind-affecting effect, with a bonus on the save equal to one-third the chaos knight’s level (minimum +0). If the chaos knight targets himself, he can use this ability as a swift action. A chaos knight can use this ability a number of times per day equal to half his paladin level + his Charisma modifier.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook.

### Replaces: mercy

- **Archetype feature:** Blessings of the Maelstrom (Su)
- **Description:** At 3rd level, a chaos knight can harness the unpredictable essence of the Maelstrom to bless a creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 5.
  - Mechanics summary: At 3rd level, a chaos knight can harness the unpredictable essence of the Maelstrom to bless a creature. When he uses his entropic touch ability, the chaos knight can grant the touched creature a blessing from the table below that lasts for a number of rounds equal to 1 + the chaos knight’s Charisma modifier (minimum 1 round). Only one creature can have this blessing at a time. If another creature gains the blessing, the previous blessing ends. If the chaos knight targets himself with the blessing, he can roll twice and choose his preferred result. At 5th level and every 3 levels thereafter, the chaos knight can grant a blessing to one additional creature at a time.
- **Implementation flags:**
  - Likely existing hooks: paladin mercy hook.

### Replaces: aura of faith

- **Archetype feature:** Aura of Chaos (Su)
- **Description:** At 14th level, a chaos knight treats his weapons as chaos-aligned for the purposes of bypassing damage reduction.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a chaos knight treats his weapons as chaos-aligned for the purposes of bypassing damage reduction. In addition, the chaos knight treats attacks targeting enemies within 10 feet of him as chaos-aligned for the purpose of overcoming damage reduction.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Entropic Touch (Su)
- Blessings of the Maelstrom (Su)
- Aura of Chaos (Su)
- D4
- Blessing

