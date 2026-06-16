# Inquisitor - Exarch

- **Class:** Inquisitor
- **Pathfinder source class:** Inquisitor
- **Archetype:** Exarch
- **Source:** https://aonprd.com/ArchetypeDisplay.aspx?FixedName=Inquisitor%20Exarch
- **Index:** docs/systems/archetypes/inquisitor.md

These notes are implementation-oriented summaries of source mechanics. They avoid copying full rules prose; use the linked source for final rules verification.

## Index summary

- **New / altered feature names:** Spells; Inflexible Will (Ex); Detect Chaos (Sp); Fearsome Jurist (Su); Aura of Repetition (Su); Double Jeopardy (Su); Aura of Reversion (Su)
- **Replaced / altered class features:** monster lore; detect alignment; her second judgment; greater bane; her third judgment

## Replacement details

### Replaces: monster lore

- **Archetype feature:** Inflexible Will (Ex)
- **Description:** At 1st level, an exarch gains a +2 bonus on saving throws against confusion and insanity effects and effects with the chaotic descriptor.
- **Mechanics:**
  - Type: Ex.
  - Level hooks: 1.
  - Mechanics summary: At 1st level, an exarch gains a +2 bonus on saving throws against confusion and insanity effects and effects with the chaotic descriptor.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus.

### Replaces: detect alignment

- **Archetype feature:** Detect Chaos (Sp)
- **Description:** At will, an exarch can use detect chaos .
- **Mechanics:**
  - Type: Sp.
  - Mechanics summary: At will, an exarch can use detect chaos .
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: her second judgment

- **Archetype feature:** Aura of Repetition (Su)
- **Description:** At 8th level, once per day while using her judgment, an exarch can project an aura of repetition, as the Toil subdomain power.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 8.
  - Mechanics summary: At 8th level, once per day while using her judgment, an exarch can project an aura of repetition, as the Toil subdomain power. If the exarch takes Artifice (Toil) as her domain, the save DC of her aura increases by 2 but its duration does not increase.
- **Implementation flags:**
  - Likely existing hooks: saving throw hook, save DC calculation, cleric domain hook.

### Replaces: greater bane

- **Archetype feature:** Double Jeopardy (Su)
- **Description:** At 12th level, whenever an exarch uses her fearsome jurist ability, she may choose to affect two weapons, with one gaining the jurist weapon special ability and the other the menacing special ability as above.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 12.
  - Mechanics summary: At 12th level, whenever an exarch uses her fearsome jurist ability, she may choose to affect two weapons, with one gaining the jurist weapon special ability and the other the menacing special ability as above. Both special abilities may be combined in a single weapon, whose critical threat range doubles.
- **Implementation flags:**
  - No obvious unsupported subsystem detected from the parsed mechanics; still map feature keys and verify behavior against current class systems.

### Replaces: her third judgment

- **Archetype feature:** Aura of Reversion (Su)
- **Description:** At 16th level, while using her judgment, an exarch can project a 30-foot-radius emanation for a number of rounds per day equal to her inquisitor level.
- **Mechanics:**
  - Type: Su.
  - Level hooks: 16.
  - Mechanics summary: At 16th level, while using her judgment, an exarch can project a 30-foot-radius emanation for a number of rounds per day equal to her inquisitor level. Any creature other than the exarch that is using a transmutation effect within this aura at the beginning of its turn becomes sickened, or sickened and nauseated if using a polymorph effect, including the change shape ability (Fortitude negates; DC 10 + 1/2 the exarch’s level + her Wisdom modifier). Within the aura, dispel checks against transmutation effects gain a +4 bonus. This ability cannot be used simultaneously with aura of repetition.
- **Implementation flags:**
  - Likely existing hooks: typed/untyped numeric bonus, save DC calculation.

## Parsed source feature headings

- Spells
- Inflexible Will (Ex)
- Detect Chaos (Sp)
- Fearsome Jurist (Su)
- Aura of Repetition (Su)
- Double Jeopardy (Su)
- Aura of Reversion (Su)

