# Cleric - Theologian

- **Class:** Cleric
- **Pathfinder source class:** Cleric
- **Archetype:** Theologian
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Cleric%20Theologian
- **Index:** docs/systems/archetypes/cleric.md

These notes are implementation-oriented. They summarize source mechanics for coding and should be checked against the linked rules page before implementation.

## Index summary

- **New / altered feature names:** Focused Domain; Domain Secret (Ex)
- **Replaced / altered class features:** Domains

## Implementation details

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Focused Domain
- **Description:** A theologian chooses only one domain from her deity’s portfolio rather than the normal two domains.
- **Detailed mechanics:**
  - **Rules text to implement:** A theologian chooses only one domain from her deity’s portfolio rather than the normal two domains. All level-dependent effects of the granted powers from the theologian’s domain function as if she were two cleric levels higher than her actual cleric level. This does not allow her to gain domain-granted powers earlier than normal. A theologian can prepare domain spells using her non-domain slots. She cannot use her spontaneous casting ability on domain spells, even if they are prepared in non-domain slots. In all other respects, this works like and replaces the standard cleric domain ability.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

### Alters: Manual mapping required; no explicit replacement clause parsed for this source feature

- **Archetype feature:** Domain Secret (Ex)
- **Description:** At 5th level, the theologian chooses one domain spell.
- **Detailed mechanics:**
  - **Type:** Ex.
  - **Level hooks:** 5.
  - **Rules text to implement:** At 5th level, the theologian chooses one domain spell. That spell becomes permanently modified with one of the following metamagic feats: Bouncing Spell, Disruptive Spell, Ectoplasmic Spell, Enlarge Spell, Extend Spell, Focused Spell, Intensified Spell, Silent Spell, Still Spell. This metamagic feat does not increase the level of the spell. Once chosen, this modification cannot be changed. The domain specialist need not have the metamagic feat to apply it to a spell using this ability. At every 5 levels after 5th, the domain specialist may choose an additional domain spell to modify in this way. She cannot modify the same spell more than once.
- **Implementation flags:**
  - domain system.
  - feat grant/prerequisite handling.

## Parsed source feature headings

- Focused Domain
- Domain Secret (Ex)
