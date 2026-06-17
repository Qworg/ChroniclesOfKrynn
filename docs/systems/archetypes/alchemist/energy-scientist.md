# Alchemist - Energy Scientist

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Energy Scientist
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Energy%20Scientist
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Class Skills; Energy Bombs (Su); Limited Extracts (Ex); Attuned Resistance (Ex); Salvage Energy (Ex)
- **Replaced / altered class features:** poison resistance and poison immunity; poison use and swift poisoning

## Implementation details

### Alters: the alchemist’s class skills

- **Archetype feature:** Class Skills
- **Description:** An energy scientist adds Knowledge (planes) and Swim to his class skills.
- **Detailed mechanics:**
  - **Rules text to implement:** An energy scientist adds Knowledge (planes) and Swim to his class skills.
- **Implementation flags:**
  - ki subsystem.
  - skill/class-skill modification.

### Alters: bombs and replaces brew potion

- **Archetype feature:** Energy Bombs (Su)
- **Description:** Whenever an energy scientist regains his daily uses of bombs, he must attune to one element and its corresponding energy type: air (electricity), earth (acid), fire (fire), or water (cold).
- **Detailed mechanics:**
  - **Type:** Su.
  - **Rules text to implement:** Whenever an energy scientist regains his daily uses of bombs, he must attune to one element and its corresponding energy type: air (electricity), earth (acid), fire (fire), or water (cold). The energy scientist’s bombs deal the type of energy damage that corresponds to his attuned element until he regains his daily uses of bombs, at which point he must attune to one element again. If the energy scientist uses a discovery that changes his bomb’s damage type to one that is different from that of his attuned element (such as using the acid bomb discovery when the alchemist is attuned to fire), instead of its normal amount of damage, the bomb deals 1d4 points of damage, plus 1d4 for every odd-numbered alchemist level. This ability causes the explosive bomb and inferno bomb discoveries to change the bomb’s damage type to fire if the alchemist is not attuned to fire.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Alters: alchemy

- **Archetype feature:** Limited Extracts (Ex)
- **Description:** An energy scientist reduces his extracts per day by 1 for each extract level he can create, and he cannot prepare extracts with an elemental or energy descriptor that doesn’t match his attuned element.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Rules text to implement:** An energy scientist reduces his extracts per day by 1 for each extract level he can create, and he cannot prepare extracts with an elemental or energy descriptor that doesn’t match his attuned element.
- **Implementation flags:**
  - Map replaced feature keys and verify existing engine hooks before implementation..

### Replaces: poison resistance and poison immunity

- **Archetype feature:** Attuned Resistance (Ex)
- **Description:** At 2nd level, an energy scientist gains a +2 bonus on all saving throws against effects with descriptors that match his currently attuned element or its corresponding energy type, or that deal his currently attuned element’s corresponding energy damage.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 5, 8, 10.
  - **Rules text to implement:** At 2nd level, an energy scientist gains a +2 bonus on all saving throws against effects with descriptors that match his currently attuned element or its corresponding energy type, or that deal his currently attuned element’s corresponding energy damage. This bonus increases to +3 at 5th level and to +4 at 8th level. At 10th level, an energy scientist gains the effect of planar adaptation for the Elemental Plane tied to his currently attuned element.
- **Implementation flags:**
  - poison subsystem.

### Replaces: poison use and swift poisoning

- **Archetype feature:** Salvage Energy (Ex)
- **Description:** At 2nd level, an energy scientist can siphon power from slain elementals into temporary alchemical weapons.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 2, 6.
  - **Rules text to implement:** At 2nd level, an energy scientist can siphon power from slain elementals into temporary alchemical weapons. While studying the remains of an elemental that has been dead for no longer than 1 minute per alchemist level, you can attempt a Craft (alchemy) check (DC = 20 + the elemental’s CR) as a standard action. Success means the alchemist produces a number of canisters of alchemist’s fire (from fire and magma elementals), bottled lightning (from air and lightning elementals), deadground dust (from earth and mud elementals), or liquid ice (from water and ice elementals) equal to half the elemental’s CR, rounded down. These items cannot be sold and become inert after 24 hours. At 6th level, the save DCs of the items produced increase by 2.
- **Implementation flags:**
  - poison subsystem.
  - crafting subsystem.

## Parsed source feature headings

- Class Skills
- Energy Bombs (Su)
- Limited Extracts (Ex)
- Attuned Resistance (Ex)
- Salvage Energy (Ex)
