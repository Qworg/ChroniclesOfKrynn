# Paladin - Forgefather's Seeker

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Forgefather's Seeker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Forgefather%27s%20Seeker
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Torag Worshiper; Detect Construct (Sp); Smite Construct (Su); Aura of Destruction (Su); Aura of Unmaking (Su); Forgefather’s Champion (Su)
- **Replaced / altered class features:** Deity; Detect Evil; Smite Evil; Aura of Justice; Aura of Faith; Holy Champion

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Torag Worshiper
- **Description:** A Forgefather’s seeker must select Torag as her patron deity.
- **Detailed mechanics:**
  - **Rules text to implement:** A Forgefather’s seeker must select Torag as her patron deity.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: detect evil

- **Archetype feature:** Detect Construct (Sp)
- **Description:** A Forgefather’s seeker can detect the presence of constructs at will.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** A Forgefather’s seeker can detect the presence of constructs at will. This functions as the spell aura sight, except the duration is 1 round and a Forgefather’s seeker learns the locations and power of all auras of all constructs, similar to detect undead.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: smite evil

- **Archetype feature:** Smite Construct (Su)
- **Description:** This ability functions as the paladin’s smite evil ability, but it functions only against constructs.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** This ability functions as the paladin’s smite evil ability, but it functions only against constructs. Smiting a construct automatically bypasses any DR or hardness a construct might have. A Forgefather’s seeker can still smite evil, but she adds only half her Charisma bonus on attack rolls, adds only half of her level on damage rolls, and doesn’t increase her bonus damage against outsiders with the evil subtype, evil-aligned dragons, or undead. This otherwise functions as smite evil for the purposes of feats, prerequisites, and other effects.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: aura of justice

- **Archetype feature:** Aura of Destruction (Su)
- **Description:** At 11th level, a Forgefather seeker grants her allies smite construct with her aura of justice ability instead of smite evil.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a Forgefather seeker grants her allies smite construct with her aura of justice ability instead of smite evil.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of faith

- **Archetype feature:** Aura of Unmaking (Su)
- **Description:** At 14th level, a Forgefather’s seeker’s weapons are treated as adamantine for the purpose of overcoming damage reduction.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a Forgefather’s seeker’s weapons are treated as adamantine for the purpose of overcoming damage reduction. Any attack made against an enemy within 10 feet of her is treated as adamantine for the purpose of overcoming damage reduction. This ability functions only while a Forgefather’s seeker is conscious, not if she is unconscious or dead.
- **Implementation flags:**
  - ki subsystem.

### Replaces: holy champion

- **Archetype feature:** Forgefather’s Champion (Su)
- **Description:** At 20th level, a Forgefather’s seeker becomes capable of completely dismantling constructs.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, a Forgefather’s seeker becomes capable of completely dismantling constructs. Her DR increases to 10/evil. Whenever she uses smite construct and hits a construct, she can immediately attempt to destroy the construct. The construct is reduced to 0 hit points and destroyed unless it succeeds at a Will save (DC = 10 + half the Forgefather’s seeker’s level + the Forgefather’s seeker’s Charisma modifier). After this destruction effect and the damage from the attack is resolved, the smite immediately ends. In addition, whenever a Forgefather’s seeker channels positive energy or uses lay on hands to heal a creature, she heals the maximum possible amount.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Torag Worshiper
- Detect Construct (Sp)
- Smite Construct (Su)
- Aura of Destruction (Su)
- Aura of Unmaking (Su)
- Forgefather’s Champion (Su)
