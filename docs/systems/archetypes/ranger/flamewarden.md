# Ranger - Flamewarden

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Flamewarden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Flamewarden
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Touch of Flame (Su); Spells; Stoking the Embers (Sp); Burning Renewal (Su); Phoenix Rising (Su)
- **Replaced / altered class features:** Hunter's Bond; Spells; Evasion; Camouflage; Improved Evasion; Master Hunter

## Implementation details

### Replaces: hunter’s bond

- **Archetype feature:** Touch of Flame (Su)
- **Description:** At 4th level, a flamewarden can cause his weapons to burst into flame.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 4, 12.
  - **Rules text to implement:** At 4th level, a flamewarden can cause his weapons to burst into flame. As a standard action, the ranger can grant a single weapon he holds the flaming special ability for 1 minute; while under this effect, the weapon counts as magic for the purpose of overcoming damage reduction. A flamewarden can use this ability a number of times per day equal to 3 + his Wisdom modifier. At 12th level, weapons affected by this ability gain the flaming burst special ability instead.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: the ranger’s spells

- **Archetype feature:** Spells
- **Description:** A flamewarden can prepare spells from the druid list that have the fire descriptor.
- **Detailed mechanics:**
  - **Rules text to implement:** A flamewarden can prepare spells from the druid list that have the fire descriptor.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: evasion

- **Archetype feature:** Stoking the Embers (Sp)
- **Description:** At 9th level, a flamewarden can fan the last spark of a recently slain creature’s life force back into a full flame.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 9.
  - **Rules text to implement:** At 9th level, a flamewarden can fan the last spark of a recently slain creature’s life force back into a full flame. Once per day as a standard action, a flamewarden can touch the corpse of a creature that has died within 1 round to grant it the effects of breath of life.
- **Implementation flags:**
  - ki subsystem.

### Replaces: camouflage

- **Archetype feature:** Burning Renewal (Su)
- **Description:** At 12th level, a flamewarden can use the cleansing power of fire to remove afflictions from his body, mind, and soul.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a flamewarden can use the cleansing power of fire to remove afflictions from his body, mind, and soul. When the flamewarden takes 5 or more points of fire damage, he can remove one of the following conditions: fatigued, shaken, or sickened. Alternatively, he can remove 1 point of ability damage or drain from an ability score of his choice. If the flamewarden takes 10 or more points of fire damage, he can remove one of the following conditions: exhausted, frightened, or nauseated. Alternatively, he can remove 1d6 points of ability damage or drain from an ability score of his choice. The ranger can use this ability only once each time he takes fire damage, regardless of how much damage it deals over the required amount. He can use this ability a number of times per day equal to 3 + her Wisdom modifier. If the flamewarden has fire resistance or immunity to fire, fire damage he would have otherwise taken still counts toward activating burning renewal.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: improved evasion and master hunter

- **Archetype feature:** Phoenix Rising (Su)
- **Description:** At 16th level, if a flamewarden dies, his body explodes in a conflagration in a 20-foot spread.
- **Detailed mechanics:**
  - **Type:** Su.
  - **Level hooks:** 16, 20.
  - **Rules text to implement:** At 16th level, if a flamewarden dies, his body explodes in a conflagration in a 20-foot spread. Each hostile creature in the area takes 10d6 points of fire damage unless it succeeds at a Reflex save (DC = 10 + half the ranger’s level + his Constitution modifier) for half damage. The flames don’t harm the flamewarden’s allies, who instead are healed 5d6 points of damage, and any poisons they are currently suffering are neutralized as per neutralize poison. The flamewarden’s body is reduced to ashes by the explosion. At 20th level, the flamewarden gains immunity to fire, and once per week, the flamewarden rises from the ashes of his own destruction 1 round after dying. The flamewarden’s body re-forms with all his equipment, and he returns to life with half his maximum hit points. Any ability scores that were 0 become 1, and nonmagical diseases and poisons are cured. A limited wish, miracle, or wish spell cast before he rises from the ashes prevents him from doing so, as does the area of an unhallow effect.
- **Implementation flags:**
  - poison subsystem.

## Parsed source feature headings

- Touch of Flame (Su)
- Spells
- Stoking the Embers (Sp)
- Burning Renewal (Su)
- Phoenix Rising (Su)
