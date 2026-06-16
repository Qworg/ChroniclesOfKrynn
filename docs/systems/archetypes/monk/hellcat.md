# Monk - Hellcat

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Hellcat
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Hellcat
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Class Skills; Weapon Proficiency; Bonus Feat; Hellcat Fury (Ex); Torture Training (Ex); Crucible of Pain (Ex); Hellcat Ki (Su)
- **Replaced / altered class features:** stunning fist and fast movement; evasion, purity of body, and improved evasion; slow fall and still mind

## Replacement details

### Alters: the monk’s alignment requirements

- **Archetype feature:** Alignment
- **Description:** A hellcat must be lawful evil or lawful neutral.
- **Mechanics:**
  - Mechanics summary: A hellcat must be lawful evil or lawful neutral. A hellcat who becomes lawful good or nonlawful cannot gain new levels as a monk but retains all monk abilities.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the monk’s class skills

- **Archetype feature:** Class Skills
- **Description:** A hellcat gains Knowledge (planes) and Survival as class skills, instead of Craft, Knowledge (history), Perform, and Profession.
- **Mechanics:**
  - Mechanics summary: A hellcat gains Knowledge (planes) and Survival as class skills, instead of Craft, Knowledge (history), Perform, and Profession.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, ki/monk hook.

### Replaces: the monk’s weapon proficiencies

- **Archetype feature:** Weapon Proficiency
- **Description:** A hellcat is proficient with the club, crossbow (light or heavy), dagger, kama, light mace, nunchaku, quarterstaff, repeating crossbow (light or heavy), sai, shuriken, and siangham.
- **Mechanics:**
  - Mechanics summary: A hellcat is proficient with the club, crossbow (light or heavy), dagger, kama, light mace, nunchaku, quarterstaff, repeating crossbow (light or heavy), sai, shuriken, and siangham. In addition to monk weapons and unarmed strikes, a hellcat can use a light mace to perform a flurry of blows.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the monk’s bonus feat ability

- **Archetype feature:** Bonus Feat
- **Description:** A hellcat selects bonus feats from the following list: Aspect of the Beast APG , Blind-Fight, Combat Reflexes, Dodge, Diehard, Improved Grapple, and Power Attack.
- **Mechanics:**
  - Level hooks: 6, 10.
  - Mechanics summary: A hellcat selects bonus feats from the following list: Aspect of the Beast APG , Blind-Fight, Combat Reflexes, Dodge, Diehard, Improved Grapple, and Power Attack. At 6th level, the following feats are added to the list: Critical Focus, Greater Grapple, Improved Blind-Fight, Mobility, and Stalwart UC . At 10th level, the following feats are added to the list: Bleeding Critical, Greater Blind-Fight, Improved Critical, Improved Stalwart UC , and Spring Attack.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: stunning fist and fast movement

- **Archetype feature:** Hellcat Fury (Ex)
- **Description:** At 1st level, a hellcat can deal slashing damage with his unarmed strikes.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 4, 8, 12, 16, 20.
  - Mechanics summary: At 1st level, a hellcat can deal slashing damage with his unarmed strikes. At 4th level, whenever a hellcat confirms a critical hit with his slashing unarmed strike, the target of that attack also takes 1d4 points of bleed damage. At 8th level, the bleed damage increases to 1d6 points; at 12th level, the bleed damage increases to 1d8 points; at 16th level, the bleed damage increases to 1d10 points; and at 20th level, the bleed damage increases to 1d12 points.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: evasion, purity of body, and improved evasion

- **Archetype feature:** Torture Training (Ex)
- **Description:** At 2nd level, a hellcat who fails a save against an effect that causes him to become fatigued, sickened, or staggered can attempt a second save against the effect at the end of his next turn.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2, 5, 9.
  - Mechanics summary: At 2nd level, a hellcat who fails a save against an effect that causes him to become fatigued, sickened, or staggered can attempt a second save against the effect at the end of his next turn. Only one additional save is allowed. At 5th level, he can also attempt this second save against effects that would cause him to become frightened or shaken. At 9th level, he can also attempt this second save against effects that would cause him to become exhausted, nauseated, or dazed.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook.

### Replaces: slow fall and still mind

- **Archetype feature:** Crucible of Pain (Ex)
- **Description:** At 3rd level, a hellcat gains an amount of DR/— equal to half his monk level against nonlethal damage.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3.
  - Mechanics summary: At 3rd level, a hellcat gains an amount of DR/— equal to half his monk level against nonlethal damage. In addition, a hellcat is inured to hot climate effects as if using endure elements .
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: ki pool and replaces wholeness of body and diamond body

- **Archetype feature:** Hellcat Ki (Su)
- **Description:** At 4th level, a hellcat gains a pool of ki points that he can use as per the monk class feature but with the following changes.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 7, 10, 14, 11.
  - Mechanics summary: At 4th level, a hellcat gains a pool of ki points that he can use as per the monk class feature but with the following changes. In addition to spending ki to gain an additional attack, increased speed, or improved AC, a hellcat can spend 1 ki point as a swift action to enhance his sight (gaining 60-foot darkvision) or his sense of smell (gaining the scent ability) for 1 minute per level. At 7th level, a hellcat can spend 1 point of ki as a swift action to gain fire resistance 5 for 1 round per level. At 10th level, this fire resistance increases to 10, and at 14th level, it increases to 15. At 11th level, a hellcat can spend 1 point of ki as a swift action to become silhouetted with a ghostly flame, which makes him harder to see in light but easier to see in darkness for 1 round per level. He becomes invisible in bright light, gains concealment (20% miss chance) in normal light, gains no benefit in dim light, and gives off light like a candle in darkness, allowing other creatures to see him even without darkvision.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, ki/monk hook.

## Parsed source feature headings

- Class Skills
- Weapon Proficiency
- Bonus Feat
- Hellcat Fury (Ex)
- Torture Training (Ex)
- Crucible of Pain (Ex)
- Hellcat Ki (Su)

