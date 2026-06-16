# Bard - Filidh

- **Class:** Bard
- **Pathfinder source class:** Bard
- **Archetype:** Filidh
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Bard%20Filidh
- **Index:** docs/systems/archetypes/bard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Armor and Weapon Proficiency; Natural Magic; Nature’s Song
- **Replaced / altered class features:** Weapon/Armor Proficiencies; Spellcasting; Inspire Courage; Suggestion; Dirge of Doom; Inspire Heroics; Deadly Performance

## Replacement details

### Alters: a bard’s normal armor and weapon proficiencies

- **Archetype feature:** Armor and Weapon Proficiency
- **Description:** A filidh is proficient with light armor and is prohibited from wearing metal armor.
- **Mechanics:**
  - Mechanics summary: A filidh is proficient with light armor and is prohibited from wearing metal armor. A filidh can wear wooden armor that has been altered by the ironwood spell. Filidhs are proficient with shields (except tower shields) but can use only those made of wood. A filidh who wears prohibited armor or uses a prohibited shield is unable to cast bard spells or use any of his supernatural or spell-like class abilities while doing so and for 24 hours thereafter.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Alters: the bard’s spellcasting

- **Archetype feature:** Natural Magic
- **Description:** A filidh casts spells as a bard, but the spells are divine, not arcane, and therefore not subject to arcane spell failure.
- **Mechanics:**
  - Mechanics summary: A filidh casts spells as a bard, but the spells are divine, not arcane, and therefore not subject to arcane spell failure. A filidh must use a holy symbol or a musical instrument as a divine focus when a spell includes such a component. He still uses the bard spell list.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- Weapon/Armor Proficiencies
- Inspire Courage
- Suggestion
- Dirge of Doom
- Inspire Heroics
- Deadly Performance

## Parsed source feature headings

- Armor and Weapon Proficiency
- Natural Magic
- Nature’s Song

