# Alchemist - Bramble Brewer

- **Class:** Alchemist
- **Pathfinder source class:** Alchemist
- **Archetype:** Bramble Brewer
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Alchemist%20Bramble%20Brewer
- **Index:** docs/systems/archetypes/alchemist.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Briar Bombs (Su); Dendrite Mutagen (Su); Grand Discovery (Su); Discoveries
- **Replaced / altered class features:** the 2nd-level discovery class feature

## Replacement details

### Replaces: the 2nd-level discovery class feature

- **Archetype feature:** Briar Bombs (Su)
- **Description:** At 2nd level, a bramble brewer gains the tanglefoot bomb discovery, but the entanglement’s duration persists for a number of rounds equal to the bramble brewer’s Intelligence modifier (minimum 1 round).
- **Mechanics:**
  - Type: Su.
  - Level hooks: 2.
  - Mechanics summary: At 2nd level, a bramble brewer gains the tanglefoot bomb discovery, but the entanglement’s duration persists for a number of rounds equal to the bramble brewer’s Intelligence modifier (minimum 1 round). Additionally, when a bramble brewer throws a tanglefoot bomb, it transforms all squares in its splash radius into difficult terrain that persists for as long as the bomb’s entangling effect. Although these bombs deal no damage, for every 1d6 points of damage the bramble brewer’s regular bombs deal, the briar bomb’s splash radius increases by 5 feet.
- **Implementation flags:**
  - Likely existing hooks: feat grants/restrictions, alchemist bomb hook, alchemist discovery hook.

## Parsed source feature headings

- Briar Bombs (Su)
- Dendrite Mutagen (Su)
- Grand Discovery (Su)
- Discoveries

