# Wizard - Spellslinger

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Spellslinger
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Spellslinger
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Arcane Gun (Su); Gunsmith; Mage Bullets (Su); School of the Gun
- **Replaced / altered class features:** arcane bond; scribe scroll; cantrips, but the spellslinger gains the detect magic and read magic cantrips and places them in his spellbook; arcane school

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Arcane Gun (Su)
- **Description:** The wizard binds one or two firearms as spell channels and becomes proficient with them.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Passive choice at character creation; spell channeling uses the spell's normal casting action plus firearm use
  - Duration: Permanent
  - Uses: No daily cap on weapon use; channeled spells still use normal spell resources
  - Core function:
    - Gain Exotic Weapon Proficiency (firearms).
    - Designate one or two firearms as arcane guns at 1st level.
    - Those firearms can be used both for normal shots and for channeling ranged touch, cone, line, or ray spells.
    - In other creatures' hands, they behave as ordinary firearms.
    - If only one arcane gun is selected, spells delivered through it that require an attack roll gain a x3 critical multiplier.
  - Scaling: None beyond the wizard's growing spell access.
  - Interactions: Spell delivery through the gun uses firearm handling, including misfire and range considerations.
  - Edge cases: Losing or breaking the designated firearm removes access to its spell-channeling function until the weapon is recovered or repaired.
  - Implementation flags:
    - Likely existing hooks: firearm proficiency, spell-through-firearm delivery, one-versus-two arcane gun choice, x3 critical multiplier for the single-gun option.
    - Unsupported / review needed: firearm and gunslinger subsystem rules.

### Replaces: Scribe Scroll

- **Archetype feature:** Gunsmith
- **Description:** The spellslinger starts with gunsmithing training and a battered firearm.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive feat and equipment grant
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain Gunsmithing as a bonus feat.
    - Receive one battered gun just like a 1st-level gunslinger.
    - Even if two arcane guns are designated, only one physical firearm is granted at the start.
  - Scaling: None
  - Interactions: The battered gun can be restored under ordinary Gunsmithing rules.
  - Edge cases: The second designated arcane gun must be acquired separately.
  - Implementation flags:
    - Likely existing hooks: bonus Gunsmithing feat, starting equipment grant for battered gun.
    - Unsupported / review needed: firearm and gunslinger subsystem rules.

### Replaces: cantrips (retains detect magic and read magic)

- **Archetype feature:** Mage Bullets (Su)
- **Description:** Prepared spells can be converted into temporary weapon enchantments for an arcane gun's barrel.
- **Mechanics:**
  - Type: Su
  - Level hooks: 1
  - Action/timing: Swift action
  - Duration: Minutes equal to the sacrificed spell's level, or until this ability is used again on the same barrel
  - Uses: Any prepared spell; no separate daily cap
  - Core function:
    - Sacrifice a prepared spell to create an enhancement pool for one barrel of an arcane gun.
    - The pool equals the spell's level, to a maximum of +5 enhancement bonus.
    - Excess value beyond raw enhancement may be spent on special properties such as dancing, defending, distance, flaming, flaming burst, frost, ghost touch, icy burst, merciful, seeking, shock, shocking burst, spell storing, thundering, vicious, wounding, and the other options named by the archetype.
    - Repeating the same special property on one barrel has no extra effect.
    - Detect magic and read magic remain available and are entered in the spellbook as 1st-level spells.
  - Scaling: Both duration and available enhancement value scale with the level of the sacrificed spell.
  - Interactions: Each barrel can hold only one active Mage Bullets allocation at a time, and a new use overwrites the previous one for that barrel.
  - Edge cases: If the wizard has two arcane guns, each barrel tracks its own enhancement package separately.
  - Implementation flags:
    - Likely existing hooks: swift-action spell sacrifice, weapon enhancement point pool applied to firearm barrel, special-property menu.
    - Unsupported / review needed: firearm rules and per-barrel enhancement tracking.

### Replaces: arcane school

- **Archetype feature:** School of the Gun
- **Description:** The spellslinger gives up school powers in exchange for firearm-themed mechanics and four opposition schools.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build-time choice
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choose four opposition schools at 1st level.
    - Preparing an opposition-school spell costs two spell slots of the same level.
    - Take a -4 penalty on checks to craft magic items that require an opposition-school spell.
    - Gain no school powers or bonus school spell slots.
  - Scaling: None
  - Interactions: This is a heavier restriction than normal school specialization and mirrors the arcane bomber's school tradeoff.
  - Edge cases: The penalty affects the crafting check rather than the item's cost.
  - Implementation flags:
    - Likely existing hooks: opposition-school selection for four schools, doubled-slot preparation, crafting skill penalty.
    - Unsupported / review needed: firearm subsystem integration.

## Parsed source feature headings

- Arcane Gun (Su)
- Gunsmith
- Mage Bullets (Su)
- School of the Gun
