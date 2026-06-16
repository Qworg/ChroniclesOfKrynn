# Wizard - First World Caller

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** First World Caller
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20First%20World%20Caller
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Fey Familiar; Fey Summoner; Warp Reality (Su)
- **Replaced / altered class features:** Arcane Bond; Arcane School; Scribe Scroll; 10th, 15th-level Bonus Feats

## Replacement details

### Alters: arcane bond

- **Archetype feature:** Fey Familiar
- **Description:** A First World caller must select a familiar as his arcane bond.
- **Mechanics:**
  - Level hooks: 10.
  - Mechanics summary: A First World caller must select a familiar as his arcane bond. This familiar is often the fey creature that was created when the First World caller’s soul passed through the First World on the way to being born. The familiar counts as both an animal and a fey for the purposes of effects that depend on its type, rather than counting as a magical beast. It gains only half the normal natural armor bonus for a familiar based on the First World caller’s level (rounded down, minimum 0), and it doesn’t grant its special familiar ability to its master. Instead, the familiar gains the fey-touched creature template (see sidebar). At 10th level, the familiar grows a pair of delicate, gossamer wings, gaining a fly speed equal to its land speed and average maneuverability.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, rage/rage-power hook, AC/natural armor bonus.

### Replaces: arcane school and Scribe Scroll

- **Archetype feature:** Fey Summoner
- **Description:** A First World caller is able to conjure fey creatures.
- **Mechanics:**
  - Mechanics summary: A First World caller is able to conjure fey creatures. He gains Augment Summoning as a bonus feat. He adds the following creatures to the summon monster list of the same level, allowing him to summon them with the appropriate summon monster spell: 1st—grimple (gremlin), mite, sprite; 2nd—atomie, fuath (gremlin), nixie; 3rd— leprechaun, nuglub (gremlin), pooka; 4th—kelpie, korred, twigjack; 5th—lampad, lurker in light, swan maiden; 6th—cold rider, oceanid, sangoi; 7th—alp,... This ability is a function of the First World caller himself, and it applies even if he uses a scroll, wand, or other magic item to cast a summon monster spell. If he creates such an item and it is used by another character, the spell functions as an ordinary summon monster spell.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, spellcasting/spell-list hook.

### Replaces: the bonus feats gained at 10th

- **Archetype feature:** Warp Reality (Su)
- **Description:** At 10th level, a First World caller can reshape the nearby area at his whim, as he pulls in aspects of the mutable and primal First World.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10, 5, 15, 7.
  - Mechanics summary: At 10th level, a First World caller can reshape the nearby area at his whim, as he pulls in aspects of the mutable and primal First World. To use this ability, he must expend a spell slot of 5th level or higher as a standard action and succeed at a DC 15 Charisma check. If he succeeds, he can apply one of the following planar traits to the area in a 60-foot radius for 2d4 minutes: normal gravity, heavy gravity, light gravity, mildly aligned (chaos, evil, good, or law), enhanced magic, or impeded magic. At 15th level, he can instead expend a slot of 7th level or higher and attempt a DC 20 Charisma check. If successfully, he can apply two planar traits from the previous list, or any one of the following traits: no gravity, subjective directional gravity, erratic time, fire-dominant, water-dominant, negative-dominant, positive-dominant, or wild magic.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook.

### Replaces: 15th level

- **Archetype feature:** Warp Reality (Su)
- **Description:** At 10th level, a First World caller can reshape the nearby area at his whim, as he pulls in aspects of the mutable and primal First World.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 10, 5, 15, 7.
  - Mechanics summary: At 10th level, a First World caller can reshape the nearby area at his whim, as he pulls in aspects of the mutable and primal First World. To use this ability, he must expend a spell slot of 5th level or higher as a standard action and succeed at a DC 15 Charisma check. If he succeeds, he can apply one of the following planar traits to the area in a 60-foot radius for 2d4 minutes: normal gravity, heavy gravity, light gravity, mildly aligned (chaos, evil, good, or law), enhanced magic, or impeded magic. At 15th level, he can instead expend a slot of 7th level or higher and attempt a DC 20 Charisma check. If successfully, he can apply two planar traits from the previous list, or any one of the following traits: no gravity, subjective directional gravity, erratic time, fire-dominant, water-dominant, negative-dominant, positive-dominant, or wild magic.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, typed/untyped numeric bonus, save DC calculation, spellcasting/spell-list hook.

## Unmapped index replacements

The index lists these replaced/altered features, but no one-to-one source clause was parsed. Treat these as manual implementation checkpoints.

- 10th, 15th-level Bonus Feats

## Parsed source feature headings

- Fey Familiar
- Fey Summoner
- Warp Reality (Su)

