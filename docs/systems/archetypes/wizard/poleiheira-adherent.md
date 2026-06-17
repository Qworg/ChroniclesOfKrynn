# Wizard - Poleiheira Adherent

- **Class:** Wizard
- **Pathfinder source class:** Wizard
- **Archetype:** Poleiheira Adherent
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Wizard%20Poleiheira%20Adherent
- **Index:** docs/systems/archetypes/wizard.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Bonded Book (Sp); Great Odyssey
- **Replaced / altered class features:** Arcane Bond; Arcane School

## Replacement details

### Replaces: arcane bond

- **Archetype feature:** Bonded Book (Sp)
- **Description:** The wizard bonds to a limitless spellbook that is easier for its owner to grow and harder for others to use.
- **Mechanics:**
  - Type: Sp
  - Level hooks: 1
  - Action/timing: Passive bond properties; normal spell preparation timing still applies
  - Duration: Permanent
  - Uses: No daily cap
  - Core function:
    - The arcane bond is a spellbook rather than a normal item or familiar.
    - The book always opens to the needed page and produces extra blank pages as required.
    - Other creatures face a Spellcraft DC that is 10 higher when copying from it or preparing from it.
    - Each time the wizard gains a wizard level, add 4 new spells to the book instead of the normal 2.
    - Inscribing new spells into the book takes half the normal time and costs half the normal amount.
  - Scaling: The doubled free-spell gain applies at every wizard level.
  - Interactions: Normal bonded-item loss and recovery rules still apply to this spellbook bond.
  - Edge cases: The elevated Spellcraft DC applies to any non-owner user, not only enemy casters.
  - Implementation flags:
    - Likely existing hooks: spellbook as bonded item, elevated Spellcraft DC for non-owner use, doubled free spell additions per level, halved inscription cost.

### Replaces: arcane school

- **Archetype feature:** Great Odyssey
- **Description:** The adherent becomes a universalist with travel-focused replacement abilities centered on magical mounts and seafaring command.
- **Mechanics:**
  - Type: Mixed (Sp for Mount, Su for Master Mariner)
  - Level hooks: 1, 8
  - Action/timing: Mount uses the summon timing of the copied spell; Master Mariner is passive while piloting a water vehicle
  - Duration: Mount lasts up to 2 hours per wizard level per day in 2-hour increments; Master Mariner is permanent
  - Uses: Mount uses a daily duration pool; Master Mariner has no daily cap
  - Core function:
    - The wizard must be a universalist and gains no school specialization benefits.
    - At 1st level, gain a Mount ability that functions like the mount spell.
    - The summoned steed can be used for up to 2 hours per wizard level each day, spent in 2-hour chunks.
    - While riding this summoned mount, the wizard may substitute Spellcraft checks for Ride checks.
    - At 8th level, when serving at the helm of a water vehicle, count as a number of crew members equal to wizard level for minimum-crew requirements.
  - Scaling: Mount duration and the crew-equivalent value both scale with wizard level.
  - Interactions: Spellcraft-for-Ride substitution works only on mounts summoned by this feature.
  - Edge cases: Master Mariner affects water vehicles only and does nothing for land or air craft.
  - Implementation flags:
    - Likely existing hooks: universalist lock, mount-like summon with duration pool, skill substitution for Ride, crew-size calculation override for water vehicles.

## Parsed source feature headings

- Bonded Book (Sp)
- Great Odyssey
