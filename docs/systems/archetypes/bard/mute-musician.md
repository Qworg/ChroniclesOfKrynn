# Bard - Mute Musician

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Mute Musician
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Mute%20Musician
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Mute (Ex); Eschew Materials (Ex); Bardic Performance; Insights from Beyond (Ex); Dulled Horror (Ex); Eldritch Caesura (Su); Ex-Mute Musicians
- **Replaced / altered class features:** bardic knowledge; inspire heroics

## Replacement details

### Replaces: bardic knowledge

- **Archetype feature:** Eschew Materials (Ex)
- **Description:** A mute musician gains Eschew Materials as a bonus feat at 1st level.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: A mute musician gains Eschew Materials as a bonus feat at 1st level.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus.

### Replaces: inspire heroics

- **Archetype feature:** Bardic Performance
- **Description:** A mute musician gains the following bardic performances.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 7, 11, 15, 19, 14, 18.
  - Mechanics summary: A mute musician gains the following bardic performances. Symphony of Silence (Su) : At 3rd level, the mute musician’s music muffles all other sounds within a 30-foot radius. All creatures in the area of effect gain a +2 bonus on all saving throws made against sonic attacks or language-dependent effects. This bonus increases to +3 at 7th level, +4 at 11th level, +5 at 15th level, and +6 at 19th level. Maddening Harmonics (Su) : At 14th level, the mute musician can create a performance so baffling and discordant that it usurps all thought within a 30-foot radius with chaos and entropy. The mute musician can select which creatures in this area are affected by the maddening harmonics and which are not.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, save DC calculation, bardic performance hook, ki/monk hook.

## Parsed source feature headings

- Mute (Ex)
- Eschew Materials (Ex)
- Bardic Performance
- Insights from Beyond (Ex)
- Dulled Horror (Ex)
- Eldritch Caesura (Su)
- Ex-Mute Musicians

