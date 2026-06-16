# Ranger - Warden

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Warden
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Master of Terrain (Ex); Live in Comfort (Ex); Terrain Bond (Ex); Able Explorer (Ex); Wilderness Whispers (Su)
- **Replaced / altered class features:** the ranger’s first favored enemy ability; all combat style feats; hunter’s bond; the ranger’s second, third, and fourth favored enemies; the ranger’s fifth favorite enemy and master hunter

## Replacement details

### Replaces: the ranger’s first favored enemy ability

- **Archetype feature:** Master of Terrain (Ex)
- **Description:** At 1st level, a warden selects his first favored terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1, 3, 18.
  - Mechanics summary: At 1st level, a warden selects his first favored terrain. He gains another one at 3rd level, and then every five levels thereafter (for a maximum of five favored terrains at 18th level).
- **Implementation flags:**
  - Likely existing hooks: favored enemy hook, favored terrain hook.

### Replaces: all combat style feats

- **Archetype feature:** Live in Comfort (Ex)
- **Description:** At 2nd level, a warden is truly at home within his favored terrains.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a warden is truly at home within his favored terrains. He knows all the signs of the wilderness. He can easily live off the land in comfort, and can provide for companions. The warden can take 10 on any Survival check involving any of his favored terrains, even when in immediate danger and distracted. If the warden is not in immediate danger and distracted, he can take 20 even if the check has a penalty for failure.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, numeric penalty, favored terrain hook.

### Replaces: hunter’s bond

- **Archetype feature:** Terrain Bond (Ex)
- **Description:** At 4th level, a warden forms a bond with the land itself, enabling him to direct others in such terrain.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a warden forms a bond with the land itself, enabling him to direct others in such terrain. When in his favored terrain, the warden grants all allies within line of sight and that can hear him a +2 bonus on initiative checks and Perception, Stealth, and Survival skill checks. Also, as long as they travel with him, the warden’s allies leave no trail and can’t be tracked. The warden can choose for the group to leave a trail, or even for specific members of the group to leave a trail if he so desires.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, typed/untyped numeric bonus, favored terrain hook, ki/monk hook.

### Replaces: the ranger’s second, third, and fourth favored enemies

- **Archetype feature:** Able Explorer (Ex)
- **Description:** At 5th level, when making an Acrobatics, Climb, Fly, Ride, or Swim check in any of his favored terrains, a warden can make two skill checks and take the higher.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 5.
  - Mechanics summary: At 5th level, when making an Acrobatics, Climb, Fly, Ride, or Swim check in any of his favored terrains, a warden can make two skill checks and take the higher.
- **Implementation flags:**
  - Likely existing hooks: skill bonus/class-skill changes, favored terrain hook, ki/monk hook.

### Replaces: the ranger’s fifth favorite enemy and master hunter

- **Archetype feature:** Wilderness Whispers (Su)
- **Description:** At 20th level, a warden cannot be surprised and always acts as if he had rolled a natural 20 on any initiative check while within any of his favored terrains.A warden can always move at full speed while using Survival to follow tracks without penalty.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 20.
  - Mechanics summary: At 20th level, a warden cannot be surprised and always acts as if he had rolled a natural 20 on any initiative check while within any of his favored terrains.A warden can always move at full speed while using Survival to follow tracks without penalty.
- **Implementation flags:**
  - Likely existing hooks: numeric penalty, favored terrain hook.

## Parsed source feature headings

- Master of Terrain (Ex)
- Live in Comfort (Ex)
- Terrain Bond (Ex)
- Able Explorer (Ex)
- Wilderness Whispers (Su)

