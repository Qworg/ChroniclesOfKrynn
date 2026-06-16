# Monk - Softstrike Monk

- **Class:** Monk
- **Pathfinder source class:** Monk
- **Archetype:** Softstrike Monk
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Monk%20Softstrike%20Monk
- **Index:** docs/systems/archetypes/monk.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Weapon Proficiency; Feather Touch (Ex); Nonlethal Strikes (Ex); Tenet of Life (Su); Life-Giving Blows (Su); Wholeness of Body and Spirit (Su); Incapacitating Palm (Su); Resilient Body (Su)
- **Replaced / altered class features:** Weapon Proficiency; Unarmed Strike; 6th, 10th-level Bonus Feats; Wholeness of Body; Quivering Palm; Empty Body

## Replacement details

### Replaces: the monk’s weapon proficiency

- **Archetype feature:** Weapon Proficiency
- **Description:** A softstrike monk is proficient with the aklys, bolas, club, light flail, light mace, nunchaku, quarterstaff, sap, sling, and any weapon with the monk special quality that can deal bludgeoning damage.
- **Mechanics:**
  - Mechanics summary: A softstrike monk is proficient with the aklys, bolas, club, light flail, light mace, nunchaku, quarterstaff, sap, sling, and any weapon with the monk special quality that can deal bludgeoning damage. He is considered proficient only with monk weapons that can deal multiple types of damage when dealing bludgeoning damage.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: unarmed strike

- **Archetype feature:** Nonlethal Strikes (Ex)
- **Description:** A softstrike monk focuses on blows that do not inflict deadly harm.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 20, 1.
  - Mechanics summary: A softstrike monk focuses on blows that do not inflict deadly harm. When a softstrike monk deals nonlethal damage with his unarmed strikes, his monk level is treated as 4 levels higher for the purposes of determining the damage he deals (to a maximum of 4d8 at 20th level for a Medium monk). When dealing lethal damage with his unarmed strikes, his monk level is treated as if it were 4 levels lower (minimum 1st level) for the purpose of determining damage.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the bonus feats gained at 6th

- **Archetype feature:** Life-Giving Blows (Su)
- **Description:** At 6th level, a softstrike monk can force a piece of his life force into a nonliving creature to disrupt its animating essence.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 10.
  - Mechanics summary: At 6th level, a softstrike monk can force a piece of his life force into a nonliving creature to disrupt its animating essence. If he hits an undead foe with an unarmed attack, he can spend 1 ki point as a free action to remove the target’s immunity to nonlethal damage for a number of minutes equal to his Wisdom modifier. If, during this time, the target’s nonlethal damage exceeds its current hit points, it is destroyed. At 10th level, a softstrike monk can also use this ability against constructs.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Replaces: 10th levels

- **Archetype feature:** Life-Giving Blows (Su)
- **Description:** At 6th level, a softstrike monk can force a piece of his life force into a nonliving creature to disrupt its animating essence.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 6, 10.
  - Mechanics summary: At 6th level, a softstrike monk can force a piece of his life force into a nonliving creature to disrupt its animating essence. If he hits an undead foe with an unarmed attack, he can spend 1 ki point as a free action to remove the target’s immunity to nonlethal damage for a number of minutes equal to his Wisdom modifier. If, during this time, the target’s nonlethal damage exceeds its current hit points, it is destroyed. At 10th level, a softstrike monk can also use this ability against constructs.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, ki/monk hook.

### Alters: wholeness of body

- **Archetype feature:** Wholeness of Body and Spirit (Su)
- **Description:** At 7th level, a softstrike monk can use wholeness of body on both himself and other creatures, though it heals only nonlethal damage.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a softstrike monk can use wholeness of body on both himself and other creatures, though it heals only nonlethal damage. If he uses this ability on an unconscious foe, he can spend 1 additional ki point to force the creature to accept a pact of life. The creature must succeed at a Will saving throw (DC = 10 + half the softstrike monk’s level + his Wisdom modifier) or the pact renders it unable to directly attack the monk and any allies within 60 feet, as per sanctuary , for a number of days equal to the softstrike monk’s level.
- **Implementation flags:**
  - Likely existing hooks: save DC calculation, ki/monk hook.

### Alters: quivering palm

- **Archetype feature:** Incapacitating Palm (Su)
- **Description:** At 15th level, a softstrike monk renders the target of his quivering palm unconscious instead of killing the creature.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 15.
  - Mechanics summary: At 15th level, a softstrike monk renders the target of his quivering palm unconscious instead of killing the creature. Upon failing its Fortitude saving throw, the target is knocked unconscious for a number of minutes equal to the softstrike monk’s level.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: empty body

- **Archetype feature:** Resilient Body (Su)
- **Description:** At 19th level, a softstrike monk’s mastery of nonlethal combat lets him apply his techniques to his defense.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19.
  - Mechanics summary: At 19th level, a softstrike monk’s mastery of nonlethal combat lets him apply his techniques to his defense. A softstrike monk converts any precision damage he takes to nonlethal damage.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 6th, 10th-level Bonus Feats

## Parsed source feature headings

- Weapon Proficiency
- Feather Touch (Ex)
- Nonlethal Strikes (Ex)
- Tenet of Life (Su)
- Life-Giving Blows (Su)
- Wholeness of Body and Spirit (Su)
- Incapacitating Palm (Su)
- Resilient Body (Su)

