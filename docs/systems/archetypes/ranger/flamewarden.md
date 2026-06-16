# Ranger - Flamewarden

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Flamewarden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Flamewarden
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Touch of Flame (Su); Spells; Stoking the Embers (Sp); Burning Renewal (Su); Phoenix Rising (Su)
- **Replaced / altered class features:** Hunter's Bond; Spells; Evasion; Camouflage; Improved Evasion; Master Hunter

## Replacement details

### Replaces: hunter’s bond

- **Archetype feature:** Touch of Flame (Su)
- **Description:** At 4th level, a flamewarden can cause his weapons to burst into flame.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 4, 12.
  - Mechanics summary: At 4th level, a flamewarden can cause his weapons to burst into flame. As a standard action, the ranger can grant a single weapon he holds the flaming special ability for 1 minute; while under this effect, the weapon counts as magic for the purpose of overcoming damage reduction. A flamewarden can use this ability a number of times per day equal to 3 + his Wisdom modifier. At 12th level, weapons affected by this ability gain the flaming burst special ability instead.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Alters: the ranger’s spells

- **Archetype feature:** Spells
- **Description:** A flamewarden can prepare spells from the druid list that have the fire descriptor.
- **Mechanics:**
  - Mechanics summary: A flamewarden can prepare spells from the druid list that have the fire descriptor.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: evasion

- **Archetype feature:** Stoking the Embers (Sp)
- **Description:** At 9th level, a flamewarden can fan the last spark of a recently slain creature’s life force back into a full flame.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 9.
  - Mechanics summary: At 9th level, a flamewarden can fan the last spark of a recently slain creature’s life force back into a full flame. Once per day as a standard action, a flamewarden can touch the corpse of a creature that has died within 1 round to grant it the effects of breath of life .
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: camouflage

- **Archetype feature:** Burning Renewal (Su)
- **Description:** At 12th level, a flamewarden can use the cleansing power of fire to remove afflictions from his body, mind, and soul.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, a flamewarden can use the cleansing power of fire to remove afflictions from his body, mind, and soul. When the flamewarden takes 5 or more points of fire damage, he can remove one of the following conditions: fatigued, shaken, or sickened. Alternatively, he can remove 1 point of ability damage or drain from an ability score of his choice. If the flamewarden takes 10 or more points of fire damage, he can remove one of the following conditions: exhausted, frightened, or nauseated. Alternatively, he can remove 1d6 points of ability damage or drain from an ability score of his choice. The ranger can use this ability only once each time he takes fire damage, regardless of how much damage it deals over the required amount.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: improved evasion and master hunter

- **Archetype feature:** Phoenix Rising (Su)
- **Description:** At 16th level, if a flamewarden dies, his body explodes in a conflagration in a 20-foot spread.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 16, 20.
  - Mechanics summary: At 16th level, if a flamewarden dies, his body explodes in a conflagration in a 20-foot spread. Each hostile creature in the area takes 10d6 points of fire damage unless it succeeds at a Reflex save (DC = 10 + half the ranger’s level + his Constitution modifier) for half damage. The flames don’t harm the flamewarden’s allies, who instead are healed 5d6 points of damage, and any poisons they are currently suffering are neutralized as per neutralize poison . At 20th level, the flamewarden gains immunity to fire, and once per week, the flamewarden rises from the ashes of his own destruction 1 round after dying. A limited wish , miracle , or wish spell cast before he rises from the ashes prevents him from doing so, as does the area of an unhallow effect.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, spellcasting/spell-list hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Hunter's Bond

## Parsed source feature headings

- Touch of Flame (Su)
- Spells
- Stoking the Embers (Sp)
- Burning Renewal (Su)
- Phoenix Rising (Su)

