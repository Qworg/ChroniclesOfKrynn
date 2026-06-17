# Wizard - Hallowed Necromancer

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Hallowed Necromancer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Hallowed%20Necromancer
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Arcane School; Turn Undead (Su); Positive Touch (Su); Death Bane (Su); Ghostbane (Su); Guarded Life (Su)
- **Replaced / altered class features:** grave touch and Scribe Scroll; the bonus feat gained at 5th level; the bonus feat gained at 10th level; the 15th level bonus feat

## Replacement details

### Alters: arcane school and spells

- **Archetype feature:** Arcane School
- **Description:** The wizard must specialize in necromancy and takes a hard stance against undead creation.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build restriction
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard must specialize in necromancy.
    - The wizard vows never to create undead.
    - Spells and effects used to create undead are prohibited by the archetype's code.
  - Scaling: None
  - Interactions: Normal necromancy school benefits still apply except where other archetype features replace them.
  - Edge cases: The undead-creation prohibition reads like a character restriction rather than an automatic rules lock unless the engine enforces it.
  - Implementation flags:
    - Likely existing hooks: necromancy school lock, undead-creation prohibition note.

### Alters: power over undead (school ability)

- **Archetype feature:** Turn Undead (Su)
- **Description:** The necromancer's bonus feat choice is forced toward turning rather than commanding undead.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Same timing as the Turn Undead feat
  - Duration: Instantaneous
  - Uses: Per Turn Undead feat rules
  - Core function:
    - The bonus feat granted by power over undead must be Turn Undead.
    - Resolve uses, save DCs, and targets using the Turn Undead feat's normal rules.
    - The archetype no longer offers the command-oriented feat choice from the base school power.
  - Scaling: None beyond the feat's own scaling.
  - Interactions: This replaces the normal command-oriented option from the necromancy school ability.
  - Edge cases: Any shared channel-energy resource follows the feat's normal rules.
  - Implementation flags:
    - Likely existing hooks: forced selection of Turn Undead from the power-over-undead school option.

### Replaces: grave touch and Scribe Scroll

- **Archetype feature:** Positive Touch (Su)
- **Description:** Prepared necromancy spells can be traded for cure effects that damage undead, with limited enhanced delivery modes.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Standard action for the spontaneous cure; enhanced delivery options are declared as part of that cast
  - Duration: Instantaneous
  - Uses: Standard spell sacrifice for each cure; 3 + Intelligence modifier times per day for the enhanced options
  - Core function:
    - Sacrifice a prepared necromancy spell as a standard action to cast a cure spell of equal or lower level.
    - The resulting cure spell is treated as necromancy magic.
    - That cure harms undead only and does not heal living creatures.
    - If the cure normally uses an attack roll, its critical threat range becomes 19-20.
    - A limited number of times per day, choose either a close-range ray version or a no-save version that deals only half damage.
  - Scaling: Enhanced-option uses scale with Intelligence modifier.
  - Interactions: Only prepared necromancy spells can be sacrificed, and the two optional enhancements are mutually exclusive per cast.
  - Edge cases: Targeting a living creature with one of these cures produces no healing effect.
  - Implementation flags:
    - Likely existing hooks: spontaneous-casting substitution from necromancy to cure, undead-only damage flag, expanded critical threat range, daily-limited enhanced modes.

### Replaces: the 5th-level wizard bonus feat

- **Archetype feature:** Death Bane (Su)
- **Description:** Positive Touch becomes stronger against undead and can temporarily empower a weapon.
- **Mechanics:**
  - Type: Su
  - Level hooks: 5
  - Action/timing: Passive for cure maximization and save DC boost; swift action for weapon imbue
  - Duration: Permanent passive effects; weapon imbue lasts 1 round per 5 wizard levels
  - Uses: Weapon imbue costs 2 Positive Touch uses, or 1 use if the weapon is the bonded item
  - Core function:
    - All cure spells produced through Positive Touch are automatically maximized when damaging undead.
    - Spells cast against undead gain +1 to their save DCs.
    - Spend Positive Touch uses as a swift action to grant a held weapon undead-bane or ghost touch.
    - The weapon property works only against undead and only while the wizard wields the weapon.
  - Scaling: The imbue duration increases with wizard level at 1 round per 5 levels.
  - Interactions: The bonded weapon discount applies only to the imbue cost, not to other Positive Touch uses.
  - Edge cases: The temporary property ends immediately if the weapon leaves the wizard's hands.
  - Implementation flags:
    - Likely existing hooks: maximized damage against undead, conditional DC bonus, swift-action weapon property grant using Positive Touch resource.

### Replaces: the 10th-level wizard bonus feat

- **Archetype feature:** Ghostbane (Su)
- **Description:** Positive Touch uses can emulate undead-focused metamagic without changing spell level.
- **Mechanics:**
  - Type: Su
  - Level hooks: 10
  - Action/timing: Swift action declared while casting a spell
  - Duration: Applies to the spell being cast
  - Uses: Costs 3 Positive Touch uses per activation
  - Core function:
    - Spend 3 Positive Touch uses while casting a spell.
    - Treat that spell as though it were modified by Ectoplasmic Spell, Thanatopic Spell, or Threnodic Spell.
    - Choose only one of those effects for any given cast.
    - No spell-level adjustment is applied.
  - Scaling: None
  - Interactions: This is a metamagic-style overlay tied to undead interactions, not an actual prepared metamagic slot change.
  - Edge cases: The ability cannot be used if fewer than 3 Positive Touch uses remain.
  - Implementation flags:
    - Likely existing hooks: metamagic-equivalent effect applied to undead-targeting spells via resource expenditure.

### Replaces: the 15th-level wizard bonus feat

- **Archetype feature:** Guarded Life (Su)
- **Description:** Stored Positive Touch energy can either reroll a failed defensive save or blunt incoming necromantic harm.
- **Mechanics:**
  - Type: Su
  - Level hooks: 15
  - Action/timing: Immediate action triggered by a failed save or by incoming qualifying damage
  - Duration: Instantaneous
  - Uses: Save reroll costs 2 Positive Touch uses; damage mitigation costs 1 Positive Touch use plus a prepared necromancy spell of 4th level or higher
  - Core function:
    - When the wizard fails a save against a death effect, energy drain, necromantic effect, or negative energy effect, spend 2 Positive Touch uses to reroll and keep the new result.
    - When a qualifying effect would deal hit point damage, spend 1 Positive Touch use and sacrifice a prepared necromancy spell of 4th level or higher.
    - The damage prevented equals wizard level + 10 times the sacrificed spell's level.
  - Scaling: Damage reduction scales with wizard level and the level of the sacrificed spell.
  - Interactions: The save reroll and damage prevention are separate options that key off different triggers.
  - Edge cases: The reroll happens only after an actual failure, and the damage reduction must be declared before hit points are removed.
  - Implementation flags:
    - Likely existing hooks: post-failure save reroll against specific effect tags, immediate-action damage reduction funded by Positive Touch uses plus prepared spell sacrifice.

## Parsed source feature headings

- Arcane School
- Turn Undead (Su)
- Positive Touch (Su)
- Death Bane (Su)
- Ghostbane (Su)
- Guarded Life (Su)
