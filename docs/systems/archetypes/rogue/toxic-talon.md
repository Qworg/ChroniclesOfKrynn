# Rogue - Toxic Talon

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Toxic Talon
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Toxic%20Talon
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Forceful Breath (Ex); Poison Adept (Ex); Toxin Resistance (Ex); Catalyst (Su); Split Toxin (Su)
- **Replaced / altered class features:** trapfinding; uncanny dodge; the rogue’s improved uncanny dodge

## Replacement details

### Alters: the rogue’s weapon proficiencies

- **Archetype feature:** Forceful Breath (Ex)
- **Description:** A toxic talon is proficient with blowguns instead of hand crossbows.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A toxic talon is proficient with blowguns instead of hand crossbows. He can use a blowgun without penalty while prone.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty.
  - Needs implementation review: firearms / gunslinger rules.

### Replaces: trapfinding

- **Archetype feature:** Poison Adept (Ex)
- **Description:** A toxic talon is trained in the use of poison and cannot accidentally poison himself when applying poison to a projectile weapon.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A toxic talon is trained in the use of poison and cannot accidentally poison himself when applying poison to a projectile weapon. He can apply poison to a projectile as a move action. This counts as the poison use ability for the purposes of qualifying for feats, prestige classes, and other options.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Replaces: trap sense

- **Archetype feature:** Toxin Resistance (Ex)
- **Description:** A toxic talon’s constant exposure to varied poisons grants him increasing resistance to them.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6, 9, 12, 15, 18.
  - Mechanics summary: A toxic talon’s constant exposure to varied poisons grants him increasing resistance to them. At 3rd level, a toxic talon gains a +1 bonus on saving throws against diseases and poisons, and he gains a +1 bonus on Heal checks to treat diseases and poisons. He also gains a +1 bonus on caster level checks (including when he activates a magic item) to treat or remove poisons and diseases, such as when using remove disease or neutralize poison. Finally, he gains a +1 bonus on Perception checks to identify traps that utilize diseases or poisons. These bonuses increase to +2 at 6th level, to +3 at 9th level, to +4 at 12th level, to +5 at 15th level, and to +6 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: uncanny dodge

- **Archetype feature:** Catalyst (Su)
- **Description:** At 4th level, a toxic talon can use secret alchemical techniques to enhance a poison as he applies it to a weapon, increasing the save DC of the poison by 1 (this bonus increases to +2 at 12th level).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 12.
  - Mechanics summary: At 4th level, a toxic talon can use secret alchemical techniques to enhance a poison as he applies it to a weapon, increasing the save DC of the poison by 1 (this bonus increases to +2 at 12th level). This increase to the save DC lasts for 1 minute or until the poison is used up, whichever comes first. A toxic talon can use catalyst once per hour.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation.

### Replaces: the rogue’s improved uncanny dodge

- **Archetype feature:** Split Toxin (Su)
- **Description:** At 8th level, when a toxic talon uses catalyst to enhance poison as he applies it, he can envenom two ranged weapons or units of ammunition simultaneously with the same dose.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, when a toxic talon uses catalyst to enhance poison as he applies it, he can envenom two ranged weapons or units of ammunition simultaneously with the same dose.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Forceful Breath (Ex)
- Poison Adept (Ex)
- Toxin Resistance (Ex)
- Catalyst (Su)
- Split Toxin (Su)

