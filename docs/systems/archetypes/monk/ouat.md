# Monk - Ouat

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Ouat
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Ouat
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Awaken Divinity (Su); Spurn Tradition (Ex); Know the Unseen Disciples (Su)
- **Replaced / altered class features:** the stunning fist monk class feature and the greed and hatred racial traits; the dwarf ’s defensive training, stonecunning, and weapon familiarity racial traits; wholeness of body

## Implementation details

### Replaces: the stunning fist monk class feature and the greed and hatred racial traits

- **Archetype feature:** Awaken Divinity (Su)
- **Description:** At 1st level, as a standard action, an Ouat can touch a creature to grant it a temporary ki point until the beginning of the Ouat’s next turn.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 1, 4, 8, 12, 16, 20.
  - **Rules text to implement:** At 1st level, as a standard action, an Ouat can touch a creature to grant it a temporary ki point until the beginning of the Ouat’s next turn. In addition to any other ways in which the target can use ki, it can expend the ki point as a swift action in order to either gain a +2 dodge bonus to AC for 1 round or increase its base speed by 20 feet for 1 round. The Ouat can target himself with this ability as a swift action, but doing so costs 2 uses of the ability. At 4th level, the dodge bonus to AC increases to +4. At 8th level, an affected creature can spend the ki point to ignore all Strength, Dexterity, and Constitution penalties it would otherwise take for 1 round. At 12th level, an Ouat can target two adjacent creatures with this ability as a standard action, but must expend one use of the ability for each target affected. At 16th level, an affected creature can spend this ki point to roll all saving throws twice and take the higher result for 1 round. At 20th level, an affected creature can spend the ki point to benefit from the Ouat’s perfect self class ability for 1 round. If the creature already has the perfect self class feature, its damage reduction and any spell resistance it has increases by 2 for 1 round. An Ouat can use this ability a number of times per day equal to his class level, but no more than once per round.
- **Implementation flags:**
  - ki subsystem.
  - feat grant/prerequisite handling.

### Replaces: the dwarf ’s defensive training, stonecunning, and weapon familiarity racial traits

- **Archetype feature:** Spurn Tradition (Ex)
- **Description:** Ouat dwarves strive to separate themselves from the rest of their race and the traditions that bind them.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** Ouat dwarves strive to separate themselves from the rest of their race and the traditions that bind them. The bonuses for nonmagical effects that target or specifically affect dwarf subtype creatures (such as a ranger’s favored enemy class feature) are all reduced by half. In addition, an Ouat becomes proficient in one martial weapon with the monk property.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: wholeness of body

- **Archetype feature:** Know the Unseen Disciples (Su)
- **Description:** At 7th level, an Ouat can spot hidden creatures, as if using the spell see invisibility.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 7.
  - **Rules text to implement:** At 7th level, an Ouat can spot hidden creatures, as if using the spell see invisibility. Using this ability is a standard action that consumes 2 points from his ki pool. His caster level for this effect is equal to his class level.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Awaken Divinity (Su)
- Spurn Tradition (Ex)
- Know the Unseen Disciples (Su)
