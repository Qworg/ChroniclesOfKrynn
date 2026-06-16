# Monk - Monk of the Mantis

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Monk of the Mantis
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Monk%20of%20the%20Mantis
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Pressuring Strikes (Ex); Debilitating Blows (Ex); Disabling Palm (Su)
- **Replaced / altered class features:** the monk’s 2nd-, 6th-, 10th-, 14th-, and 18th-level bonus feats; wholeness of body, diamond body, and diamond soul

## Replacement details

### Replaces: the monk’s 2nd-, 6th-, 10th-, 14th-
- **Archetype feature:** Pressuring Strikes (Ex)
- **Description:** At 2nd level, a monk of the mantis gains the sneak attack ability.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 18.
  - Mechanics summary: At 2nd level, a monk of the mantis gains the sneak attack ability. This ability functions as the rogue ability of the same name, except it can be used only during a flurry of blows. The initial sneak attack damage is +1d6, and the damage increases by 1d6 every 4 levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, sneak attack hook.

### Replaces: 18th-level bonus feats

- **Archetype feature:** Pressuring Strikes (Ex)
- **Description:** At 2nd level, a monk of the mantis gains the sneak attack ability.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 18.
  - Mechanics summary: At 2nd level, a monk of the mantis gains the sneak attack ability. This ability functions as the rogue ability of the same name, except it can be used only during a flurry of blows. The initial sneak attack damage is +1d6, and the damage increases by 1d6 every 4 levels beyond 2nd.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, sneak attack hook.

### Replaces: wholeness of body, diamond body, and diamond soul

- **Archetype feature:** Debilitating Blows (Ex)
- **Description:** A monk of the mantis’s knowledge of anatomy allows her to deal blows that both deal damage and impose debilitating conditions.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7, 11, 13, 6.
  - Mechanics summary: A monk of the mantis’s knowledge of anatomy allows her to deal blows that both deal damage and impose debilitating conditions. At 7th level, if a monk of the mantis stuns a target with Stunning Fist, the target is also entangled for 1 round after the Stunning Fist effect ends. At 11th level, if the monk of the mantis stuns a target with Stunning Fist, the target is also exhausted for 1 round after the Stunning Fist effect ends. At 13th level, the monk can spend 1 point from her ki pool as part of her Stunning Fist attack to increase the duration of these additional effects to a number of rounds equal to her Wisdom bonus (minimum 2 rounds). (For the unchained monk from Pathfinder RPG Pathfinder Unchained , this ability is gained at 6th level, improves at 10th and 12th levels, and replaces the ki powers gained at those levels.)
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, ki/monk hook.

### Alters: quivering palm

- **Archetype feature:** Disabling Palm (Su)
- **Description:** At 15th level, a monk of the mantis can render the target of her quivering palm unconscious instead of killing the creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a monk of the mantis can render the target of her quivering palm unconscious instead of killing the creature. Upon failing its Fortitude saving throw, the target either is knocked unconscious for a number of minutes equal to the monk of the mantis’s monk level or dies (the monk of the mantis’s choice).
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

## Parsed source feature headings

- Pressuring Strikes (Ex)
- Debilitating Blows (Ex)
- Disabling Palm (Su)

