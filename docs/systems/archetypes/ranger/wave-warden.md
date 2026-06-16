# Ranger - Wave Warden

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Wave Warden
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Wave%20Warden
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Deep Sentinel (Ex); Aquatic Prowess Feat (Ex); Favored Terrain (Ex); Seaborn (Ex); Watery Summons (Sp)
- **Replaced / altered class features:** track; woodland stride; swift tracker

## Replacement details

### Replaces: track

- **Archetype feature:** Deep Sentinel (Ex)
- **Description:** A wave warden adds half his level (minimum +1) on Perception checks made to notice creatures underwater.
- **Mechanics:**
  - Type: Ex.
  - Mechanics summary: A wave warden adds half his level (minimum +1) on Perception checks made to notice creatures underwater.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: woodland stride

- **Archetype feature:** Seaborn (Ex)
- **Description:** At 7th level, a wave warden may move through any sort of aquatic growth (such as coral or seaweed) or across a wet surface at his normal speed and without taking damage or suffering any other impairment.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 7.
  - Mechanics summary: At 7th level, a wave warden may move through any sort of aquatic growth (such as coral or seaweed) or across a wet surface at his normal speed and without taking damage or suffering any other impairment. Obstacles that are enchanted or magically manipulated to impede motion still affect him.
- **Implementation flags:**
  - Likely existing hooks: ki/monk hook.

### Replaces: swift tracker

- **Archetype feature:** Watery Summons (Sp)
- **Description:** At 8th level, a wave warden can summon allies once per day as a full-round action.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 8, 11.
  - Mechanics summary: At 8th level, a wave warden can summon allies once per day as a full-round action. This functions as summon nature’s ally III , except it can only be used to summon creatures with the aquatic or water subtypes. At 11th level, this ability improves to summon nature’s ally IV , with this progression continuing every three levels thereafter. The warden’s caster level is equal to his ranger level.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

## Parsed source feature headings

- Deep Sentinel (Ex)
- Aquatic Prowess Feat (Ex)
- Favored Terrain (Ex)
- Seaborn (Ex)
- Watery Summons (Sp)

