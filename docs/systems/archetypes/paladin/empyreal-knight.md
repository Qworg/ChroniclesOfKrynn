# Paladin - Empyreal Knight

- **Class:** Paladin
- **Pathfinder source class:** Paladin
- **Archetype:** Empyreal Knight
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Paladin%20Empyreal%20Knight
- **Index:** docs/systems/archetypes/paladin.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Voices of the Spheres; Celestial Heart (Su); Celestial Ally (Sp); Divine Bond (Su); Empyreal Champion
- **Replaced / altered class features:** divine grace; mercy; lay on hands and channel positive energy; holy champion

## Replacement details

### Replaces: divine grace

- **Archetype feature:** Voices of the Spheres
- **Description:** At 2nd level, an empyreal knight learns to speak and read Celestial, if she could not already.
- **Mechanics:**
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, an empyreal knight learns to speak and read Celestial, if she could not already.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: mercy

- **Archetype feature:** Celestial Heart (Su)
- **Description:** As an empyreal knight advances, her ties with the celestial realms grant her a portion of the abilities and defenses of true angels.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 3, 6, 9, 12, 15, 18.
  - Mechanics summary: As an empyreal knight advances, her ties with the celestial realms grant her a portion of the abilities and defenses of true angels. At 3rd level, she gains resistance 5 against acid, cold, and electricity. At 6th level, she gains a +4 racial bonus on saves against poison. At 9th level, her defenses improve to resistance 10 against acid, cold, and electricity. At 12th level, she gains immunity to petrification. At 15th level, she gains truespeech, the ability to speak with any creature that has a language as though using a tongues spell.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, saving throw hook, spellcasting/spell-list hook, paladin mercy hook.

### Replaces: lay on hands and channel positive energy

- **Archetype feature:** Celestial Ally (Sp)
- **Description:** At 4th level, an empyreal knight can summon a celestial ally as a full-round action.
- **Mechanics:**
  - Type: Sp.
  - Level hooks: 4, 6, 20.
  - Mechanics summary: At 4th level, an empyreal knight can summon a celestial ally as a full-round action. This functions as summon monster I , except it can only be used to summon celestial creatures, archons, and angels. At 6th level, this improves to summon monster II , increasing by one spell level for every two levels thereafter, to a maximum of summon monster IX at 20th level. This ability can be used a number of times per day equal to the empyreal knight’s Charisma modifier (minimum 1), but only one ally can be summoned at a time.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook.

### Replaces: holy champion

- **Archetype feature:** Empyreal Champion
- **Description:** At 20th level, an empyreal knight transcends her mortal self.
- **Mechanics:**
  - Level hooks: 20.
  - Mechanics summary: At 20th level, an empyreal knight transcends her mortal self. Her DR increases to 10/evil. Her type is treated as outsider for the purposes of spells and magical effects. She gains darkvision 60 feet and low-light vision. As a standard action and a supernatural ability, she can sprout wings that allow her to fly at twice her land speed with average maneuverability. Any armor or clothing reshapes to allow her to fly when she uses this ability.
- **Implementation flags:**
  - Likely existing hooks: spellcasting/spell-list hook, rage/rage-power hook.

## Parsed source feature headings

- Voices of the Spheres
- Celestial Heart (Su)
- Celestial Ally (Sp)
- Divine Bond (Su)
- Empyreal Champion

