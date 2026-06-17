# Paladin - Vindictive Bastard

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Vindictive Bastard
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Vindictive%20Bastard
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** No Aura; Locate Ally (Sp); Vindictive Smite (Ex); Faded Grace (Ex); Solo Tactics (Ex); Spiteful Tenacity (Ex); Teamwork Feat; Gang Up (Ex); Swift Justice (Ex); Stalwart (Ex); Aura of Self-Righteousness (Ex); Ultimate Vindication (Ex)
- **Replaced / altered class features:** Aura; Detect Evil; Smite Evil; Divine Grace; Lay on Hands; Divine Health; Mercy; Channel Energy; Divine Bond; Aura of Justice; Aura of Faith; Aura of Righteousness; Holy Champion

## Implementation details

### Alters: the paladin’s aura

- **Archetype feature:** No Aura
- **Description:** A vindictive bastard does not radiate an alignment aura.
- **Detailed mechanics:**
  - **Rules text to implement:** A vindictive bastard does not radiate an alignment aura.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: detect evil

- **Archetype feature:** Locate Ally (Sp)
- **Description:** Once per day, a vindictive bastard can cast locate creature as a spell-like ability with a caster level equal to her paladin level, but she can do so only to target an ally whom she has spent at least 24 hours in close proximity to within the last week.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** Once per day, a vindictive bastard can cast locate creature as a spell-like ability with a caster level equal to her paladin level, but she can do so only to target an ally whom she has spent at least 24 hours in close proximity to within the last week.
- **Implementation flags:**
  - spell-like ability support.

### Replaces: smite evil

- **Archetype feature:** Vindictive Smite (Ex)
- **Description:** A vindictive bastard is particularly ruthless against those who have harmed her or her allies.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 4, 19.
  - **Rules text to implement:** A vindictive bastard is particularly ruthless against those who have harmed her or her allies. Once per day as a swift action, she can smite one target within sight who has dealt hit point damage to her or an ally. She adds her Charisma modifier to her attack rolls and adds her paladin level to damage rolls against the target of her smite. In addition, while vindictive smite is in effect, the vindictive bastard gains a deflection bonus equal to her Charisma bonus (if any) to her AC against attacks by the target of the smite. If the target of vindictive smite has rendered an ally of the vindictive bastard unconscious or dead within the last 24 hours, the bonus on damage rolls on the first attack that hits increases by 2 for every paladin level she has. The vindictive smite effect remains until the target of the smite is dead or the next time the vindictive bastard rests and regains her uses of this ability. At 4th level and every 3 levels thereafter, the vindictive bastard can invoke her vindictive smite one additional time per day, to a maximum of seven times per day at 19th level.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: divine grace

- **Archetype feature:** Faded Grace (Ex)
- **Description:** At 2nd level, a vindictive bastard gains one of the following as a bonus feat: Great Fortitude, Iron Will, or Lightning Reflexes.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a vindictive bastard gains one of the following as a bonus feat: Great Fortitude, Iron Will, or Lightning Reflexes.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: lay on hands

- **Archetype feature:** Solo Tactics (Ex)
- **Description:** At 2nd level, a vindictive bastard gains solo tactics, as per the inquisitor class feature.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a vindictive bastard gains solo tactics, as per the inquisitor class feature. She can activate this ability as a swift action and gains the benefits of it for 1 round. She can use this ability a number of rounds per day equal to half her paladin level + her Charisma modifier.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: divine health

- **Archetype feature:** Spiteful Tenacity (Ex)
- **Description:** At 3rd level, whenever a vindictive bastard has a vindictive smite in effect, she gains the benefits of the Diehard feat.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level, whenever a vindictive bastard has a vindictive smite in effect, she gains the benefits of the Diehard feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: mercy and channel energy

- **Archetype feature:** Teamwork Feat
- **Description:** At 3rd level and every 6 levels thereafter, the vindictive bastard gains a bonus feat in addition to those gained from normal advancement.
- **Detailed mechanics:**
  - **Level hooks:** 3.
  - **Rules text to implement:** At 3rd level and every 6 levels thereafter, the vindictive bastard gains a bonus feat in addition to those gained from normal advancement. These bonus feats must be selected from those listed as teamwork feats. The vindictive bastard must meet the prerequisites of the selected bonus feat.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: divine bond

- **Archetype feature:** Gang Up (Ex)
- **Description:** At 5th level, a vindictive bastard forms a close bond with her companions.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a vindictive bastard forms a close bond with her companions. This allows her to spend a move action to grant half her vindictive smite bonus against a single target to all allies within 30 feet who can see and hear her. This bonus lasts for a number of rounds equal to the vindictive bastard’s Charisma modifier (minimum 1).
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of justice

- **Archetype feature:** Swift Justice (Ex)
- **Description:** At 11th level, a vindictive bastard can activate her gang up ability as a swift action.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 11.
  - **Rules text to implement:** At 11th level, a vindictive bastard can activate her gang up ability as a swift action.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: aura of faith

- **Archetype feature:** Stalwart (Ex)
- **Description:** At 14th level, a vindictive bastard gains stalwart, as per the inquisitor class feature, except she can also benefit from this ability while wearing heavy armor.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 14.
  - **Rules text to implement:** At 14th level, a vindictive bastard gains stalwart, as per the inquisitor class feature, except she can also benefit from this ability while wearing heavy armor.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Replaces: aura of righteousness

- **Archetype feature:** Aura of Self-Righteousness (Ex)
- **Description:** At 17th level, a vindictive bastard gains DR 5/lawful or good and immunity to compulsion spells and spell-like abilities.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 17.
  - **Rules text to implement:** At 17th level, a vindictive bastard gains DR 5/lawful or good and immunity to compulsion spells and spell-like abilities. Each ally within 10 feet of her gains a +4 morale bonus on saving throws against compulsion effects. Aura of self-righteousness functions only while the vindictive bastard is conscious, not if she is unconscious or dead.
- **Implementation flags:**
  - spell-like ability support.

### Replaces: holy champion

- **Archetype feature:** Ultimate Vindication (Ex)
- **Description:** At 20th level, if a foe kills one of a vindictive bastard’s allies or knocks the vindictive bastard unconscious (and she later regains consciousness), the vindictive bastard musters a vindictive fury.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 20.
  - **Rules text to implement:** At 20th level, if a foe kills one of a vindictive bastard’s allies or knocks the vindictive bastard unconscious (and she later regains consciousness), the vindictive bastard musters a vindictive fury. The next time she hits that foe within 1 minute, the vindictive bastard can channel the effects of a disintegrate spell through her weapon, using her paladin level as her effective caster level. Whether or not the target succeeds at its save against the disintegrate effect, it is immune to this ability for the next 24 hours.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- No Aura
- Locate Ally (Sp)
- Vindictive Smite (Ex)
- Faded Grace (Ex)
- Solo Tactics (Ex)
- Spiteful Tenacity (Ex)
- Teamwork Feat
- Gang Up (Ex)
- Swift Justice (Ex)
- Stalwart (Ex)
- Aura of Self-Righteousness (Ex)
- Ultimate Vindication (Ex)
