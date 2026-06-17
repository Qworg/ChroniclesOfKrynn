# Ranger - Elemental Envoy

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Elemental Envoy
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Elemental%20Envoy
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Planar Combatant (Ex); Elemental Explorer (Ex)
- **Replaced / altered class features:** Combat Style; Favored Terrain

## Implementation details

### Alters: the ranger’s combat style feats

- **Archetype feature:** Planar Combatant (Ex)
- **Description:** At 2nd level, an elemental envoy must choose the elemental combat style on this page, choosing his combat style feats from that list.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, an elemental envoy must choose the elemental combat style on this page, choosing his combat style feats from that list.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: favored terrain

- **Archetype feature:** Elemental Explorer (Ex)
- **Description:** At 3rd level, instead of selecting a favored terrain, an elemental envoy gains the typical favored terrain bonuses when traveling on the Plane of Air, Plane of Earth, Plane of Fire, and Plane of Water, except the elemental envoy gains a bonus on Knowledge (planes) checks instead of Knowledge (geography) checks.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 3, 8.
  - **Rules text to implement:** At 3rd level, instead of selecting a favored terrain, an elemental envoy gains the typical favored terrain bonuses when traveling on the Plane of Air, Plane of Earth, Plane of Fire, and Plane of Water, except the elemental envoy gains a bonus on Knowledge (planes) checks instead of Knowledge (geography) checks. At 8th level and every 5 levels thereafter, he does not select an additional favored terrain, but his favored terrain bonuses increase by 2.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

## Parsed source feature headings

- Planar Combatant (Ex)
- Elemental Explorer (Ex)
