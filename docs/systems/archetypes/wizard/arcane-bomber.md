# Wizard - Arcane Bomber

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Arcane Bomber
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Arcane%20Bomber
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bomb (Su); Spellblast Bombs (Su); School of the Bomb
- **Replaced / altered class features:** arcane bond; cantrips, but the arcana bomber gains the detect magic and read magic cantrips and places them in his spellbook; arcane school

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Bomb (Su)
- **Description:** The wizard gains a bomb attack tied to one fixed energy type chosen at 1st level.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Standard action to throw
  - Duration: Instantaneous
  - Uses: Alchemist bomb formula using Intelligence modifier + wizard level per day
  - Core function:
    - Gain an ability equivalent to the alchemist's bomb at 1st level.
    - Choose acid, cold, fire, or electricity at character creation; all bombs use that energy type.
    - Alchemist discoveries cannot modify this bomb ability.
    - If the character later gains alchemist levels, bomb damage scales from combined qualifying levels rather than granting a second bomb feature.
  - Scaling: Damage follows the alchemist bomb table using total qualifying levels.
  - Interactions: Stacks with alchemist bomb only for level-based damage progression; it does not grant discoveries or duplicate bomb access.
  - Edge cases: A wizard/alchemist has one bomb ability, not two separate bomb pools.
  - Implementation flags:
    - Likely existing hooks: alchemist bomb hook, energy-type selection at build time.

### Replaces: cantrips (retains detect magic and read magic)

- **Archetype feature:** Spellblast Bombs (Su)
- **Description:** Prepared spell slots can be burned to sharpen one bomb thrown that turn.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Swift action declared before the bomb throw; the throw itself is a standard action
  - Duration: Applies to the next bomb thrown before the end of the turn
  - Uses: Any prepared spell slot; no separate daily cap
  - Core function:
    - Sacrifice a prepared spell of any level as a swift action before throwing a bomb.
    - Add the sacrificed spell's level to the attack roll for the next bomb thrown that turn.
    - Add twice the sacrificed spell's level to that bomb's damage.
    - Detect magic and read magic remain available and are entered in the spellbook as 1st-level spells.
  - Scaling: Attack and damage bonuses rise linearly with the spell level spent.
  - Interactions: Requires the Bomb ability and uses the normal bomb-throw action economy.
  - Edge cases: If no bomb is thrown before the turn ends, the spent spell is lost with no benefit.
  - Implementation flags:
    - Likely existing hooks: swift action declaration hook, numeric attack and damage bonus, alchemist bomb throw.

### Replaces: arcane school

- **Archetype feature:** School of the Bomb
- **Description:** The bomber abandons formal specialization in exchange for an unusually heavy opposition-school burden.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build-time choice
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choose four opposition schools at 1st level, and those choices cannot be changed later.
    - Preparing a spell from an opposition school costs two spell slots of that level.
    - Take a -4 penalty on checks to craft magic items that require an opposition-school spell.
    - Gain no school powers or bonus school spell slots.
  - Scaling: None
  - Interactions: Replaces the entire arcane school package and is stricter than the normal two-school opposition rule.
  - Edge cases: The crafting penalty affects the relevant skill check, not the item's gp cost.
  - Implementation flags:
    - Likely existing hooks: opposition-school selection, doubled-slot preparation rule, crafting skill penalty.

## Parsed source feature headings

- Bomb (Su)
- Spellblast Bombs (Su)
- School of the Bomb
