# Ranger - Transporter

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Transporter
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Transporter
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Trailbreaker (Ex); Plot Course (Ex); Smuggler’s Bond (Ex); Hideaway (Ex)
- **Replaced / altered class features:** wild empathy; favored terrain; woodland stride

## Replacement details

### Replaces: wild empathy

- **Archetype feature:** Trailbreaker (Ex)
- **Description:** A transporter constantly works to obscure his trail.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A transporter constantly works to obscure his trail. He increases the Survival DC to track him, or a group of which he is a part, by an amount equal to half his ranger level (minimum 1).
- **Implementation flags:**
  - Likely existing hooks: save DC calculation.

### Replaces: favored terrain

- **Archetype feature:** Plot Course (Ex)
- **Description:** At 3rd level, a transporter can spend 1d4 hours and attempt a DC 15 Knowledge (geography) check to plot a subtle course of travel between his current location and another destination.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8, 13, 18.
  - Mechanics summary: At 3rd level, a transporter can spend 1d4 hours and attempt a DC 15 Knowledge (geography) check to plot a subtle course of travel between his current location and another destination. The transporter’s course of travel is almost never direct, as it is optimized for smuggling. Thereafter, the transporter gains a +2 bonus on initiative, Knowledge (geography), Perception, Stealth, and Survival checks involving traveling along his plotted course. At 8th level, if the transporter’s Knowledge (geography) check exceeds the DC by 10, the bonuses increase to +4. At 13th level, if his Knowledge (geography) check exceeds the DC by 20, the bonuses increase to +6, and at 18th level, if the transporter’s check exceeds the DC by 30, the bonuses increase to +8. A transporter can gain the benefits of only a single plotted course at any given time.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation, favored terrain hook.

### Alters: hunter’s bond

- **Archetype feature:** Smuggler’s Bond (Ex)
- **Description:** At 4th level, a transporter must choose his allies as his hunter’s bond, not an animal companion.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 4.
  - Mechanics summary: At 4th level, a transporter must choose his allies as his hunter’s bond, not an animal companion. Instead of granting the transporter’s favored enemy bonus to his allies as a move action, he instead grants his plot course bonus to his allies constantly.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, animal companion hook, favored enemy hook.

### Replaces: woodland stride

- **Archetype feature:** Hideaway (Ex)
- **Description:** A transporter can spend 1 hour and attempt a DC 20 Survival check to create a hidden shelter, useful for staying unseen by patrols of enemy creatures.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A transporter can spend 1 hour and attempt a DC 20 Survival check to create a hidden shelter, useful for staying unseen by patrols of enemy creatures. The transporter’s shelter can hold the transporter and one additional creature for every 2 by which the transporter exceeds the DC. Additionally, its floor is either elevated or constructed of a different substance than the nearby ground, preventing creatures outside of the shelter from using tremorsense to detect creatures inside, and vice versa. Finally, the clever structure of the hideaway causes creatures outside of the shelter to take a –10 penalty on Perception checks to notice creatures inside, as if through a 1-foot-thick wall, while only causing creatures inside to take a –2 penalty on Perception checks to notice creatures outside. These bonuses do not apply if the enemy creatures are intimately familiar with the area in which the hideaway was built (such as an area right near their home).
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, numeric penalty, save DC calculation.

## Parsed source feature headings

- Trailbreaker (Ex)
- Plot Course (Ex)
- Smuggler’s Bond (Ex)
- Hideaway (Ex)

