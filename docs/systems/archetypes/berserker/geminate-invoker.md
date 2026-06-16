# Berserker - Geminate Invoker

- **Class:** Berserker
- **Pathfinder source class:** Barbarian
- **Archetype:** Geminate Invoker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Barbarian%20Geminate%20Invoker
- **Index:** docs/systems/archetypes/berserker.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Contemplative (Ex); Trance (Ex); Haunt Channeler (Su); Spirit Conduit (Su)
- **Replaced / altered class features:** trap sense; the rage powers gained at 4th, 8th, and 12th levels

## Replacement details

### Alters: the barbarian’s class skills

- **Archetype feature:** Contemplative (Ex)
- **Description:** A geminate invoker adds Knowledge (history), Knowledge (religion), and Linguistics to his list of class skills.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A geminate invoker adds Knowledge (history), Knowledge (religion), and Linguistics to his list of class skills. Unlike most barbarians, a geminate invoker can be lawful, but must maintain a neutral element to his alignment. A geminate invoker who ceases to be neutral-aligned cannot activate his trance ability.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: alignment

- **Archetype feature:** Contemplative (Ex)
- **Description:** A geminate invoker adds Knowledge (history), Knowledge (religion), and Linguistics to his list of class skills.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A geminate invoker adds Knowledge (history), Knowledge (religion), and Linguistics to his list of class skills. Unlike most barbarians, a geminate invoker can be lawful, but must maintain a neutral element to his alignment. A geminate invoker who ceases to be neutral-aligned cannot activate his trance ability.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Alters: rage

- **Archetype feature:** Trance (Ex)
- **Description:** As a free action, a geminate invoker can enter a self-imposed trance, ignoring the physical limits of his body.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: As a free action, a geminate invoker can enter a self-imposed trance, ignoring the physical limits of his body. This ability functions similarly to a barbarian’s rage, except where noted below, and feats, spells, and abilities that affect a barbarian’s rage (such as the Extra Rage feat) apply to an geminate invoker’s trance. A geminate invoker gains rage powers as per a normal barbarian, but he can never gain totem rage powers via this ability. Instead of the normal rage bonuses and penalties, a geminate invoker in a trance gains a +4 morale bonus to his Constitution; gains a +2 morale bonus on Reflex and Will saving throws; takes no penalties to AC; can still use Dexterity-, Intelligence-, and Charisma-based skills; and gains Diehard as a bonus feat. The Constitution bonus increases to +6 and the save bonus increases to +3 when he gains greater rage, and they increase to a +8 Constitution bonus and a +4 bonus on saves when he gains mighty rage.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, skill bonus/class-skill changes, typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook, rage/rage-power hook, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Haunt Channeler (Su)
- **Description:** At 3rd level, a geminate invoker gains the power to sense and absorb lingering spiritual energy.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a geminate invoker gains the power to sense and absorb lingering spiritual energy. This functions identically to the medium class ability of the same name , except the geminate invoker deals 1d6 points of damage to haunts for every 3 barbarian levels he has.
- **Implementation flags:**
  - Needs implementation review: haunt rules.

### Replaces: the rage powers gained at 4th, 8th
- **Archetype feature:** Spirit Conduit (Su)
- **Description:** At 4th level, a geminate invoker can invite a spirit into his body each time he enters a trance, gaining a lesser totem rage power for the duration of his trance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 8, 12.
  - Mechanics summary: At 4th level, a geminate invoker can invite a spirit into his body each time he enters a trance, gaining a lesser totem rage power for the duration of his trance. He can select a new totem each time he enters his trance, though the GM might rule that certain totem spirits are simply not available in certain locations (such as channeling a celestial totem in an evil god’s temple). Invoking a totem counter to his alignment (such as a neutral good character invoking a fiend totem) requires the geminate invoker to succeed at a DC 12 Charisma check each round to dominate the spirit. Failure indicates the spirit escapes, immediately ending the trance. At 8th level, the geminate invoker gains a second totem rage power, though it must use the previously granted lesser totem rage power as a prerequisite. At 12th level, he also gains the greater totem rage power that uses the previously granted powers as prerequisites.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, rage/rage-power hook, ki/monk hook.

### Replaces: 12th levels

- **Archetype feature:** Spirit Conduit (Su)
- **Description:** At 4th level, a geminate invoker can invite a spirit into his body each time he enters a trance, gaining a lesser totem rage power for the duration of his trance.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 8, 12.
  - Mechanics summary: At 4th level, a geminate invoker can invite a spirit into his body each time he enters a trance, gaining a lesser totem rage power for the duration of his trance. He can select a new totem each time he enters his trance, though the GM might rule that certain totem spirits are simply not available in certain locations (such as channeling a celestial totem in an evil god’s temple). Invoking a totem counter to his alignment (such as a neutral good character invoking a fiend totem) requires the geminate invoker to succeed at a DC 12 Charisma check each round to dominate the spirit. Failure indicates the spirit escapes, immediately ending the trance. At 8th level, the geminate invoker gains a second totem rage power, though it must use the previously granted lesser totem rage power as a prerequisite. At 12th level, he also gains the greater totem rage power that uses the previously granted powers as prerequisites.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, rage/rage-power hook, ki/monk hook.

## Parsed source feature headings

- Contemplative (Ex)
- Trance (Ex)
- Haunt Channeler (Su)
- Spirit Conduit (Su)

