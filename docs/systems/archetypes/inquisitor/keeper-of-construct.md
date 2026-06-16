# Inquisitor - Keeper of Construct

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Keeper of Construct
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Keeper%20of%20Construct
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Penetrating Blows (Ex); Construct Influence (Ex); Construct Lore (Ex); Wrest Control (Sp)
- **Replaced / altered class features:** Domain; Stern Gaze; Monster Lore; Exploid Weakness

## Replacement details

### Replaces: the inquisitor’s domain

- **Archetype feature:** Penetrating Blows (Ex)
- **Description:** A keeper of constructs’ attacks are divinely guided to pierce the defenses of constructs.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 8, 16.
  - Mechanics summary: A keeper of constructs’ attacks are divinely guided to pierce the defenses of constructs. The keeper of constructs treats her weapons as adamantine for the purpose of overcoming damage reduction when attacking constructs. At 8th level, she ignores the first 5 points of DR or hardness when attacking constructs. At 16th level, she ignores the first 10 points of DR or hardness when attacking constructs.
- **Implementation flags:**
  - Likely existing hooks: cleric domain hook, ki/monk hook.

### Replaces: stern gaze

- **Archetype feature:** Construct Influence (Ex)
- **Description:** A keeper of constructs’ knowledge of constructs’ inner workings allows her to gain an upper hand over constructs.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A keeper of constructs’ knowledge of constructs’ inner workings allows her to gain an upper hand over constructs. She can use the Intimidate skill to demoralize constructs, and when she attempts to do so, she gains a bonus on the check equal to half her inquisitor level (minimum 1).
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, ki/monk hook.

### Replaces: monster lore

- **Archetype feature:** Construct Lore (Ex)
- **Description:** A keeper of constructs adds twice her Wisdom modifier plus her Intelligence modifier as a bonus when attempting Knowledge checks to identify the abilities and weaknesses of constructs.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A keeper of constructs adds twice her Wisdom modifier plus her Intelligence modifier as a bonus when attempting Knowledge checks to identify the abilities and weaknesses of constructs.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: exploit weakness

- **Archetype feature:** Wrest Control (Sp)
- **Description:** At 14th level, three times per day, the keeper of constructs can issue a command to a construct as a standard action.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, three times per day, the keeper of constructs can issue a command to a construct as a standard action. This functions as a suggestion spell that is dismissible, affects the construct despite its normal immunity to mind-affecting effects, and has a caster level equal to the keeper of constructs’ inquisitor level. The construct can resist the command with a successful Will saving throw (DC = 10 + half the keeper of constructs’ inquisitor level + her Wisdom modifier). A construct that successfully saves is immune to this ability for the following 24 hours. This effect immediately ends if the construct is attacked while under its influence. If an affected construct was being controlled by a creature, that individual can regain control of the construct with a successful Charisma check (attempting this check requires a standard action) opposed by the inquisitor’s Charisma check.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Exploid Weakness

## Parsed source feature headings

- Penetrating Blows (Ex)
- Construct Influence (Ex)
- Construct Lore (Ex)
- Wrest Control (Sp)

