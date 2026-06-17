# Wizard - Cruoromancer

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Cruoromancer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Cruoromancer
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Blood Infusion (Su); Blood Command (Su); Blood Desecration (Su); Blood Ability (Su); Perfect Infusion (Su)
- **Replaced / altered class features:** arcane bond; the 5th-level wizard bonus feat; the 10th-level wizard bonus feat; the 15th-level wizard bonus feat; the 20th-level wizard bonus spell

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Blood Infusion (Su)
- **Description:** Necromancy spells can be empowered with self-wounding blood magic, but only one infusion applies to each spell.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Swift action declared while casting a necromancy spell
  - Duration: Applies to the spell being cast
  - Uses: No fixed daily cap; each use deals self-damage equal to 1d4 + spell level
  - Core function:
    - When casting a necromancy spell, spend a swift action to apply a blood infusion.
    - Each use deals self-damage equal to 1d4 plus the level of the infused spell.
    - Only one infusion type can be applied to any one spell.
    - At 1st level, choose from two starting infusion options granted by the archetype.
  - Scaling: Additional infusion options are added at 5th, 10th, and 15th level.
  - Interactions: Requires a necromancy spell and does not stack multiple infusion types on one cast.
  - Edge cases: Perfect Infusion later removes the self-damage entirely; before that, the damage is part of the activation cost.
  - Implementation flags:
    - Likely existing hooks: swift-action modifier tag on necromancy spell cast, self-damage trigger, infusion-type selection at 1st level.

### Replaces: the 5th-level wizard bonus feat

- **Archetype feature:** Blood Command (Su)
- **Description:** The cruoromancer controls more undead and can overcharge animate dead through a special infusion.
- **Mechanics:**
  - Type: Su
  - Level hooks: 5
  - Action/timing: Passive cap increase; swift action when applying the commanding infusion
  - Duration: Permanent for the control-cap increase; per cast for the infusion
  - Uses: Commanding infusion uses Blood Infusion's normal self-damage cost
  - Core function:
    - Increase the animate dead control cap from 4 HD per caster level to 5 HD per caster level.
    - Gain Commanding Infusion as a Blood Infusion option for animate dead.
    - When that infusion is used, animate dead can create undead totaling 3 times caster level instead of the usual 2 times caster level.
  - Scaling: None beyond the 5th-level grant.
  - Interactions: The creation-cap boost and the always-on control-cap boost are separate mechanics.
  - Edge cases: The infused 3x caster-level creation cap replaces the standard creation cap for that casting rather than stacking with it.
  - Implementation flags:
    - Likely existing hooks: animate dead HD creation cap override, animate dead HD control cap override.

### Replaces: the 10th-level wizard bonus feat

- **Archetype feature:** Blood Desecration (Su)
- **Description:** Necromancy spells can anchor a temporary desecrate-like field on the wizard or one target.
- **Mechanics:**
  - Type: Su
  - Level hooks: 10
  - Action/timing: Swift action through Blood Infusion while casting
  - Duration: 1 minute per caster level
  - Uses: Uses Blood Infusion's normal self-damage cost
  - Core function:
    - Gain Desecrating Infusion as a Blood Infusion option.
    - When used on a necromancy spell, it creates a desecrate-like aura.
    - Center that aura either on the wizard or on one target of the spell.
    - The aura does not gain extra power from shrines, altars, or other permanent fixtures.
  - Scaling: Duration scales with caster level.
  - Interactions: Applies the normal desecrate-style undead support effects without shrine amplification.
  - Edge cases: The center point must be chosen when the spell is cast and cannot be moved later.
  - Implementation flags:
    - Likely existing hooks: desecrate aura centered on wizard or spell target, duration scaling.

### Replaces: the 15th-level wizard bonus feat

- **Archetype feature:** Blood Ability (Su)
- **Description:** A specially created undead can serve as the wizard's remote viewing point.
- **Mechanics:**
  - Type: Su
  - Level hooks: 15
  - Action/timing: Passive link established when a commanding-infusion undead is created
  - Duration: As long as the designated undead remains in existence
  - Uses: One undead creature per application
  - Core function:
    - When the wizard creates undead with a spell modified by Commanding Infusion, one created creature can become a scrying conduit.
    - The effect functions like arcane eye operating through that undead.
  - Scaling: None
  - Interactions: The undead must be created through Commanding Infusion; preexisting undead do not qualify.
  - Edge cases: Destroying the undead ends the remote-sensing link immediately.
  - Implementation flags:
    - Likely existing hooks: remote sensing through designated undead, arcane eye effect routing.

### Replaces: the 20th-level wizard bonus feat

- **Archetype feature:** Perfect Infusion (Su)
- **Description:** The archetype's blood magic stops costing hit points.
- **Mechanics:**
  - Type: Su
  - Level hooks: 20
  - Action/timing: Passive modifier on Blood Infusion
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Blood Infusion no longer deals self-damage.
    - The cost removal applies to every current and future infusion option the wizard can use.
    - All other activation requirements for Blood Infusion remain unchanged.
  - Scaling: None
  - Interactions: Applies to every infusion type the wizard can use.
  - Edge cases: The cost removal is unconditional once gained.
  - Implementation flags:
    - Likely existing hooks: remove self-damage cost from blood infusion trigger.

## Parsed source feature headings

- Blood Infusion (Su)
- Blood Command (Su)
- Blood Desecration (Su)
- Blood Ability (Su)
- Perfect Infusion (Su)
