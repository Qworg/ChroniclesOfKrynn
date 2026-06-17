# Cleric - Lawspeaker

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Lawspeaker
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Lawspeaker
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Divine Judgment; Circumvent Obfuscation (Sp)
- **Replaced / altered class features:** Alignment; Domains

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Alignment
- **Description:** A lawspeaker must be lawful.
- **Detailed mechanics:**
  - **Rules text to implement:** A lawspeaker must be lawful.
- **Implementation flags:**
  - feat grant/prerequisite handling.

### Alters: domains

- **Archetype feature:** Divine Judgment
- **Description:** A lawspeaker must select the Law domain or any subdomain of Law offered by her deity.
- **Detailed mechanics:**
  - **Rules text to implement:** A lawspeaker must select the Law domain or any subdomain of Law offered by her deity. She does not gain a second domain.
- **Implementation flags:**
  - domain system.
  - judgment subsystem.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Circumvent Obfuscation (Sp)
- **Description:** As a standard action, a lawspeaker can expend two uses of channel energy to expose truths and banish falsehoods.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Rules text to implement:** As a standard action, a lawspeaker can expend two uses of channel energy to expose truths and banish falsehoods. The energy manifests as a spell-like ability, and this action does not count as channeling for the purposes of abilities and feats. Unless listed otherwise, the resulting abilities use the lawspeaker’s cleric level as her caster level and have the same range and required components as the corresponding spell. The spell-like abilities available are cumulative and are listed below at the level at which the lawspeaker can first access them. Level 1: Calm emotions. Level 3: Zone of truth. Level 5: Invisibility purge. Level 7: Discern lies. Level 9: True seeing (self only). Level 11: Greater dispel magic (30-foot burst; targets only illusion spells, polymorph effects, and spells granting a bonus on Bluff and Disguise checks). Level 13: Communal tongues. Level 15: Discern location. Level 17: Antimagic field (30-foot radius).
- **Implementation flags:**
  - spell-like ability support.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Alignment
- Divine Judgment
- Circumvent Obfuscation (Sp)
