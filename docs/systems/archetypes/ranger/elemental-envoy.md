# Ranger - Elemental Envoy

- **Class:** Ranger
- **Pathfinder source class:** Ranger
- **Archetype:** Elemental Envoy
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Ranger%20Elemental%20Envoy
- **Index:** docs/systems/archetypes/ranger.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Planar Combatant (Ex); Elemental Explorer (Ex)
- **Replaced / altered class features:** Combat Style; Favored Terrain

## Replacement details

### Alters: the ranger’s combat style feats

- **Archetype feature:** Planar Combatant (Ex)
- **Description:** At 2nd level, an elemental envoy must choose the elemental combat style on this page, choosing his combat style feats from that list.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an elemental envoy must choose the elemental combat style on this page, choosing his combat style feats from that list.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions.

### Alters: favored terrain

- **Archetype feature:** Elemental Explorer (Ex)
- **Description:** At 3rd level, instead of selecting a favored terrain, an elemental envoy gains the typical favored terrain bonuses when traveling on the Plane of Air, Plane of Earth, Plane of Fire, and Plane of Water, except the elemental envoy gains a bonus on Knowledge (planes) checks instead of Knowledge (geography) checks.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 3, 8.
  - Mechanics summary: At 3rd level, instead of selecting a favored terrain, an elemental envoy gains the typical favored terrain bonuses when traveling on the Plane of Air, Plane of Earth, Plane of Fire, and Plane of Water, except the elemental envoy gains a bonus on Knowledge (planes) checks instead of Knowledge (geography) checks. At 8th level and every 5 levels thereafter, he does not select an additional favored terrain, but his favored terrain bonuses increase by 2.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, favored terrain hook.

## Parsed source feature headings

- Planar Combatant (Ex)
- Elemental Explorer (Ex)

