# Cleric - Channeler of the Unknown

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Channeler of the Unknown
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Channeler%20of%20the%20Unknown
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon and Armor Proficiency; Spells; Unknown Aura (Su); Channel Entropy (Su); Power of the Unknown; Spontaneous Casting
- **Replaced / altered class features:** Weapon and Armor Proficiency; Spells; Aura; Channel Energy; Domains; Spontaneous Casting

## Replacement details

### Alters: the cleric’s weapon

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A channeler of the unknown loses proficiency with her deity’s favored weapon.
- **Mechanics:**
  - Mechanics summary: A channeler of the unknown loses proficiency with her deity’s favored weapon. She instead gains proficiency with one martial or exotic weapon, chosen when she first takes this archetype, which thereafter effectively functions as her holy or unholy symbol for the purposes of class abilities and spellcasting. The weapon chosen cannot be one associated with her former deity. Once she makes this choice, she can’t later change it.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.
  - Feature-key mapping needed for non-feat class-table changes such as skills/proficiencies.

### Alters: armor proficiency

- **Archetype feature:** Weapon and Armor Proficiency
- **Description:** A channeler of the unknown loses proficiency with her deity’s favored weapon.
- **Mechanics:**
  - Mechanics summary: A channeler of the unknown loses proficiency with her deity’s favored weapon. She instead gains proficiency with one martial or exotic weapon, chosen when she first takes this archetype, which thereafter effectively functions as her holy or unholy symbol for the purposes of class abilities and spellcasting. The weapon chosen cannot be one associated with her former deity. Once she makes this choice, she can’t later change it.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.
  - Feature-key mapping needed for non-feat class-table changes such as skills/proficiencies.

### Alters: the cleric’s spells

- **Archetype feature:** Spells
- **Description:** A channeler of the unknown has one fewer spell slot per spell level in which she can prepare spells than normal.
- **Mechanics:**
  - Mechanics summary: A channeler of the unknown has one fewer spell slot per spell level in which she can prepare spells than normal. She is no longer restricted by alignment descriptors, and she gains access to all spells on the cleric spell list, even spells her alignment would normally prohibit.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: the cleric’s aura

- **Archetype feature:** Unknown Aura (Su)
- **Description:** A channeler of the unknown never radiates an alignment aura, as if under the effect of a permanent undetectable alignment spell.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A channeler of the unknown never radiates an alignment aura, as if under the effect of a permanent undetectable alignment spell.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: channel energy

- **Archetype feature:** Channel Entropy (Su)
- **Description:** A channeler of the unknown can channel entropy as a cleric channels negative or positive energy, releasing a wave of twisting void that harms creatures in the area of effect.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: A channeler of the unknown can channel entropy as a cleric channels negative or positive energy, releasing a wave of twisting void that harms creatures in the area of effect. The amount of damage dealt is equal to that an evil cleric of her level would deal by channeling negative energy, except it affects living, unliving, and undead creatures alike. This functions in all other ways as a cleric’s channel energy class feature, including benefiting from feats that affect channel energy (such as Selective Channeling).
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Alters: the cleric’s domains

- **Archetype feature:** Power of the Unknown
- **Description:** A channeler of the unknown has lost the benefit of the domains granted by her deity, but the unknown entity that answers her supplications instead grants her the benefits of one domain from the following list: Darkness, Destruction, Luck, Madness, or Void.
- **Mechanics:**
  - Mechanics summary: A channeler of the unknown has lost the benefit of the domains granted by her deity, but the unknown entity that answers her supplications instead grants her the benefits of one domain from the following list: Darkness, Destruction, Luck, Madness, or Void. Instead of a single domain spell slot, the channeler of the unknown gains two domain spell slots per spell level she can cast. A channeler of the unknown cannot select a subdomain in place of the domain available to her.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook.

### Alters: spontaneous casting

- **Archetype feature:** Spontaneous Casting
- **Description:** Instead of converting prepared spells into cure or inflict spells, a channeler of the unknown can channel stored spell energy into her domain spells.
- **Mechanics:**
  - Mechanics summary: Instead of converting prepared spells into cure or inflict spells, a channeler of the unknown can channel stored spell energy into her domain spells. She can lose a prepared spell, including a domain spell, to spontaneously cast a domain spell of the same spell level or lower.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, cleric domain hook.

## Parsed source feature headings

- Weapon and Armor Proficiency
- Spells
- Unknown Aura (Su)
- Channel Entropy (Su)
- Power of the Unknown
- Spontaneous Casting

