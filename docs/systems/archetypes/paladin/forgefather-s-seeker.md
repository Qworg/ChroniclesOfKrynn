# Paladin - Forgefather's Seeker

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Forgefather's Seeker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Forgefather%27s%20Seeker
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Torag Worshiper; Detect Construct (Sp); Smite Construct (Su); Aura of Destruction (Su); Aura of Unmaking (Su); Forgefather’s Champion (Su)
- **Replaced / altered class features:** Deity; Detect Evil; Smite Evil; Aura of Justice; Aura of Faith; Holy Champion

## Replacement details

### Replaces: detect evil

- **Archetype feature:** Detect Construct (Sp)
- **Description:** A Forgefather’s seeker can detect the presence of constructs at will.
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: A Forgefather’s seeker can detect the presence of constructs at will. This functions as the spell aura sight , except the duration is 1 round and a Forgefather’s seeker learns the locations and power of all auras of all constructs, similar to detect undead .
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: smite evil

- **Archetype feature:** Smite Construct (Su)
- **Description:** This ability functions as the paladin’s smite evil ability, but it functions only against constructs.
- **Mechanics:**
  - Type: Su.
  - Mechanics summary: This ability functions as the paladin’s smite evil ability, but it functions only against constructs. Smiting a construct automatically bypasses any DR or hardness a construct might have. A Forgefather’s seeker can still smite evil, but she adds only half her Charisma bonus on attack rolls, adds only half of her level on damage rolls, and doesn’t increase her bonus damage against outsiders with the evil subtype, evil-aligned dragons, or undead. This otherwise functions as smite evil for the purposes of feats, prerequisites, and other effects.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, smite hook.

### Alters: aura of justice

- **Archetype feature:** Aura of Destruction (Su)
- **Description:** At 11th level, a Forgefather seeker grants her allies smite construct with her aura of justice ability instead of smite evil.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 11.
  - Mechanics summary: At 11th level, a Forgefather seeker grants her allies smite construct with her aura of justice ability instead of smite evil.
- **Implementation flags:**
  - Likely existing hooks: smite hook.

### Replaces: aura of faith

- **Archetype feature:** Aura of Unmaking (Su)
- **Description:** At 14th level, a Forgefather’s seeker’s weapons are treated as adamantine for the purpose of overcoming damage reduction.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 14.
  - Mechanics summary: At 14th level, a Forgefather’s seeker’s weapons are treated as adamantine for the purpose of overcoming damage reduction. Any attack made against an enemy within 10 feet of her is treated as adamantine for the purpose of overcoming damage reduction.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: holy champion

- **Archetype feature:** Forgefather’s Champion (Su)
- **Description:** At 20th level, a Forgefather’s seeker becomes capable of completely dismantling constructs.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a Forgefather’s seeker becomes capable of completely dismantling constructs. Her DR increases to 10/evil. Whenever she uses smite construct and hits a construct, she can immediately attempt to destroy the construct. The construct is reduced to 0 hit points and destroyed unless it succeeds at a Will save (DC = 10 + half the Forgefather’s seeker’s level + the Forgefather’s seeker’s Charisma modifier). After this destruction effect and the damage from the attack is resolved, the smite immediately ends. In addition, whenever a Forgefather’s seeker channels positive energy or uses lay on hands to heal a creature, she heals the maximum possible amount.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, smite hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Deity

## Parsed source feature headings

- Torag Worshiper
- Detect Construct (Sp)
- Smite Construct (Su)
- Aura of Destruction (Su)
- Aura of Unmaking (Su)
- Forgefather’s Champion (Su)

