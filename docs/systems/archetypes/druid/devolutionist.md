# Druid - Devolutionist

- **Class:** Druid
- **Pathfinder source class:** Druid
- **Archetype:** Devolutionist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Druid%20Devolutionist
- **Index:** docs/systems/archetypes/druid.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Devolved Companion (Ex); Undomesticate (Su); Devolution (Sp)
- **Replaced / altered class features:** resist nature’s lure; venom immunity

## Replacement details

### Alters: nature bond

- **Archetype feature:** Devolved Companion (Ex)
- **Description:** A devolutionist must choose a devolved humanoid as an animal companion for her nature bond.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: A devolutionist must choose a devolved humanoid as an animal companion for her nature bond. Use the stats for an ape animal companion, but at 4th level, the devolved humanoid doesn’t increase to size Large (it still gains all the other benefits at 4th level).
- **Implementation flags:**
  - Likely existing hooks: eidolon evolution hook, animal companion hook.

### Replaces: resist nature’s lure

- **Archetype feature:** Undomesticate (Su)
- **Description:** At 4th level, a devolutionist can spend 1 minute with a willing or restrained domesticated animal to undo the effects of domestication, transforming it into a wild animal and causing it to lose any tricks it knew.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a devolutionist can spend 1 minute with a willing or restrained domesticated animal to undo the effects of domestication, transforming it into a wild animal and causing it to lose any tricks it knew. The animal no longer recognizes any humanoids as friends or allies and gladly tears former playmates apart for food. This ability doesn’t function on animal companions, special mounts, or the like, and other exceptional domesticated animals can attempt a Will save (DC = 10 + 1/2 the devolutionist’s druid level + her Wisdom modifier) to negate the effect and become immune to it for 24 hours. Though this ability is instantaneous, break enchantment, limited wish, miracle, or wish can reverse the effects.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, eidolon evolution hook, animal companion hook.

### Replaces: venom immunity

- **Archetype feature:** Devolution (Sp)
- **Description:** At 9th level, a devolutionist can perform a 24-hour ritual to irrevocably transform a humanoid or animal into a devolved feral state.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a devolutionist can perform a 24-hour ritual to irrevocably transform a humanoid or animal into a devolved feral state. There is no saving throw, but the target must be present and stay relatively still for the entire ritual, which typically requires a willing or restrained target. An affected humanoid’s Intelligence score is instantly reduced to 2; its type changes to animal; it loses all spellcasting and abilities that require intelligence; it can’t wield manufactured weapons; it gains two claw attacks and a bite attack (all dealing 1d4 points of damage for a Medium humanoid or 1d3 for Small humanoids); and it can’t use skills other than Acrobatics,... An affected animal is undomesticated (see above) if applicable and then either gains the advanced template, except without any increases to mental ability scores, or becomes a dire version of the animal (if a dire version exists and at the GM’s discretion). The druid can communicate her desires to a devolved creature using wild empathy. This ability counters and dispels awaken, and only awaken, miracle, or wish can reverse it.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, spellcasting/spell-list hook, eidolon evolution hook, animal companion hook, ki/monk hook.

## Parsed source feature headings

- Devolved Companion (Ex)
- Undomesticate (Su)
- Devolution (Sp)

