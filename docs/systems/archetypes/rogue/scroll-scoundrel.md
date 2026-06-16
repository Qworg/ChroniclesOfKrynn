# Rogue - Scroll Scoundrel

- **Class:** Rogue
- **Pathfinder source class:** Rogue
- **Archetype:** Scroll Scoundrel
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Rogue%20Scroll%20Scoundrel
- **Index:** docs/systems/archetypes/rogue.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fast Talker (Ex); Adaptive Learning (Ex); Pay it Back (Ex); Elusive Gambit (Ex); Spot Weakness (Ex)
- **Replaced / altered class features:** the rogue’s 2nd-level rogue talent; trap sense; uncanny dodge; improved uncanny dodge; the scroll scoundrel’s 10th-level rogue talent

## Replacement details

### Replaces: the rogue’s 2nd-level rogue talent

- **Archetype feature:** Fast Talker (Ex)
- **Description:** At 2nd level, a scroll scoundrel’s penalty on Bluff checks that are unlikely, farfetched, or impossible to achieve is reduced by 5.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a scroll scoundrel’s penalty on Bluff checks that are unlikely, farfetched, or impossible to achieve is reduced by 5. When he makes a Diplomacy check to adjust a creature’s starting attitude, he gains a +3 competence bonus on the skill check.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, numeric penalty, ki/monk hook.

### Replaces: trap sense

- **Archetype feature:** Adaptive Learning (Ex)
- **Description:** At 3rd level, a scroll scoundrel gains a +1 bonus on saving throws against abilities and spells he has already successfully saved against within the past minute (even if the spells or abilities in question were used by different creatures).
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 6, 18.
  - Mechanics summary: At 3rd level, a scroll scoundrel gains a +1 bonus on saving throws against abilities and spells he has already successfully saved against within the past minute (even if the spells or abilities in question were used by different creatures). This bonus increases by +1 when the scroll scoundrel reaches 6th level, and by an additional +1 for every three levels thereafter, to a maximum of +6 at 18th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook.

### Replaces: uncanny dodge

- **Archetype feature:** Pay it Back (Ex)
- **Description:** At 4th level, a scroll scoundrel receives a +1 bonus on attack rolls and weapon damage rolls against foes who made melee attacks against him in the previous round.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4, 10.
  - Mechanics summary: At 4th level, a scroll scoundrel receives a +1 bonus on attack rolls and weapon damage rolls against foes who made melee attacks against him in the previous round. This bonus increases to +2 at 10th level.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: improved uncanny dodge

- **Archetype feature:** Elusive Gambit (Ex)
- **Description:** At 6th level, a scroll scoundrel’s movement can leave a foe off-balance.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 6.
  - Mechanics summary: At 6th level, a scroll scoundrel’s movement can leave a foe off-balance. If a scroll scoundrel provokes an attack of opportunity by moving past an opponent and that opponent then misses with the attack, that foe is considered to be flat-footed against the scroll scoundrel’s next melee attack, provided that melee attack comes within 1 round of the missed attack of opportunity.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: the scroll scoundrel’s 10th-level rogue talent

- **Archetype feature:** Spot Weakness (Ex)
- **Description:** At 10th level, a scroll scoundrel can discover a weakness in his enemy’s defenses as a swift action.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 10, 15, 20.
  - Mechanics summary: At 10th level, a scroll scoundrel can discover a weakness in his enemy’s defenses as a swift action. His next successful hit in the same round ignores 5 points of the foe’s damage reduction or hardness. At 15th level, he ignores the first 10 points, and at 20th level, the first 15 points. If the attack deals any sneak attack damage, he ignores all of the foe’s damage reduction or hardness for that attack. He cannot use this ability on foes that are immune to critical hits.
- **Implementation flags:**
  - Likely existing hooks: sneak attack hook.

## Parsed source feature headings

- Fast Talker (Ex)
- Adaptive Learning (Ex)
- Pay it Back (Ex)
- Elusive Gambit (Ex)
- Spot Weakness (Ex)

