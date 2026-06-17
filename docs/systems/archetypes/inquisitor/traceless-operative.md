# Inquisitor - Traceless Operative

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Traceless Operative
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Traceless%20Operative
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Conceal Evidence (Ex); Trackless (Sp); Uncanny Dodge (Ex); Improved Uncanny Dodge (Ex)
- **Replaced / altered class features:** monster lore and stern gaze; track; bane; greater bane

## Implementation details

### Replaces: monster lore and stern gaze

- **Archetype feature:** Conceal Evidence (Ex)
- **Description:** A traceless operative knows how to clean up and obscure the evidence of foul play.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** A traceless operative knows how to clean up and obscure the evidence of foul play. It takes her 1d3 × 10 minutes to conceal or alter evidence in a 10-foot-by-10-foot area. She uses Disguise to alter evidence or Stealth to conceal it, though bonuses and penalties based on her abilities or effects that disguise or hide her own body (such as from disguise self, a cloak of elvenkind, or the size modifier on Stealth checks) do not apply. A creature attempting to investigate the scene using Perception must succeed at the original Perception DC or a DC equal to the traceless operative’s check, whichever is higher, in order to discover the true evidence. A creature who fails against a traceless operative’s Disguise check potentially also derives the false evidence planted by the traceless operative.
- **Implementation flags:**
  - ki subsystem.

### Replaces: track

- **Archetype feature:** Trackless (Sp)
- **Description:** At 2nd level, a traceless operative’s deity helps obscure her path from others.
- **Detailed mechanics:**
  - **Type:** Sp.
  - **Level hooks:** 2.
  - **Rules text to implement:** At 2nd level, a traceless operative’s deity helps obscure her path from others. The DC to track the traceless operative (or a group including her) increases by half her inquisitor level. This does not stack with similar abilities, such as a transporter’s trailbreaker ability.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: bane

- **Archetype feature:** Uncanny Dodge (Ex)
- **Description:** At 5th level, a traceless operative can react to danger before her senses would normally allow her to do so.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, a traceless operative can react to danger before her senses would normally allow her to do so. She cannot be caught flat-footed, nor does she lose her Dexterity bonus to AC if the attacker is invisible. She still loses her Dexterity bonus to AC if immobilized. A traceless operative with this ability can still lose her Dexterity bonus to AC if an opponent successfully uses the feint action against her. If the traceless operative already possesses uncanny dodge from a different class, she automatically gains improved uncanny dodge instead.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: greater bane

- **Archetype feature:** Improved Uncanny Dodge (Ex)
- **Description:** At 12th level, a traceless operative can no longer be flanked.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 12.
  - **Rules text to implement:** At 12th level, a traceless operative can no longer be flanked. This defense denies rogues (or other classes with the sneak attack ability) the ability to sneak attack the traceless operative by flanking her, unless the attacker has at least 4 more rogue levels (or levels in a class that grants the sneak attack class ability) than the traceless operative has inquisitor levels. If the traceless operative already has improved uncanny dodge from another class, the levels from the classes that grant improved uncanny dodge stack when determining the minimum rogue level (or level in another class with the sneak attack ability) required to flank the character.
- **Implementation flags:**
  - ki subsystem.

## Parsed source feature headings

- Conceal Evidence (Ex)
- Trackless (Sp)
- Uncanny Dodge (Ex)
- Improved Uncanny Dodge (Ex)
