# Sorcerer - Sorcerer of Sleep

- **Class:** Sorcerer
- **Pathfinder source class:** Sorcerer
- **Archetype:** Sorcerer of Sleep
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Sorcerer%20Sorcerer%20of%20Sleep
- **Index:** docs/systems/archetypes/sorcerer.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Pesh Expert; Sahir-Afiyun; Pesh Touch (Su)
- **Replaced / altered class features:** bloodline arcana; eschew materials; the 1st-level bloodline power

## Replacement details

### Replaces: bloodline arcana

- **Archetype feature:** Pesh Expert
- **Description:** A sorcerer of sleep adds 1/2 her sorcerer level (minimum 1) on Appraise, Craft (alchemy), Heal, and Knowledge (local) checks related to pesh and other drugs.
- **Mechanics:**
  - Mechanics summary: A sorcerer of sleep adds 1/2 her sorcerer level (minimum 1) on Appraise, Craft (alchemy), Heal, and Knowledge (local) checks related to pesh and other drugs.
- **Implementation flags:**
  - Likely existing hooks: sorcerer bloodline hook.

### Replaces: eschew materials

- **Archetype feature:** Sahir-Afiyun
- **Description:** A sorcerer of sleep gains Sahir-Afiyun (see page 18) as a bonus feat at 1st level, even if she does not meet the prerequisites.
- **Mechanics:**
  - Level hooks: 1.
  - Mechanics summary: A sorcerer of sleep gains Sahir-Afiyun (see page 18) as a bonus feat at 1st level, even if she does not meet the prerequisites. A sorcerer of sleep adds Pesh Euphoria, Pesh Healing, Pesh Rejuvenation, and Sahir- Afiyun (see page 18 for these feats) to her list of bloodline feats.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, sorcerer bloodline hook.

### Replaces: the 1st-level bloodline power

- **Archetype feature:** Pesh Touch (Su)
- **Description:** As a standard action, a sorcerer of sleep can make a melee touch attack against a living creature to cause one of the following effects (sorcerer’s choice): the target gains a +2 enhancement bonus to Strength, the target is fatigued, or the target takes a –2 penalty on saving throws against illusion and mind-affecting effects.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1.
  - Mechanics summary: As a standard action, a sorcerer of sleep can make a melee touch attack against a living creature to cause one of the following effects (sorcerer’s choice): the target gains a +2 enhancement bonus to Strength, the target is fatigued, or the target takes a –2 penalty on saving throws against illusion and mind-affecting effects. The effects of pesh touch last a number of rounds equal to 1/2 the sorcerer of sleep’s sorcerer level. The effects of pesh touch are not cumulative, and cannot make the target exhausted. A sorcerer of sleep can use pesh touch a number of times per day equal to 3 + her Charisma modifier.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, sorcerer bloodline hook.

## Parsed source feature headings

- Pesh Expert
- Sahir-Afiyun
- Pesh Touch (Su)

