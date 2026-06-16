# Cleric - Idealist

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Idealist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Idealist
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Planar Bond (Su); Invoke Realm (Su)
- **Replaced / altered class features:** Spontaneous Casting; Channel Energy

## Replacement details

### Alters: spontaneous casting

- **Archetype feature:** Planar Bond (Su)
- **Description:** At 1st level, an idealist must choose one plane as his planar bond.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 1, 7.
  - Mechanics summary: At 1st level, an idealist must choose one plane as his planar bond. This plane must be his deity’s home plane. An idealist can spontaneously cast the 1st-, 4th-, and 7th-level spells listed below for his chosen plane (provided he can cast spells of that level), in addition to cure or inflict spells. Elysium : Remove fear , freedom of movement , and word of chaos . Other (Including Positive and Negative Energy Planes, Material Plane or Demiplane) : Work with your GM to select three spells that match the themes of the deity you worship. † This spell is not added to your cleric list—you can cast it spontaneously only using planar bond.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, smite hook, ki/monk hook.

### Alters: channel energy

- **Archetype feature:** Invoke Realm (Su)
- **Description:** When an idealist channels energy, she channels raw essence rather than positive or negative energy, superimposing a portion of her deity’s planar realm over her location.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 19, 5.
  - Mechanics summary: When an idealist channels energy, she channels raw essence rather than positive or negative energy, superimposing a portion of her deity’s planar realm over her location. This effect extends out to a radius of 10 feet, plus 5 feet for every 2 cleric levels she has beyond 1st, to a maximum radius of 55 feet at 19th level. This effect lasts for 1 round plus 1 round per point of the idealist’s Charisma bonus. While this effect is active, the idealist gains a +1 bonus on Diplomacy checks against creatures who worship her deity and a +1 bonus on Intimidate checks against creatures who do not. This bonus increases by 1 at 5th level and every 5 levels thereafter. This channeled energy imposes itself over the current terrain, changing its visual appearance to more thematically suit the energy’s associated planar realm, but cannot hide obvious hazards or otherwise allow for a creature to hide any more effectively than the normal terrain would.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

## Parsed source feature headings

- Planar Bond (Su)
- Invoke Realm (Su)

