# Monk - Ouat

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Ouat
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Ouat
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Awaken Divinity (Su); Spurn Tradition (Ex); Know the Unseen Disciples (Su)
- **Replaced / altered class features:** the stunning fist monk class feature and the greed and hatred racial traits; the dwarf ’s defensive training, stonecunning, and weapon familiarity racial traits; wholeness of body

## Replacement details

### Replaces: the stunning fist monk class feature

- **Archetype feature:** Awaken Divinity (Su)
- **Description:** At 1st level, as a standard action, an Ouat can touch a creature to grant it a temporary ki point until the beginning of the Ouat’s next turn.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 4, 8, 12, 16, 20.
  - Mechanics summary: At 1st level, as a standard action, an Ouat can touch a creature to grant it a temporary ki point until the beginning of the Ouat’s next turn. In addition to any other ways in which the target can use ki, it can expend the ki point as a swift action in order to either gain a +2 dodge bonus to AC for 1 round or increase its base speed by 20 feet for 1 round. The Ouat can target himself with this ability as a swift action, but doing so costs 2 uses of the ability. At 4th level, the dodge bonus to AC increases to +4. At 8th level, an affected creature can spend the ki point to ignore all Strength, Dexterity, and Constitution penalties it would otherwise take for 1 round. At 12th level, an Ouat can target two adjacent creatures with this ability as a standard action, but must expend one use of the ability for each target affected.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Replaces: the greed and hatred racial traits

- **Archetype feature:** Awaken Divinity (Su)
- **Description:** At 1st level, as a standard action, an Ouat can touch a creature to grant it a temporary ki point until the beginning of the Ouat’s next turn.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 4, 8, 12, 16, 20.
  - Mechanics summary: At 1st level, as a standard action, an Ouat can touch a creature to grant it a temporary ki point until the beginning of the Ouat’s next turn. In addition to any other ways in which the target can use ki, it can expend the ki point as a swift action in order to either gain a +2 dodge bonus to AC for 1 round or increase its base speed by 20 feet for 1 round. The Ouat can target himself with this ability as a swift action, but doing so costs 2 uses of the ability. At 4th level, the dodge bonus to AC increases to +4. At 8th level, an affected creature can spend the ki point to ignore all Strength, Dexterity, and Constitution penalties it would otherwise take for 1 round. At 12th level, an Ouat can target two adjacent creatures with this ability as a standard action, but must expend one use of the ability for each target affected.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook, ki/monk hook.

### Replaces: the dwarf ’s defensive training, stonecunning, and weapon familiarity racial traits

- **Archetype feature:** Spurn Tradition (Ex)
- **Description:** Ouat dwarves strive to separate themselves from the rest of their race and the traditions that bind them.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: Ouat dwarves strive to separate themselves from the rest of their race and the traditions that bind them. The bonuses for nonmagical effects that target or specifically affect dwarf subtype creatures (such as a ranger’s favored enemy class feature) are all reduced by half.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, favored enemy hook.

### Replaces: wholeness of body

- **Archetype feature:** Know the Unseen Disciples (Su)
- **Description:** At 7th level, an Ouat can spot hidden creatures, as if using the spell see invisibility.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, an Ouat can spot hidden creatures, as if using the spell see invisibility . Using this ability is a standard action that consumes 2 points from his ki pool. His caster level for this effect is equal to his class level.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, ki/monk hook.

## Parsed source feature headings

- Awaken Divinity (Su)
- Spurn Tradition (Ex)
- Know the Unseen Disciples (Su)

