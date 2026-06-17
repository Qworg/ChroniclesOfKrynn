# Wizard - Thassilonian Specialist

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Thassilonian Specialist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Thassilonian%20Specialist
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Benefits; Restrictions; Thassilonian Magic; Envy (Abjuration); Gluttony (Necromancy); Greed (Transmutation); Lust (Enchantment); Pride (Illusion); Sloth (Conjuration); Wrath (Evocation)
- **Replaced / altered class features:** Lose access to two schools of magic

## Replacement details

### Alters: specialist bonus-slot rules and opposition-school restrictions

- **Archetype feature:** Benefits
- **Description:** The specialist gets two extra slots per spell level, but both slots must hold the same specialty-school spell.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive spell-preparation modifier
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Gain two extra spell slots of each spell level that can be cast.
    - Both slots must be used to prepare the same spell from the wizard's chosen school of specialization.
    - Those two slots cannot hold different specialist-school spells.
  - Scaling: Applies at every spell level the wizard can cast.
  - Interactions: This replaces the normal specialist bonus-slot pattern with a doubled but more rigid version.
  - Edge cases: If no spell of the specialized school exists at a given level, the extra slots may require table adjudication.
  - Implementation flags:
    - Likely existing hooks: specialist bonus-slot override with same-spell validation.

- **Archetype feature:** Restrictions
- **Description:** The wizard's prohibited schools are fixed by the chosen Thassilonian specialty and are harsher than ordinary opposition schools.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive build restriction and spell-list override
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard does not choose opposition schools freely; the chosen Thassilonian specialty sets them.
    - Spells from prohibited schools cannot be prepared at all and are treated as though absent from the wizard spell list.
    - Spell trigger and spell completion items from prohibited schools require Use Magic Device.
  - Scaling: None
  - Interactions: These limits are stricter than normal opposition-school casting taxes because the spells become unavailable instead of merely inefficient.
  - Edge cases: Item use still remains possible through Use Magic Device even when preparation is forbidden.
  - Implementation flags:
    - Likely existing hooks: fixed prohibited-school mapping, spell-list suppression, Use Magic Device override for barred-school items.

- **Archetype feature:** Thassilonian Magic
- **Description:** The archetype organizes specialization into seven fixed school packages modeled on the old Thassilonian sins.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive classification
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The wizard chooses one of seven Thassilonian school packages.
    - Each package ties one school of specialization to two fixed prohibited schools.
    - The specialty mappings are listed below.
  - Scaling: None
  - Interactions: The mappings below supply the prohibited-school choices used by the Restrictions feature.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: specialty package selection, fixed prohibited-school table.

### Alters: prohibited-school mapping for each Thassilonian specialty

- **Archetype feature:** Envy (Abjuration)
- **Description:** The Envy specialty uses abjuration and bars two other schools.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive school package
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choosing Envy means specializing in abjuration.
    - Evocation and necromancy become prohibited schools.
  - Scaling: None
  - Interactions: The Benefits and Restrictions features apply through this mapping.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: fixed prohibited-school mapping for abjuration.

- **Archetype feature:** Gluttony (Necromancy)
- **Description:** The Gluttony specialty uses necromancy and locks out two support schools.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive school package
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choosing Gluttony means specializing in necromancy.
    - Abjuration and enchantment become prohibited schools.
  - Scaling: None
  - Interactions: The Benefits and Restrictions features apply through this mapping.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: fixed prohibited-school mapping for necromancy.

- **Archetype feature:** Greed (Transmutation)
- **Description:** The Greed specialty uses transmutation and bars enchantment plus illusion.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive school package
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choosing Greed means specializing in transmutation.
    - Enchantment and illusion become prohibited schools.
  - Scaling: None
  - Interactions: The Benefits and Restrictions features apply through this mapping.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: fixed prohibited-school mapping for transmutation.

- **Archetype feature:** Lust (Enchantment)
- **Description:** The Lust specialty uses enchantment and forbids necromancy with transmutation.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive school package
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choosing Lust means specializing in enchantment.
    - Necromancy and transmutation become prohibited schools.
  - Scaling: None
  - Interactions: The Benefits and Restrictions features apply through this mapping.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: fixed prohibited-school mapping for enchantment.

- **Archetype feature:** Pride (Illusion)
- **Description:** The Pride specialty uses illusion and gives up conjuration plus transmutation.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive school package
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choosing Pride means specializing in illusion.
    - Conjuration and transmutation become prohibited schools.
  - Scaling: None
  - Interactions: The Benefits and Restrictions features apply through this mapping.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: fixed prohibited-school mapping for illusion.

- **Archetype feature:** Sloth (Conjuration)
- **Description:** The Sloth specialty uses conjuration and bars evocation along with illusion.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive school package
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choosing Sloth means specializing in conjuration.
    - Evocation and illusion become prohibited schools.
  - Scaling: None
  - Interactions: The Benefits and Restrictions features apply through this mapping.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: fixed prohibited-school mapping for conjuration.

- **Archetype feature:** Wrath (Evocation)
- **Description:** The Wrath specialty uses evocation and prohibits abjuration plus conjuration.
- **Mechanics:**
  - Type: None stated
  - Level hooks: 1
  - Action/timing: Passive school package
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - Choosing Wrath means specializing in evocation.
    - Abjuration and conjuration become prohibited schools.
  - Scaling: None
  - Interactions: The Benefits and Restrictions features apply through this mapping.
  - Edge cases: None.
  - Implementation flags:
    - Likely existing hooks: fixed prohibited-school mapping for evocation.

## Parsed source feature headings

- Benefits
- Restrictions
- Thassilonian Magic
- Envy (Abjuration)
- Gluttony (Necromancy)
- Greed (Transmutation)
- Lust (Enchantment)
- Pride (Illusion)
- Sloth (Conjuration)
- Wrath (Evocation)
